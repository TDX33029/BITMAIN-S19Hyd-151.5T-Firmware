// FUN_006b2774 @ 006b2774 size=284 calls_out=2 calls_in=1
// strings: 

void FUN_006b2774(int param_1,int param_2,undefined4 *param_3,undefined4 param_4,undefined4 param_5)

{
  ushort uVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint uVar10;
  
  uVar1 = *(ushort *)(param_1 + 0x81a);
  uVar10 = (uint)uVar1;
  uVar8 = param_2 + 1;
  puVar9 = (undefined4 *)(param_1 + 0x794 + param_2 * 0xc);
  if (uVar10 < uVar8) {
    uVar3 = param_3[1];
    uVar5 = param_3[2];
    *puVar9 = *param_3;
    puVar9[1] = uVar3;
    puVar9[2] = uVar5;
  }
  else {
    FUN_01bed864(param_1 + 0x794 + uVar8 * 0xc,puVar9,(uVar10 - param_2) * 0xc);
    uVar3 = param_3[1];
    uVar5 = param_3[2];
    *puVar9 = *param_3;
    puVar9[1] = uVar3;
    puVar9[2] = uVar5;
    FUN_01bed864(uVar8 * 0xb0 + param_1,param_2 * 0xb0 + param_1,(uVar10 - param_2) * 0xb0);
  }
  FUN_01bed4e2(param_2 * 0xb0 + param_1,param_4,0xb0);
  iVar7 = param_1 + 0x820;
  if (param_2 + 2U < uVar10 + 2) {
    FUN_01bed864(iVar7 + (param_2 + 2U) * 4,iVar7 + uVar8 * 4,(uVar10 - param_2) * 4);
  }
  *(undefined4 *)(iVar7 + uVar8 * 4) = param_5;
  *(ushort *)(param_1 + 0x81a) = uVar1 + 1;
  if (uVar8 < uVar10 + 2) {
    iVar7 = param_2 + 0x209;
    iVar4 = (uVar10 - param_2) + 1;
    do {
      iVar6 = *(int *)(param_1 + iVar7 * 4);
      sVar2 = (short)iVar7;
      iVar7 = iVar7 + 1;
      iVar4 = iVar4 + -1;
      *(short *)(iVar6 + 0x818) = sVar2 + -0x208;
      *(int *)(iVar6 + 0x790) = param_1;
    } while (iVar4 != 0);
  }
  return;
}

