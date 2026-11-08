// FUN_01bdfba4 @ 01bdfba4 size=636 calls_out=10 calls_in=1
// strings: libunwind: unwind_phase2(ex_ojb=%p): start_ip=0x%x; func=%s; sp=0x%x; lsda=0x%x; personality=0x%x  | .anonymous. | .anonymous. | .anonymous. | libunwind: personality function returned unknown result %d  | .anonymous.

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_01bdfba4(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  char *local_270;
  char *local_26c;
  int local_25c;
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
    FUN_01beb3de(&DAT_01d50fd8,"libunwind: unwind_phase2(ex_ojb=%p)\n",param_3);
    FUN_01beb1cc(&DAT_01d50fd8);
  }
  iVar1 = 0;
  local_270 = ".anonymous.";
  local_26c = ".anonymous.";
  while( true ) {
    uVar4 = 1;
    if (param_4 != 0) {
      if (iVar1 == 1) {
        uVar4 = 2;
        param_4 = 0;
        func_0x01be1e10(param_2,0xffffffff,*(undefined4 *)(param_3 + 0x10));
      }
      else {
        uVar4 = 2;
      }
    }
    FUN_01be1d04(param_2,0xfffffffe,&local_25c);
    iVar2 = FUN_01be23a0(param_2,&local_254);
    if (iVar2 != 0) break;
    iVar2 = FUN_01be2774();
    if (iVar2 != 0) {
      iVar2 = FUN_01be2544(param_2,acStack_22c,0x200);
      if (iVar2 == 0) {
        pcVar3 = acStack_22c;
        if (local_250 < (uint)(local_254 + local_258)) {
          pcVar3 = local_26c;
        }
      }
      else {
        pcVar3 = local_270;
      }
      iVar2 = FUN_01be2774();
      if (iVar2 != 0) {
        FUN_01beb3de(&DAT_01d50fd8,
                     "libunwind: unwind_phase2(ex_ojb=%p): start_ip=0x%x, func=%s, sp=0x%x, lsda=0x%x, personality=0x%x\n"
                     ,param_3,local_254,pcVar3,local_25c,local_24c,local_248);
        FUN_01beb1cc(&DAT_01d50fd8);
      }
    }
    if (local_248 != (code *)0x0) {
      *(int *)(param_3 + 0x48) = local_254;
      *(undefined4 *)(param_3 + 0x4c) = local_234;
      *(undefined4 *)(param_3 + 0x50) = local_240;
      iVar2 = (*local_248)(uVar4,param_3,param_2);
      if (iVar2 != 8) {
        if (iVar2 == 9) {
                    /* WARNING: Subroutine does not return */
          FUN_01be32a0();
        }
        if (iVar2 == 7) {
          iVar1 = FUN_01be2774();
          if (iVar1 != 0) {
            FUN_01beb3de(&DAT_01d50fd8,"libunwind: unwind_phase2(ex_ojb=%p): _URC_INSTALL_CONTEXT\n"
                         ,param_3);
            FUN_01beb1cc(&DAT_01d50fd8);
          }
          iVar1 = FUN_01be2774();
          if (iVar1 != 0) {
            FUN_01be1d04(param_2,0xffffffff,&local_258);
            FUN_01be1d04(param_2,0xfffffffe,&local_25c);
            iVar1 = FUN_01be2774();
            if (iVar1 != 0) {
              FUN_01beb3de(&DAT_01d50fd8,
                           "libunwind: unwind_phase2(ex_ojb=%p): re-entering user code with ip=0x%x, sp=0x%x\n"
                           ,param_3,local_258,local_25c);
              FUN_01beb1cc(&DAT_01d50fd8);
            }
          }
          FUN_01be1d04(param_2,0xffffffff,&local_258);
          *(int *)(param_3 + 0x10) = local_258;
          FUN_01be2474(param_2);
          goto LAB_01bdfc7e;
        }
        pcVar3 = "libunwind: personality function returned unknown result %d\n";
        param_3 = iVar2;
        goto LAB_01bdfc6c;
      }
      iVar2 = FUN_01be2774();
      if (iVar2 != 0) {
        FUN_01beb3de(&DAT_01d50fd8,"libunwind: unwind_phase2(ex_ojb=%p): _URC_CONTINUE_UNWIND\n",
                     param_3);
        FUN_01beb1cc(&DAT_01d50fd8);
      }
      if (*(int *)(param_3 + 0x20) == local_25c) {
        FUN_01beb3de(&DAT_01d50fd8,"libunwind: %s - %s\n","unwind_phase2",
                     "during phase1 personality function said it would stop here, but now in phase2 it did not stop here"
                    );
        FUN_01beb1cc(&DAT_01d50fd8);
                    /* WARNING: Subroutine does not return */
        FUN_01be32a0();
      }
    }
    iVar1 = iVar1 + 1;
  }
  iVar1 = FUN_01be2774();
  if (iVar1 == 0) goto LAB_01bdfc7e;
  pcVar3 = 
  "libunwind: unwind_phase2(ex_ojb=%p): __unw_get_proc_info failed => _URC_FATAL_PHASE2_ERROR\n";
LAB_01bdfc6c:
  FUN_01beb3de(&DAT_01d50fd8,pcVar3,param_3);
  FUN_01beb1cc(&DAT_01d50fd8);
LAB_01bdfc7e:
  if (DAT_01d53560 != local_2c) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return 2;
}

