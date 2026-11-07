// FUN_00b5e164 @ 00b5e164 size=228 calls_out=0 calls_in=1
// strings: 

void FUN_00b5e164(uint *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  uint *puVar17;
  undefined4 *puVar18;
  uint uVar19;
  int iVar20;
  
  puVar17 = param_1 + 0xe;
  iVar20 = 0;
  do {
    uVar19 = *puVar17;
    if (uVar19 < puVar17[-0xe]) {
      uVar2 = puVar17[1];
      uVar5 = puVar17[2];
      uVar10 = puVar17[3];
      uVar13 = puVar17[4];
      uVar3 = puVar17[5];
      uVar6 = puVar17[6];
      uVar11 = puVar17[7];
      uVar14 = puVar17[8];
      uVar4 = puVar17[9];
      uVar7 = puVar17[10];
      uVar9 = puVar17[0xb];
      uVar12 = puVar17[0xc];
      uVar15 = puVar17[0xd];
      iVar1 = iVar20;
      do {
        iVar16 = iVar1;
        puVar18 = (undefined4 *)((int)param_1 + iVar16);
        puVar18[0xe] = *puVar18;
        puVar18[0xf] = puVar18[1];
        puVar18[0x10] = puVar18[2];
        puVar18[0x11] = puVar18[3];
        puVar18[0x12] = puVar18[4];
        puVar18[0x13] = puVar18[5];
        puVar18[0x14] = puVar18[6];
        puVar18[0x15] = puVar18[7];
        puVar18[0x16] = puVar18[8];
        puVar18[0x17] = puVar18[9];
        puVar18[0x18] = puVar18[10];
        puVar18[0x19] = puVar18[0xb];
        puVar18[0x1a] = puVar18[0xc];
        puVar18[0x1b] = puVar18[0xd];
        if (iVar16 == 0) {
          puVar8 = param_1;
          goto LAB_00b5e18c;
        }
        iVar1 = iVar16 + -0x38;
      } while (uVar19 < (uint)puVar18[-0xe]);
      puVar8 = (uint *)((int)param_1 + iVar16);
LAB_00b5e18c:
      *puVar8 = uVar19;
      puVar8[1] = uVar2;
      puVar8[2] = uVar5;
      puVar8[3] = uVar10;
      puVar8[4] = uVar13;
      puVar8[5] = uVar3;
      puVar8[6] = uVar6;
      puVar8[7] = uVar11;
      puVar8[8] = uVar14;
      puVar8[9] = uVar4;
      puVar8[10] = uVar7;
      puVar8[0xb] = uVar9;
      puVar8[0xc] = uVar12;
      puVar8[0xd] = uVar15;
    }
    puVar17 = puVar17 + 0xe;
    iVar20 = iVar20 + 0x38;
    if (puVar17 == param_1 + param_2 * 0xe) {
      return;
    }
  } while( true );
}

