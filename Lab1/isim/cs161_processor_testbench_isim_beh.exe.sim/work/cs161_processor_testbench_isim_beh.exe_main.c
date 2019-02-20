/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000001856888197_2162356400_init();
    work_m_00000000000271329619_1710705532_init();
    work_m_00000000002899758031_4038558454_init();
    work_m_00000000003483008524_1059438215_init();
    work_m_00000000002906453410_2779603676_init();
    work_m_00000000000815146180_1040310148_init();
    work_m_00000000000467182354_1351276808_init();
    work_m_00000000001575096175_3725379120_init();
    work_m_00000000000099810550_2888019711_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000000099810550_2888019711");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
