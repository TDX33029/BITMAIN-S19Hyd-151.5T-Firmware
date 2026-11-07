// FUN_009e30a8 @ 009e30a8 size=644 calls_out=14 calls_in=0
// strings: internal error: entered unreachable code: unexpected stage | assertion failed: prev.ref_count() >= 1 | waker missing

void FUN_009e30a8(uint *param_1)

{
  bool bVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined *puStack_c78;
  uint *puStack_c74;
  undefined1 *local_c70;
  undefined1 *local_c6c;
  undefined4 local_c68;
  undefined4 local_c60 [392];
  int local_640;
  uint *local_63c;
  undefined4 *local_638;
  undefined4 local_634;
  undefined8 local_630;
  
  uVar2 = FUN_019d8a74();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(uVar2) {
  case 0:
    puStack_c78 = &DAT_01d29304;
    local_c68 = 0;
    puStack_c74 = param_1;
    if (param_1[10] != 0) {
      local_c70 = (undefined1 *)&puStack_c78;
      local_c6c = (undefined1 *)&puStack_c78;
                    /* WARNING: Subroutine does not return */
      FUN_012fb100("internal error: entered unreachable code: unexpected stage",0x75,&DAT_01d2e13c);
    }
    local_c70 = (undefined1 *)&puStack_c78;
    local_c6c = (undefined1 *)&puStack_c78;
    uVar6 = FUN_019ec558(param_1[8],param_1[9]);
    iVar4 = FUN_00a62f28(param_1 + 0xc,&local_c70);
    FUN_019ec558((int)uVar6,(int)((ulonglong)uVar6 >> 0x20));
    if (iVar4 == 0) {
      local_c60[0] = 2;
      local_630 = FUN_00a62a84(param_1 + 6,local_c60);
      local_634 = 0;
      local_638 = (undefined4 *)0x0;
      local_640 = 1;
      FUN_00a62a84(param_1 + 6,&local_640);
      goto LAB_009e3234;
    }
    uVar2 = FUN_019d8938(param_1);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(uVar2) {
    case 0:
      goto switchD_009e30c8_caseD_2;
    case 1:
      local_640 = param_1[6] + 8;
      local_c60[0] = CONCAT31(local_c60[0]._1_3_,1);
      local_638 = local_c60;
      local_63c = param_1;
      FUN_019ee860(&local_640);
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
      if ((uVar3 & 0xffffffc0) != 0x40) {
        return;
      }
    case 2:
switchD_009e30c8_caseD_3:
      FUN_009de794(param_1);
      return;
    case 3:
    }
    break;
  case 1:
    break;
  case 2:
switchD_009e30c8_caseD_2:
    return;
  case 3:
    goto switchD_009e30c8_caseD_3;
  }
  FUN_009e33dc(param_1 + 6);
LAB_009e3234:
  uVar3 = FUN_019d8b4c();
  if ((uVar3 & 8) == 0) {
    local_630._0_4_ = 2;
    FUN_00a62a84(param_1 + 6,&local_630);
  }
  else if ((uVar3 & 0x10) != 0) {
    if (param_1[0x194] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb100("waker missing",0x1b,&DAT_01d29c20);
    }
    (**(code **)(param_1[0x194] + 8))(param_1[0x195]);
    uVar3 = FUN_019d8c50(param_1);
    if ((uVar3 & 8) == 0) {
      if (param_1[0x194] != 0) {
        (**(code **)(param_1[0x194] + 0xc))(param_1[0x195]);
      }
      param_1[0x194] = 0;
    }
  }
  iVar4 = FUN_019dc584(param_1[6],param_1);
  uVar5 = 2;
  if (iVar4 == 0) {
    uVar5 = 1;
  }
  iVar4 = FUN_019d8bc0(param_1,uVar5);
  if (iVar4 != 0) {
    FUN_009de794(param_1);
  }
  return;
}

