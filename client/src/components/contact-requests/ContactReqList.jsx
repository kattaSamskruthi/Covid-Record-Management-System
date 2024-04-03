import React from 'react'
import ContactReqComp from './ContactReqComp'


const ContactReqList = () => {
  return (
    <div className="bg-slate-100 p-5 m-5">
        <div className="flex justify-between">
        <div className="text-3xl font-bold">Pending Contact Requests</div>
        <div className="text-3xl font-bold">24</div>
        </div>   
        <div className="flex grid mt-2">
        <ContactReqComp/>
        <ContactReqComp/>
        <ContactReqComp/>
        <ContactReqComp/>
        <ContactReqComp/>
        <ContactReqComp/>
        <ContactReqComp/>
    </div>
    </div>
    
  )
}

export default ContactReqList