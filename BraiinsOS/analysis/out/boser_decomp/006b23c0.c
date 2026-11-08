// FUN_006b23c0 @ 006b23c0 size=212 calls_out=1 calls_in=1
// strings: 

void FUN_006b23c0(int *param_1,int *param_2,undefined4 *param_3,undefined4 *param_4)

{
  ushort uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  
  iVar10 = *param_2;
  iVar11 = param_2[2];
  uVar1 = *(ushort *)(iVar10 + 0x29a);
  uVar2 = iVar11 + 1;
  puVar6 = (undefined4 *)(iVar10 + 0x214 + iVar11 * 0xc);
  if (uVar1 < uVar2) {
    uVar3 = param_3[1];
    uVar5 = param_3[2];
    *puVar6 = *param_3;
    puVar6[1] = uVar3;
    puVar6[2] = uVar5;
  }
  else {
    iVar4 = (uint)uVar1 - iVar11;
    FUN_01bed864(iVar10 + 0x214 + uVar2 * 0xc,puVar6,iVar4 * 0xc);
    uVar3 = param_3[1];
    uVar5 = param_3[2];
    *puVar6 = *param_3;
    puVar6[1] = uVar3;
    puVar6[2] = uVar5;
    FUN_01bed864(iVar10 + uVar2 * 0x30,iVar10 + iVar11 * 0x30,iVar4 * 0x30);
  }
  uVar3 = param_4[1];
  uVar5 = param_4[2];
  uVar7 = param_4[3];
  uVar8 = param_4[4];
  uVar9 = param_4[5];
  puVar6 = (undefined4 *)(iVar10 + iVar11 * 0x30);
  *puVar6 = *param_4;
  puVar6[1] = uVar3;
  puVar6[2] = uVar5;
  puVar6[3] = uVar7;
  puVar6[4] = uVar8;
  puVar6[5] = uVar9;
  uVar3 = param_4[7];
  uVar5 = param_4[8];
  uVar7 = param_4[9];
  uVar8 = param_4[10];
  uVar9 = param_4[0xb];
  puVar6[6] = param_4[6];
  puVar6[7] = uVar3;
  puVar6[8] = uVar5;
  puVar6[9] = uVar7;
  puVar6[10] = uVar8;
  puVar6[0xb] = uVar9;
  *param_1 = iVar10;
  *(ushort *)(iVar10 + 0x29a) = uVar1 + 1;
  param_1[1] = param_2[1];
  param_1[2] = iVar11;
  return;
}

