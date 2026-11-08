// FUN_009e3438 @ 009e3438 size=576 calls_out=14 calls_in=0
// strings: internal error: entered unreachable code: unexpected stage | assertion failed: prev.ref_count() >= 1 | waker missing

void FUN_009e3438(uint *param_1)

{
  bool bVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined *local_f8;
  uint *local_f4;
  undefined4 local_f0 [26];
  undefined4 local_88 [2];
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_70 [20];
  
  uVar2 = FUN_019d8a74();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(uVar2) {
  case 0:
    local_f8 = &DAT_01d29304;
    local_f4 = param_1;
    if (param_1[10] != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb100("internal error: entered unreachable code: unexpected stage",0x75,&DAT_01d2e13c);
    }
    uVar6 = FUN_019ec558(param_1[8],param_1[9]);
    iVar4 = FUN_00a69188(param_1 + 0xc,&local_f8);
    FUN_019ec558((int)uVar6,(int)((ulonglong)uVar6 >> 0x20));
    if (iVar4 == 0) {
      local_f0[0] = 2;
      local_78 = FUN_00a62d9c(param_1 + 6,local_f0);
      local_7c = 0;
      local_80 = 0;
      local_88[0] = 1;
      FUN_00a62d9c(param_1 + 6,local_88);
      goto LAB_009e3584;
    }
    uVar2 = FUN_019d8938(param_1);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(uVar2) {
    case 0:
      goto switchD_009e3454_caseD_2;
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
switchD_009e3454_caseD_3:
      FUN_009dfec0(param_1);
      return;
    case 3:
    }
    break;
  case 1:
    break;
  case 2:
switchD_009e3454_caseD_2:
    return;
  case 3:
    goto switchD_009e3454_caseD_3;
  }
  FUN_009e3724(param_1 + 6);
LAB_009e3584:
  uVar3 = FUN_019d8b4c();
  if ((uVar3 & 8) == 0) {
    local_70[0] = 2;
    FUN_00a62d9c(param_1 + 6,local_70);
  }
  else if ((uVar3 & 0x10) != 0) {
    if (param_1[0x26] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb100("waker missing",0x1b,&DAT_01d29c20);
    }
    (**(code **)(param_1[0x26] + 8))(param_1[0x27]);
    uVar3 = FUN_019d8c50(param_1);
    if ((uVar3 & 8) == 0) {
      if (param_1[0x26] != 0) {
        (**(code **)(param_1[0x26] + 0xc))(param_1[0x27]);
      }
      param_1[0x26] = 0;
    }
  }
  iVar4 = FUN_019dc744(param_1[6],param_1);
  uVar5 = 2;
  if (iVar4 == 0) {
    uVar5 = 1;
  }
  iVar4 = FUN_019d8bc0(param_1,uVar5);
  if (iVar4 != 0) {
    FUN_009dfec0(param_1);
  }
  return;
}

