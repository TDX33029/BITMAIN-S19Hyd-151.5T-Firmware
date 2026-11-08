// FUN_011a7d18 @ 011a7d18 size=1756 calls_out=5 calls_in=1
// strings: 

uint FUN_011a7d18(int *param_1,uint *param_2)

{
  char cVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined4 *puVar13;
  uint *puVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  uint uVar24;
  bool bVar25;
  uint *local_48;
  uint local_44;
  int local_40;
  uint local_38;
  uint uStack_34;
  uint local_30;
  uint uStack_2c;
  
  uVar11 = param_1[3] + 1;
  if (0xfffffffe < (uint)param_1[3]) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_004144a9,0x39,&DAT_01883228);
  }
  uVar21 = param_1[1];
  uVar9 = uVar21 + 1;
  uVar5 = uVar21;
  if (7 < uVar21) {
    uVar5 = (uVar9 & 0xfffffff8) - (uVar9 >> 3);
  }
  if (uVar5 >> 1 < uVar11) {
    if (uVar11 < uVar5 + 1) {
      uVar11 = uVar5 + 1;
    }
    FUN_011a5370(&local_48,4,4,uVar11);
    uVar11 = local_44;
    puVar6 = local_48;
    if (local_48 == (uint *)0x0) {
      return local_44;
    }
    iVar15 = param_1[3];
    if (iVar15 == 0) {
      iVar15 = 0;
    }
    else {
      puVar14 = (uint *)*param_1;
      uVar10 = *param_2;
      uVar17 = param_2[1];
      uVar19 = ~*puVar14 & 0x80808080;
      uVar5 = param_2[2];
      uVar9 = param_2[3];
      puVar7 = (uint *)param_2[4];
      uVar21 = param_2[5];
      iVar20 = 0;
      do {
        if (uVar19 == 0) {
          do {
            puVar14 = puVar14 + 1;
            iVar20 = iVar20 + 4;
          } while ((*puVar14 & 0x80808080) == 0x80808080);
          uVar19 = *puVar14 & 0x80808080 ^ 0x80808080;
        }
        uVar22 = iVar20 + ((uint)LZCOUNT(uVar19 << 0x18 | (uVar19 >> 8 & 0xff) << 0x10 |
                                         (uVar19 >> 0x10 & 0xff) << 8 | uVar19 >> 0x18) >> 3);
        local_48 = puVar7;
        local_44 = uVar21;
        local_38 = uVar5;
        uStack_34 = uVar9;
        local_30 = uVar10;
        uStack_2c = uVar17;
        FUN_011dfcb4(*param_1 + uVar22 * -4 + -4,&local_48);
        uVar8 = uStack_2c << 0x18 | (uStack_2c >> 8 & 0xff) << 0x10 |
                (uStack_2c >> 0x10 & 0xff) << 8 | uStack_2c >> 0x18;
        lVar3 = (ulonglong)local_38 * (ulonglong)uVar8;
        uVar12 = uStack_34 << 0x18 | (uStack_34 >> 8 & 0xff) << 0x10 |
                 (uStack_34 >> 0x10 & 0xff) << 8 | uStack_34 >> 0x18;
        lVar4 = (ulonglong)~local_30 * (ulonglong)uVar12;
        uVar24 = (uint)lVar4;
        uVar12 = (local_38 << 0x18 | (local_38 >> 8 & 0xff) << 0x10 | (local_38 >> 0x10 & 0xff) << 8
                 | local_38 >> 0x18) * ~local_30 +
                 uVar12 * ~uStack_2c + (int)((ulonglong)lVar4 >> 0x20);
        uVar12 = (uint)lVar3 ^
                 (uVar12 * 0x1000000 | (uVar12 >> 8 & 0xff) << 0x10 | (uVar12 >> 0x10 & 0xff) << 8 |
                 uVar12 >> 0x18);
        uVar24 = (local_30 << 0x18 | (local_30 >> 8 & 0xff) << 0x10 | (local_30 >> 0x10 & 0xff) << 8
                 | local_30 >> 0x18) * local_38 +
                 uVar8 * uStack_34 + (int)((ulonglong)lVar3 >> 0x20) ^
                 (uVar24 << 0x18 | (uVar24 >> 8 & 0xff) << 0x10 | (uVar24 >> 0x10 & 0xff) << 8 |
                 uVar24 >> 0x18);
        uVar8 = uVar24;
        if ((local_38 & 0x20) != 0) {
          uVar8 = uVar12;
          uVar12 = uVar24;
        }
        uVar24 = uVar12 << (local_38 & 0x1f) | (uVar8 >> 1) >> (~local_38 & 0x1f);
        uVar12 = uVar11 & uVar24;
        uVar8 = *(uint *)((int)puVar6 + uVar12) & 0x80808080;
        if (uVar8 == 0) {
          iVar23 = 4;
          do {
            uVar12 = uVar12 + iVar23;
            iVar23 = iVar23 + 4;
            uVar12 = uVar12 & uVar11;
            uVar8 = *(uint *)((int)puVar6 + uVar12) & 0x80808080;
          } while (uVar8 == 0);
        }
        uVar12 = uVar12 + ((uint)LZCOUNT(uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 |
                                         (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18) >> 3) & uVar11
        ;
        if (-1 < *(char *)((int)puVar6 + uVar12)) {
          uVar12 = *puVar6 & 0x80808080;
          uVar12 = (uint)LZCOUNT((*puVar6 & 0x80) << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 |
                                 (uVar12 >> 0x10 & 0xff) << 8 | uVar12 >> 0x18) >> 3;
        }
        uVar19 = uVar19 - 1 & uVar19;
        bVar2 = (byte)(uVar24 >> 0x19);
        *(byte *)((int)puVar6 + uVar12) = bVar2;
        iVar15 = iVar15 + -1;
        *(byte *)((int)puVar6 + (uVar12 - 4 & uVar11) + 4) = bVar2;
        puVar6[~uVar12] = *(uint *)(*param_1 + ~uVar22 * 4);
      } while (iVar15 != 0);
      iVar15 = param_1[3];
    }
    iVar23 = *param_1;
    iVar20 = param_1[1];
    *param_1 = (int)puVar6;
    param_1[1] = uVar11;
    param_1[2] = local_40 - iVar15;
    param_1[3] = iVar15;
    if ((iVar20 != 0) && (iVar15 = iVar20 * 4 + 4, iVar20 + iVar15 != -5)) {
      thunk_FUN_016d3fb4(iVar23 - iVar15);
    }
  }
  else {
    if (uVar9 == 0) {
      uVar11 = 0;
    }
    else {
      uVar11 = uVar9 >> 2;
      if ((uVar9 & 3) != 0) {
        uVar11 = (uVar9 >> 2) + 1;
      }
      puVar13 = (undefined4 *)*param_1;
      iVar15 = 0;
      do {
        puVar13[-iVar15] =
             (~((uint)puVar13[-iVar15] >> 7) & 0x1010101) + (puVar13[-iVar15] | 0x7f7f7f7f);
        iVar15 = iVar15 + -1;
      } while (-iVar15 != uVar11);
      if (uVar9 < 4) {
        FUN_016dd52c(puVar13 + 1,puVar13);
      }
      else {
        *(undefined4 *)((int)puVar13 + uVar9) = *puVar13;
      }
      uVar5 = param_2[2];
      uVar9 = param_2[3];
      puVar6 = (uint *)param_2[4];
      uVar10 = param_2[5];
      uVar17 = *param_2;
      uVar19 = param_2[1];
      uVar11 = 0;
      do {
        iVar15 = *param_1;
        if (*(char *)(iVar15 + uVar11) == -0x80) {
          uVar12 = ~uVar11;
          iVar20 = iVar15;
          while( true ) {
            local_48 = puVar6;
            local_44 = uVar10;
            local_38 = uVar5;
            uStack_34 = uVar9;
            local_30 = uVar17;
            uStack_2c = uVar19;
            FUN_011dfcb4(iVar20 + uVar11 * -4 + -4,&local_48);
            uVar24 = uStack_2c << 0x18 | (uStack_2c >> 8 & 0xff) << 0x10 |
                     (uStack_2c >> 0x10 & 0xff) << 8 | uStack_2c >> 0x18;
            lVar3 = (ulonglong)local_38 * (ulonglong)uVar24;
            uVar8 = uStack_34 << 0x18 | (uStack_34 >> 8 & 0xff) << 0x10 |
                    (uStack_34 >> 0x10 & 0xff) << 8 | uStack_34 >> 0x18;
            lVar4 = (ulonglong)~local_30 * (ulonglong)uVar8;
            uVar16 = (uint)lVar4;
            uVar8 = (local_38 << 0x18 | (local_38 >> 8 & 0xff) << 0x10 |
                     (local_38 >> 0x10 & 0xff) << 8 | local_38 >> 0x18) * ~local_30 +
                    uVar8 * ~uStack_2c + (int)((ulonglong)lVar4 >> 0x20);
            puVar7 = (uint *)*param_1;
            uVar22 = param_1[1];
            uVar8 = (uint)lVar3 ^
                    (uVar8 * 0x1000000 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 |
                    uVar8 >> 0x18);
            uVar16 = (local_30 << 0x18 | (local_30 >> 8 & 0xff) << 0x10 |
                      (local_30 >> 0x10 & 0xff) << 8 | local_30 >> 0x18) * local_38 +
                     uVar24 * uStack_34 + (int)((ulonglong)lVar3 >> 0x20) ^
                     (uVar16 << 0x18 | (uVar16 >> 8 & 0xff) << 0x10 | (uVar16 >> 0x10 & 0xff) << 8 |
                     uVar16 >> 0x18);
            uVar24 = uVar16;
            if ((local_38 & 0x20) != 0) {
              uVar24 = uVar8;
              uVar8 = uVar16;
            }
            uVar24 = uVar8 << (local_38 & 0x1f) | (uVar24 >> 1) >> (~local_38 & 0x1f);
            uVar16 = uVar22 & uVar24;
            uVar18 = *(uint *)((int)puVar7 + uVar16) & 0x80808080;
            uVar8 = uVar16;
            if (uVar18 == 0) {
              iVar20 = 4;
              do {
                uVar8 = uVar8 + iVar20 & uVar22;
                iVar20 = iVar20 + 4;
                uVar18 = *(uint *)((int)puVar7 + uVar8) & 0x80808080;
              } while (uVar18 == 0);
            }
            uVar8 = uVar8 + ((uint)LZCOUNT(uVar18 << 0x18 | (uVar18 >> 8 & 0xff) << 0x10 |
                                           (uVar18 >> 0x10 & 0xff) << 8 | uVar18 >> 0x18) >> 3) &
                    uVar22;
            if (-1 < *(char *)((int)puVar7 + uVar8)) {
              uVar8 = *puVar7 & 0x80808080;
              uVar8 = (uint)LZCOUNT((*puVar7 & 0x80) << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 |
                                    (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18) >> 3;
            }
            bVar2 = (byte)(uVar24 >> 0x18);
            if (((uVar8 - uVar16 ^ uVar11 - uVar16) & uVar22) < 4) {
              bVar2 = bVar2 >> 1;
              *(byte *)((int)puVar7 + uVar11) = bVar2;
              *(byte *)(*param_1 + (uVar22 & uVar11 - 4) + 4) = bVar2;
              goto LAB_011a82b4;
            }
            cVar1 = *(char *)((int)puVar7 + uVar8);
            bVar2 = bVar2 >> 1;
            *(byte *)((int)puVar7 + uVar8) = bVar2;
            *(byte *)(*param_1 + (uVar8 - 4 & uVar22) + 4) = bVar2;
            uVar8 = ~uVar8;
            if (cVar1 == -1) break;
            uVar24 = *(uint *)(iVar15 + uVar12 * 4);
            *(uint *)(iVar15 + uVar12 * 4) = puVar7[uVar8];
            puVar7[uVar8] = uVar24;
            iVar20 = *param_1;
          }
          uVar24 = param_1[1];
          *(undefined1 *)(*param_1 + uVar11) = 0xff;
          *(undefined1 *)(*param_1 + (uVar24 & uVar11 - 4) + 4) = 0xff;
          puVar7[uVar8] = *(uint *)(iVar15 + uVar12 * 4);
        }
LAB_011a82b4:
        bVar25 = uVar11 != uVar21;
        uVar11 = uVar11 + 1;
      } while (bVar25);
      uVar11 = param_1[1];
      if (7 < uVar11) {
        uVar11 = (uVar11 + 1 & 0xfffffff8) - (uVar11 + 1 >> 3);
      }
    }
    param_1[2] = uVar11 - param_1[3];
  }
  return 0x80000001;
}

