// FUN_009e2498 @ 009e2498 size=540 calls_out=14 calls_in=0
// strings: internal error: entered unreachable code: unexpected stage | assertion failed: prev.ref_count() >= 1 | waker missing

void FUN_009e2498(uint *param_1)

{
  bool bVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined *puStack_248;
  uint *puStack_244;
  undefined1 *local_240;
  undefined1 *local_23c;
  undefined4 local_238;
  int local_230;
  uint *local_22c;
  undefined1 **local_228;
  undefined4 local_220 [128];
  
  uVar2 = FUN_019d8a74();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(uVar2) {
  case 0:
    puStack_248 = &DAT_01d29304;
    local_238 = 0;
    puStack_244 = param_1;
    if (param_1[10] != 0) {
      local_240 = (undefined1 *)&puStack_248;
      local_23c = (undefined1 *)&puStack_248;
                    /* WARNING: Subroutine does not return */
      FUN_012fb100("internal error: entered unreachable code: unexpected stage",0x75,&DAT_01d2e13c);
    }
    local_240 = (undefined1 *)&puStack_248;
    local_23c = (undefined1 *)&puStack_248;
    uVar6 = FUN_019ec558(param_1[8],param_1[9]);
    FUN_00a6c704(param_1 + 0xc,&local_240);
    FUN_019ec558((int)uVar6,(int)((ulonglong)uVar6 >> 0x20));
    uVar2 = FUN_019d8938(param_1);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(uVar2) {
    case 1:
      local_240 = (undefined1 *)CONCAT31(local_240._1_3_,1);
      local_230 = param_1[6] + 8;
      local_22c = param_1;
      local_228 = &local_240;
      FUN_019ee860(&local_230);
      DataMemoryBarrier(0xb);
      do {
        uVar3 = *param_1;
        bVar1 = (bool)hasExclusiveAccess(param_1);
      } while (!bVar1);
      *param_1 = uVar3 - 0x40;
      DataMemoryBarrier(0xb);
      if (uVar3 < 0x40) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec("assertion failed: prev.ref_count() >= 1",0x27,&DAT_01d28de4);
      }
      if ((uVar3 & 0xffffffc0) == 0x40) goto switchD_009e24b4_caseD_3;
      break;
    case 2:
      goto switchD_009e24b4_caseD_3;
    case 3:
      goto LAB_009e25bc;
    }
    break;
  case 1:
LAB_009e25bc:
    FUN_009e14a8(param_1 + 6);
    uVar3 = FUN_019d8b4c();
    if ((uVar3 & 8) == 0) {
      local_220[0] = 2;
      FUN_00a62b08(param_1 + 6,local_220);
    }
    else if ((uVar3 & 0x10) != 0) {
      if (param_1[0x90] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb100("waker missing",0x1b,&DAT_01d29c20);
      }
      (**(code **)(param_1[0x90] + 8))(param_1[0x91]);
      uVar3 = FUN_019d8c50(param_1);
      if ((uVar3 & 8) == 0) {
        if (param_1[0x90] != 0) {
          (**(code **)(param_1[0x90] + 0xc))(param_1[0x91]);
        }
        param_1[0x90] = 0;
      }
    }
    iVar4 = FUN_019dc584(param_1[6],param_1);
    uVar5 = 2;
    if (iVar4 == 0) {
      uVar5 = 1;
    }
    iVar4 = FUN_019d8bc0(param_1,uVar5);
    if (iVar4 != 0) {
      FUN_009dfa64(param_1);
    }
    return;
  case 3:
switchD_009e24b4_caseD_3:
    FUN_009dfa64(param_1);
    return;
  }
  return;
}

