// =====================================================================================
// 
//       Filename:  clawsRun.h
// 
//    Description:  
// 
//        Version:  1.0
//        Created:  01.09.2017 08:10:47
//       Revision:  none
//       Compiler:  g++
// 
//         Author:  Hendrik Windel (hw), hwindel@mpp.mpg.de
//        Company:  Max Planck Institute for Physics
//        License:  GPLv3 - 2017, Hendrik Windel 
// 
// =====================================================================================

#ifndef CLAWSRUN_H
#define CLAWSRUN_H


#include <vector>

#include "utility.h"
#include "pico.h"
#include "n6700.h"
#include "database.h"




class ClawsRun
{
    private:

        std::vector< Pico* >*           m_picos;
        N6700*                          m_psu;
        Database*                       m_database;


        ///////////////////////////////////////////////////////////////////////
        

    public:



        ///////////////////////////////////////////////////////////////////////
        
        ClawsRun();
        virtual ~ClawsRun();
    

        ///////////////////////////////////////////////////////////////////////


        //! Returns the Database().
        Database*       getDatabase();

        //! Initializes picos, psu and epics.
        void            initialize();
};










#endif // CLAWSRUN_H