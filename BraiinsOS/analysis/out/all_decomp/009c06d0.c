// FUN_009c06d0 @ 009c06d0 size=1588 calls_out=8 calls_in=1
// strings: 

undefined4 FUN_009c06d0(undefined4 *param_1,undefined4 *param_2)

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
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint *puVar14;
  uint uVar15;
  uint *puVar16;
  uint uVar17;
  uint *puVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  bool bVar23;
  uint *local_2c;
  
  iVar21 = param_1[3];
  uVar3 = iVar21 + 1;
  if (iVar21 != -1) {
    uVar17 = param_1[1];
    uVar11 = uVar17 + 1;
    uVar19 = (uVar11 & 0xfffffff8) - (uVar11 >> 3);
    uVar15 = uVar19;
    if (uVar17 < 8) {
      uVar15 = uVar17;
    }
    if (uVar3 <= uVar15 >> 1) {
      if (uVar11 == 0) {
        uVar19 = 0;
      }
      else {
        uVar3 = uVar11 >> 2;
        if ((uVar11 & 3) != 0) {
          uVar3 = (uVar11 >> 2) + 1;
        }
        puVar16 = (uint *)*param_1;
        iVar5 = 0;
        do {
          puVar16[-iVar5] = (~(puVar16[-iVar5] >> 7) & 0x1010101) + (puVar16[-iVar5] | 0x7f7f7f7f);
          iVar5 = iVar5 + -1;
        } while (-iVar5 != uVar3);
        puVar18 = puVar16 + 1;
        if (uVar11 < 4) {
          FUN_016dd52c(puVar18,puVar16);
        }
        else {
          *(uint *)((int)puVar16 + uVar11) = *puVar16;
        }
        uVar6 = *param_2;
        uVar7 = param_2[1];
        uVar8 = param_2[2];
        uVar9 = param_2[3];
        uVar3 = 0;
        do {
          if (*(char *)((int)puVar16 + uVar3) == -0x80) {
            puVar14 = puVar16 + ~uVar3 * 0xe;
            while( true ) {
              uVar11 = FUN_009bd960(uVar6,uVar7,uVar8,uVar9,puVar16[uVar3 * -0xe + -0xe],
                                    puVar16[uVar3 * -0xe + -0xd]);
              uVar10 = uVar17 & uVar11;
              uVar13 = *(uint *)((int)puVar16 + uVar10) & 0x80808080;
              uVar15 = uVar10;
              if (uVar13 == 0) {
                iVar5 = 4;
                do {
                  uVar15 = uVar15 + iVar5 & uVar17;
                  iVar5 = iVar5 + 4;
                  uVar13 = *(uint *)((int)puVar16 + uVar15) & 0x80808080;
                } while (uVar13 == 0);
              }
              uVar15 = uVar15 + ((uint)LZCOUNT(uVar13 << 0x18 | (uVar13 >> 8 & 0xff) << 0x10 |
                                               (uVar13 >> 0x10 & 0xff) << 8 | uVar13 >> 0x18) >> 3)
                       & uVar17;
              if (-1 < *(char *)((int)puVar16 + uVar15)) {
                uVar15 = *puVar16 & 0x80808080;
                uVar15 = (uint)LZCOUNT((*puVar16 & 0x80) << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 |
                                       (uVar15 >> 0x10 & 0xff) << 8 | uVar15 >> 0x18) >> 3;
              }
              bVar2 = (byte)(uVar11 >> 0x18);
              if (((uVar15 - uVar10 ^ uVar3 - uVar10) & uVar17) < 4) {
                bVar2 = bVar2 >> 1;
                *(byte *)((int)puVar16 + uVar3) = bVar2;
                *(byte *)((int)puVar18 + (uVar17 & uVar3 - 4)) = bVar2;
                goto LAB_009c09bc;
              }
              cVar1 = *(char *)((int)puVar16 + uVar15);
              bVar2 = bVar2 >> 1;
              *(byte *)((int)puVar16 + uVar15) = bVar2;
              *(byte *)((int)puVar18 + (uVar15 - 4 & uVar17)) = bVar2;
              puVar4 = puVar16 + ~uVar15 * 0xe;
              if (cVar1 == -1) break;
              uVar15 = *puVar4;
              uVar11 = puVar4[1];
              uVar10 = puVar14[1];
              *puVar4 = *puVar14;
              *puVar14 = uVar15;
              puVar14[1] = uVar11;
              puVar4[1] = uVar10;
              uVar15 = puVar4[2];
              uVar10 = puVar4[3];
              uVar11 = puVar14[3];
              puVar4[2] = puVar14[2];
              puVar14[2] = uVar15;
              puVar4[3] = uVar11;
              puVar14[3] = uVar10;
              uVar10 = puVar4[4];
              uVar11 = puVar14[5];
              uVar15 = puVar4[5];
              puVar4[4] = puVar14[4];
              puVar14[4] = uVar10;
              puVar14[5] = uVar15;
              puVar4[5] = uVar11;
              uVar11 = puVar14[6];
              uVar10 = puVar4[7];
              uVar15 = puVar14[7];
              puVar14[6] = puVar4[6];
              puVar4[6] = uVar11;
              puVar4[7] = uVar15;
              puVar14[7] = uVar10;
              uVar11 = puVar4[8];
              uVar10 = puVar14[9];
              uVar15 = puVar4[9];
              puVar4[8] = puVar14[8];
              puVar14[8] = uVar11;
              puVar14[9] = uVar15;
              puVar4[9] = uVar10;
              uVar11 = puVar4[10];
              uVar10 = puVar4[0xb];
              uVar15 = puVar14[0xb];
              puVar4[10] = puVar14[10];
              puVar4[0xb] = uVar15;
              puVar14[10] = uVar11;
              puVar14[0xb] = uVar10;
              uVar10 = puVar4[0xc];
              uVar15 = puVar14[0xd];
              uVar11 = puVar4[0xd];
              puVar4[0xc] = puVar14[0xc];
              puVar14[0xc] = uVar10;
              puVar14[0xd] = uVar11;
              puVar4[0xd] = uVar15;
            }
            *(undefined1 *)((int)puVar16 + uVar3) = 0xff;
            *(undefined1 *)((int)puVar18 + (uVar17 & uVar3 - 4)) = 0xff;
            FUN_016dd1aa(puVar4,puVar14,0x38);
          }
LAB_009c09bc:
          bVar23 = uVar3 != uVar17;
          uVar3 = uVar3 + 1;
        } while (bVar23);
        if (uVar17 < 8) {
          uVar19 = uVar17;
        }
      }
      param_1[2] = uVar19 - iVar21;
      return 0x80000001;
    }
    if (uVar3 < uVar15 + 1) {
      uVar3 = uVar15 + 1;
    }
    if (uVar3 < 0xf) {
      uVar19 = (uVar3 & 8) + 8;
      if (uVar3 < 4) {
        uVar19 = 4;
      }
    }
    else {
      if (0x1fffffff < uVar3) goto LAB_009c0c40;
      iVar5 = (int)((ulonglong)(uVar3 << 3) * 0x24924925 >> 0x20);
      uVar19 = (0xffffffffU >> LZCOUNT((iVar5 + (uVar3 * 8 - iVar5 >> 1) >> 2) - 1)) + 1;
    }
    uVar3 = (uint)((ulonglong)uVar19 * 0x38);
    if ((int)((ulonglong)uVar19 * 0x38 >> 0x20) == 0) {
      uVar11 = uVar19 + 4;
      uVar15 = uVar3 + uVar11;
      if ((!CARRY4(uVar3,uVar11)) && (uVar15 < 0x7ffffff9)) {
        iVar5 = thunk_FUN_016d4a50(uVar15);
        if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(8,uVar15);
        }
        puVar16 = (uint *)(iVar5 + uVar3);
        FUN_016dd606(puVar16,0xff,uVar11);
        uVar15 = uVar19 - 1;
        uVar3 = uVar15;
        if (7 < uVar15) {
          uVar3 = (uVar19 & 0xfffffff8) - (uVar19 >> 3);
        }
        if (iVar21 == 0) {
          local_2c = (uint *)*param_1;
          iVar21 = 0;
        }
        else {
          uVar6 = *param_2;
          iVar22 = 0;
          local_2c = (uint *)*param_1;
          uVar7 = param_2[1];
          uVar8 = param_2[2];
          uVar19 = ~*local_2c & 0x80808080;
          uVar9 = param_2[3];
          puVar18 = local_2c;
          iVar5 = iVar21;
          do {
            if (uVar19 == 0) {
              do {
                puVar18 = puVar18 + 1;
                iVar22 = iVar22 + 4;
              } while ((*puVar18 & 0x80808080) == 0x80808080);
              uVar19 = *puVar18 & 0x80808080 ^ 0x80808080;
            }
            uVar20 = iVar22 + ((uint)LZCOUNT(uVar19 << 0x18 | (uVar19 >> 8 & 0xff) << 0x10 |
                                             (uVar19 >> 0x10 & 0xff) << 8 | uVar19 >> 0x18) >> 3);
            uVar11 = FUN_009bd960(uVar6,uVar7,uVar8,uVar9,local_2c[uVar20 * -0xe + -0xe],
                                  local_2c[uVar20 * -0xe + -0xd]);
            uVar10 = uVar15 & uVar11;
            uVar13 = *(uint *)((int)puVar16 + uVar10) & 0x80808080;
            if (uVar13 == 0) {
              iVar12 = 4;
              do {
                uVar10 = uVar10 + iVar12;
                iVar12 = iVar12 + 4;
                uVar10 = uVar10 & uVar15;
                uVar13 = *(uint *)((int)puVar16 + uVar10) & 0x80808080;
              } while (uVar13 == 0);
            }
            uVar10 = uVar10 + ((uint)LZCOUNT(uVar13 << 0x18 | (uVar13 >> 8 & 0xff) << 0x10 |
                                             (uVar13 >> 0x10 & 0xff) << 8 | uVar13 >> 0x18) >> 3) &
                     uVar15;
            if (-1 < *(char *)((int)puVar16 + uVar10)) {
              uVar10 = *puVar16 & 0x80808080;
              uVar10 = (uint)LZCOUNT((*puVar16 & 0x80) << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 |
                                     (uVar10 >> 0x10 & 0xff) << 8 | uVar10 >> 0x18) >> 3;
            }
            uVar19 = uVar19 - 1 & uVar19;
            bVar2 = (byte)(uVar11 >> 0x19);
            *(byte *)((int)puVar16 + uVar10) = bVar2;
            iVar5 = iVar5 + -1;
            *(byte *)((int)puVar16 + (uVar10 - 4 & uVar15) + 4) = bVar2;
            FUN_016dd1aa(puVar16 + ~uVar10 * 0xe,local_2c + ~uVar20 * 0xe,0x38);
          } while (iVar5 != 0);
        }
        *param_1 = puVar16;
        param_1[1] = uVar15;
        param_1[2] = uVar3 - iVar21;
        if (uVar17 == 0) {
          return 0x80000001;
        }
        iVar21 = uVar17 * 0x38 + 0x38;
        if (uVar17 + iVar21 == -5) {
          return 0x80000001;
        }
        thunk_FUN_016d3fb4((int)local_2c - iVar21);
        return 0x80000001;
      }
    }
  }
LAB_009c0c40:
                    /* WARNING: Subroutine does not return */
  FUN_00faa478(&DAT_004144a9,0x39,&DAT_01883228);
}

