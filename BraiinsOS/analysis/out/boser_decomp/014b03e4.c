// FUN_014b03e4 @ 014b03e4 size=608 calls_out=14 calls_in=0
// strings: waker missing | internal error: entered unreachable code: unexpected stage | assertion failed: prev.ref_count() >= 1

void FUN_014b03e4(uint *param_1)

{
  bool bVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined *puStack_6a8;
  uint *puStack_6a4;
  undefined1 *local_6a0;
  undefined1 *local_69c;
  undefined4 local_698;
  undefined4 local_690 [206];
  undefined4 local_358 [2];
  undefined4 local_350;
  undefined4 local_34c;
  undefined8 local_348;
  
  uVar2 = FUN_019d8a74();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(uVar2) {
  case 0:
    puStack_6a8 = &DAT_01d29304;
    local_698 = 0;
    puStack_6a4 = param_1;
    if (param_1[10] != 0) {
      local_6a0 = (undefined1 *)&puStack_6a8;
      local_69c = (undefined1 *)&puStack_6a8;
                    /* WARNING: Subroutine does not return */
      FUN_012fb100("internal error: entered unreachable code: unexpected stage",0x75,&DAT_01d2e13c);
    }
    local_6a0 = (undefined1 *)&puStack_6a8;
    local_69c = (undefined1 *)&puStack_6a8;
    uVar6 = FUN_019ec558(param_1[8],param_1[9]);
    iVar4 = FUN_014adcb4(param_1 + 0xc,&local_6a0);
    FUN_019ec558((int)uVar6,(int)((ulonglong)uVar6 >> 0x20));
    if (iVar4 == 0) {
      local_690[0] = 2;
      local_348 = FUN_014adc30(param_1 + 6,local_690);
      local_34c = 0;
      local_350 = 0;
      local_358[0] = 1;
      FUN_014adc30(param_1 + 6,local_358);
      goto LAB_014a8cb8;
    }
    uVar2 = FUN_019d8938(param_1);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(uVar2) {
    case 0:
      goto switchD_014b0404_caseD_2;
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
switchD_014b0404_caseD_3:
      FUN_014a8898(param_1);
      return;
    case 3:
    }
    break;
  case 1:
    break;
  case 2:
switchD_014b0404_caseD_2:
    return;
  case 3:
    goto switchD_014b0404_caseD_3;
  }
  FUN_014a8358(param_1 + 6);
LAB_014a8cb8:
  uVar3 = FUN_019d8b4c();
  if ((uVar3 & 8) == 0) {
    local_348._0_4_ = 2;
    FUN_014adc30(param_1 + 6,&local_348);
  }
  else if ((uVar3 & 0x10) != 0) {
    if (param_1[0xda] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb100("waker missing",0x1b,&DAT_01d29c20);
    }
    (**(code **)(param_1[0xda] + 8))(param_1[0xdb]);
    uVar3 = FUN_019d8c50(param_1);
    if ((uVar3 & 8) == 0) {
      if (param_1[0xda] != 0) {
        (**(code **)(param_1[0xda] + 0xc))(param_1[0xdb]);
      }
      param_1[0xda] = 0;
    }
  }
  iVar4 = FUN_019dc744(param_1[6],param_1);
  uVar5 = 2;
  if (iVar4 == 0) {
    uVar5 = 1;
  }
  iVar4 = FUN_019d8bc0(param_1,uVar5);
  if (iVar4 != 0) {
    FUN_014a8898(param_1);
  }
  return;
}

