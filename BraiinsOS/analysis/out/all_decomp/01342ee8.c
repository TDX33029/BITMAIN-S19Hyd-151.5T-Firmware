// FUN_01342ee8 @ 01342ee8 size=1804 calls_out=5 calls_in=2
// strings: 

uint FUN_01342ee8(int *param_1,uint param_2,uint *param_3)

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
  uint *puVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint *puVar22;
  uint uVar23;
  uint uVar24;
  int iVar25;
  uint *puVar26;
  uint uVar27;
  bool bVar28;
  uint *local_48;
  uint local_44;
  int local_40;
  uint uStack_3c;
  uint local_38;
  uint uStack_34;
  uint local_30;
  uint uStack_2c;
  
  uVar18 = param_1[3];
  uVar21 = uVar18 + param_2;
  if (CARRY4(uVar18,param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_004144a9,0x39,&DAT_01883228);
  }
  uVar24 = param_1[1];
  uVar27 = uVar24 + 1;
  uVar5 = uVar24;
  if (7 < uVar24) {
    uVar5 = (uVar27 & 0xfffffff8) - (uVar27 >> 3);
  }
  if (uVar5 >> 1 < uVar21) {
    if (uVar21 < uVar5 + 1) {
      uVar21 = uVar5 + 1;
    }
    FUN_013403c0(&local_48,0xc,uVar21);
    uVar21 = local_44;
    puVar26 = local_48;
    uVar5 = local_44;
    if (local_48 != (uint *)0x0) {
      if (uVar18 == 0) {
        uVar18 = 0;
      }
      else {
        iVar25 = 0;
        puVar10 = (uint *)*param_1;
        uVar13 = *param_3;
        uVar16 = param_3[1];
        uVar23 = ~*puVar10 & 0x80808080;
        uVar24 = param_3[2];
        uVar27 = param_3[3];
        puVar6 = (uint *)param_3[4];
        uVar7 = param_3[5];
        uVar8 = param_3[7];
        uVar5 = uVar18;
        puVar9 = puVar10;
        do {
          if (uVar23 == 0) {
            do {
              puVar9 = puVar9 + 1;
              iVar25 = iVar25 + 4;
            } while ((*puVar9 & 0x80808080) == 0x80808080);
            uVar23 = *puVar9 & 0x80808080 ^ 0x80808080;
          }
          uVar11 = iVar25 + ((uint)LZCOUNT(uVar23 << 0x18 | (uVar23 >> 8 & 0xff) << 0x10 |
                                           (uVar23 >> 0x10 & 0xff) << 8 | uVar23 >> 0x18) >> 3);
          local_48 = puVar6;
          local_44 = uVar7;
          uStack_3c = uVar8;
          local_38 = uVar24;
          uStack_34 = uVar27;
          local_30 = uVar13;
          uStack_2c = uVar16;
          FUN_01352290(&local_48,*(undefined4 *)(puVar10[uVar11 * -3 + -3] + 0xc),
                       *(undefined4 *)(puVar10[uVar11 * -3 + -3] + 0x10));
          uVar20 = uStack_2c << 0x18 | (uStack_2c >> 8 & 0xff) << 0x10 |
                   (uStack_2c >> 0x10 & 0xff) << 8 | uStack_2c >> 0x18;
          lVar3 = (ulonglong)local_38 * (ulonglong)uVar20;
          uVar17 = uStack_34 << 0x18 | (uStack_34 >> 8 & 0xff) << 0x10 |
                   (uStack_34 >> 0x10 & 0xff) << 8 | uStack_34 >> 0x18;
          lVar4 = (ulonglong)~local_30 * (ulonglong)uVar17;
          uVar19 = (uint)lVar4;
          uVar17 = (local_38 << 0x18 | (local_38 >> 8 & 0xff) << 0x10 |
                    (local_38 >> 0x10 & 0xff) << 8 | local_38 >> 0x18) * ~local_30 +
                   uVar17 * ~uStack_2c + (int)((ulonglong)lVar4 >> 0x20);
          uVar20 = (local_30 << 0x18 | (local_30 >> 8 & 0xff) << 0x10 |
                    (local_30 >> 0x10 & 0xff) << 8 | local_30 >> 0x18) * local_38 +
                   uVar20 * uStack_34 + (int)((ulonglong)lVar3 >> 0x20) ^
                   (uVar19 << 0x18 | (uVar19 >> 8 & 0xff) << 0x10 | (uVar19 >> 0x10 & 0xff) << 8 |
                   uVar19 >> 0x18);
          uVar17 = (uint)lVar3 ^
                   (uVar17 * 0x1000000 | (uVar17 >> 8 & 0xff) << 0x10 | (uVar17 >> 0x10 & 0xff) << 8
                   | uVar17 >> 0x18);
          uVar19 = uVar20;
          if ((local_38 & 0x20) != 0) {
            uVar19 = uVar17;
            uVar17 = uVar20;
          }
          uVar17 = uVar17 << (local_38 & 0x1f) | (uVar19 >> 1) >> (~local_38 & 0x1f);
          uVar19 = uVar21 & uVar17;
          uVar20 = *(uint *)((int)puVar26 + uVar19) & 0x80808080;
          if (uVar20 == 0) {
            iVar12 = 4;
            do {
              uVar19 = uVar19 + iVar12;
              iVar12 = iVar12 + 4;
              uVar19 = uVar19 & uVar21;
              uVar20 = *(uint *)((int)puVar26 + uVar19) & 0x80808080;
            } while (uVar20 == 0);
          }
          uVar19 = uVar19 + ((uint)LZCOUNT(uVar20 << 0x18 | (uVar20 >> 8 & 0xff) << 0x10 |
                                           (uVar20 >> 0x10 & 0xff) << 8 | uVar20 >> 0x18) >> 3) &
                   uVar21;
          if (-1 < *(char *)((int)puVar26 + uVar19)) {
            uVar19 = *puVar26 & 0x80808080;
            uVar19 = (uint)LZCOUNT((*puVar26 & 0x80) << 0x18 | (uVar19 >> 8 & 0xff) << 0x10 |
                                   (uVar19 >> 0x10 & 0xff) << 8 | uVar19 >> 0x18) >> 3;
          }
          uVar23 = uVar23 - 1 & uVar23;
          bVar2 = (byte)(uVar17 >> 0x19);
          *(byte *)((int)puVar26 + uVar19) = bVar2;
          *(byte *)((int)puVar26 + (uVar19 - 4 & uVar21) + 4) = bVar2;
          uVar5 = uVar5 - 1;
          puVar14 = puVar10 + ~uVar11 * 3;
          uVar11 = puVar14[1];
          uVar17 = puVar14[2];
          puVar22 = puVar26 + ~uVar19 * 3;
          *puVar22 = *puVar14;
          puVar22[2] = uVar17;
          puVar22[1] = uVar11;
        } while (uVar5 != 0);
      }
      iVar25 = *param_1;
      iVar12 = param_1[1];
      *param_1 = (int)puVar26;
      param_1[1] = uVar21;
      uVar5 = 0x80000001;
      param_1[2] = local_40 - uVar18;
      param_1[3] = uVar18;
      if ((iVar12 != 0) && (iVar15 = iVar12 * 0xc + 0xc, iVar12 + iVar15 != -5)) {
        thunk_FUN_016d3fb4(iVar25 - iVar15);
        return 0x80000001;
      }
    }
  }
  else {
    if (uVar27 == 0) {
      uVar21 = 0;
    }
    else {
      uVar21 = uVar27 >> 2;
      puVar26 = (uint *)*param_1;
      if ((uVar27 & 3) != 0) {
        uVar21 = (uVar27 >> 2) + 1;
      }
      iVar25 = 0;
      do {
        puVar26[-iVar25] = (~(puVar26[-iVar25] >> 7) & 0x1010101) + (puVar26[-iVar25] | 0x7f7f7f7f);
        iVar25 = iVar25 + -1;
      } while (-iVar25 != uVar21);
      if (uVar27 < 4) {
        FUN_016dd52c(puVar26 + 1,puVar26,uVar27);
      }
      else {
        *(uint *)((int)puVar26 + uVar27) = *puVar26;
      }
      uVar18 = param_3[2];
      uVar5 = param_3[3];
      puVar9 = (uint *)param_3[4];
      uVar27 = param_3[5];
      uVar7 = param_3[7];
      uVar8 = *param_3;
      uVar13 = param_3[1];
      uVar21 = 0;
      do {
        if (*(char *)((int)puVar26 + uVar21) == -0x80) {
          puVar10 = puVar26 + ~uVar21 * 3;
          puVar6 = puVar26;
          while( true ) {
            local_48 = puVar9;
            local_44 = uVar27;
            uStack_3c = uVar7;
            local_38 = uVar18;
            uStack_34 = uVar5;
            local_30 = uVar8;
            uStack_2c = uVar13;
            FUN_01352290(&local_48,*(undefined4 *)(puVar6[uVar21 * -3 + -3] + 0xc),
                         *(undefined4 *)(puVar6[uVar21 * -3 + -3] + 0x10));
            uVar16 = uStack_34 << 0x18 | (uStack_34 >> 8 & 0xff) << 0x10 |
                     (uStack_34 >> 0x10 & 0xff) << 8 | uStack_34 >> 0x18;
            uVar23 = uStack_2c << 0x18 | (uStack_2c >> 8 & 0xff) << 0x10 |
                     (uStack_2c >> 0x10 & 0xff) << 8 | uStack_2c >> 0x18;
            lVar3 = (ulonglong)~local_30 * (ulonglong)uVar16;
            uVar19 = (uint)lVar3;
            uVar16 = (local_38 << 0x18 | (local_38 >> 8 & 0xff) << 0x10 |
                      (local_38 >> 0x10 & 0xff) << 8 | local_38 >> 0x18) * ~local_30 +
                     uVar16 * ~uStack_2c + (int)((ulonglong)lVar3 >> 0x20);
            lVar3 = (ulonglong)local_38 * (ulonglong)uVar23;
            uVar16 = (uint)lVar3 ^
                     (uVar16 * 0x1000000 | (uVar16 >> 8 & 0xff) << 0x10 |
                      (uVar16 >> 0x10 & 0xff) << 8 | uVar16 >> 0x18);
            uVar17 = param_1[1];
            uVar19 = (local_30 << 0x18 | (local_30 >> 8 & 0xff) << 0x10 |
                      (local_30 >> 0x10 & 0xff) << 8 | local_30 >> 0x18) * local_38 +
                     uVar23 * uStack_34 + (int)((ulonglong)lVar3 >> 0x20) ^
                     (uVar19 << 0x18 | (uVar19 >> 8 & 0xff) << 0x10 | (uVar19 >> 0x10 & 0xff) << 8 |
                     uVar19 >> 0x18);
            uVar23 = uVar19;
            if ((local_38 & 0x20) != 0) {
              uVar23 = uVar16;
              uVar16 = uVar19;
            }
            uVar23 = uVar16 << (local_38 & 0x1f) | (uVar23 >> 1) >> (~local_38 & 0x1f);
            uVar19 = uVar17 & uVar23;
            uVar11 = *(uint *)((int)puVar6 + uVar19) & 0x80808080;
            uVar16 = uVar19;
            if (uVar11 == 0) {
              iVar25 = 4;
              do {
                uVar16 = uVar16 + iVar25 & uVar17;
                iVar25 = iVar25 + 4;
                uVar11 = *(uint *)((int)puVar6 + uVar16) & 0x80808080;
              } while (uVar11 == 0);
            }
            uVar16 = uVar16 + ((uint)LZCOUNT(uVar11 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 |
                                             (uVar11 >> 0x10 & 0xff) << 8 | uVar11 >> 0x18) >> 3) &
                     uVar17;
            if (-1 < *(char *)((int)puVar6 + uVar16)) {
              uVar16 = *puVar6 & 0x80808080;
              uVar16 = (uint)LZCOUNT((*puVar6 & 0x80) << 0x18 | (uVar16 >> 8 & 0xff) << 0x10 |
                                     (uVar16 >> 0x10 & 0xff) << 8 | uVar16 >> 0x18) >> 3;
            }
            bVar2 = (byte)(uVar23 >> 0x18);
            if (((uVar16 - uVar19 ^ uVar21 - uVar19) & uVar17) < 4) {
              bVar2 = bVar2 >> 1;
              *(byte *)((int)puVar6 + uVar21) = bVar2;
              puVar26 = (uint *)*param_1;
              *(byte *)((int)puVar26 + (uVar17 & uVar21 - 4) + 4) = bVar2;
              goto LAB_013434ac;
            }
            cVar1 = *(char *)((int)puVar6 + uVar16);
            bVar2 = bVar2 >> 1;
            *(byte *)((int)puVar6 + uVar16) = bVar2;
            puVar26 = (uint *)*param_1;
            *(byte *)((int)puVar26 + (uVar16 - 4 & uVar17) + 4) = bVar2;
            puVar6 = puVar6 + ~uVar16 * 3;
            if (cVar1 == -1) break;
            uVar16 = *puVar10;
            *puVar10 = *puVar6;
            *puVar6 = uVar16;
            uVar16 = puVar6[1];
            puVar6[1] = puVar10[1];
            puVar10[1] = uVar16;
            uVar16 = puVar10[2];
            puVar10[2] = puVar6[2];
            puVar6[2] = uVar16;
            puVar6 = (uint *)*param_1;
          }
          uVar16 = param_1[1];
          *(undefined1 *)((int)puVar26 + uVar21) = 0xff;
          *(undefined1 *)((int)puVar26 + (uVar16 & uVar21 - 4) + 4) = 0xff;
          uVar16 = *puVar10;
          uVar23 = puVar10[1];
          puVar6[2] = puVar10[2];
          puVar6[1] = uVar23;
          *puVar6 = uVar16;
        }
LAB_013434ac:
        bVar28 = uVar21 != uVar24;
        uVar21 = uVar21 + 1;
      } while (bVar28);
      uVar21 = param_1[1];
      if (7 < uVar21) {
        uVar21 = (uVar21 + 1 & 0xfffffff8) - (uVar21 + 1 >> 3);
      }
    }
    uVar5 = 0x80000001;
    param_1[2] = uVar21 - param_1[3];
  }
  return uVar5;
}

