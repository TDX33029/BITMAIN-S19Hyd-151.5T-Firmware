// FUN_017c7abc @ 017c7abc size=612 calls_out=14 calls_in=0
// strings: waker missing | internal error: entered unreachable code: unexpected stage | assertion failed: prev.ref_count() >= 1

void FUN_017c7abc(uint *param_1)

{
  bool bVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined *puStack_15b8;
  uint *puStack_15b4;
  undefined1 *local_15b0;
  undefined1 *local_15ac;
  undefined4 local_15a8;
  undefined4 local_15a0 [688];
  undefined4 local_ae0 [2];
  undefined4 local_ad8;
  undefined4 local_ad4;
  undefined8 local_ad0;
  
  uVar2 = FUN_019d8a74();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(uVar2) {
  case 0:
    puStack_15b8 = &DAT_01d29304;
    local_15a8 = 0;
    puStack_15b4 = param_1;
    if (param_1[10] != 0) {
      local_15b0 = (undefined1 *)&puStack_15b8;
      local_15ac = (undefined1 *)&puStack_15b8;
                    /* WARNING: Subroutine does not return */
      FUN_012fb100("internal error: entered unreachable code: unexpected stage",0x75,&DAT_01d2e13c);
    }
    local_15b0 = (undefined1 *)&puStack_15b8;
    local_15ac = (undefined1 *)&puStack_15b8;
    uVar6 = FUN_019ec558(param_1[8],param_1[9]);
    iVar4 = FUN_017c1234(param_1 + 0xc,&local_15b0);
    FUN_019ec558((int)uVar6,(int)((ulonglong)uVar6 >> 0x20));
    if (iVar4 == 0) {
      local_15a0[0] = 2;
      local_ad0 = FUN_017c0920(param_1 + 6,local_15a0);
      local_ad4 = 0;
      local_ad8 = 0;
      local_ae0[0] = 1;
      FUN_017c0920(param_1 + 6,local_ae0);
      goto LAB_017751f0;
    }
    uVar2 = FUN_019d8938(param_1);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(uVar2) {
    case 0:
      goto switchD_017c7adc_caseD_2;
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
switchD_017c7adc_caseD_3:
      FUN_01773e08(param_1);
      return;
    case 3:
    }
    break;
  case 1:
    break;
  case 2:
switchD_017c7adc_caseD_2:
    return;
  case 3:
    goto switchD_017c7adc_caseD_3;
  }
  FUN_01771a70(param_1 + 6);
LAB_017751f0:
  uVar3 = FUN_019d8b4c();
  if ((uVar3 & 8) == 0) {
    local_ad0._0_4_ = 2;
    FUN_017c0920(param_1 + 6,&local_ad0);
  }
  else if ((uVar3 & 0x10) != 0) {
    if (param_1[700] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb100("waker missing",0x1b,&DAT_01d29c20);
    }
    (**(code **)(param_1[700] + 8))(param_1[0x2bd]);
    uVar3 = FUN_019d8c50(param_1);
    if ((uVar3 & 8) == 0) {
      if (param_1[700] != 0) {
        (**(code **)(param_1[700] + 0xc))(param_1[0x2bd]);
      }
      param_1[700] = 0;
    }
  }
  iVar4 = FUN_019dc744(param_1[6],param_1);
  uVar5 = 2;
  if (iVar4 == 0) {
    uVar5 = 1;
  }
  iVar4 = FUN_019d8bc0(param_1,uVar5);
  if (iVar4 != 0) {
    FUN_01773e08(param_1);
  }
  return;
}

