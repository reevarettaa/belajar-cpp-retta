#include <iostream>
#include <vector>
#include <string>

struct Task {
    int id;
    std::string title;
    bool completed;
};

class TodoApp {
private:
    // Data disimpan sementara di memori (RAM) selama program berjalan
    std::vector<Task> tasks;
    int nextId = 1;

public:
    // [C] CREATE: Menambah data baru ke dalam vector
    void addTask(const std::string& title) {
        tasks.push_back({nextId++, title, false});
        std::cout << "\n[+] Task berhasil ditambahkan!\n";
    }

    // [R] READ: Membaca dan menampilkan seluruh data yang ada
    void listTasks() const {
        if (tasks.empty()) {
            std::cout << "\n[!] Belum ada task.\n";
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

    // [U] UPDATE: Mengubah data yang sudah ada (di sini: mengubah status selesai/belum)
    void toggleTask(int id) {
        for (auto& t : tasks) {
            if (t.id == id) {
                t.completed = !t.completed;
                std::cout << "\n[+] Status task #" << id << " berhasil diperbarui!\n";
                return;
            }
        }
        std::cout << "\n[-] Task dengan ID " << id << " tidak ditemukan.\n";
    }

    // [D] DELETE: Menghapus data berdasarkan ID
    void deleteTask(int id) {
        for (auto it = tasks.begin(); it != tasks.end(); ++it) {
            if (it->id == id) {
                tasks.erase(it);
                std::cout << "\n[+] Task #" << id << " berhasil dihapus!\n";
                return;
            }
        }
        std::cout << "\n[-] Task dengan ID " << id << " tidak ditemukan.\n";
    }
};

int main() {
    TodoApp app;
    int choice;

    do {
        std::cout << "\n=== TODO LIST CLI (DASAR CRUD) ===\n";
        std::cout << "1. Read   - Lihat Daftar Task\n";
        std::cout << "2. Create - Tambah Task Baru\n";
        std::cout << "3. Update - Ubah Status Selesai/Belum\n";
        std::cout << "4. Delete - Hapus Task\n";
        std::cout << "5. Keluar\n";
        std::cout << "Pilih menu (1-5): ";

        if (!(std::cin >> choice)) {
            std::cout << "Input tidak valid. Masukkan angka 1-5.\n";
            std::cin.clear();
            std::cin.ignore(10000, '\n');
            continue;
        }
        std::cin.ignore(); // Membersihkan karakter '\n' sisa input angka

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
                std::cout << "Program selesai. Data di memori telah dibersihkan.\n";
                break;
            default:
                std::cout << "Pilihan tidak valid. Silakan pilih 1-5.\n";
        }
    } while (choice != 5);

    return 0;
}
