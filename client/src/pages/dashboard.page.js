import React from "react";
import DashboardDetails from "../components/dashboard-details.component";
import ContactRequest from "../components/contact-req.component";
import RegisteredData from "../components/registered.component";

function Dashboard() {
    return (
        <div className="flex justify-between">
            <DashboardDetails />
            <div className="flex-col">
                <ContactRequest />
                <RegisteredData />
            </div>
        </div>
    )
}

export default Dashboard;