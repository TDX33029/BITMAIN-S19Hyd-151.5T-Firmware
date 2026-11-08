// FUN_01341600 @ 01341600 size=1732 calls_out=5 calls_in=2
// strings: 

uint FUN_01341600(int *param_1,uint *param_2)

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
  uint uVar22;
  uint uVar23;
  int iVar24;
  uint *puVar25;
  bool bVar26;
  uint *local_48;
  uint local_44;
  int local_40;
  uint uStack_3c;
  uint local_38;
  uint uStack_34;
  uint local_30;
  uint uStack_2c;
  
  uVar19 = param_1[3];
  uVar16 = uVar19 + 1;
  if (0xfffffffe < uVar19) {
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
    FUN_013403c0(&local_48,8,uVar16);
    uVar16 = local_44;
    puVar25 = local_48;
    uVar5 = local_44;
    if (local_48 != (uint *)0x0) {
      if (uVar19 == 0) {
        uVar19 = 0;
      }
      else {
        iVar24 = 0;
        puVar10 = (uint *)*param_1;
        uVar14 = *param_2;
        uVar17 = param_2[1];
        uVar22 = ~*puVar10 & 0x80808080;
        uVar13 = param_2[2];
        uVar23 = param_2[3];
        puVar6 = (uint *)param_2[4];
        uVar7 = param_2[5];
        uVar8 = param_2[7];
        puVar9 = puVar10;
        uVar5 = uVar19;
        do {
          if (uVar22 == 0) {
            do {
              puVar9 = puVar9 + 1;
              iVar24 = iVar24 + 4;
            } while ((*puVar9 & 0x80808080) == 0x80808080);
            uVar22 = *puVar9 & 0x80808080 ^ 0x80808080;
          }
          uVar11 = iVar24 + ((uint)LZCOUNT(uVar22 << 0x18 | (uVar22 >> 8 & 0xff) << 0x10 |
                                           (uVar22 >> 0x10 & 0xff) << 8 | uVar22 >> 0x18) >> 3);
          local_48 = puVar6;
          local_44 = uVar7;
          uStack_3c = uVar8;
          local_38 = uVar13;
          uStack_34 = uVar23;
          local_30 = uVar14;
          uStack_2c = uVar17;
          FUN_01352290(&local_48,*(undefined4 *)(puVar10[uVar11 * -2 + -2] + 0xc),
                       *(undefined4 *)(puVar10[uVar11 * -2 + -2] + 0x10));
          uVar21 = uStack_2c << 0x18 | (uStack_2c >> 8 & 0xff) << 0x10 |
                   (uStack_2c >> 0x10 & 0xff) << 8 | uStack_2c >> 0x18;
          lVar3 = (ulonglong)local_38 * (ulonglong)uVar21;
          uVar18 = uStack_34 << 0x18 | (uStack_34 >> 8 & 0xff) << 0x10 |
                   (uStack_34 >> 0x10 & 0xff) << 8 | uStack_34 >> 0x18;
          lVar4 = (ulonglong)~local_30 * (ulonglong)uVar18;
          uVar20 = (uint)lVar4;
          uVar18 = (local_38 << 0x18 | (local_38 >> 8 & 0xff) << 0x10 |
                    (local_38 >> 0x10 & 0xff) << 8 | local_38 >> 0x18) * ~local_30 +
                   uVar18 * ~uStack_2c + (int)((ulonglong)lVar4 >> 0x20);
          uVar21 = (local_30 << 0x18 | (local_30 >> 8 & 0xff) << 0x10 |
                    (local_30 >> 0x10 & 0xff) << 8 | local_30 >> 0x18) * local_38 +
                   uVar21 * uStack_34 + (int)((ulonglong)lVar3 >> 0x20) ^
                   (uVar20 << 0x18 | (uVar20 >> 8 & 0xff) << 0x10 | (uVar20 >> 0x10 & 0xff) << 8 |
                   uVar20 >> 0x18);
          uVar18 = (uint)lVar3 ^
                   (uVar18 * 0x1000000 | (uVar18 >> 8 & 0xff) << 0x10 | (uVar18 >> 0x10 & 0xff) << 8
                   | uVar18 >> 0x18);
          uVar20 = uVar21;
          if ((local_38 & 0x20) != 0) {
            uVar20 = uVar18;
            uVar18 = uVar21;
          }
          uVar18 = uVar18 << (local_38 & 0x1f) | (uVar20 >> 1) >> (~local_38 & 0x1f);
          uVar20 = uVar16 & uVar18;
          uVar21 = *(uint *)((int)puVar25 + uVar20) & 0x80808080;
          if (uVar21 == 0) {
            iVar12 = 4;
            do {
              uVar20 = uVar20 + iVar12;
              iVar12 = iVar12 + 4;
              uVar20 = uVar20 & uVar16;
              uVar21 = *(uint *)((int)puVar25 + uVar20) & 0x80808080;
            } while (uVar21 == 0);
          }
          uVar20 = uVar20 + ((uint)LZCOUNT(uVar21 << 0x18 | (uVar21 >> 8 & 0xff) << 0x10 |
                                           (uVar21 >> 0x10 & 0xff) << 8 | uVar21 >> 0x18) >> 3) &
                   uVar16;
          if (-1 < *(char *)((int)puVar25 + uVar20)) {
            uVar20 = *puVar25 & 0x80808080;
            uVar20 = (uint)LZCOUNT((*puVar25 & 0x80) << 0x18 | (uVar20 >> 8 & 0xff) << 0x10 |
                                   (uVar20 >> 0x10 & 0xff) << 8 | uVar20 >> 0x18) >> 3;
          }
          uVar22 = uVar22 - 1 & uVar22;
          bVar2 = (byte)(uVar18 >> 0x19);
          *(byte *)((int)puVar25 + uVar20) = bVar2;
          uVar5 = uVar5 - 1;
          *(byte *)((int)puVar25 + (uVar20 - 4 & uVar16) + 4) = bVar2;
          uVar18 = (puVar10 + ~uVar11 * 2)[1];
          puVar25[~uVar20 * 2] = puVar10[~uVar11 * 2];
          (puVar25 + ~uVar20 * 2)[1] = uVar18;
        } while (uVar5 != 0);
      }
      iVar24 = *param_1;
      iVar12 = param_1[1];
      *param_1 = (int)puVar25;
      param_1[1] = uVar16;
      uVar5 = 0x80000001;
      param_1[2] = local_40 - uVar19;
      param_1[3] = uVar19;
      if ((iVar12 != 0) && (iVar15 = iVar12 * 8 + 8, iVar12 + iVar15 != -5)) {
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
      puVar25 = (uint *)*param_1;
      if ((uVar13 & 3) != 0) {
        uVar16 = (uVar13 >> 2) + 1;
      }
      iVar24 = 0;
      do {
        puVar25[-iVar24] = (~(puVar25[-iVar24] >> 7) & 0x1010101) + (puVar25[-iVar24] | 0x7f7f7f7f);
        iVar24 = iVar24 + -1;
      } while (-iVar24 != uVar16);
      if (uVar13 < 4) {
        FUN_016dd52c(puVar25 + 1,puVar25);
      }
      else {
        *(uint *)((int)puVar25 + uVar13) = *puVar25;
      }
      uVar19 = param_2[2];
      uVar5 = param_2[3];
      puVar9 = (uint *)param_2[4];
      uVar13 = param_2[5];
      uVar7 = param_2[7];
      uVar8 = *param_2;
      uVar14 = param_2[1];
      uVar16 = 0;
      do {
        if (*(char *)((int)puVar25 + uVar16) == -0x80) {
          puVar10 = puVar25 + ~uVar16 * 2;
          puVar6 = puVar25;
          while( true ) {
            local_48 = puVar9;
            local_44 = uVar13;
            uStack_3c = uVar7;
            local_38 = uVar19;
            uStack_34 = uVar5;
            local_30 = uVar8;
            uStack_2c = uVar14;
            FUN_01352290(&local_48,*(undefined4 *)(puVar6[uVar16 * -2 + -2] + 0xc),
                         *(undefined4 *)(puVar6[uVar16 * -2 + -2] + 0x10));
            uVar17 = uStack_34 << 0x18 | (uStack_34 >> 8 & 0xff) << 0x10 |
                     (uStack_34 >> 0x10 & 0xff) << 8 | uStack_34 >> 0x18;
            uVar22 = uStack_2c << 0x18 | (uStack_2c >> 8 & 0xff) << 0x10 |
                     (uStack_2c >> 0x10 & 0xff) << 8 | uStack_2c >> 0x18;
            lVar3 = (ulonglong)~local_30 * (ulonglong)uVar17;
            uVar20 = (uint)lVar3;
            uVar17 = (local_38 << 0x18 | (local_38 >> 8 & 0xff) << 0x10 |
                      (local_38 >> 0x10 & 0xff) << 8 | local_38 >> 0x18) * ~local_30 +
                     uVar17 * ~uStack_2c + (int)((ulonglong)lVar3 >> 0x20);
            lVar3 = (ulonglong)local_38 * (ulonglong)uVar22;
            uVar17 = (uint)lVar3 ^
                     (uVar17 * 0x1000000 | (uVar17 >> 8 & 0xff) << 0x10 |
                      (uVar17 >> 0x10 & 0xff) << 8 | uVar17 >> 0x18);
            uVar18 = param_1[1];
            uVar20 = (local_30 << 0x18 | (local_30 >> 8 & 0xff) << 0x10 |
                      (local_30 >> 0x10 & 0xff) << 8 | local_30 >> 0x18) * local_38 +
                     uVar22 * uStack_34 + (int)((ulonglong)lVar3 >> 0x20) ^
                     (uVar20 << 0x18 | (uVar20 >> 8 & 0xff) << 0x10 | (uVar20 >> 0x10 & 0xff) << 8 |
                     uVar20 >> 0x18);
            uVar22 = uVar20;
            if ((local_38 & 0x20) != 0) {
              uVar22 = uVar17;
              uVar17 = uVar20;
            }
            uVar22 = uVar17 << (local_38 & 0x1f) | (uVar22 >> 1) >> (~local_38 & 0x1f);
            uVar20 = uVar18 & uVar22;
            uVar11 = *(uint *)((int)puVar6 + uVar20) & 0x80808080;
            uVar17 = uVar20;
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
            bVar2 = (byte)(uVar22 >> 0x18);
            if (((uVar17 - uVar20 ^ uVar16 - uVar20) & uVar18) < 4) {
              bVar2 = bVar2 >> 1;
              *(byte *)((int)puVar6 + uVar16) = bVar2;
              puVar25 = (uint *)*param_1;
              *(byte *)((int)puVar25 + (uVar18 & uVar16 - 4) + 4) = bVar2;
              goto LAB_01341b90;
            }
            cVar1 = *(char *)((int)puVar6 + uVar17);
            bVar2 = bVar2 >> 1;
            *(byte *)((int)puVar6 + uVar17) = bVar2;
            puVar25 = (uint *)*param_1;
            *(byte *)((int)puVar25 + (uVar17 - 4 & uVar18) + 4) = bVar2;
            puVar6 = puVar6 + ~uVar17 * 2;
            if (cVar1 == -1) break;
            uVar17 = *puVar6;
            *puVar6 = *puVar10;
            *puVar10 = uVar17;
            uVar17 = puVar10[1];
            puVar10[1] = puVar6[1];
            puVar6[1] = uVar17;
            puVar6 = (uint *)*param_1;
          }
          uVar17 = param_1[1];
          *(undefined1 *)((int)puVar25 + uVar16) = 0xff;
          *(undefined1 *)((int)puVar25 + (uVar17 & uVar16 - 4) + 4) = 0xff;
          uVar17 = *puVar10;
          puVar6[1] = puVar10[1];
          *puVar6 = uVar17;
        }
LAB_01341b90:
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

