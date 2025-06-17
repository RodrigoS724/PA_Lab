cmake_minimum_required(VERSION 3.31)
project(reserva_de_turnos)

set(CMAKE_CXX_STANDARD 26)

add_executable(reserva_de_turnos main.cpp
        Model/Config/config.cpp
        Model/Config/configController.h
        Model/User/Client/client.cpp
        Model/User/Client/client.h
        Model/User/Admin/admin.cpp
        Model/User/Admin/admin.h
        Model/User/user.cpp
        Model/User/user.h
        Model/TimeTable/timeTable.cpp
        Model/TimeTable/timeTable.h
        Model/Service/service.cpp
        Model/Service/service.h
        Model/Qualification/qualification.cpp
        Model/Qualification/qualification.h
        Model/Others/Stats/stats.cpp
        Model/Others/Stats/stats.h
        Model/Others/Notifications/notifications.cpp
        Model/Others/Notifications/notifications.h
        Model/Others/EnumBooking/enumBooking.cpp
        Model/Others/EnumBooking/enumBooking.h
        Model/Others/DtDate/dtDate.cpp
        Model/Others/DtDate/dtDate.h
        Model/Organization/organization.cpp
        Model/Organization/organization.h
        Model/User/Employee/employee.cpp
        Model/User/Employee/employee.h
        Model/Category/category.cpp
        Model/Category/category.h
        Model/Branch/branch.cpp
        Model/Branch/branch.h
        Model/Booking/booking.cpp
        Model/Booking/booking.h
        Factory/factory.cpp
        Factory/factory.h
        Model/Horario/Horario.cpp
        Model/Horario/Horario.h
        Model/Sucursal/Sucursal.cpp
        Model/Sucursal/Sucursal.h
        Model/Servicio/Servicio.cpp
        Model/Servicio/Servicio.h
        Model/Categoria/Categoria.cpp
        Model/Categoria/Categoria.h
)
