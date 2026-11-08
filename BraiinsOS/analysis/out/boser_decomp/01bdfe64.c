// FUN_01bdfe64 @ 01bdfe64 size=638 calls_out=8 calls_in=1
// strings: libunwind: unwind_phase2_forced(ex_ojb=%p): start_ip=0x%x; func=%s; lsda=0x%x; personality=0x%x  | .anonymous. | .anonymous. | .anonymous. | libunwind: unwind_phase2_forced(ex_ojb=%p): stop function returned %d  | .anonymous.

undefined4
FUN_01bdfe64(undefined4 param_1,undefined4 param_2,int param_3,code *param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  char *local_264;
  char *local_260;
  int local_258;
  int local_254;
  uint local_250;
  undefined4 local_24c;
  code *local_248;
  undefined4 local_240;
  undefined4 local_234;
  char acStack_22c [512];
  int local_2c;
  
  local_2c = DAT_01d53560;
  FUN_01be2a08(param_2,param_1,&PTR_01d3b2b0,0);
  iVar1 = FUN_01be2774();
  if (iVar1 != 0) {
    FUN_01beb3de(&DAT_01d50fd8,"libunwind: unwind_phase2_force(ex_ojb=%p)\n",param_3);
    FUN_01beb1cc(&DAT_01d50fd8);
  }
  local_264 = ".anonymous.";
  local_260 = ".anonymous.";
LAB_01bdfeb4:
  do {
    do {
      iVar1 = FUN_01be23a0(param_2,&local_254);
      if (iVar1 != 0) {
        iVar1 = FUN_01be2774();
        if (iVar1 != 0) {
          pcVar3 = 
          "libunwind: unwind_phase2_forced(ex_ojb=%p): __unw_get_proc_info failed => _URC_END_OF_STACK\n"
          ;
LAB_01be00b6:
          FUN_01beb3de(&DAT_01d50fd8,pcVar3,param_3);
          FUN_01beb1cc(&DAT_01d50fd8);
        }
LAB_01bdff20:
        if (DAT_01d53560 != local_2c) {
                    /* WARNING: Subroutine does not return */
          FUN_01be31f4();
        }
        return 2;
      }
      iVar1 = FUN_01be2774();
      if (iVar1 != 0) {
        iVar1 = FUN_01be2544(param_2,acStack_22c,0x200,&local_258);
        if (iVar1 == 0) {
          pcVar3 = acStack_22c;
          if (local_250 < (uint)(local_254 + local_258)) {
            pcVar3 = local_260;
          }
        }
        else {
          pcVar3 = local_264;
        }
        iVar1 = FUN_01be2774();
        if (iVar1 != 0) {
          FUN_01beb3de(&DAT_01d50fd8,
                       "libunwind: unwind_phase2_forced(ex_ojb=%p): start_ip=0x%x, func=%s, lsda=0x%x, personality=0x%x\n"
                       ,param_3,local_254,pcVar3,local_24c,local_248);
          FUN_01beb1cc(&DAT_01d50fd8);
        }
      }
      iVar1 = (*param_4)(1,10,param_3,param_3,param_2,param_5);
      iVar2 = FUN_01be2774();
      if (iVar2 != 0) {
        FUN_01beb3de(&DAT_01d50fd8,
                     "libunwind: unwind_phase2_forced(ex_ojb=%p): stop function returned %d\n",
                     param_3,iVar1);
        FUN_01beb1cc(&DAT_01d50fd8);
      }
      if (iVar1 != 0) {
        iVar1 = FUN_01be2774();
        if (iVar1 == 0) goto LAB_01bdff20;
        pcVar3 = "libunwind: unwind_phase2_forced(ex_ojb=%p): stopped by stop function\n";
        goto LAB_01be00b6;
      }
    } while (local_248 == (code *)0x0);
    *(int *)(param_3 + 0x48) = local_254;
    *(undefined4 *)(param_3 + 0x4c) = local_234;
    *(undefined4 *)(param_3 + 0x50) = local_240;
    iVar1 = (*local_248)(9,param_3,param_2);
    if (iVar1 != 7) {
      if (iVar1 != 8) {
        if (iVar1 == 5) {
          iVar1 = FUN_01be2774();
          if (iVar1 != 0) {
            FUN_01beb3de(&DAT_01d50fd8,
                         "libunwind: unwind_phase2_forced(ex_ojb=%p): personality returned _URC_END_OF_STACK\n"
                         ,param_3);
            FUN_01beb1cc(&DAT_01d50fd8);
          }
          iVar1 = FUN_01be2774();
          if (iVar1 != 0) {
            FUN_01beb3de(&DAT_01d50fd8,
                         "libunwind: unwind_phase2_forced(ex_ojb=%p): calling stop function with _UA_END_OF_STACK\n"
                         ,param_3);
            FUN_01beb1cc(&DAT_01d50fd8);
          }
          (*param_4)(1,0x1a,param_3,param_3,param_2,param_5);
        }
        else {
          iVar2 = FUN_01be2774();
          if (iVar2 != 0) {
            FUN_01beb3de(&DAT_01d50fd8,
                         "libunwind: unwind_phase2_forced(ex_ojb=%p): personality returned %d, _URC_FATAL_PHASE2_ERROR\n"
                         ,param_3,iVar1);
            FUN_01beb1cc(&DAT_01d50fd8);
          }
        }
        goto LAB_01bdff20;
      }
      iVar1 = FUN_01be2774();
      if (iVar1 != 0) {
        FUN_01beb3de(&DAT_01d50fd8,
                     "libunwind: unwind_phase2_forced(ex_ojb=%p): personality returned _URC_CONTINUE_UNWIND\n"
                     ,param_3);
        FUN_01beb1cc(&DAT_01d50fd8);
      }
      goto LAB_01bdfeb4;
    }
    iVar1 = FUN_01be2774();
    if (iVar1 != 0) {
      FUN_01beb3de(&DAT_01d50fd8,
                   "libunwind: unwind_phase2_forced(ex_ojb=%p): personality returned _URC_INSTALL_CONTEXT\n"
                   ,param_3);
      FUN_01beb1cc(&DAT_01d50fd8);
    }
    FUN_01be2474(param_2);
  } while( true );
}

