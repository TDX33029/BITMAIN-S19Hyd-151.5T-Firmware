// FUN_01342798 @ 01342798 size=1864 calls_out=6 calls_in=1
// strings: 

uint FUN_01342798(int *param_1,uint *param_2)

{
  char cVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  uint *puVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint *puVar22;
  uint uVar23;
  int iVar24;
  uint uVar25;
  bool bVar26;
  uint *local_48;
  uint local_44;
  int local_40;
  uint uStack_3c;
  uint local_38;
  uint uStack_34;
  uint local_30;
  uint uStack_2c;
  
  uVar21 = param_1[3];
  uVar16 = uVar21 + 1;
  if (0xfffffffe < uVar21) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_004144a9,0x39,&DAT_01883228);
  }
  uVar23 = param_1[1];
  uVar13 = uVar23 + 1;
  uVar5 = uVar23;
  if (7 < uVar23) {
    uVar5 = (uVar13 & 0xfffffff8) - (uVar13 >> 3);
  }
  if (uVar5 >> 1 < uVar16) {
    if (uVar16 < uVar5 + 1) {
      uVar16 = uVar5 + 1;
    }
    FUN_013403c0(&local_48,0x28,uVar16);
    uVar16 = local_44;
    puVar22 = local_48;
    uVar5 = local_44;
    if (local_48 != (uint *)0x0) {
      if (uVar21 == 0) {
        uVar21 = 0;
      }
      else {
        uVar14 = *param_2;
        uVar17 = param_2[1];
        iVar24 = 0;
        puVar10 = (uint *)*param_1;
        uVar25 = ~*puVar10 & 0x80808080;
        uVar13 = param_2[2];
        uVar23 = param_2[3];
        puVar6 = (uint *)param_2[4];
        uVar7 = param_2[5];
        uVar8 = param_2[7];
        puVar9 = puVar10;
        uVar5 = uVar21;
        do {
          if (uVar25 == 0) {
            do {
              puVar9 = puVar9 + 1;
              iVar24 = iVar24 + 4;
            } while ((*puVar9 & 0x80808080) == 0x80808080);
            uVar25 = *puVar9 & 0x80808080 ^ 0x80808080;
          }
          uVar11 = iVar24 + ((uint)LZCOUNT(uVar25 << 0x18 | (uVar25 >> 8 & 0xff) << 0x10 |
                                           (uVar25 >> 0x10 & 0xff) << 8 | uVar25 >> 0x18) >> 3);
          local_48 = puVar6;
          local_44 = uVar7;
          uStack_3c = uVar8;
          local_38 = uVar13;
          uStack_34 = uVar23;
          local_30 = uVar14;
          uStack_2c = uVar17;
          FUN_01352290(&local_48,puVar10[uVar11 * -10 + -9],puVar10[uVar11 * -10 + -8]);
          uVar20 = uStack_2c << 0x18 | (uStack_2c >> 8 & 0xff) << 0x10 |
                   (uStack_2c >> 0x10 & 0xff) << 8 | uStack_2c >> 0x18;
          lVar3 = (ulonglong)local_38 * (ulonglong)uVar20;
          uVar18 = uStack_34 << 0x18 | (uStack_34 >> 8 & 0xff) << 0x10 |
                   (uStack_34 >> 0x10 & 0xff) << 8 | uStack_34 >> 0x18;
          lVar4 = (ulonglong)~local_30 * (ulonglong)uVar18;
          uVar19 = (uint)lVar4;
          uVar18 = (local_38 << 0x18 | (local_38 >> 8 & 0xff) << 0x10 |
                    (local_38 >> 0x10 & 0xff) << 8 | local_38 >> 0x18) * ~local_30 +
                   uVar18 * ~uStack_2c + (int)((ulonglong)lVar4 >> 0x20);
          uVar20 = (local_30 << 0x18 | (local_30 >> 8 & 0xff) << 0x10 |
                    (local_30 >> 0x10 & 0xff) << 8 | local_30 >> 0x18) * local_38 +
                   uVar20 * uStack_34 + (int)((ulonglong)lVar3 >> 0x20) ^
                   (uVar19 << 0x18 | (uVar19 >> 8 & 0xff) << 0x10 | (uVar19 >> 0x10 & 0xff) << 8 |
                   uVar19 >> 0x18);
          uVar18 = (uint)lVar3 ^
                   (uVar18 * 0x1000000 | (uVar18 >> 8 & 0xff) << 0x10 | (uVar18 >> 0x10 & 0xff) << 8
                   | uVar18 >> 0x18);
          uVar19 = uVar20;
          if ((local_38 & 0x20) != 0) {
            uVar19 = uVar18;
            uVar18 = uVar20;
          }
          uVar18 = uVar18 << (local_38 & 0x1f) | (uVar19 >> 1) >> (~local_38 & 0x1f);
          uVar19 = uVar16 & uVar18;
          uVar20 = *(uint *)((int)puVar22 + uVar19) & 0x80808080;
          if (uVar20 == 0) {
            iVar12 = 4;
            do {
              uVar19 = uVar19 + iVar12;
              iVar12 = iVar12 + 4;
              uVar19 = uVar19 & uVar16;
              uVar20 = *(uint *)((int)puVar22 + uVar19) & 0x80808080;
            } while (uVar20 == 0);
          }
          uVar19 = uVar19 + ((uint)LZCOUNT(uVar20 << 0x18 | (uVar20 >> 8 & 0xff) << 0x10 |
                                           (uVar20 >> 0x10 & 0xff) << 8 | uVar20 >> 0x18) >> 3) &
                   uVar16;
          if (-1 < *(char *)((int)puVar22 + uVar19)) {
            uVar19 = *puVar22 & 0x80808080;
            uVar19 = (uint)LZCOUNT((*puVar22 & 0x80) << 0x18 | (uVar19 >> 8 & 0xff) << 0x10 |
                                   (uVar19 >> 0x10 & 0xff) << 8 | uVar19 >> 0x18) >> 3;
          }
          uVar25 = uVar25 - 1 & uVar25;
          bVar2 = (byte)(uVar18 >> 0x19);
          *(byte *)((int)puVar22 + uVar19) = bVar2;
          uVar5 = uVar5 - 1;
          *(byte *)((int)puVar22 + (uVar19 - 4 & uVar16) + 4) = bVar2;
          FUN_016dd1aa(puVar22 + ~uVar19 * 10,puVar10 + ~uVar11 * 10,0x28);
        } while (uVar5 != 0);
      }
      iVar24 = *param_1;
      iVar12 = param_1[1];
      *param_1 = (int)puVar22;
      param_1[1] = uVar16;
      uVar5 = 0x80000001;
      param_1[2] = local_40 - uVar21;
      param_1[3] = uVar21;
      if ((iVar12 != 0) && (iVar15 = iVar12 * 0x28 + 0x28, iVar12 + iVar15 != -5)) {
        thunk_FUN_016d3fb4(iVar24 - iVar15);
        return 0x80000001;
      }
    }
  }
  else {
    if (uVar13 == 0) {
      uVar16 = 0;
    }
    else {
      uVar16 = uVar13 >> 2;
      if ((uVar13 & 3) != 0) {
        uVar16 = (uVar13 >> 2) + 1;
      }
      puVar22 = (uint *)*param_1;
      iVar24 = 0;
      do {
        puVar22[-iVar24] = (~(puVar22[-iVar24] >> 7) & 0x1010101) + (puVar22[-iVar24] | 0x7f7f7f7f);
        iVar24 = iVar24 + -1;
      } while (-iVar24 != uVar16);
      if (uVar13 < 4) {
        FUN_016dd52c(puVar22 + 1,puVar22);
      }
      else {
        *(uint *)((int)puVar22 + uVar13) = *puVar22;
      }
      uVar21 = param_2[2];
      uVar5 = param_2[3];
      puVar9 = (uint *)param_2[4];
      uVar13 = param_2[5];
      uVar7 = param_2[7];
      uVar8 = *param_2;
      uVar14 = param_2[1];
      uVar16 = 0;
      do {
        if (*(char *)((int)puVar22 + uVar16) == -0x80) {
          puVar10 = puVar22 + ~uVar16 * 10;
          puVar6 = puVar22;
          while( true ) {
            local_48 = puVar9;
            local_44 = uVar13;
            uStack_3c = uVar7;
            local_38 = uVar21;
            uStack_34 = uVar5;
            local_30 = uVar8;
            uStack_2c = uVar14;
            FUN_01352290(&local_48,puVar6[uVar16 * -10 + -9],puVar6[uVar16 * -10 + -8]);
            uVar17 = uStack_34 << 0x18 | (uStack_34 >> 8 & 0xff) << 0x10 |
                     (uStack_34 >> 0x10 & 0xff) << 8 | uStack_34 >> 0x18;
            uVar25 = uStack_2c << 0x18 | (uStack_2c >> 8 & 0xff) << 0x10 |
                     (uStack_2c >> 0x10 & 0xff) << 8 | uStack_2c >> 0x18;
            lVar3 = (ulonglong)~local_30 * (ulonglong)uVar17;
            uVar19 = (uint)lVar3;
            uVar17 = (local_38 << 0x18 | (local_38 >> 8 & 0xff) << 0x10 |
                      (local_38 >> 0x10 & 0xff) << 8 | local_38 >> 0x18) * ~local_30 +
                     uVar17 * ~uStack_2c + (int)((ulonglong)lVar3 >> 0x20);
            lVar3 = (ulonglong)local_38 * (ulonglong)uVar25;
            uVar17 = (uint)lVar3 ^
                     (uVar17 * 0x1000000 | (uVar17 >> 8 & 0xff) << 0x10 |
                      (uVar17 >> 0x10 & 0xff) << 8 | uVar17 >> 0x18);
            uVar18 = param_1[1];
            uVar19 = (local_30 << 0x18 | (local_30 >> 8 & 0xff) << 0x10 |
                      (local_30 >> 0x10 & 0xff) << 8 | local_30 >> 0x18) * local_38 +
                     uVar25 * uStack_34 + (int)((ulonglong)lVar3 >> 0x20) ^
                     (uVar19 << 0x18 | (uVar19 >> 8 & 0xff) << 0x10 | (uVar19 >> 0x10 & 0xff) << 8 |
                     uVar19 >> 0x18);
            uVar25 = uVar19;
            if ((local_38 & 0x20) != 0) {
              uVar25 = uVar17;
              uVar17 = uVar19;
            }
            uVar25 = uVar17 << (local_38 & 0x1f) | (uVar25 >> 1) >> (~local_38 & 0x1f);
            uVar19 = uVar18 & uVar25;
            uVar11 = *(uint *)((int)puVar6 + uVar19) & 0x80808080;
            uVar17 = uVar19;
            if (uVar11 == 0) {
              iVar24 = 4;
              do {
                uVar17 = uVar17 + iVar24 & uVar18;
                iVar24 = iVar24 + 4;
                uVar11 = *(uint *)((int)puVar6 + uVar17) & 0x80808080;
              } while (uVar11 == 0);
            }
            uVar17 = uVar17 + ((uint)LZCOUNT(uVar11 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 |
                                             (uVar11 >> 0x10 & 0xff) << 8 | uVar11 >> 0x18) >> 3) &
                     uVar18;
            if (-1 < *(char *)((int)puVar6 + uVar17)) {
              uVar17 = *puVar6 & 0x80808080;
              uVar17 = (uint)LZCOUNT((*puVar6 & 0x80) << 0x18 | (uVar17 >> 8 & 0xff) << 0x10 |
                                     (uVar17 >> 0x10 & 0xff) << 8 | uVar17 >> 0x18) >> 3;
            }
            bVar2 = (byte)(uVar25 >> 0x18);
            if (((uVar17 - uVar19 ^ uVar16 - uVar19) & uVar18) < 4) {
              bVar2 = bVar2 >> 1;
              *(byte *)((int)puVar6 + uVar16) = bVar2;
              puVar22 = (uint *)*param_1;
              *(byte *)((int)puVar22 + (uVar18 & uVar16 - 4) + 4) = bVar2;
              goto LAB_01342dac;
            }
            cVar1 = *(char *)((int)puVar6 + uVar17);
            bVar2 = bVar2 >> 1;
            *(byte *)((int)puVar6 + uVar17) = bVar2;
            puVar22 = (uint *)*param_1;
            *(byte *)((int)puVar22 + (uVar17 - 4 & uVar18) + 4) = bVar2;
            puVar6 = puVar6 + ~uVar17 * 10;
            if (cVar1 == -1) break;
            uVar17 = *puVar6;
            *puVar6 = *puVar10;
            *puVar10 = uVar17;
            uVar17 = puVar10[1];
            puVar10[1] = puVar6[1];
            puVar6[1] = uVar17;
            uVar17 = puVar6[2];
            puVar6[2] = puVar10[2];
            puVar10[2] = uVar17;
            uVar17 = puVar10[3];
            puVar10[3] = puVar6[3];
            puVar6[3] = uVar17;
            uVar17 = puVar6[4];
            puVar6[4] = puVar10[4];
            puVar10[4] = uVar17;
            uVar17 = puVar10[5];
            puVar10[5] = puVar6[5];
            puVar6[5] = uVar17;
            uVar17 = puVar6[6];
            puVar6[6] = puVar10[6];
            puVar10[6] = uVar17;
            uVar17 = puVar10[7];
            puVar10[7] = puVar6[7];
            puVar6[7] = uVar17;
            uVar17 = puVar6[8];
            puVar6[8] = puVar10[8];
            puVar10[8] = uVar17;
            uVar17 = puVar10[9];
            puVar10[9] = puVar6[9];
            puVar6[9] = uVar17;
            puVar6 = (uint *)*param_1;
          }
          uVar17 = param_1[1];
          *(undefined1 *)((int)puVar22 + uVar16) = 0xff;
          *(undefined1 *)((int)puVar22 + (uVar17 & uVar16 - 4) + 4) = 0xff;
          FUN_016dd1aa(puVar6,puVar10,0x28);
        }
LAB_01342dac:
        bVar26 = uVar16 != uVar23;
        uVar16 = uVar16 + 1;
      } while (bVar26);
      uVar16 = param_1[1];
      if (7 < uVar16) {
        uVar16 = (uVar16 + 1 & 0xfffffff8) - (uVar16 + 1 >> 3);
      }
    }
    uVar5 = 0x80000001;
    param_1[2] = uVar16 - param_1[3];
  }
  return uVar5;
}

