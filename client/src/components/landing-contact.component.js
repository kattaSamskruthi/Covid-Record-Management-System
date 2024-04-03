import React from "react";

function LandingContact() {
    return (
        <div className="flex gap-x-44 items-center p-12">
            <div className="p-5 mr-5">
                <img className="max-w-xl h-auto" height="15" src="https://i.postimg.cc/QxbqrPrT/Untitled-design-1.png" />
            </div>
            <div className="flex-col ml-5">
                <div className="text-3xl p-3 mb-5 text-center text-pink-primary font-bold underline">
                    Let's Talk!
                </div>
                <div className="text-xl p-3 mb-5 text-center">
                Feel free to contact us at any moment! We are available for you and your children around-the-clock to deliver the best daycare services possible.
                </div>
                <div className="px-6 flex justify-center items-center">
                    <button className="bg-pink-primary hover:bg-pink-300 text-white font-bold rounded-full text-xl px-10 py-4 mt-5">Contact Us</button>
                </div>
            </div>
        </div>
    )
}

export default LandingContact;