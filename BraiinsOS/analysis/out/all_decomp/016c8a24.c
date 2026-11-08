// FUN_016c8a24 @ 016c8a24 size=320 calls_out=1 calls_in=1
// strings: 

void FUN_016c8a24(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 *puVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  int iVar20;
  int iVar21;
  undefined4 uVar22;
  uint uVar23;
  
  puVar16 = param_1 + 0xe;
  iVar20 = 0;
  do {
    uVar13 = puVar16[-0xc];
    uVar22 = puVar16[1];
    uVar23 = puVar16[2];
    uVar3 = uVar13;
    if (uVar23 < uVar13) {
      uVar3 = uVar23;
    }
    uVar3 = FUN_016dd50a(uVar22,puVar16[-0xd],uVar3);
    if (uVar3 == 0) {
      uVar3 = uVar23 - uVar13;
    }
    if (0x7fffffff < uVar3) {
      uVar6 = *puVar16;
      uVar7 = puVar16[3];
      uVar9 = puVar16[4];
      uVar11 = puVar16[5];
      uVar14 = puVar16[6];
      uVar18 = puVar16[7];
      uVar8 = puVar16[8];
      uVar10 = puVar16[9];
      uVar12 = puVar16[10];
      uVar15 = puVar16[0xb];
      uVar17 = puVar16[0xc];
      uVar19 = puVar16[0xd];
      iVar1 = iVar20;
      do {
        iVar21 = iVar1;
        puVar4 = (undefined4 *)((int)param_1 + iVar21);
        puVar4[0xe] = *puVar4;
        puVar4[0xf] = puVar4[1];
        puVar4[0x10] = puVar4[2];
        puVar4[0x11] = puVar4[3];
        puVar4[0x12] = puVar4[4];
        puVar4[0x13] = puVar4[5];
        puVar4[0x14] = puVar4[6];
        puVar4[0x15] = puVar4[7];
        puVar4[0x16] = puVar4[8];
        puVar4[0x17] = puVar4[9];
        puVar4[0x18] = puVar4[10];
        puVar4[0x19] = puVar4[0xb];
        puVar4[0x1a] = puVar4[0xc];
        puVar4[0x1b] = puVar4[0xd];
        if (iVar21 == 0) {
          puVar2 = param_1;
          goto LAB_016c8a4c;
        }
        uVar13 = puVar4[-0xc];
        uVar3 = uVar13;
        if (uVar23 < uVar13) {
          uVar3 = uVar23;
        }
        iVar5 = FUN_016dd50a(uVar22,puVar4[-0xd],uVar3);
        if (iVar5 == 0) {
          iVar5 = uVar23 - uVar13;
        }
        iVar1 = iVar21 + -0x38;
      } while (iVar5 < 0);
      puVar2 = (undefined4 *)((int)param_1 + iVar21);
LAB_016c8a4c:
      *puVar2 = uVar6;
      puVar4[1] = uVar22;
      puVar4[2] = uVar23;
      puVar4[3] = uVar7;
      puVar4[4] = uVar9;
      puVar4[5] = uVar11;
      puVar4[6] = uVar14;
      puVar4[7] = uVar18;
      puVar4[8] = uVar8;
      puVar4[9] = uVar10;
      puVar4[10] = uVar12;
      puVar4[0xb] = uVar15;
      puVar4[0xc] = uVar17;
      puVar4[0xd] = uVar19;
    }
    puVar16 = puVar16 + 0xe;
    iVar20 = iVar20 + 0x38;
    if (puVar16 == param_1 + param_2 * 0xe) {
      return;
    }
  } while( true );
}

