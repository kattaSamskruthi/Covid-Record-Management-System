import React from "react";

function DashboardDetails() {
    return (
        <div className="flex-col justify-center items-center">

            <img className="p-6 h-96"
                src="https://images.indianexpress.com/2022/04/newsline-hccreche-3col.jpeg?w=389" />

            <div className="p-6">
                <div className="text-4xl py-3 font-bold">Details</div>
                <div className="flex py-1 justify-between font-bold">
                    <div className="text-slate-500">Name</div>
                    <div>PQR Creche</div>
                </div>
                <div className="flex py-1 justify-between font-bold">
                    <div className="text-slate-500">Phone</div>
                    <div>1234567890</div>
                </div>
                <div className="flex py-1 justify-between font-bold">
                    <div className="text-slate-500">License</div>
                    <div>lisenceFile.pdf</div>
                </div>
                <div className="flex py-1 justify-between font-bold">
                    <div className="text-slate-500">Location</div>
                    <div>Gwalior, Madhya Pradesh</div>
                </div>
                <div className="flex py-1 justify-between font-bold">
                    <div className="text-slate-500">Rating</div>
                    <div>4.5</div>
                </div>
                <div className="flex py-1 justify-between font-bold">
                    <div className="text-slate-500">Social Media</div>
                    <div>@pqrcreche_</div>
                </div>
            </div>

            <div className="px-6 flex justify-center items-center">
                <button className="bg-pink-primary hover:bg-pink-300 text-white font-bold py-2 px-4 rounded-full text-xl px-10 py-3">Edit</button>
            </div>
        </div>
    )
}

export default DashboardDetails;