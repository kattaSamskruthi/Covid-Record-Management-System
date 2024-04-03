import React from "react";

function LandingParent() {
    return (
        <div className="flex gap-x-44 items-center p-12">
            <div className="p-5 mr-5">
                <img className="max-w-xl h-auto" height="15" src="https://i.postimg.cc/zvWHGyMB/Untitled-design-1-1.png" />
            </div>
            <div className="flex-col ml-5">
                <div className="text-3xl p-3 mb-5 text-center text-pink-primary font-bold underline">
                    TINY TOTS
                </div>
                <div className="text-xl p-3 mb-5 text-center">
                    <b>Tiny Tots</b> provides the best facility and nourishing care for the little tots. If you're a parent, you have come to the right place! Register now as a parent to avail certified care for your young ones!
                </div>
                <div className="px-6 flex justify-center items-center">
                    <button className="bg-pink-primary hover:bg-pink-300 text-white font-bold rounded-full text-xl px-10 py-4 mt-5">Parent Registration</button>
                </div>
            </div>
        </div>
    )
}

export default LandingParent;