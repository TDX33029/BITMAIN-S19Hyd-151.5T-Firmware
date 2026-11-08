// FUN_01552754 @ 01552754 size=488 calls_out=6 calls_in=9
// strings: 

void FUN_01552754(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,uint param_5
                 )

{
  byte bVar1;
  undefined1 uVar2;
  int extraout_r2;
  int iVar3;
  int *piVar4;
  int iVar5;
  bool bVar6;
  undefined8 uVar7;
  undefined4 local_4c [2];
  undefined4 local_44;
  uint local_40;
  undefined4 local_3c;
  uint local_38;
  undefined4 local_34;
  undefined1 local_30 [12];
  int local_24;
  int local_20;
  int local_1c;
  byte local_18;
  int local_14;
  
  local_34 = 1;
  uVar2 = 0;
  piVar4 = *(int **)(*(int *)(param_2 + 0x10) + 0x58);
  local_38 = param_5;
  local_3c = 0;
  local_40 = param_5;
  local_4c[0] = 0;
  if (*piVar4 == 1) {
    if (param_5 < (uint)piVar4[1]) goto LAB_01552888;
    bVar1 = *(byte *)(piVar4 + 7);
    bVar6 = (bVar1 & 1) != 0;
    if (bVar6) {
      bVar1 = *(byte *)(piVar4 + 8);
    }
    if (((bVar6 && (bVar1 & 2) != 0) && (piVar4[2] == 1)) && ((uint)piVar4[3] < param_5))
    goto LAB_01552888;
  }
  local_44 = param_4;
  uVar7 = thunk_FUN_01bee35a(0,0x1cc);
  piVar4 = (int *)((int)uVar7 + (int)((ulonglong)uVar7 >> 0x20));
  if ((char)piVar4[1] == '\0') {
    do {
      bVar6 = (bool)hasExclusiveAccess(0x1d4f0ac);
    } while (!bVar6);
    if (DAT_01d4f0ac == 0) {
      DAT_01d4f0ac = DAT_01d4f0ac + 1;
                    /* WARNING: Subroutine does not return */
      FUN_012fb100(&DAT_004c1978,0x57,&DAT_01d06d10);
    }
    iVar5 = DAT_01d4f0ac + 1;
    *piVar4 = DAT_01d4f0ac;
    DAT_01d4f0ac = iVar5;
    *(undefined1 *)(piVar4 + 1) = 1;
  }
  iVar5 = *piVar4;
  DataMemoryBarrier(0xb);
  if (iVar5 == *(int *)(extraout_r2 + 0x2f8)) {
    DataMemoryBarrier(0xb);
    *(undefined4 *)(extraout_r2 + 0x2f8) = 1;
    local_18 = 0;
    local_24 = 1;
    local_20 = iVar5;
    local_1c = extraout_r2;
  }
  else {
    FUN_0133e834(&local_24,extraout_r2,iVar5);
  }
  iVar5 = local_24;
  if (local_24 == 1) {
    iVar3 = local_1c;
  }
  else {
    iVar3 = local_20;
  }
  (**(code **)(*(int *)(param_2 + 0xc) + 0x28))
            (local_30,*(int *)(param_2 + 8) +
                      (*(int *)(*(int *)(param_2 + 0xc) + 8) - 1U & 0xfffffff8) + 8,iVar3,local_4c);
  if (iVar5 == 0) {
    if ((local_18 & 1) == 0) {
      FUN_0155296c();
    }
    else {
      FUN_0069af44(local_20);
    }
  }
  else {
    local_14 = local_20;
    if (local_20 == 2) {
                    /* WARNING: Subroutine does not return */
      FUN_01304210(1,&DAT_005288a8,&local_14,0);
    }
    DataMemoryBarrier(0xb);
    *(int *)(local_1c + 0x2f8) = local_20;
  }
  uVar2 = local_30[0];
LAB_01552888:
  *(undefined1 *)(param_1 + 1) = uVar2;
  *param_1 = 0x80000001;
  return;
}

