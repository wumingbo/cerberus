CPU_STATUS __INTERNAL_FUNC__ FuncTwo_UnImplement(PCHAOSVM_CPU pCPU);
CPU_STATUS __INTERNAL_FUNC__ FuncTwo_IncorrectOpcode007F(PCHAOSVM_CPU pCPU);//[04,24,25,26,27,36,37,0A,0C,0E,0F,19,1A,1B,1C,1D,1E,39,3B,3C,3D,3E,3F,7A,7B,A6,A7,B8,FF]
CPU_STATUS __INTERNAL_FUNC__ FuncTwo_MOV_0F20(PCHAOSVM_CPU pCPU);//[20]
CPU_STATUS __INTERNAL_FUNC__ FuncTwo_MOV_0F22(PCHAOSVM_CPU pCPU);//[22]
CPU_STATUS __INTERNAL_FUNC__ FuncTwo_MOV_0F21(PCHAOSVM_CPU pCPU);//[21]
CPU_STATUS __INTERNAL_FUNC__ FuncTwo_MOV_0F23(PCHAOSVM_CPU pCPU);//[23]
CPU_STATUS __INTERNAL_FUNC__ FuncTwo_Jcc_Long(PCHAOSVM_CPU pCPU);//[80,81,82,83,84,85,86,87,88,89,8A,8B,8C,8D,8E,8F]
CPU_STATUS __INTERNAL_FUNC__ FuncTwo_SETcc(PCHAOSVM_CPU pCPU);//[90,91,92,93,94,95,96,97,98,99,9A,9B,9C,9D,9E,9F]
CPU_STATUS __INTERNAL_FUNC__ FuncTwo_PUSH_FS_0FA0(PCHAOSVM_CPU pCPU);//[A0]
CPU_STATUS __INTERNAL_FUNC__ FuncTwo_POP_FS_0FA1(PCHAOSVM_CPU pCPU);//[A1]
CPU_STATUS __INTERNAL_FUNC__ FuncTwo_PUSH_GS_0FA8(PCHAOSVM_CPU pCPU);//[A8]
CPU_STATUS __INTERNAL_FUNC__ FuncTwo_POP_GS_0FA9(PCHAOSVM_CPU pCPU);//[A9]
CPU_STATUS __INTERNAL_FUNC__ FuncTwo_MOVZX_0FB6(PCHAOSVM_CPU pCPU);//[B6]
CPU_STATUS __INTERNAL_FUNC__ FuncTwo_MOVZX_0FB7(PCHAOSVM_CPU pCPU);//[B7]
CPU_STATUS __INTERNAL_FUNC__ FuncTwo_MOVSX_0FBE(PCHAOSVM_CPU pCPU);//[BE]
CPU_STATUS __INTERNAL_FUNC__ FuncTwo_MOVSX_0FBF(PCHAOSVM_CPU pCPU);//[BF]
CPU_STATUS __INTERNAL_FUNC__ FuncTwo_BT_0FA3(PCHAOSVM_CPU pCPU);//[A3]
CPU_STATUS __INTERNAL_FUNC__ FuncTwo_BTR_0FB3(PCHAOSVM_CPU pCPU);//[B3]
CPU_STATUS __INTERNAL_FUNC__ FuncTwo_BTS_0FAB(PCHAOSVM_CPU pCPU);//[AB]
CPU_STATUS __INTERNAL_FUNC__ FuncTwo_BTC_0FBB(PCHAOSVM_CPU pCPU);//[BB]
CPU_STATUS __INTERNAL_FUNC__ FuncTwo_IMUL_0FAF(PCHAOSVM_CPU pCPU);//[AF]
CPU_STATUS __INTERNAL_FUNC__ FuncTwo_XADD_0FC0(PCHAOSVM_CPU pCPU);//[C0]
CPU_STATUS __INTERNAL_FUNC__ FuncTwo_XADD_0FC1(PCHAOSVM_CPU pCPU);//[C1]
CPU_STATUS __INTERNAL_FUNC__ FuncTwo_CMPXCHG_0FB0(PCHAOSVM_CPU pCPU);//[B0]
CPU_STATUS __INTERNAL_FUNC__ FuncTwo_CMPXCHG_0FB1(PCHAOSVM_CPU pCPU);//[B1]
CPU_STATUS __INTERNAL_FUNC__ FuncTwo_BSWAP_0FCX(PCHAOSVM_CPU pCPU);//[C8,C9,CA,CB,CC,CD,CE,CF]
CPU_STATUS __INTERNAL_FUNC__ FuncTwo_MOV_0F30(PCHAOSVM_CPU pCPU);//[30]
CPU_STATUS __INTERNAL_FUNC__ FuncTwo_MOV_0F32(PCHAOSVM_CPU pCPU);//[32]
CPU_STATUS __INTERNAL_FUNC__ FuncTwo_MOV_0F31(PCHAOSVM_CPU pCPU);//[31]
CPU_STATUS __INTERNAL_FUNC__ FuncTwo_SYSENTER_0F34(PCHAOSVM_CPU pCPU);//[34]
CPU_STATUS __INTERNAL_FUNC__ FuncTwo_SYSEXIT_0F35(PCHAOSVM_CPU pCPU);//[35]
CPU_STATUS __INTERNAL_FUNC__ FuncTwo_CPUID_0FA2(PCHAOSVM_CPU pCPU);//[A2]