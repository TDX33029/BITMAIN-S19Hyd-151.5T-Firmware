// FUN_009763d0 @ 009763d0 size=220 calls_out=1 calls_in=1
// strings: 

void FUN_009763d0(int *param_1,int *param_2,undefined4 *param_3,undefined4 *param_4)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  
  iVar11 = *param_2;
  iVar10 = param_2[2];
  uVar9 = iVar10 + 1;
  uVar1 = *(ushort *)(iVar11 + 0x34a);
  puVar5 = (undefined4 *)(iVar11 + 0x2c4 + iVar10 * 0xc);
  if (uVar1 < uVar9) {
    uVar3 = param_3[1];
    uVar4 = param_3[2];
    *puVar5 = *param_3;
    puVar5[1] = uVar3;
    puVar5[2] = uVar4;
  }
  else {
    iVar2 = (uint)uVar1 - iVar10;
    FUN_01bed864(iVar11 + 0x2c4 + uVar9 * 0xc,puVar5,iVar2 * 0xc);
    uVar3 = param_3[1];
    uVar4 = param_3[2];
    *puVar5 = *param_3;
    puVar5[1] = uVar3;
    puVar5[2] = uVar4;
    FUN_01bed864(iVar11 + uVar9 * 0x40,iVar11 + iVar10 * 0x40,iVar2 * 0x40);
  }
  uVar3 = param_4[1];
  uVar4 = param_4[2];
  uVar6 = param_4[3];
  uVar7 = param_4[4];
  puVar5 = (undefined4 *)(iVar11 + iVar10 * 0x40);
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
  uVar3 = param_4[0xb];
  uVar4 = param_4[0xc];
  uVar6 = param_4[0xd];
  uVar7 = param_4[0xe];
  uVar8 = param_4[0xf];
  puVar5[10] = param_4[10];
  puVar5[0xb] = uVar3;
  puVar5[0xc] = uVar4;
  puVar5[0xd] = uVar6;
  puVar5[0xe] = uVar7;
  puVar5[0xf] = uVar8;
  *(ushort *)(iVar11 + 0x34a) = uVar1 + 1;
  iVar2 = param_2[1];
  *param_1 = iVar11;
  param_1[1] = iVar2;
  param_1[2] = iVar10;
  return;
}

