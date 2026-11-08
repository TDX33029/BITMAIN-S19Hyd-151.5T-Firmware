// FUN_017c2248 @ 017c2248 size=352 calls_out=1 calls_in=1
// strings: 

void FUN_017c2248(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  
  iVar2 = *(int *)(param_1 + 4);
  uVar6 = *(uint *)(param_1 + 0x1c);
  uVar7 = iVar2 + uVar6;
  if (param_2 < uVar7) {
    return;
  }
  uVar9 = param_2 - iVar2;
  if (uVar6 < uVar9) {
    iVar3 = *(int *)(param_1 + 0xbc);
    iVar10 = *(int *)(param_1 + 0x5c);
    iVar8 = *(int *)(param_1 + 100);
    iVar4 = *(int *)(param_1 + 0xc0);
    while( true ) {
      uVar11 = (1 << (iVar3 - 1U & 0xff)) - 1U & uVar6;
      lVar1 = (ulonglong)*(uint *)(iVar2 + uVar6) * 0xbb000000;
      uVar7 = *(int *)(uVar7 + 4) * -0x45000000 + *(uint *)(iVar2 + uVar6) * -0x30e44324 +
              (int)((ulonglong)lVar1 >> 0x20);
      uVar7 = (uint)lVar1 >> (0x40U - iVar4 & 0xff) | uVar7 << (iVar4 - 0x20U & 0xff) |
              uVar7 >> (0x20U - iVar4 & 0xff);
      uVar5 = *(undefined4 *)(iVar10 + uVar7 * 4);
      *(uint *)(iVar10 + uVar7 * 4) = uVar6;
      uVar6 = uVar6 + 1;
      *(undefined4 *)(iVar8 + uVar11 * 8) = uVar5;
      *(undefined4 *)(iVar8 + uVar11 * 8 + 4) = 1;
      if (uVar9 == uVar6) break;
      uVar7 = iVar2 + uVar6;
    }
  }
  *(uint *)(param_1 + 0x1c) = uVar9;
  FUN_017c1894(param_1,param_2,param_3,param_4,5);
  return;
}

