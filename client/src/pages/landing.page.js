import React from "react";
import LandingParent from "../components/landing-parent.component";
import LandingCreche from "../components/landing-creche.component";
import LandingContact from "../components/landing-contact.component";
import LandingSlides from "../components/landing-slides.component";
import LandingFooter from "../components/landing-footer.component";

function LandingPage() {
    return (
        <div className="flex-col">
            <LandingParent />
            <LandingCreche />
            <LandingSlides />
            <LandingContact />
            <LandingFooter />
        </div>
    )
}

export default LandingPage;