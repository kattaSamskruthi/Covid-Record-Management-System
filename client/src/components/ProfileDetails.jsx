import React from 'react'

const ProfileDetails = () => {
  return (
    <div className="px-5 py-0">
        <div className="text-3xl font-bold pb-3">Details</div>
        <div className="flex justify-between font-bold pb-2">
            <span className="text-slate-400">Name </span>
            <span>PQR Creche</span>
        </div>
        <div className="flex justify-between font-bold pb-2">
            <span  className="text-slate-400">Phone </span>
            <span>9968425687</span>
        </div>
        <div className="flex justify-between font-bold pb-2">
            <span  className="text-slate-400">License</span>
            <span>lisence.pdf</span>
        </div>
        <div className="flex justify-between font-bold pb-2">
            <span  className="text-slate-400">Location</span>
            <span>Gwalior</span>
        </div>
        <div className="flex justify-between font-bold pb-2">
            <span  className="text-slate-400">Rating </span>
            <span>4.5</span>
        </div>
        <div className="flex justify-between font-bold pb-2">
            <span  className="text-slate-400">Social Media   </span>
            <span>@pqr_creche</span>
        </div>
    </div>
  )
}

export default ProfileDetails