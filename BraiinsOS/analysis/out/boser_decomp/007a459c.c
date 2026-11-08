// FUN_007a459c @ 007a459c size=644 calls_out=14 calls_in=0
// strings: waker missing | internal error: entered unreachable code: unexpected stage | assertion failed: prev.ref_count() >= 1

void FUN_007a459c(uint *param_1)

{
  bool bVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined *puStack_8c8;
  uint *puStack_8c4;
  undefined1 *local_8c0;
  undefined1 *local_8bc;
  undefined4 local_8b8;
  undefined4 local_8b0 [274];
  int local_468;
  uint *local_464;
  undefined4 *local_460;
  undefined4 local_45c;
  undefined8 local_458;
  
  uVar2 = FUN_019d8a74();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(uVar2) {
  case 0:
    puStack_8c8 = &DAT_01d29304;
    local_8b8 = 0;
    puStack_8c4 = param_1;
    if (param_1[10] != 0) {
      local_8c0 = (undefined1 *)&puStack_8c8;
      local_8bc = (undefined1 *)&puStack_8c8;
                    /* WARNING: Subroutine does not return */
      FUN_012fb100("internal error: entered unreachable code: unexpected stage",0x75,&DAT_01d2e13c);
    }
    local_8c0 = (undefined1 *)&puStack_8c8;
    local_8bc = (undefined1 *)&puStack_8c8;
    uVar6 = FUN_019ec558(param_1[8],param_1[9]);
    iVar4 = FUN_0079b278(param_1 + 0xc,&local_8c0);
    FUN_019ec558((int)uVar6,(int)((ulonglong)uVar6 >> 0x20));
    if (iVar4 == 0) {
      local_8b0[0] = 2;
      local_458 = FUN_0079b1f4(param_1 + 6,local_8b0);
      local_45c = 0;
      local_460 = (undefined4 *)0x0;
      local_468 = 1;
      FUN_0079b1f4(param_1 + 6,&local_468);
      goto LAB_007a3834;
    }
    uVar2 = FUN_019d8938(param_1);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(uVar2) {
    case 0:
      goto switchD_007a45bc_caseD_2;
    case 1:
      local_8b0[0] = CONCAT31(local_8b0[0]._1_3_,1);
      local_460 = local_8b0;
      local_468 = param_1[6] + 8;
      local_464 = param_1;
      FUN_019ee860(&local_468);
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
switchD_007a45bc_caseD_3:
      FUN_007a36a4(param_1);
      return;
    case 3:
    }
    break;
  case 1:
    break;
  case 2:
switchD_007a45bc_caseD_2:
    return;
  case 3:
    goto switchD_007a45bc_caseD_3;
  }
  FUN_007a2c0c(param_1 + 6);
LAB_007a3834:
  uVar3 = FUN_019d8b4c();
  if ((uVar3 & 8) == 0) {
    local_458._0_4_ = 2;
    FUN_0079b1f4(param_1 + 6,&local_458);
  }
  else if ((uVar3 & 0x10) != 0) {
    if (param_1[0x11e] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb100("waker missing",0x1b,&DAT_01d29c20);
    }
    (**(code **)(param_1[0x11e] + 8))(param_1[0x11f]);
    uVar3 = FUN_019d8c50(param_1);
    if ((uVar3 & 8) == 0) {
      if (param_1[0x11e] != 0) {
        (**(code **)(param_1[0x11e] + 0xc))(param_1[0x11f]);
      }
      param_1[0x11e] = 0;
    }
  }
  iVar4 = FUN_019dc584(param_1[6],param_1);
  uVar5 = 2;
  if (iVar4 == 0) {
    uVar5 = 1;
  }
  iVar4 = FUN_019d8bc0(param_1,uVar5);
  if (iVar4 != 0) {
    FUN_007a36a4(param_1);
  }
  return;
}

