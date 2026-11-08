// FUN_00b5e7fc @ 00b5e7fc size=216 calls_out=0 calls_in=1
// strings: 

void FUN_00b5e7fc(uint *param_1,int param_2)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined4 *puVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  uint *puVar18;
  
  iVar15 = 0;
  puVar2 = param_1 + 0xc;
  do {
    uVar17 = *puVar2;
    if (uVar17 < puVar2[-0xc]) {
      uVar4 = puVar2[1];
      uVar6 = puVar2[2];
      uVar8 = puVar2[3];
      uVar10 = puVar2[4];
      uVar12 = puVar2[5];
      uVar3 = puVar2[6];
      uVar5 = puVar2[7];
      uVar7 = puVar2[8];
      uVar9 = puVar2[9];
      uVar11 = puVar2[10];
      uVar13 = puVar2[0xb];
      iVar1 = iVar15;
      do {
        iVar16 = iVar1;
        puVar14 = (undefined4 *)((int)param_1 + iVar16);
        puVar14[0xc] = *puVar14;
        puVar14[0xd] = puVar14[1];
        puVar14[0xe] = puVar14[2];
        puVar14[0xf] = puVar14[3];
        puVar14[0x10] = puVar14[4];
        puVar14[0x11] = puVar14[5];
        puVar14[0x12] = puVar14[6];
        puVar14[0x13] = puVar14[7];
        puVar14[0x14] = puVar14[8];
        puVar14[0x15] = puVar14[9];
        puVar14[0x16] = puVar14[10];
        puVar14[0x17] = puVar14[0xb];
        if (iVar16 == 0) {
          puVar18 = param_1;
          goto LAB_00b5e828;
        }
        iVar1 = iVar16 + -0x30;
      } while (uVar17 < (uint)puVar14[-0xc]);
      puVar18 = (uint *)((int)param_1 + iVar16);
LAB_00b5e828:
      *puVar18 = uVar17;
      puVar18[1] = uVar4;
      puVar18[2] = uVar6;
      puVar18[3] = uVar8;
      puVar18[4] = uVar10;
      puVar18[5] = uVar12;
      puVar18[6] = uVar3;
      puVar18[7] = uVar5;
      puVar18[8] = uVar7;
      puVar18[9] = uVar9;
      puVar18[10] = uVar11;
      puVar18[0xb] = uVar13;
    }
    puVar2 = puVar2 + 0xc;
    iVar15 = iVar15 + 0x30;
    if (puVar2 == param_1 + param_2 * 0xc) {
      return;
    }
  } while( true );
}

