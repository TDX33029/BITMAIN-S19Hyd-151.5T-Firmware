// FUN_0068ef10 @ 0068ef10 size=608 calls_out=14 calls_in=0
// strings: waker missing | internal error: entered unreachable code: unexpected stage | assertion failed: prev.ref_count() >= 1

void FUN_0068ef10(uint *param_1)

{
  bool bVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined *puStack_598;
  uint *puStack_594;
  undefined1 *local_590;
  undefined1 *local_58c;
  undefined4 local_588;
  undefined4 local_580 [172];
  undefined4 local_2d0 [2];
  undefined4 local_2c8;
  undefined4 local_2c4;
  undefined8 local_2c0;
  
  uVar2 = FUN_019d8a74();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(uVar2) {
  case 0:
    puStack_598 = &DAT_01d29304;
    local_588 = 0;
    puStack_594 = param_1;
    if (param_1[10] != 0) {
      local_590 = (undefined1 *)&puStack_598;
      local_58c = (undefined1 *)&puStack_598;
                    /* WARNING: Subroutine does not return */
      FUN_012fb100("internal error: entered unreachable code: unexpected stage",0x75,&DAT_01d2e13c);
    }
    local_590 = (undefined1 *)&puStack_598;
    local_58c = (undefined1 *)&puStack_598;
    uVar6 = FUN_019ec558(param_1[8],param_1[9]);
    iVar4 = FUN_0066d368(param_1 + 0xc,&local_590);
    FUN_019ec558((int)uVar6,(int)((ulonglong)uVar6 >> 0x20));
    if (iVar4 == 0) {
      local_580[0] = 2;
      local_2c0 = FUN_0066a6a0(param_1 + 6,local_580);
      local_2c4 = 0;
      local_2c8 = 0;
      local_2d0[0] = 1;
      FUN_0066a6a0(param_1 + 6,local_2d0);
      goto LAB_0066972c;
    }
    uVar2 = FUN_019d8938(param_1);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(uVar2) {
    case 0:
      goto switchD_0068ef30_caseD_2;
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
      if ((uVar3 & 0xffffffc0) != 0x40) {
        return;
      }
    case 2:
switchD_0068ef30_caseD_3:
      FUN_00668fe8(param_1);
      return;
    case 3:
    }
    break;
  case 1:
    break;
  case 2:
switchD_0068ef30_caseD_2:
    return;
  case 3:
    goto switchD_0068ef30_caseD_3;
  }
  FUN_00668720(param_1 + 6);
LAB_0066972c:
  uVar3 = FUN_019d8b4c();
  if ((uVar3 & 8) == 0) {
    local_2c0._0_4_ = 2;
    FUN_0066a6a0(param_1 + 6,&local_2c0);
  }
  else if ((uVar3 & 0x10) != 0) {
    if (param_1[0xb8] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb100("waker missing",0x1b,&DAT_01d29c20);
    }
    (**(code **)(param_1[0xb8] + 8))(param_1[0xb9]);
    uVar3 = FUN_019d8c50(param_1);
    if ((uVar3 & 8) == 0) {
      if (param_1[0xb8] != 0) {
        (**(code **)(param_1[0xb8] + 0xc))(param_1[0xb9]);
      }
      param_1[0xb8] = 0;
    }
  }
  iVar4 = FUN_019dc744(param_1[6],param_1);
  uVar5 = 2;
  if (iVar4 == 0) {
    uVar5 = 1;
  }
  iVar4 = FUN_019d8bc0(param_1,uVar5);
  if (iVar4 != 0) {
    FUN_00668fe8(param_1);
  }
  return;
}

