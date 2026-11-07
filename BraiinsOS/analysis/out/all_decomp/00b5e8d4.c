// FUN_00b5e8d4 @ 00b5e8d4 size=188 calls_out=0 calls_in=1
// strings: 

void FUN_00b5e8d4(uint *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint *puVar13;
  uint uVar14;
  
  puVar13 = param_1 + 8;
  iVar12 = 0;
  do {
    uVar14 = *puVar13;
    if (uVar14 < puVar13[-8]) {
      uVar2 = puVar13[1];
      uVar8 = puVar13[2];
      uVar10 = puVar13[3];
      uVar3 = puVar13[4];
      uVar5 = puVar13[5];
      uVar9 = puVar13[6];
      uVar11 = puVar13[7];
      iVar1 = iVar12;
      do {
        iVar6 = iVar1;
        puVar7 = (undefined4 *)((int)param_1 + iVar6);
        puVar7[8] = *puVar7;
        puVar7[9] = puVar7[1];
        puVar7[10] = puVar7[2];
        puVar7[0xb] = puVar7[3];
        puVar7[0xc] = puVar7[4];
        puVar7[0xd] = puVar7[5];
        puVar7[0xe] = puVar7[6];
        puVar7[0xf] = puVar7[7];
        if (iVar6 == 0) {
          puVar4 = param_1;
          goto LAB_00b5e8f4;
        }
        iVar1 = iVar6 + -0x20;
      } while (uVar14 < (uint)puVar7[-8]);
      puVar4 = (uint *)((int)param_1 + iVar6);
LAB_00b5e8f4:
      *puVar4 = uVar14;
      puVar4[1] = uVar2;
      puVar4[2] = uVar8;
      puVar4[3] = uVar10;
      puVar4[4] = uVar3;
      puVar4[5] = uVar5;
      puVar4[6] = uVar9;
      puVar4[7] = uVar11;
    }
    puVar13 = puVar13 + 8;
    iVar12 = iVar12 + 0x20;
    if (puVar13 == param_1 + param_2 * 8) {
      return;
    }
  } while( true );
}

