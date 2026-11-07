// FUN_017c14c4 @ 017c14c4 size=260 calls_out=1 calls_in=1
// strings: 

void FUN_017c14c4(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  iVar7 = *(int *)(param_1 + 4);
  uVar3 = *(uint *)(param_1 + 0x1c);
  if (param_2 < iVar7 + uVar3) {
    return;
  }
  uVar6 = param_2 - iVar7;
  if (uVar3 < uVar6) {
    iVar5 = *(int *)(param_1 + 0xbc);
    iVar8 = *(int *)(param_1 + 0xc0);
    iVar10 = *(int *)(param_1 + 0x5c);
    iVar9 = *(int *)(param_1 + 100);
    do {
      uVar2 = (1 << (iVar5 - 1U & 0xff)) - 1U & uVar3;
      uVar1 = (uint)(*(int *)(iVar7 + uVar3) * -0x61c8864f) >> (0x20U - iVar8 & 0xff);
      uVar4 = *(undefined4 *)(iVar10 + uVar1 * 4);
      *(uint *)(iVar10 + uVar1 * 4) = uVar3;
      uVar3 = uVar3 + 1;
      *(undefined4 *)(iVar9 + uVar2 * 8) = uVar4;
      *(undefined4 *)(iVar9 + uVar2 * 8 + 4) = 1;
    } while (uVar6 != uVar3);
  }
  *(uint *)(param_1 + 0x1c) = uVar6;
  FUN_017c0c94(param_1,param_2,param_3,param_4,4);
  return;
}

