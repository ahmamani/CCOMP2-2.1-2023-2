#include <string>

class Invoice {
    
        Invoice(std::string pn, std::string des, int qt, int pr) :
                partNumber{pn}, description{des}, quantity{qt}, price{pr},
                vax{0.2}, discount{0}{
        }

        void setPartNumber(std::string pn) {
            partNumber = pn;
        }
        void setDescription(std::string des) {
            description = des;
        }
        void setQuantity(int qt) {
            if (qt > 0) {
                quantity = qt;
            }            
        }
        void setPrice(int pr) {
            if (pr > 0) {
                price = pr;
            }            
        }
        void setVax(double vx) {
            if (vx > 0) {
                vax = vx;
            }            
        }
        void setDiscount(double dc) {
            if (dc > 0) {
                discount = dc;
            }            
        }
        std::string getPartNumber() const {
            return partNumber;
        }
        std::string getDescription() const {
            return description;
        }
        int getQuantity() const {
            return quantity;
        }
        int getPrice() const {
            return price;
        }
        double getVax() const {
            return vax;
        }
        double getDiscount() const {
            return discount;
        }

        double getInvoiceAmount() const {
            return (quantity * price );
        }

    private:
        std::string partNumber;
        std::string description;
        int quantity;
        int price;
        double vax;
        double discount;
};