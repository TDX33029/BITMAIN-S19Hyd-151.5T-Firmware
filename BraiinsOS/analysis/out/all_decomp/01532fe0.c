// FUN_01532fe0 @ 01532fe0 size=2068 calls_out=8 calls_in=1
// strings: 

undefined4 FUN_01532fe0(int *param_1,undefined4 *param_2)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint *puVar16;
  uint uVar17;
  uint uVar18;
  uint *puVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  bool bVar24;
  
  iVar20 = param_1[3];
  uVar3 = iVar20 + 1;
  if (iVar20 != -1) {
    uVar18 = param_1[1];
    uVar12 = uVar18 + 1;
    uVar14 = uVar18;
    if (7 < uVar18) {
      uVar14 = (uVar12 & 0xfffffff8) - (uVar12 >> 3);
    }
    if (uVar3 <= uVar14 >> 1) {
      if (uVar12 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = uVar12 >> 2;
        if ((uVar12 & 3) != 0) {
          uVar3 = (uVar12 >> 2) + 1;
        }
        puVar16 = (uint *)*param_1;
        iVar5 = 0;
        do {
          puVar16[-iVar5] = (~(puVar16[-iVar5] >> 7) & 0x1010101) + (puVar16[-iVar5] | 0x7f7f7f7f);
          iVar5 = iVar5 + -1;
        } while (-iVar5 != uVar3);
        puVar19 = puVar16 + 1;
        if (uVar12 < 4) {
          FUN_016dd52c(puVar19,puVar16);
        }
        else {
          *(uint *)((int)puVar16 + uVar12) = *puVar16;
        }
        uVar6 = *param_2;
        uVar7 = param_2[1];
        uVar8 = param_2[2];
        uVar9 = param_2[3];
        uVar14 = param_1[1];
        uVar3 = 0;
        do {
          if (*(char *)((int)puVar16 + uVar3) == -0x80) {
            puVar10 = puVar16 + ~uVar3 * 0x24;
            while( true ) {
              uVar11 = FUN_0156d824(uVar6,uVar7,uVar8,uVar9,puVar16 + uVar3 * -0x24 + -0x24);
              uVar15 = uVar14 & uVar11;
              uVar17 = *(uint *)((int)puVar16 + uVar15) & 0x80808080;
              uVar12 = uVar15;
              if (uVar17 == 0) {
                iVar5 = 4;
                do {
                  uVar12 = uVar12 + iVar5 & uVar14;
                  iVar5 = iVar5 + 4;
                  uVar17 = *(uint *)((int)puVar16 + uVar12) & 0x80808080;
                } while (uVar17 == 0);
              }
              uVar12 = uVar12 + ((uint)LZCOUNT(uVar17 << 0x18 | (uVar17 >> 8 & 0xff) << 0x10 |
                                               (uVar17 >> 0x10 & 0xff) << 8 | uVar17 >> 0x18) >> 3)
                       & uVar14;
              if (-1 < *(char *)((int)puVar16 + uVar12)) {
                uVar12 = *puVar16 & 0x80808080;
                uVar12 = (uint)LZCOUNT((*puVar16 & 0x80) << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 |
                                       (uVar12 >> 0x10 & 0xff) << 8 | uVar12 >> 0x18) >> 3;
              }
              bVar2 = (byte)(uVar11 >> 0x18);
              if (((uVar12 - uVar15 ^ uVar3 - uVar15) & uVar14) < 4) {
                bVar2 = bVar2 >> 1;
                *(byte *)((int)puVar16 + uVar3) = bVar2;
                *(byte *)((int)puVar19 + (uVar14 & uVar3 - 4)) = bVar2;
                goto LAB_015334b0;
              }
              cVar1 = *(char *)((int)puVar16 + uVar12);
              bVar2 = bVar2 >> 1;
              *(byte *)((int)puVar16 + uVar12) = bVar2;
              *(byte *)((int)puVar19 + (uVar12 - 4 & uVar14)) = bVar2;
              puVar4 = puVar16 + ~uVar12 * 0x24;
              if (cVar1 == -1) break;
              uVar12 = puVar4[1];
              uVar11 = puVar4[2];
              uVar15 = puVar4[3];
              puVar4[1] = puVar10[1];
              uVar22 = *puVar4;
              uVar17 = puVar10[2];
              uVar23 = puVar10[3];
              puVar10[1] = uVar12;
              uVar12 = puVar10[5];
              *puVar4 = *puVar10;
              *puVar10 = uVar22;
              puVar4[2] = uVar17;
              uVar17 = puVar4[4];
              puVar10[2] = uVar11;
              uVar11 = puVar4[5];
              puVar10[3] = uVar15;
              puVar4[4] = puVar10[4];
              puVar4[3] = uVar23;
              puVar10[5] = uVar11;
              uVar11 = puVar10[8];
              puVar10[4] = uVar17;
              uVar15 = puVar10[7];
              uVar17 = puVar4[7];
              puVar4[5] = uVar12;
              uVar12 = puVar10[6];
              puVar4[7] = uVar15;
              uVar15 = puVar4[6];
              puVar4[6] = uVar12;
              puVar10[8] = puVar4[8];
              uVar12 = puVar10[0xb];
              puVar10[6] = uVar15;
              puVar10[7] = uVar17;
              uVar17 = puVar10[10];
              uVar15 = puVar4[10];
              puVar4[8] = uVar11;
              uVar11 = puVar10[9];
              puVar4[10] = uVar17;
              uVar17 = puVar4[9];
              puVar4[9] = uVar11;
              puVar10[0xb] = puVar4[0xb];
              uVar11 = puVar10[0xe];
              puVar10[9] = uVar17;
              puVar10[10] = uVar15;
              uVar15 = puVar10[0xd];
              uVar17 = puVar4[0xd];
              puVar4[0xb] = uVar12;
              uVar12 = puVar10[0xc];
              puVar4[0xd] = uVar15;
              uVar15 = puVar4[0xc];
              puVar4[0xc] = uVar12;
              puVar10[0xe] = puVar4[0xe];
              uVar12 = puVar10[0x11];
              puVar10[0xc] = uVar15;
              puVar10[0xd] = uVar17;
              uVar17 = puVar10[0x10];
              uVar15 = puVar4[0x10];
              puVar4[0xe] = uVar11;
              uVar11 = puVar10[0xf];
              puVar4[0x10] = uVar17;
              uVar17 = puVar4[0xf];
              puVar4[0xf] = uVar11;
              puVar10[0x11] = puVar4[0x11];
              uVar11 = puVar10[0x14];
              puVar10[0xf] = uVar17;
              puVar10[0x10] = uVar15;
              uVar15 = puVar10[0x13];
              uVar17 = puVar4[0x13];
              puVar4[0x11] = uVar12;
              uVar12 = puVar10[0x12];
              puVar4[0x13] = uVar15;
              uVar15 = puVar4[0x12];
              puVar4[0x12] = uVar12;
              puVar10[0x14] = puVar4[0x14];
              uVar12 = puVar10[0x17];
              puVar10[0x12] = uVar15;
              puVar10[0x13] = uVar17;
              uVar17 = puVar10[0x16];
              uVar15 = puVar4[0x16];
              puVar4[0x14] = uVar11;
              uVar11 = puVar10[0x15];
              puVar4[0x16] = uVar17;
              uVar17 = puVar4[0x15];
              puVar4[0x15] = uVar11;
              puVar10[0x17] = puVar4[0x17];
              uVar11 = puVar10[0x1a];
              puVar10[0x15] = uVar17;
              puVar10[0x16] = uVar15;
              uVar15 = puVar10[0x19];
              uVar17 = puVar4[0x19];
              puVar4[0x17] = uVar12;
              uVar12 = puVar10[0x18];
              puVar4[0x19] = uVar15;
              uVar15 = puVar4[0x18];
              puVar4[0x18] = uVar12;
              puVar10[0x1a] = puVar4[0x1a];
              uVar12 = puVar10[0x1d];
              puVar10[0x18] = uVar15;
              puVar10[0x19] = uVar17;
              uVar15 = puVar10[0x1c];
              uVar17 = puVar4[0x1c];
              puVar4[0x1a] = uVar11;
              puVar4[0x1c] = uVar15;
              puVar10[0x1d] = puVar4[0x1d];
              uVar11 = puVar10[0x20];
              uVar15 = puVar10[0x1b];
              puVar10[0x1b] = puVar4[0x1b];
              puVar4[0x1b] = uVar15;
              uVar22 = puVar10[0x1e];
              uVar15 = puVar4[0x1e];
              puVar4[0x1d] = uVar12;
              puVar10[0x1c] = uVar17;
              puVar10[0x1e] = uVar15;
              uVar15 = puVar10[0x21];
              puVar4[0x1e] = uVar22;
              uVar12 = puVar4[0x20];
              uVar17 = puVar10[0x22];
              uVar22 = puVar4[0x1f];
              puVar4[0x1f] = puVar10[0x1f];
              puVar10[0x1f] = uVar22;
              puVar10[0x20] = uVar12;
              uVar23 = puVar4[0x21];
              uVar22 = puVar4[0x22];
              puVar4[0x20] = uVar11;
              puVar4[0x21] = uVar15;
              uVar11 = puVar10[0x23];
              uVar12 = puVar4[0x23];
              puVar10[0x21] = uVar23;
              puVar10[0x22] = uVar22;
              puVar4[0x22] = uVar17;
              puVar10[0x23] = uVar12;
              puVar4[0x23] = uVar11;
            }
            *(undefined1 *)((int)puVar16 + uVar3) = 0xff;
            *(undefined1 *)((int)puVar19 + (uVar18 & uVar3 - 4)) = 0xff;
            FUN_016dd1aa(puVar4,puVar10,0x90);
          }
LAB_015334b0:
          bVar24 = uVar3 != uVar18;
          uVar3 = uVar3 + 1;
        } while (bVar24);
        uVar3 = param_1[1];
        if (7 < uVar3) {
          uVar3 = (uVar3 + 1 & 0xfffffff8) - (uVar3 + 1 >> 3);
        }
      }
      param_1[2] = uVar3 - iVar20;
      return 0x80000001;
    }
    if (uVar3 < uVar14 + 1) {
      uVar3 = uVar14 + 1;
    }
    if (uVar3 < 0xf) {
      uVar14 = (uVar3 & 8) + 8;
      if (uVar3 < 4) {
        uVar14 = 4;
      }
    }
    else {
      if (0x1fffffff < uVar3) goto LAB_01533748;
      iVar5 = (int)((ulonglong)(uVar3 << 3) * 0x24924925 >> 0x20);
      uVar14 = (0xffffffffU >> LZCOUNT((iVar5 + (uVar3 * 8 - iVar5 >> 1) >> 2) - 1)) + 1;
    }
    uVar3 = (uint)((ulonglong)uVar14 * 0x90);
    if ((int)((ulonglong)uVar14 * 0x90 >> 0x20) == 0) {
      uVar18 = uVar14 + 4;
      uVar12 = uVar18 + uVar3;
      if ((!CARRY4(uVar18,uVar3)) && (uVar12 < 0x7ffffff9)) {
        iVar5 = thunk_FUN_016d4a50(uVar12);
        if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(8,uVar12);
        }
        puVar16 = (uint *)(iVar5 + uVar3);
        FUN_016dd606(puVar16,0xff,uVar18);
        uVar12 = uVar14 - 1;
        uVar3 = uVar12;
        if (7 < uVar12) {
          uVar3 = (uVar14 & 0xfffffff8) - (uVar14 >> 3);
        }
        if (iVar20 == 0) {
          iVar20 = 0;
        }
        else {
          puVar10 = (uint *)*param_1;
          iVar21 = 0;
          uVar14 = ~*puVar10 & 0x80808080;
          uVar6 = *param_2;
          uVar7 = param_2[1];
          uVar8 = param_2[2];
          uVar9 = param_2[3];
          iVar5 = iVar20;
          puVar19 = puVar10;
          do {
            if (uVar14 == 0) {
              do {
                puVar19 = puVar19 + 1;
                iVar21 = iVar21 + 4;
              } while ((*puVar19 & 0x80808080) == 0x80808080);
              uVar14 = *puVar19 & 0x80808080 ^ 0x80808080;
            }
            uVar17 = iVar21 + ((uint)LZCOUNT(uVar14 << 0x18 | (uVar14 >> 8 & 0xff) << 0x10 |
                                             (uVar14 >> 0x10 & 0xff) << 8 | uVar14 >> 0x18) >> 3);
            uVar18 = FUN_0156d824(uVar6,uVar7,uVar8,uVar9,puVar10 + uVar17 * -0x24 + -0x24);
            uVar11 = uVar12 & uVar18;
            uVar15 = *(uint *)((int)puVar16 + uVar11) & 0x80808080;
            if (uVar15 == 0) {
              iVar13 = 4;
              do {
                uVar11 = uVar11 + iVar13;
                iVar13 = iVar13 + 4;
                uVar11 = uVar11 & uVar12;
                uVar15 = *(uint *)((int)puVar16 + uVar11) & 0x80808080;
              } while (uVar15 == 0);
            }
            uVar11 = uVar11 + ((uint)LZCOUNT(uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 |
                                             (uVar15 >> 0x10 & 0xff) << 8 | uVar15 >> 0x18) >> 3) &
                     uVar12;
            if (-1 < *(char *)((int)puVar16 + uVar11)) {
              uVar11 = *puVar16 & 0x80808080;
              uVar11 = (uint)LZCOUNT((*puVar16 & 0x80) << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 |
                                     (uVar11 >> 0x10 & 0xff) << 8 | uVar11 >> 0x18) >> 3;
            }
            uVar14 = uVar14 - 1 & uVar14;
            bVar2 = (byte)(uVar18 >> 0x19);
            *(byte *)((int)puVar16 + uVar11) = bVar2;
            iVar5 = iVar5 + -1;
            *(byte *)((int)puVar16 + (uVar11 - 4 & uVar12) + 4) = bVar2;
            FUN_016dd1aa(puVar16 + ~uVar11 * 0x24,puVar10 + ~uVar17 * 0x24,0x90);
          } while (iVar5 != 0);
        }
        iVar5 = *param_1;
        iVar21 = param_1[1];
        *param_1 = (int)puVar16;
        param_1[1] = uVar12;
        param_1[2] = uVar3 - iVar20;
        param_1[3] = iVar20;
        if (iVar21 == 0) {
          return 0x80000001;
        }
        iVar20 = iVar21 * 0x90 + 0x90;
        if (iVar21 + iVar20 == -5) {
          return 0x80000001;
        }
        thunk_FUN_016d3fb4(iVar5 - iVar20);
        return 0x80000001;
      }
    }
  }
LAB_01533748:
                    /* WARNING: Subroutine does not return */
  FUN_00faa478(&DAT_004144a9,0x39,&DAT_01883228);
}

