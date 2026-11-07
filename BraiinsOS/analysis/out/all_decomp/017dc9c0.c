// FUN_017dc9c0 @ 017dc9c0 size=364 calls_out=1 calls_in=1
// strings: 

void FUN_017dc9c0(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  
  iVar2 = *(int *)(param_1 + 4);
  uVar4 = *(uint *)(param_1 + 0x1c);
  uVar5 = iVar2 + uVar4;
  if (param_2 < uVar5) {
    return;
  }
  uVar8 = param_2 - iVar2;
  if (uVar4 < uVar8) {
    iVar9 = *(int *)(param_1 + 0xbc);
    iVar7 = *(int *)(param_1 + 0xc0);
    iVar6 = *(int *)(param_1 + 0x5c);
    iVar10 = *(int *)(param_1 + 100);
    while( true ) {
      uVar11 = (1 << (iVar9 - 1U & 0xff)) - 1U & uVar4;
      lVar1 = (ulonglong)*(uint *)(iVar2 + uVar4) * 0xbf9b0000;
      uVar5 = *(int *)(uVar5 + 4) * -0x40650000 + *(uint *)(iVar2 + uVar4) * -0x30e44324 +
              (int)((ulonglong)lVar1 >> 0x20);
      uVar5 = (uint)lVar1 >> (0x40U - iVar7 & 0xff) | uVar5 << (iVar7 - 0x20U & 0xff) |
              uVar5 >> (0x20U - iVar7 & 0xff);
      uVar3 = *(undefined4 *)(iVar6 + uVar5 * 4);
      *(uint *)(iVar6 + uVar5 * 4) = uVar4;
      uVar4 = uVar4 + 1;
      *(undefined4 *)(iVar10 + uVar11 * 8) = uVar3;
      *(undefined4 *)(iVar10 + uVar11 * 8 + 4) = 1;
      if (uVar8 == uVar4) break;
      uVar5 = iVar2 + uVar4;
    }
  }
  *(uint *)(param_1 + 0x1c) = uVar8;
  FUN_017db984(param_1,param_2,param_3,param_4,6);
  return;
}

