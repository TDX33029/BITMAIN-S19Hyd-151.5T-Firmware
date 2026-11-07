// FUN_0124ed24 @ 0124ed24 size=220 calls_out=1 calls_in=1
// strings: 

void FUN_0124ed24(int *param_1,int *param_2,undefined4 *param_3,undefined4 *param_4)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  
  iVar10 = *param_2;
  iVar9 = param_2[2];
  uVar8 = iVar9 + 1;
  uVar1 = *(ushort *)(iVar10 + 0x242);
  puVar5 = (undefined4 *)(iVar10 + 0x1bc + iVar9 * 0xc);
  if (uVar1 < uVar8) {
    uVar3 = param_3[1];
    uVar4 = param_3[2];
    *puVar5 = *param_3;
    puVar5[1] = uVar3;
    puVar5[2] = uVar4;
  }
  else {
    iVar2 = (uint)uVar1 - iVar9;
    FUN_01bed864(iVar10 + 0x1bc + uVar8 * 0xc,puVar5,iVar2 * 0xc);
    uVar3 = param_3[1];
    uVar4 = param_3[2];
    *puVar5 = *param_3;
    puVar5[1] = uVar3;
    puVar5[2] = uVar4;
    FUN_01bed864(iVar10 + uVar8 * 0x28,iVar10 + iVar9 * 0x28,iVar2 * 0x28);
  }
  uVar3 = param_4[1];
  uVar4 = param_4[2];
  uVar6 = param_4[3];
  uVar7 = param_4[4];
  puVar5 = (undefined4 *)(iVar10 + iVar9 * 0x28);
  *puVar5 = *param_4;
  puVar5[1] = uVar3;
  puVar5[2] = uVar4;
  puVar5[3] = uVar6;
  puVar5[4] = uVar7;
  uVar3 = param_4[6];
  uVar4 = param_4[7];
  uVar6 = param_4[8];
  uVar7 = param_4[9];
  puVar5[5] = param_4[5];
  puVar5[6] = uVar3;
  puVar5[7] = uVar4;
  puVar5[8] = uVar6;
  puVar5[9] = uVar7;
  *(ushort *)(iVar10 + 0x242) = uVar1 + 1;
  iVar2 = param_2[1];
  *param_1 = iVar10;
  param_1[1] = iVar2;
  param_1[2] = iVar9;
  return;
}

