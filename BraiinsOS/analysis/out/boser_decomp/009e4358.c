// FUN_009e4358 @ 009e4358 size=632 calls_out=13 calls_in=0
// strings: internal error: entered unreachable code: unexpected stage | assertion failed: prev.ref_count() >= 1 | waker missing

void FUN_009e4358(uint *param_1)

{
  bool bVar1;
  undefined1 uVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined *puStack_248;
  uint *puStack_244;
  undefined1 *local_240;
  undefined1 *local_23c;
  undefined4 local_238;
  undefined4 local_230 [66];
  int local_128;
  uint *local_124;
  undefined4 *local_120;
  undefined4 local_11c;
  undefined8 local_118;
  
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
    uVar7 = FUN_019ec558(param_1[8],param_1[9]);
    iVar5 = FUN_009da7c4(param_1 + 0xc,&local_240);
    FUN_019ec558((int)uVar7,(int)((ulonglong)uVar7 >> 0x20));
    if (iVar5 == 0) {
      local_230[0] = 2;
      local_118 = FUN_00a62e20(param_1 + 6,local_230);
      local_11c = 0;
      local_120 = (undefined4 *)0x0;
      local_128 = 1;
      FUN_00a62e20(param_1 + 6,&local_128);
      goto LAB_009e44d0;
    }
    uVar2 = FUN_019d8938(param_1);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(uVar2) {
    case 0:
      goto switchD_009e4374_caseD_2;
    case 1:
      local_230[0] = CONCAT31(local_230[0]._1_3_,1);
      local_120 = local_230;
      local_128 = param_1[6] + 8;
      local_124 = param_1;
      FUN_019ee860(&local_128);
      DataMemoryBarrier(0xb);
      do {
        uVar4 = *param_1;
        bVar1 = (bool)hasExclusiveAccess(param_1);
      } while (!bVar1);
      *param_1 = uVar4 - 0x40;
      DataMemoryBarrier(0xb);
      if (uVar4 < 0x40) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec("assertion failed: prev.ref_count() >= 1",0x27,&DAT_01d28de4);
      }
      if ((uVar4 & 0xffffffc0) != 0x40) {
        return;
      }
      break;
    case 3:
      goto LAB_009e4488;
    }
  case 3:
    break;
  case 1:
LAB_009e4488:
    FUN_009e1b14(param_1 + 6);
LAB_009e44d0:
    uVar4 = FUN_019d8b4c();
    if ((uVar4 & 8) == 0) {
      local_118._0_4_ = 2;
      FUN_00a62e20(param_1 + 6,&local_118);
    }
    else if ((uVar4 & 0x10) != 0) {
      if (param_1[0x4e] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb100("waker missing",0x1b,&DAT_01d29c20);
      }
      (**(code **)(param_1[0x4e] + 8))(param_1[0x4f]);
      uVar4 = FUN_019d8c50(param_1);
      if ((uVar4 & 8) == 0) {
        if (param_1[0x4e] != 0) {
          (**(code **)(param_1[0x4e] + 0xc))(param_1[0x4f]);
        }
        param_1[0x4e] = 0;
      }
    }
    iVar5 = FUN_019dc584(param_1[6],param_1);
    uVar6 = 2;
    if (iVar5 == 0) {
      uVar6 = 1;
    }
    iVar5 = FUN_019d8bc0(param_1,uVar6);
    if (iVar5 == 0) {
      return;
    }
    break;
  case 2:
switchD_009e4374_caseD_2:
    return;
  }
  piVar3 = (int *)param_1[6];
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar5 + -1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_019da640(param_1[6]);
  }
  FUN_009dfd24(param_1 + 10);
  FUN_014b1410(param_1 + 0x4c);
  thunk_FUN_01be4678(param_1);
  return;
}

