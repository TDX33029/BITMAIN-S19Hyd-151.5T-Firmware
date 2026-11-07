// FUN_01714290 @ 01714290 size=632 calls_out=12 calls_in=0
// strings: internal error: entered unreachable code: unexpected stage | assertion failed: prev.ref_count() >= 1 | waker missing

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01714290(uint *param_1)

{
  bool bVar1;
  undefined1 uVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined *puStack_68;
  uint *puStack_64;
  undefined1 *local_60;
  undefined1 *local_5c;
  undefined4 local_58;
  undefined4 local_50 [6];
  int local_38;
  uint *local_34;
  undefined4 *local_30;
  undefined4 local_2c;
  undefined8 local_28;
  
  uVar2 = FUN_019d8a74();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(uVar2) {
  case 0:
    puStack_68 = &DAT_01d29304;
    local_58 = 0;
    puStack_64 = param_1;
    if (param_1[10] != 0) {
      local_60 = (undefined1 *)&puStack_68;
      local_5c = (undefined1 *)&puStack_68;
                    /* WARNING: Subroutine does not return */
      FUN_012fb100("internal error: entered unreachable code: unexpected stage",0x75,&DAT_01d2e13c);
    }
    local_60 = (undefined1 *)&puStack_68;
    local_5c = (undefined1 *)&puStack_68;
    uVar7 = FUN_019ec558(param_1[8],param_1[9]);
    iVar5 = (**(code **)(param_1[0xd] + 0xc))(param_1[0xc],&local_60);
    FUN_019ec558((int)uVar7,(int)((ulonglong)uVar7 >> 0x20));
    if (iVar5 == 0) {
      local_50[0] = 2;
      local_28 = FUN_01748fa0(param_1 + 6,local_50);
      local_2c = 0;
      local_30 = (undefined4 *)0x0;
      local_38 = 1;
      FUN_01748fa0(param_1 + 6,&local_38);
      goto LAB_0171440c;
    }
    uVar2 = FUN_019d8938(param_1);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(uVar2) {
    case 0:
      goto switchD_017142ac_caseD_2;
    case 1:
      local_50[0] = CONCAT31(local_50[0]._1_3_,1);
      local_30 = local_50;
      local_38 = param_1[6] + 8;
      local_34 = param_1;
      FUN_019ee860(&local_38);
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
      goto LAB_017143c4;
    }
  case 3:
    break;
  case 1:
LAB_017143c4:
    FUN_017145b4(param_1 + 6);
LAB_0171440c:
    uVar4 = FUN_019d8b4c();
    if ((uVar4 & 8) == 0) {
      FUN_01748fa0(param_1 + 6,local_50 + 0xc);
    }
    else if ((uVar4 & 0x10) != 0) {
      if (param_1[0x12] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb100("waker missing",0x1b,&DAT_01d29c20);
      }
      (**(code **)(param_1[0x12] + 8))(param_1[0x13]);
      uVar4 = FUN_019d8c50(param_1);
      if ((uVar4 & 8) == 0) {
        if (param_1[0x12] != 0) {
          (**(code **)(param_1[0x12] + 0xc))(param_1[0x13]);
        }
        param_1[0x12] = 0;
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
switchD_017142ac_caseD_2:
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
  FUN_0171393c(param_1 + 10);
  FUN_014b1410(param_1 + 0x10);
  thunk_FUN_01be4678(param_1);
  return;
}

