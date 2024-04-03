import React from "react";

function LandingFooter() {
    return (
        <div className="flex gap-96 items-center justify-center border-t-4 border-pink-secondary">
            <div className="flex-col">
                <div className="text-2xl p-3 m-5 text-center text-pink-primary font-bold">
                    TINY TOTS
                </div>
                <div className="p-1 m-5 text-center text-slate-500">
                    Gangotri, ABV-IIITM, Morena Link Road,<br />
                    Gwalior, MP-474015
                </div>
            </div>
            <div className="flex-col">
                <div className=" p-1 m-5 text-center text-slate-500">
                    Email: t1nytots@gmail.com<br /><br />
                    Phone no: 9876543210

                </div>
            </div>
        </div>
    )
}

export default LandingFooter;