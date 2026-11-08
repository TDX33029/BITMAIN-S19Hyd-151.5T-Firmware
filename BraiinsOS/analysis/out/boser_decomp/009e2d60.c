// FUN_009e2d60 @ 009e2d60 size=576 calls_out=14 calls_in=0
// strings: internal error: entered unreachable code: unexpected stage | assertion failed: prev.ref_count() >= 1 | waker missing

void FUN_009e2d60(uint *param_1)

{
  bool bVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined *local_238;
  uint *local_234;
  undefined4 local_230 [66];
  undefined4 local_128 [2];
  undefined4 local_120;
  undefined4 local_11c;
  undefined8 local_118;
  
  uVar2 = FUN_019d8a74();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(uVar2) {
  case 0:
    local_238 = &DAT_01d29304;
    local_234 = param_1;
    if (param_1[10] != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb100("internal error: entered unreachable code: unexpected stage",0x75,&DAT_01d2e13c);
    }
    uVar6 = FUN_019ec558(param_1[8],param_1[9]);
    iVar4 = FUN_00a64c0c(param_1 + 0xc,&local_238);
    FUN_019ec558((int)uVar6,(int)((ulonglong)uVar6 >> 0x20));
    if (iVar4 == 0) {
      local_230[0] = 2;
      local_118 = FUN_00a62b8c(param_1 + 6,local_230);
      local_11c = 0;
      local_120 = 0;
      local_128[0] = 1;
      FUN_00a62b8c(param_1 + 6,local_128);
      goto LAB_009e2eac;
    }
    uVar2 = FUN_019d8938(param_1);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(uVar2) {
    case 0:
      goto switchD_009e2d7c_caseD_2;
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
switchD_009e2d7c_caseD_3:
      FUN_009df83c(param_1);
      return;
    case 3:
    }
    break;
  case 1:
    break;
  case 2:
switchD_009e2d7c_caseD_2:
    return;
  case 3:
    goto switchD_009e2d7c_caseD_3;
  }
  FUN_009e304c(param_1 + 6);
LAB_009e2eac:
  uVar3 = FUN_019d8b4c();
  if ((uVar3 & 8) == 0) {
    local_118._0_4_ = 2;
    FUN_00a62b8c(param_1 + 6,&local_118);
  }
  else if ((uVar3 & 0x10) != 0) {
    if (param_1[0x4e] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb100("waker missing",0x1b,&DAT_01d29c20);
    }
    (**(code **)(param_1[0x4e] + 8))(param_1[0x4f]);
    uVar3 = FUN_019d8c50(param_1);
    if ((uVar3 & 8) == 0) {
      if (param_1[0x4e] != 0) {
        (**(code **)(param_1[0x4e] + 0xc))(param_1[0x4f]);
      }
      param_1[0x4e] = 0;
    }
  }
  iVar4 = FUN_019dc744(param_1[6],param_1);
  uVar5 = 2;
  if (iVar4 == 0) {
    uVar5 = 1;
  }
  iVar4 = FUN_019d8bc0(param_1,uVar5);
  if (iVar4 != 0) {
    FUN_009df83c(param_1);
  }
  return;
}

