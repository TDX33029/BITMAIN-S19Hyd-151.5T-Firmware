// FUN_012bc068 @ 012bc068 size=748 calls_out=5 calls_in=2
// strings: 

void FUN_012bc068(uint *param_1,int param_2)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined4 uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  uint *puVar23;
  uint *puVar24;
  uint uVar25;
  uint uVar26;
  int iVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint *puVar32;
  uint uVar33;
  int iVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  int iVar38;
  uint *puVar39;
  
  puVar24 = param_1 + 0x14;
  do {
    puVar39 = puVar24 + -0x14;
    iVar4 = FUN_012bb508(puVar24,puVar39);
    if (iVar4 != 0) {
      uVar5 = puVar24[1];
      uVar6 = puVar24[4];
      uVar7 = puVar24[5];
      uVar15 = *puVar24;
      uVar8 = puVar24[2];
      uVar37 = puVar24[3];
      uVar36 = puVar24[6];
      uVar35 = puVar24[7];
      uVar9 = puVar24[8];
      uVar16 = puVar24[9];
      uVar20 = puVar24[10];
      uVar25 = puVar24[0xb];
      uVar28 = puVar24[0xc];
      uVar30 = puVar24[0xd];
      uVar10 = puVar24[0xe];
      uVar17 = puVar24[0xf];
      uVar21 = puVar24[0x10];
      uVar26 = puVar24[0x11];
      uVar29 = puVar24[0x12];
      uVar31 = puVar24[0x13];
      FUN_016dd1aa(puVar24,puVar39,0x50);
      puVar23 = param_1;
      if (puVar39 != param_1) {
        uVar12 = 0;
        uVar3 = 0;
        if ((uVar15 & 1) != 0) {
          uVar12 = uVar37;
          uVar3 = uVar8;
        }
        puVar23 = puVar39;
        do {
          if (uVar36 < uVar35) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa36c(0,uVar35,uVar36,&DAT_0188f948,puVar39);
          }
          uVar13 = puVar23[-0xd];
          if (puVar23[-0xe] < uVar13) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa36c(0,uVar13,puVar23[-0xe],&DAT_0188f948,puVar39);
          }
          puVar32 = puVar23 + -0x14;
          if (uVar35 == uVar13) {
            uVar13 = puVar23[-0xf];
            iVar27 = 0;
            iVar4 = uVar35 + 1;
            do {
              iVar4 = iVar4 + -1;
              if (iVar4 == 0) {
                uVar13 = 0;
                uVar33 = 0;
                if ((*puVar32 & 1) != 0) {
                  uVar13 = puVar23[-0x12];
                  uVar33 = puVar23[-0x11];
                }
                if ((int)(uVar12 - (uVar33 + (uVar3 < uVar13))) < 0 ==
                    (SBORROW4(uVar12,uVar33) != SBORROW4(uVar12 - uVar33,(uint)(uVar3 < uVar13))))
                goto LAB_012bc090;
                goto LAB_012bc1ac;
              }
              iVar38 = uVar13 + iVar27;
              iVar22 = 0;
              iVar14 = 0;
              iVar34 = uVar7 + iVar27;
              uVar11 = 1;
              cVar1 = *(char *)(iVar38 + 0x1c);
              uVar18 = 1;
              cVar2 = *(char *)(iVar34 + 0x1c);
              if (cVar2 != '\0') {
                iVar22 = *(int *)(uVar7 + iVar27 + 0x18);
                uVar11 = *(undefined4 *)(uVar7 + iVar27 + 0x14);
              }
              if (cVar1 == '\x01') {
                iVar14 = uVar13 + iVar27;
                uVar18 = *(undefined4 *)(iVar14 + 0x14);
                iVar14 = *(int *)(iVar14 + 0x18);
              }
              if (iVar22 != iVar14) break;
              iVar27 = iVar27 + 0x28;
              iVar22 = thunk_FUN_016dd50a(uVar11,uVar18,iVar22);
            } while (iVar22 == 0);
            uVar33 = 0;
            uVar18 = 1;
            uVar13 = 0;
            if (cVar2 != '\0') {
              uVar18 = *(undefined4 *)(iVar34 + 0x14);
            }
            uVar11 = 1;
            if (cVar2 != '\0') {
              uVar33 = *(uint *)(iVar34 + 0x18);
            }
            if (cVar1 != '\0') {
              uVar13 = *(uint *)(iVar38 + 0x18);
              uVar11 = *(undefined4 *)(iVar38 + 0x14);
            }
            uVar19 = uVar13;
            if (uVar33 < uVar13) {
              uVar19 = uVar33;
            }
            iVar4 = FUN_016dd50a(uVar18,uVar11,uVar19);
            if (iVar4 == 0) {
              iVar4 = uVar33 - uVar13;
            }
            if (-1 < iVar4) goto LAB_012bc090;
          }
          else if (uVar13 <= uVar35) goto LAB_012bc090;
LAB_012bc1ac:
          FUN_016dd1aa(puVar23,puVar32,0x50);
          puVar23 = puVar32;
        } while (puVar32 != param_1);
        puVar23 = param_1;
      }
LAB_012bc090:
      *puVar23 = uVar15;
      puVar23[1] = uVar5;
      puVar23[2] = uVar8;
      puVar23[3] = uVar37;
      puVar23[4] = uVar6;
      puVar23[5] = uVar7;
      puVar23[6] = uVar36;
      puVar23[7] = uVar35;
      puVar23[8] = uVar9;
      puVar23[9] = uVar16;
      puVar23[10] = uVar20;
      puVar23[0xb] = uVar25;
      puVar23[0xc] = uVar28;
      puVar23[0xd] = uVar30;
      puVar23[0xe] = uVar10;
      puVar23[0xf] = uVar17;
      puVar23[0x10] = uVar21;
      puVar23[0x11] = uVar26;
      puVar23[0x12] = uVar29;
      puVar23[0x13] = uVar31;
    }
    puVar24 = puVar24 + 0x14;
    if (puVar24 == param_1 + param_2 * 0x14) {
      return;
    }
  } while( true );
}

