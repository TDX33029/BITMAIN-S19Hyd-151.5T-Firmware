// FUN_01aa2274 @ 01aa2274 size=636 calls_out=14 calls_in=0
// strings: waker missing | internal error: entered unreachable code: unexpected stage | assertion failed: prev.ref_count() >= 1

void FUN_01aa2274(uint *param_1)

{
  bool bVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined *puStack_708;
  uint *puStack_704;
  undefined1 *local_700;
  undefined1 *local_6fc;
  undefined4 local_6f8;
  undefined4 local_6f0 [218];
  int local_388;
  uint *local_384;
  undefined4 *local_380;
  undefined4 local_37c;
  undefined8 local_378;
  
  uVar2 = FUN_019d8a74();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(uVar2) {
  case 0:
    puStack_708 = &DAT_01d29304;
    local_6f8 = 0;
    puStack_704 = param_1;
    if (param_1[10] != 0) {
      local_700 = (undefined1 *)&puStack_708;
      local_6fc = (undefined1 *)&puStack_708;
                    /* WARNING: Subroutine does not return */
      FUN_012fb100("internal error: entered unreachable code: unexpected stage",0x75,&DAT_01d2e13c);
    }
    local_700 = (undefined1 *)&puStack_708;
    local_6fc = (undefined1 *)&puStack_708;
    uVar6 = FUN_019ec558(param_1[8],param_1[9]);
    iVar4 = FUN_01a9a7a8(param_1 + 0xc,&local_700);
    FUN_019ec558((int)uVar6,(int)((ulonglong)uVar6 >> 0x20));
    if (iVar4 == 0) {
      local_6f0[0] = 2;
      local_378 = FUN_01a9a724(param_1 + 6,local_6f0);
      local_37c = 0;
      local_380 = (undefined4 *)0x0;
      local_388 = 1;
      FUN_01a9a724(param_1 + 6,&local_388);
      goto LAB_01a8d948;
    }
    uVar2 = FUN_019d8938(param_1);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(uVar2) {
    case 0:
      goto switchD_01aa2294_caseD_2;
    case 1:
      local_6f0[0] = CONCAT31(local_6f0[0]._1_3_,1);
      local_380 = local_6f0;
      local_388 = param_1[6] + 8;
      local_384 = param_1;
      FUN_019ee860(&local_388);
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
switchD_01aa2294_caseD_3:
      FUN_01a8d7c0(param_1);
      return;
    case 3:
    }
    break;
  case 1:
    break;
  case 2:
switchD_01aa2294_caseD_2:
    return;
  case 3:
    goto switchD_01aa2294_caseD_3;
  }
  FUN_01a8cfa8(param_1 + 6);
LAB_01a8d948:
  uVar3 = FUN_019d8b4c();
  if ((uVar3 & 8) == 0) {
    local_378._0_4_ = 2;
    FUN_01a9a724(param_1 + 6,&local_378);
  }
  else if ((uVar3 & 0x10) != 0) {
    if (param_1[0xe6] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb100("waker missing",0x1b,&DAT_01d29c20);
    }
    (**(code **)(param_1[0xe6] + 8))(param_1[0xe7]);
    uVar3 = FUN_019d8c50(param_1);
    if ((uVar3 & 8) == 0) {
      if (param_1[0xe6] != 0) {
        (**(code **)(param_1[0xe6] + 0xc))(param_1[0xe7]);
      }
      param_1[0xe6] = 0;
    }
  }
  iVar4 = FUN_019dc584(param_1[6],param_1);
  uVar5 = 2;
  if (iVar4 == 0) {
    uVar5 = 1;
  }
  iVar4 = FUN_019d8bc0(param_1,uVar5);
  if (iVar4 != 0) {
    FUN_01a8d7c0(param_1);
  }
  return;
}

