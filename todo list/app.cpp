#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;

struct Task {
    int id;
    string title;
    bool completed;
};

class TodoApp
{
private:
    vector<Task> tasks;
    const string filename = "tasks.txt";
    int nextId = 1;

    void loadTasks() {
        ifstream file(filename);
        if (!file.is_open()) return;

        tasks.clear();
        string line;
        while (getline(file, line))
        {
            stringstream ss(line);
            string idStr, completeStr, title;

            if (getline(ss, idStr, '|') && getline(ss, completeStr, '|') && getline(ss, title))
            {
                Task t;
                t.id = stoi(idStr);
                t.completed = (completeStr == "1");
                t.title = title;
                tasks.push_back(t);

                if (t.id >= nextId)
                {
                    nextId = t.id + 1;
                }
                
            }
            
        }
        file.close();
        
    }

    void saveTasks() {
        ofstream file(filename);
        for (const auto& t : tasks)
        {
            file << t.id << "|" << (t.completed ? "1" : "0") << "|" << t.title << "\n";
        }
        file.close();
    } 
public:
    TodoApp() {
        loadTasks();
    }

    void addTask(const string& title) {
        tasks.push_back({nextId++, title, false});
        saveTasks();
        cout << "\n[+] Task berhasil ditambahkan!\n";
    }

    void listTasks() {
        if (tasks.empty())
        {
            std::cout << "\n[!] Belum ada task yang tersimpan.\n";
            return;
        }

        std::cout << "\n==============================\n";
        std::cout << "       DAFTAR TODO LIST       \n";
        std::cout << "==============================\n";
        for (const auto& t : tasks) {
            std::cout << "[" << t.id << "] " 
                      << (t.completed ? "[X] " : "[ ] ") 
                      << t.title << "\n";
        }
        std::cout << "==============================\n";
    }

    // Update (Toggle Status Selesai / Belum)
    void toggleTask(int id) {
        bool found = false;
        for (auto& t : tasks) {
            if (t.id == id) {
                t.completed = !t.completed;
                found = true;
                break;
            }
        }
        if (found) {
            saveTasks();
            std::cout << "\n[+] Status task #" << id << " berhasil diperbarui!\n";
        } else {
            std::cout << "\n[-] Task dengan ID " << id << " tidak ditemukan.\n";
        }
    }

    // Delete
    void deleteTask(int id) {
        auto it = tasks.begin();
        while (it != tasks.end()) {
            if (it->id == id) {
                tasks.erase(it);
                saveTasks();
                std::cout << "\n[+] Task #" << id << " berhasil dihapus!\n";
                return;
            }
            ++it;
        }
        std::cout << "\n[-] Task dengan ID " << id << " tidak ditemukan.\n";
    }
};


int main() {
    // Set console agar mendukung karakter UTF-8 standar jika diperlukan
    TodoApp app;
    int choice;

    do {
        std::cout << "\n=== APLIKASI TODO LIST CLI ===\n";
        std::cout << "1. Lihat Daftar Task (Read)\n";
        std::cout << "2. Tambah Task Baru (Create)\n";
        std::cout << "3. Ubah Status Selesai/Belum (Update)\n";
        std::cout << "4. Hapus Task (Delete)\n";
        std::cout << "5. Keluar\n";
        std::cout << "Pilih menu (1-5): ";
        
        if (!(std::cin >> choice)) {
            std::cout << "Input tidak valid. Harap masukkan angka.\n";
            std::cin.clear();
            std::cin.ignore(10000, '\n');
            continue;
        }
        std::cin.ignore(); // Bersihkan newline di buffer

        switch (choice) {
            case 1:
                app.listTasks();
                break;
            case 2: {
                std::string title;
                std::cout << "Masukkan judul task: ";
                std::getline(std::cin, title);
                if (!title.empty()) {
                    app.addTask(title);
                } else {
                    std::cout << "Judul task tidak boleh kosong!\n";
                }
                break;
            }
            case 3: {
                int id;
                std::cout << "Masukkan ID task yang ingin diubah statusnya: ";
                std::cin >> id;
                app.toggleTask(id);
                break;
            }
            case 4: {
                int id;
                std::cout << "Masukkan ID task yang ingin dihapus: ";
                std::cin >> id;
                app.deleteTask(id);
                break;
            }
            case 5:
                std::cout << "Keluar dari aplikasi. Sampai jumpa!\n";
                break;
            default:
                std::cout << "Pilihan tidak valid. Silakan pilih 1-5.\n";
        }
    } while (choice != 5);

    return 0;
}