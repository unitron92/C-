import sys
from PyQt5.QtWidgets import QApplication, QMainWindow, QWidget, QVBoxLayout, QHBoxLayout, QLabel, QLineEdit, QPushButton, QTextBrowser, QMessageBox, QTableWidget, QTableWidgetItem

# Initialize an empty dictionary to store car registrations
car_registry = {}

class CarRegistrationApp(QMainWindow):
    def __init__(self):
        super().__init__()
        self.setWindowTitle("Car Registration System")

        self.central_widget = QWidget()
        self.setCentralWidget(self.central_widget)

        self.layout = QVBoxLayout()
        self.central_widget.setLayout(self.layout)

        self.init_ui()

    def init_ui(self):
        # Registration Section
        registration_layout = QVBoxLayout()
        self.layout.addLayout(registration_layout)

        registration_label = QLabel("Car Registration:")
        registration_layout.addWidget(registration_label)

        self.car_number_label = QLabel("Car Number:")
        registration_layout.addWidget(self.car_number_label)
        self.car_number_entry = QLineEdit()
        registration_layout.addWidget(self.car_number_entry)

        self.owner_name_label = QLabel("Owner's Name:")
        registration_layout.addWidget(self.owner_name_label)
        self.owner_name_entry = QLineEdit()
        registration_layout.addWidget(self.owner_name_entry)

        self.car_make_label = QLabel("Car Make:")
        registration_layout.addWidget(self.car_make_label)
        self.car_make_entry = QLineEdit()
        registration_layout.addWidget(self.car_make_entry)

        self.car_model_label = QLabel("Car Model:")
        registration_layout.addWidget(self.car_model_label)
        self.car_model_entry = QLineEdit()
        registration_layout.addWidget(self.car_model_entry)

        self.register_button = QPushButton("Register Car")
        self.register_button.clicked.connect(self.register_car)
        registration_layout.addWidget(self.register_button)

        # Search Section
        search_layout = QVBoxLayout()
        self.layout.addLayout(search_layout)

        search_label = QLabel("Car Search:")
        search_layout.addWidget(search_label)

        self.search_label = QLabel("Enter Car Number to Search:")
        search_layout.addWidget(self.search_label)

        self.search_entry = QLineEdit()
        search_layout.addWidget(self.search_entry)

        self.search_button = QPushButton("Search Car")
        self.search_button.clicked.connect(self.search_car)
        search_layout.addWidget(self.search_button)

        # Display Section
        display_layout = QVBoxLayout()
        self.layout.addLayout(display_layout)

        display_label = QLabel("Search Result:")
        display_layout.addWidget(display_label)

        self.result_text = QTextBrowser()
        display_layout.addWidget(self.result_text)

    def register_car(self):
        car_number = self.car_number_entry.text()
        owner_name = self.owner_name_entry.text()
        car_make = self.car_make_entry.text()
        car_model = self.car_model_entry.text()

        car_details = {
            "Owner": owner_name,
            "Make": car_make,
            "Model": car_model
        }

        car_registry[car_number] = car_details
        QMessageBox.information(self, "Success", f"Car with number {car_number} registered successfully.")

    def search_car(self):
        car_number = self.search_entry.text()

        if car_number in car_registry:
            car_details = car_registry[car_number]
            self.result_text.clear()
            self.result_text.append(f"Car Number: {car_number}")
            for key, value in car_details.items():
                self.result_text.append(f"{key}: {value}")
        else:
            QMessageBox.information(self, "Car Not Found", f"Car with number {car_number} not found in the registry.")


def main():
    app = QApplication(sys.argv)
    window = CarRegistrationApp()
    window.show()
    sys.exit(app.exec_())

if __name__ == '__main__':
    main()
