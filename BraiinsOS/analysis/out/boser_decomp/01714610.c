// FUN_01714610 @ 01714610 size=600 calls_out=13 calls_in=0
// strings: internal error: entered unreachable code: unexpected stage | assertion failed: prev.ref_count() >= 1 | waker missing

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01714610(uint *param_1)

{
  bool bVar1;
  undefined1 uVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined *puStack_98;
  uint *puStack_94;
  undefined1 *local_90;
  undefined1 *local_8c;
  undefined4 local_88;
  undefined4 local_80 [12];
  undefined4 local_50 [2];
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined4 local_38 [6];
  
  uVar2 = FUN_019d8a74();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(uVar2) {
  case 0:
    puStack_98 = &DAT_01d29304;
    local_88 = 0;
    puStack_94 = param_1;
    if (param_1[10] != 0) {
      local_90 = (undefined1 *)&puStack_98;
      local_8c = (undefined1 *)&puStack_98;
                    /* WARNING: Subroutine does not return */
      FUN_012fb100("internal error: entered unreachable code: unexpected stage",0x75,&DAT_01d2e13c);
    }
    local_90 = (undefined1 *)&puStack_98;
    local_8c = (undefined1 *)&puStack_98;
    uVar7 = FUN_019ec558(param_1[8],param_1[9]);
    iVar5 = FUN_01749098(param_1 + 0xc,&local_90);
    FUN_019ec558((int)uVar7,(int)((ulonglong)uVar7 >> 0x20));
    if (iVar5 == 0) {
      local_80[0] = 2;
      local_40 = FUN_01749014(param_1 + 6,local_80);
      local_44 = 0;
      local_48 = 0;
      local_50[0] = 1;
      FUN_01749014(param_1 + 6,local_50);
      goto LAB_0171476c;
    }
    uVar2 = FUN_019d8938(param_1);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(uVar2) {
    case 0:
      goto switchD_0171462c_caseD_2;
    case 1:
      FUN_019dc904(param_1[6],param_1);
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
      goto LAB_01714724;
    }
  case 3:
    break;
  case 1:
LAB_01714724:
    FUN_01714234(param_1 + 6);
LAB_0171476c:
    uVar4 = FUN_019d8b4c();
    if ((uVar4 & 8) == 0) {
      local_38[0] = 2;
      FUN_01749014(param_1 + 6,local_38);
    }
    else if ((uVar4 & 0x10) != 0) {
      if (param_1[0x18] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb100("waker missing",0x1b,&DAT_01d29c20);
      }
      (**(code **)(param_1[0x18] + 8))(param_1[0x19]);
      uVar4 = FUN_019d8c50(param_1);
      if ((uVar4 & 8) == 0) {
        if (param_1[0x18] != 0) {
          (**(code **)(param_1[0x18] + 0xc))(param_1[0x19]);
        }
        param_1[0x18] = 0;
      }
    }
    iVar5 = FUN_019dc744(param_1[6],param_1);
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
switchD_0171462c_caseD_2:
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
    FUN_019da4fc(param_1[6]);
  }
  FUN_0171378c(param_1 + 10);
  FUN_014b1410(param_1 + 0x16);
  thunk_FUN_01be4678(param_1);
  return;
}

