// FUN_01952908 @ 01952908 size=644 calls_out=14 calls_in=0
// strings: waker missing | internal error: entered unreachable code: unexpected stage | assertion failed: prev.ref_count() >= 1

void FUN_01952908(uint *param_1)

{
  bool bVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined *puStack_ab8;
  uint *puStack_ab4;
  undefined1 *local_ab0;
  undefined1 *local_aac;
  undefined4 local_aa8;
  undefined4 local_aa0 [336];
  int local_560;
  uint *local_55c;
  undefined4 *local_558;
  undefined4 local_554;
  undefined8 local_550;
  
  uVar2 = FUN_019d8a74();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(uVar2) {
  case 0:
    puStack_ab8 = &DAT_01d29304;
    local_aa8 = 0;
    puStack_ab4 = param_1;
    if (param_1[10] != 0) {
      local_ab0 = (undefined1 *)&puStack_ab8;
      local_aac = (undefined1 *)&puStack_ab8;
                    /* WARNING: Subroutine does not return */
      FUN_012fb100("internal error: entered unreachable code: unexpected stage",0x75,&DAT_01d2e13c);
    }
    local_ab0 = (undefined1 *)&puStack_ab8;
    local_aac = (undefined1 *)&puStack_ab8;
    uVar6 = FUN_019ec558(param_1[8],param_1[9]);
    iVar4 = FUN_0194175c(param_1 + 0xc,&local_ab0);
    FUN_019ec558((int)uVar6,(int)((ulonglong)uVar6 >> 0x20));
    if (iVar4 == 0) {
      local_aa0[0] = 2;
      local_550 = FUN_019402ec(param_1 + 6,local_aa0);
      local_554 = 0;
      local_558 = (undefined4 *)0x0;
      local_560 = 1;
      FUN_019402ec(param_1 + 6,&local_560);
      goto LAB_0193e630;
    }
    uVar2 = FUN_019d8938(param_1);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(uVar2) {
    case 0:
      goto switchD_01952928_caseD_2;
    case 1:
      local_560 = param_1[6] + 8;
      local_aa0[0] = CONCAT31(local_aa0[0]._1_3_,1);
      local_558 = local_aa0;
      local_55c = param_1;
      FUN_019ee860(&local_560);
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
switchD_01952928_caseD_3:
      FUN_0193d994(param_1);
      return;
    case 3:
    }
    break;
  case 1:
    break;
  case 2:
switchD_01952928_caseD_2:
    return;
  case 3:
    goto switchD_01952928_caseD_3;
  }
  FUN_0193c0d0(param_1 + 6);
LAB_0193e630:
  uVar3 = FUN_019d8b4c();
  if ((uVar3 & 8) == 0) {
    local_550._0_4_ = 2;
    FUN_019402ec(param_1 + 6,&local_550);
  }
  else if ((uVar3 & 0x10) != 0) {
    if (param_1[0x15c] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb100("waker missing",0x1b,&DAT_01d29c20);
    }
    (**(code **)(param_1[0x15c] + 8))(param_1[0x15d]);
    uVar3 = FUN_019d8c50(param_1);
    if ((uVar3 & 8) == 0) {
      if (param_1[0x15c] != 0) {
        (**(code **)(param_1[0x15c] + 0xc))(param_1[0x15d]);
      }
      param_1[0x15c] = 0;
    }
  }
  iVar4 = FUN_019dc584(param_1[6],param_1);
  uVar5 = 2;
  if (iVar4 == 0) {
    uVar5 = 1;
  }
  iVar4 = FUN_019d8bc0(param_1,uVar5);
  if (iVar4 != 0) {
    FUN_0193d994(param_1);
  }
  return;
}

