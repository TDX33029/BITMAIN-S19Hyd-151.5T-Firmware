// FUN_01338048 @ 01338048 size=600 calls_out=8 calls_in=10
// strings: 

void FUN_01338048(int *param_1,int *param_2,undefined4 param_3,int *param_4)

{
  byte bVar1;
  undefined1 uVar2;
  int *piVar3;
  int iVar4;
  int extraout_r1;
  int extraout_r2;
  int iVar5;
  int iVar6;
  bool bVar7;
  undefined8 uVar8;
  int local_40;
  int local_3c;
  int local_38;
  int *local_34;
  int local_30;
  int *local_2c;
  undefined1 local_28;
  int local_24;
  int local_20;
  int local_1c;
  byte local_18;
  int local_14;
  
  if (*param_2 == 2) {
    FUN_01330f4c(&local_40,param_2[0xe] + 8,param_3,param_4,param_2[0xc]);
    if (local_40 != 0x12) {
      *param_1 = local_40;
      param_1[1] = local_3c;
      param_1[2] = local_38;
      param_1[3] = (int)local_34;
      param_1[4] = local_30;
      return;
    }
    *param_1 = 0x12;
    *(bool *)(param_1 + 1) = local_3c != -0x80000000;
    if (local_3c == -0x80000000) {
      return;
    }
    FUN_0134aee0(local_3c,local_38,4,4);
    return;
  }
  iVar6 = param_2[0x10];
  uVar2 = 0;
  local_28 = 1;
  local_30 = 0;
  piVar3 = *(int **)(*(int *)(iVar6 + 0x10) + 0x58);
  local_40 = 0;
  if (*piVar3 == 1) {
    if (param_4 < (int *)piVar3[1]) goto LAB_013381f4;
    bVar1 = *(byte *)(piVar3 + 7);
    bVar7 = (bVar1 & 1) != 0;
    if (bVar7) {
      bVar1 = *(byte *)(piVar3 + 8);
    }
    if (((bVar7 && (bVar1 & 2) != 0) && (piVar3[2] == 1)) &&
       (piVar3 = (int *)piVar3[3], piVar3 < param_4)) goto LAB_013381f4;
  }
  local_38 = param_3;
  local_34 = param_4;
  local_2c = param_4;
  uVar8 = thunk_FUN_01bee35a(piVar3,param_2,0x1cc);
  piVar3 = (int *)((int)uVar8 + extraout_r2);
  iVar4 = *(int *)((int)((ulonglong)uVar8 >> 0x20) + 0x44);
  if ((char)piVar3[1] == '\0') {
    do {
      bVar7 = (bool)hasExclusiveAccess(0x1d4f0ac);
    } while (!bVar7);
    if (DAT_01d4f0ac == 0) {
      DAT_01d4f0ac = DAT_01d4f0ac + 1;
                    /* WARNING: Subroutine does not return */
      FUN_012fb100(&DAT_004c1978,0x57,&DAT_01d06d10);
    }
    iVar5 = DAT_01d4f0ac + 1;
    *piVar3 = DAT_01d4f0ac;
    DAT_01d4f0ac = iVar5;
    *(undefined1 *)(piVar3 + 1) = 1;
  }
  iVar5 = *piVar3;
  DataMemoryBarrier(0xb);
  if (iVar5 == *(int *)(iVar4 + 0x2f8)) {
    DataMemoryBarrier(0xb);
    *(undefined4 *)(iVar4 + 0x2f8) = 1;
    local_18 = 0;
    local_24 = 1;
    local_20 = iVar5;
    local_1c = iVar4;
  }
  else {
    FUN_0133e834(&local_24);
    iVar4 = extraout_r1;
  }
  iVar5 = local_24;
  if (local_24 != 1) {
    iVar4 = local_20;
  }
  if (local_24 == 1) {
    iVar4 = local_1c;
  }
  uVar2 = (**(code **)(*(int *)(iVar6 + 0xc) + 0x2c))
                    (*(int *)(iVar6 + 8) + (*(int *)(*(int *)(iVar6 + 0xc) + 8) - 1U & 0xfffffff8) +
                     8,iVar4,&local_40);
  if (iVar5 == 0) {
    if ((local_18 & 1) == 0) {
      FUN_01337ddc();
    }
    else {
      FUN_01337f7c(local_20);
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
LAB_013381f4:
  *(undefined1 *)(param_1 + 1) = uVar2;
  *param_1 = 0x12;
  return;
}

