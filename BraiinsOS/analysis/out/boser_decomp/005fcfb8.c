// FUN_005fcfb8 @ 005fcfb8 size=448 calls_out=3 calls_in=2
// strings: 

int FUN_005fcfb8(int param_1,int param_2,int param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  param_4 = param_4 >> 3;
  if (param_4 != 0) {
    param_1 = FUN_005fcfb8(param_1,param_1 + param_4 * 0x30,param_4 * 0x54 + param_1,param_4);
    param_2 = FUN_005fcfb8(param_2,param_2 + param_4 * 0x30,param_4 * 0x54 + param_2,param_4);
    param_3 = FUN_005fcfb8(param_3,param_3 + param_4 * 0x30,param_4 * 0x54 + param_3,param_4);
  }
  uVar6 = FUN_019b00d0(*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8));
  uVar4 = (uint)((ulonglong)uVar6 >> 0x20);
  uVar7 = FUN_019b00d0(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
  uVar5 = (uint)((ulonglong)uVar7 >> 0x20);
  iVar1 = (int)uVar7;
  if ((int)uVar6 == 0) {
    uVar2 = (uint)(iVar1 != 0);
  }
  else if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = uVar5;
    if (uVar4 < uVar5) {
      uVar2 = uVar4;
    }
    uVar2 = FUN_01bed842((int)uVar6,iVar1,uVar2);
    if (uVar2 == 0) {
      uVar2 = uVar4 - uVar5;
    }
    uVar2 = uVar2 >> 0x1f;
  }
  uVar6 = FUN_019b00d0(*(undefined4 *)(param_3 + 4),*(undefined4 *)(param_3 + 8));
  uVar4 = (uint)((ulonglong)uVar6 >> 0x20);
  uVar7 = FUN_019b00d0(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
  uVar5 = (uint)((ulonglong)uVar7 >> 0x20);
  iVar1 = (int)uVar7;
  if ((int)uVar6 == 0) {
    uVar3 = 0;
    if (iVar1 != 0) {
      uVar3 = 1;
    }
  }
  else {
    if (iVar1 == 0) {
      if (uVar2 != 0) {
        return param_1;
      }
      goto LAB_005fd0fc;
    }
    uVar3 = uVar5;
    if (uVar4 < uVar5) {
      uVar3 = uVar4;
    }
    uVar3 = FUN_01bed842((int)uVar6,iVar1,uVar3);
    if (uVar3 == 0) {
      uVar3 = uVar4 - uVar5;
    }
    uVar3 = uVar3 >> 0x1f;
  }
  if (uVar2 != uVar3) {
    return param_1;
  }
LAB_005fd0fc:
  uVar6 = FUN_019b00d0(*(undefined4 *)(param_3 + 4),*(undefined4 *)(param_3 + 8));
  uVar4 = (uint)((ulonglong)uVar6 >> 0x20);
  uVar7 = FUN_019b00d0(*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8));
  uVar5 = (uint)((ulonglong)uVar7 >> 0x20);
  iVar1 = (int)uVar7;
  if ((int)uVar6 == 0) {
    uVar3 = (uint)(iVar1 != 0);
  }
  else if (iVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = uVar5;
    if (uVar4 < uVar5) {
      uVar3 = uVar4;
    }
    uVar3 = FUN_01bed842((int)uVar6,iVar1,uVar3);
    if (uVar3 == 0) {
      uVar3 = uVar4 - uVar5;
    }
    uVar3 = uVar3 >> 0x1f;
  }
  if (uVar2 != uVar3) {
    param_2 = param_3;
  }
  return param_2;
}

