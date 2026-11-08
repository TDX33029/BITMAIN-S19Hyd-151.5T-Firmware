// FUN_018425f8 @ 018425f8 size=636 calls_out=11 calls_in=1
// strings: libunwind: unwind_phase2(ex_ojb=%p): start_ip=0x%x; func=%s; sp=0x%x; lsda=0x%x; personality=0x%x  | .anonymous. | .anonymous. | .anonymous. | libunwind: personality function returned unknown result %d  | .anonymous.

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_018425f8(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

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
  
  local_2c = DAT_018ddaf8;
  FUN_0184545c(param_2,param_1,&PTR_018bc3f4,0);
  iVar1 = FUN_018451c8();
  if (iVar1 != 0) {
    FUN_016db0c6(&DAT_018db5c0,"libunwind: unwind_phase2(ex_ojb=%p)\n",param_3);
    FUN_016daeb4(&DAT_018db5c0);
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
        FUN_01844864(param_2,0xffffffff,*(undefined4 *)(param_3 + 0x10));
      }
      else {
        uVar4 = 2;
      }
    }
    FUN_01844758(param_2,0xfffffffe,&local_25c);
    iVar2 = FUN_01844df4(param_2,&local_254);
    if (iVar2 != 0) break;
    iVar2 = FUN_018451c8();
    if (iVar2 != 0) {
      iVar2 = FUN_01844f98(param_2,acStack_22c,0x200);
      if (iVar2 == 0) {
        pcVar3 = acStack_22c;
        if (local_250 < (uint)(local_254 + local_258)) {
          pcVar3 = local_26c;
        }
      }
      else {
        pcVar3 = local_270;
      }
      iVar2 = FUN_018451c8();
      if (iVar2 != 0) {
        FUN_016db0c6(&DAT_018db5c0,
                     "libunwind: unwind_phase2(ex_ojb=%p): start_ip=0x%x, func=%s, sp=0x%x, lsda=0x%x, personality=0x%x\n"
                     ,param_3,local_254,pcVar3,local_25c,local_24c,local_248);
        FUN_016daeb4(&DAT_018db5c0);
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
          FUN_016d2c24();
        }
        if (iVar2 == 7) {
          iVar1 = FUN_018451c8();
          if (iVar1 != 0) {
            FUN_016db0c6(&DAT_018db5c0,"libunwind: unwind_phase2(ex_ojb=%p): _URC_INSTALL_CONTEXT\n"
                         ,param_3);
            FUN_016daeb4(&DAT_018db5c0);
          }
          iVar1 = FUN_018451c8();
          if (iVar1 != 0) {
            FUN_01844758(param_2,0xffffffff,&local_258);
            FUN_01844758(param_2,0xfffffffe,&local_25c);
            iVar1 = FUN_018451c8();
            if (iVar1 != 0) {
              FUN_016db0c6(&DAT_018db5c0,
                           "libunwind: unwind_phase2(ex_ojb=%p): re-entering user code with ip=0x%x, sp=0x%x\n"
                           ,param_3,local_258,local_25c);
              FUN_016daeb4(&DAT_018db5c0);
            }
          }
          FUN_01844758(param_2,0xffffffff,&local_258);
          *(int *)(param_3 + 0x10) = local_258;
          FUN_01844ec8(param_2);
          goto LAB_018426d2;
        }
        pcVar3 = "libunwind: personality function returned unknown result %d\n";
        param_3 = iVar2;
        goto LAB_018426c0;
      }
      iVar2 = FUN_018451c8();
      if (iVar2 != 0) {
        FUN_016db0c6(&DAT_018db5c0,"libunwind: unwind_phase2(ex_ojb=%p): _URC_CONTINUE_UNWIND\n",
                     param_3);
        FUN_016daeb4(&DAT_018db5c0);
      }
      if (*(int *)(param_3 + 0x20) == local_25c) {
        FUN_016db0c6(&DAT_018db5c0,"libunwind: %s - %s\n","unwind_phase2",
                     "during phase1 personality function said it would stop here, but now in phase2 it did not stop here"
                    );
        FUN_016daeb4(&DAT_018db5c0);
                    /* WARNING: Subroutine does not return */
        FUN_016d2c24();
      }
    }
    iVar1 = iVar1 + 1;
  }
  iVar1 = FUN_018451c8();
  if (iVar1 == 0) goto LAB_018426d2;
  pcVar3 = 
  "libunwind: unwind_phase2(ex_ojb=%p): __unw_get_proc_info failed => _URC_FATAL_PHASE2_ERROR\n";
LAB_018426c0:
  FUN_016db0c6(&DAT_018db5c0,pcVar3,param_3);
  FUN_016daeb4(&DAT_018db5c0);
LAB_018426d2:
  if (DAT_018ddaf8 != local_2c) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return 2;
}

