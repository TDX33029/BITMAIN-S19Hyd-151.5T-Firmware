// FUN_00b5e644 @ 00b5e644 size=244 calls_out=0 calls_in=1
// strings: 

void FUN_00b5e644(uint *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  bool bVar15;
  
  puVar10 = param_1 + 8;
  iVar14 = 0;
  do {
    uVar9 = puVar10[1];
    uVar11 = *puVar10;
    bVar15 = puVar10[-8] <= uVar11;
    if (uVar11 == puVar10[-8]) {
      bVar15 = puVar10[-7] <= uVar9;
    }
    if (!bVar15) {
      uVar2 = puVar10[2];
      uVar3 = puVar10[3];
      uVar5 = puVar10[4];
      uVar6 = puVar10[5];
      uVar8 = puVar10[6];
      uVar12 = puVar10[7];
      iVar1 = iVar14;
      do {
        iVar13 = iVar1;
        puVar7 = (undefined4 *)((int)param_1 + iVar13);
        puVar7[8] = *puVar7;
        puVar7[9] = puVar7[1];
        puVar7[10] = puVar7[2];
        puVar7[0xb] = puVar7[3];
        puVar7[0xc] = puVar7[4];
        puVar7[0xd] = puVar7[5];
        puVar7[0xe] = puVar7[6];
        puVar7[0xf] = puVar7[7];
        if (iVar13 == 0) {
          puVar4 = param_1;
          goto LAB_00b5e664;
        }
        bVar15 = (uint)puVar7[-8] <= uVar11;
        if (uVar11 == puVar7[-8]) {
          bVar15 = (uint)puVar7[-7] <= uVar9;
        }
        iVar1 = iVar13 + -0x20;
      } while (!bVar15);
      puVar4 = (uint *)((int)param_1 + iVar13);
LAB_00b5e664:
      *puVar4 = uVar11;
      puVar4[1] = uVar9;
      puVar4[2] = uVar2;
      puVar4[3] = uVar3;
      puVar4[4] = uVar5;
      puVar4[5] = uVar6;
      puVar4[6] = uVar8;
      puVar4[7] = uVar12;
    }
    puVar10 = puVar10 + 8;
    iVar14 = iVar14 + 0x20;
    if (puVar10 == param_1 + param_2 * 8) {
      return;
    }
  } while( true );
}

