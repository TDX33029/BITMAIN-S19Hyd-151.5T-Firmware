// FUN_00b8dea0 @ 00b8dea0 size=348 calls_out=1 calls_in=1
// strings: 

void FUN_00b8dea0(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  int iVar14;
  undefined4 *puVar15;
  
  cVar2 = FUN_010e1310(param_1 + 0x38,param_1);
  cVar3 = FUN_010e1310(param_1 + 0xa8,param_1 + 0x70);
  iVar4 = 0x70;
  iVar14 = 0xa8;
  if (cVar3 == -1) {
    iVar4 = 0xa8;
  }
  puVar9 = (undefined4 *)(param_1 + iVar4);
  if (cVar3 == -1) {
    iVar14 = 0x70;
  }
  puVar12 = (undefined4 *)(param_1 + (uint)(cVar2 == -1) * 0x38);
  cVar3 = FUN_010e1310(puVar9,puVar12);
  puVar15 = (undefined4 *)(param_1 + iVar14);
  puVar7 = (undefined4 *)(param_1 + (uint)(cVar2 != -1) * 0x38);
  puVar13 = puVar9;
  if (cVar3 == -1) {
    puVar13 = puVar7;
  }
  cVar2 = FUN_010e1310(puVar15,puVar7);
  puVar8 = puVar7;
  puVar1 = puVar15;
  if (cVar2 == -1) {
    puVar8 = puVar9;
    puVar1 = puVar7;
    puVar13 = puVar15;
  }
  puVar7 = puVar12;
  if (cVar3 == -1) {
    puVar7 = puVar9;
    puVar8 = puVar12;
  }
  cVar2 = FUN_010e1310(puVar13,puVar8);
  uVar5 = puVar7[1];
  uVar6 = puVar7[2];
  uVar10 = puVar7[3];
  *param_2 = *puVar7;
  param_2[1] = uVar5;
  param_2[2] = uVar6;
  param_2[3] = uVar10;
  if (cVar2 == -1) {
    puVar9 = puVar8;
    puVar8 = puVar13;
  }
  else {
    puVar9 = puVar13;
  }
  uVar5 = puVar7[5];
  uVar6 = puVar7[6];
  uVar10 = puVar7[7];
  uVar11 = puVar7[8];
  param_2[4] = puVar7[4];
  param_2[5] = uVar5;
  param_2[6] = uVar6;
  param_2[7] = uVar10;
  param_2[8] = uVar11;
  uVar5 = puVar7[10];
  uVar6 = puVar7[0xb];
  uVar10 = puVar7[0xc];
  uVar11 = puVar7[0xd];
  param_2[9] = puVar7[9];
  param_2[10] = uVar5;
  param_2[0xb] = uVar6;
  param_2[0xc] = uVar10;
  param_2[0xd] = uVar11;
  uVar5 = puVar8[1];
  uVar6 = puVar8[2];
  uVar10 = puVar8[3];
  param_2[0xe] = *puVar8;
  param_2[0xf] = uVar5;
  param_2[0x10] = uVar6;
  param_2[0x11] = uVar10;
  uVar5 = puVar8[5];
  uVar6 = puVar8[6];
  uVar10 = puVar8[7];
  uVar11 = puVar8[8];
  param_2[0x12] = puVar8[4];
  param_2[0x13] = uVar5;
  param_2[0x14] = uVar6;
  param_2[0x15] = uVar10;
  param_2[0x16] = uVar11;
  uVar5 = puVar8[10];
  uVar6 = puVar8[0xb];
  uVar10 = puVar8[0xc];
  uVar11 = puVar8[0xd];
  param_2[0x17] = puVar8[9];
  param_2[0x18] = uVar5;
  param_2[0x19] = uVar6;
  param_2[0x1a] = uVar10;
  param_2[0x1b] = uVar11;
  uVar5 = puVar9[1];
  uVar6 = puVar9[2];
  uVar10 = puVar9[3];
  param_2[0x1c] = *puVar9;
  param_2[0x1d] = uVar5;
  param_2[0x1e] = uVar6;
  param_2[0x1f] = uVar10;
  uVar5 = puVar9[5];
  uVar6 = puVar9[6];
  uVar10 = puVar9[7];
  uVar11 = puVar9[8];
  param_2[0x20] = puVar9[4];
  param_2[0x21] = uVar5;
  param_2[0x22] = uVar6;
  param_2[0x23] = uVar10;
  param_2[0x24] = uVar11;
  uVar5 = puVar9[10];
  uVar6 = puVar9[0xb];
  uVar10 = puVar9[0xc];
  uVar11 = puVar9[0xd];
  param_2[0x25] = puVar9[9];
  param_2[0x26] = uVar5;
  param_2[0x27] = uVar6;
  param_2[0x28] = uVar10;
  param_2[0x29] = uVar11;
  uVar5 = puVar1[1];
  uVar6 = puVar1[2];
  uVar10 = puVar1[3];
  param_2[0x2a] = *puVar1;
  param_2[0x2b] = uVar5;
  param_2[0x2c] = uVar6;
  param_2[0x2d] = uVar10;
  uVar5 = puVar1[5];
  uVar6 = puVar1[6];
  uVar10 = puVar1[7];
  uVar11 = puVar1[8];
  param_2[0x2e] = puVar1[4];
  param_2[0x2f] = uVar5;
  param_2[0x30] = uVar6;
  param_2[0x31] = uVar10;
  param_2[0x32] = uVar11;
  uVar5 = puVar1[10];
  uVar6 = puVar1[0xb];
  uVar10 = puVar1[0xc];
  uVar11 = puVar1[0xd];
  param_2[0x33] = puVar1[9];
  param_2[0x34] = uVar5;
  param_2[0x35] = uVar6;
  param_2[0x36] = uVar10;
  param_2[0x37] = uVar11;
  return;
}

