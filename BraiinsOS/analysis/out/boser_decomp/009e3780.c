// FUN_009e3780 @ 009e3780 size=528 calls_out=14 calls_in=0
// strings: internal error: entered unreachable code: unexpected stage | assertion failed: prev.ref_count() >= 1 | waker missing

void FUN_009e3780(uint *param_1)

{
  bool bVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined *puStack_668;
  uint *puStack_664;
  undefined1 *local_660;
  undefined1 *local_65c;
  undefined4 local_658;
  undefined4 local_640 [392];
  
  uVar2 = FUN_019d8a74();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(uVar2) {
  case 0:
    puStack_668 = &DAT_01d29304;
    local_658 = 0;
    puStack_664 = param_1;
    if (param_1[10] != 0) {
      local_660 = (undefined1 *)&puStack_668;
      local_65c = (undefined1 *)&puStack_668;
                    /* WARNING: Subroutine does not return */
      FUN_012fb100("internal error: entered unreachable code: unexpected stage",0x75,&DAT_01d2e13c);
    }
    local_660 = (undefined1 *)&puStack_668;
    local_65c = (undefined1 *)&puStack_668;
    uVar6 = FUN_019ec558(param_1[8],param_1[9]);
    FUN_00a6bc44(param_1 + 0xc,&local_660);
    FUN_019ec558((int)uVar6,(int)((ulonglong)uVar6 >> 0x20));
    uVar2 = FUN_019d8938(param_1);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(uVar2) {
    case 1:
      FUN_019dc904(param_1[6],param_1);
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
      if ((uVar3 & 0xffffffc0) == 0x40) goto switchD_009e37a0_caseD_3;
      break;
    case 2:
      goto switchD_009e37a0_caseD_3;
    case 3:
      goto LAB_009e3894;
    }
    break;
  case 1:
LAB_009e3894:
    FUN_009e4978(param_1 + 6);
    uVar3 = FUN_019d8b4c();
    if ((uVar3 & 8) == 0) {
      local_640[0] = 2;
      FUN_00a62ea4(param_1 + 6,local_640);
    }
    else if ((uVar3 & 0x10) != 0) {
      if (param_1[0x198] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb100("waker missing",0x1b,&DAT_01d29c20);
      }
      (**(code **)(param_1[0x198] + 8))(param_1[0x199]);
      uVar3 = FUN_019d8c50(param_1);
      if ((uVar3 & 8) == 0) {
        if (param_1[0x198] != 0) {
          (**(code **)(param_1[0x198] + 0xc))(param_1[0x199]);
        }
        param_1[0x198] = 0;
      }
    }
    iVar4 = FUN_019dc744(param_1[6],param_1);
    uVar5 = 2;
    if (iVar4 == 0) {
      uVar5 = 1;
    }
    iVar4 = FUN_019d8bc0(param_1,uVar5);
    if (iVar4 != 0) {
      FUN_009def04(param_1);
    }
    return;
  case 3:
switchD_009e37a0_caseD_3:
    FUN_009def04(param_1);
    return;
  }
  return;
}

