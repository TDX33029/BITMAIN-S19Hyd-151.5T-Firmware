// FUN_01347bec @ 01347bec size=1716 calls_out=10 calls_in=1
// strings: $schema

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01347bec(undefined4 *param_1,int *param_2,int param_3,int *param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  int *piVar10;
  int *piVar9;
  undefined4 uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  int iVar24;
  uint uVar25;
  uint uVar26;
  int iVar27;
  int local_e4;
  int local_80;
  int local_7c;
  int local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  int local_48;
  int local_44;
  int local_40;
  uint uStack_3c;
  uint local_38;
  uint uStack_34;
  uint local_30;
  uint uStack_2c;
  
  puVar3 = param_1;
  if (param_3 != 0) {
    puVar3 = (undefined4 *)param_4[3];
  }
  if (param_3 != 0 && puVar3 != (undefined4 *)0x0) {
    iVar24 = *param_4;
    uVar12 = param_4[1];
    uVar13 = param_4[4];
    uVar14 = param_4[5];
    uVar15 = param_4[6];
    uVar16 = param_4[7];
    iVar17 = param_4[8];
    iVar18 = param_4[9];
    iVar19 = param_4[10];
    uVar4 = param_4[0xb];
    piVar9 = param_2;
    do {
      piVar10 = piVar9 + 1;
      iVar20 = *piVar9;
      iVar27 = *(int *)(iVar20 + 0x10);
      uVar11 = *(undefined4 *)(iVar20 + 0xc);
      local_80 = iVar17;
      local_7c = iVar18;
      local_78 = iVar19;
      local_74 = uVar4;
      local_6c = uVar16;
      local_64 = uVar14;
      local_70 = uVar15;
      local_68 = uVar13;
      FUN_01352290(&local_80,uVar11,iVar27);
      uVar26 = local_64 << 0x18 | (local_64 >> 8 & 0xff) << 0x10 | (local_64 >> 0x10 & 0xff) << 8 |
               local_64 >> 0x18;
      lVar1 = (ulonglong)local_70 * (ulonglong)uVar26;
      uVar21 = local_6c << 0x18 | (local_6c >> 8 & 0xff) << 0x10 | (local_6c >> 0x10 & 0xff) << 8 |
               local_6c >> 0x18;
      lVar2 = (ulonglong)~local_68 * (ulonglong)uVar21;
      uVar22 = (uint)lVar2;
      iVar23 = 0;
      uVar21 = (local_70 << 0x18 | (local_70 >> 8 & 0xff) << 0x10 | (local_70 >> 0x10 & 0xff) << 8 |
               local_70 >> 0x18) * ~local_68 + uVar21 * ~local_64 + (int)((ulonglong)lVar2 >> 0x20);
      uVar26 = (local_68 << 0x18 | (local_68 >> 8 & 0xff) << 0x10 | (local_68 >> 0x10 & 0xff) << 8 |
               local_68 >> 0x18) * local_70 + uVar26 * local_6c + (int)((ulonglong)lVar1 >> 0x20) ^
               (uVar22 << 0x18 | (uVar22 >> 8 & 0xff) << 0x10 | (uVar22 >> 0x10 & 0xff) << 8 |
               uVar22 >> 0x18);
      uVar21 = (uint)lVar1 ^
               (uVar21 * 0x1000000 | (uVar21 >> 8 & 0xff) << 0x10 | (uVar21 >> 0x10 & 0xff) << 8 |
               uVar21 >> 0x18);
      uVar22 = uVar26;
      if ((local_70 & 0x20) != 0) {
        uVar22 = uVar21;
        uVar21 = uVar26;
      }
      uVar22 = uVar21 << (local_70 & 0x1f) | (uVar22 >> 1) >> (~local_70 & 0x1f);
      uVar21 = uVar22 >> 0x19;
      while( true ) {
        uVar22 = uVar12 & uVar22;
        uVar25 = *(uint *)(iVar24 + uVar22);
        uVar26 = uVar25 ^ uVar21 * 0x1010101;
        uVar26 = ~uVar26 & 0x80808080 & uVar26 + 0xfefefeff;
        while (uVar26 != 0) {
          uVar5 = uVar22 + ((uint)LZCOUNT(uVar26 << 0x18 | (uVar26 >> 8 & 0xff) << 0x10 |
                                          (uVar26 >> 0x10 & 0xff) << 8 | uVar26 >> 0x18) >> 3) &
                  uVar12;
          iVar6 = *(int *)(iVar24 + -0xc + uVar5 * -0xc);
          if ((iVar20 == iVar6) ||
             ((uVar26 = uVar26 - 1 & uVar26, iVar27 == *(int *)(iVar6 + 0x10) &&
              (iVar6 = thunk_FUN_016dd50a(uVar11,*(undefined4 *)(iVar6 + 0xc),iVar27), iVar6 == 0)))
             ) {
            pcVar7 = *(char **)(iVar24 + -8 + uVar5 * -0xc);
            if ((*pcVar7 != '\x05') || (iVar20 = *(int *)(pcVar7 + 4), iVar20 == 0))
            goto LAB_01348080;
            iVar23 = *(int *)(pcVar7 + 8);
            goto LAB_01347d98;
          }
        }
        if ((uVar25 & 0x80808080 & uVar25 << 1) != 0) break;
        iVar23 = iVar23 + 4;
        uVar22 = uVar22 + iVar23;
      }
LAB_01348080:
      piVar9 = piVar10;
    } while (piVar10 != param_2 + param_3);
  }
  *param_1 = 0x8000000a;
  return;
LAB_01347d98:
  iVar6 = iVar20 + 0x10c;
  uVar21 = (uint)*(ushort *)(iVar20 + 0x192);
  uVar22 = 0xffffffff;
  iVar27 = uVar21 * 0xc;
  do {
    if (iVar27 == 0) {
      if (iVar23 != 0) goto LAB_01347e34;
      goto LAB_01348080;
    }
    uVar25 = *(uint *)(iVar6 + 8);
    uVar26 = uVar25;
    if (6 < uVar25) {
      uVar26 = 7;
    }
    iVar8 = FUN_016dd50a("$schema",*(undefined4 *)(iVar6 + 4),uVar26);
    if (iVar8 == 0) {
      iVar8 = 7 - uVar25;
    }
    iVar27 = iVar27 + -0xc;
    uVar22 = uVar22 + 1;
    iVar6 = iVar6 + 0xc;
  } while ((char)((0 < iVar8) - (iVar8 < 0)) == '\x01');
  if (0 < iVar8 == iVar8 < 0) {
    pcVar7 = (char *)(iVar20 + uVar22 * 0x18);
    if (*pcVar7 == '\x03') {
      uVar11 = *(undefined4 *)(pcVar7 + 8);
      iVar23 = *(int *)(pcVar7 + 0xc);
      FUN_013575a0(&local_80,uVar11,iVar23);
      iVar20 = local_7c;
      if (local_80 == -0x7ffffff6) {
        uVar21 = local_6c;
        if (local_64 != 0) {
          uVar21 = local_64;
        }
        if (local_74 < uVar21) {
          uVar21 = local_74;
        }
        else if (((uVar21 != 0) && (uVar21 < local_74)) && (*(char *)(local_78 + uVar21) < -0x40)) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa464(&DAT_00418707,0x30,&DAT_01882184);
        }
        local_48 = iVar17;
        local_44 = iVar18;
        local_40 = iVar19;
        uStack_3c = uVar4;
        local_38 = uVar15;
        uStack_34 = uVar16;
        local_30 = uVar13;
        uStack_2c = uVar14;
        FUN_01352290(&local_48,local_78,uVar21);
        uVar26 = uStack_2c << 0x18 | (uStack_2c >> 8 & 0xff) << 0x10 |
                 (uStack_2c >> 0x10 & 0xff) << 8 | uStack_2c >> 0x18;
        lVar1 = (ulonglong)local_38 * (ulonglong)uVar26;
        uVar22 = uStack_34 << 0x18 | (uStack_34 >> 8 & 0xff) << 0x10 |
                 (uStack_34 >> 0x10 & 0xff) << 8 | uStack_34 >> 0x18;
        lVar2 = (ulonglong)~local_30 * (ulonglong)uVar22;
        uVar25 = (uint)lVar2;
        uVar22 = (local_38 << 0x18 | (local_38 >> 8 & 0xff) << 0x10 | (local_38 >> 0x10 & 0xff) << 8
                 | local_38 >> 0x18) * ~local_30 +
                 uVar22 * ~uStack_2c + (int)((ulonglong)lVar2 >> 0x20);
        uVar22 = (uint)lVar1 ^
                 (uVar22 * 0x1000000 | (uVar22 >> 8 & 0xff) << 0x10 | (uVar22 >> 0x10 & 0xff) << 8 |
                 uVar22 >> 0x18);
        uVar25 = (local_30 << 0x18 | (local_30 >> 8 & 0xff) << 0x10 | (local_30 >> 0x10 & 0xff) << 8
                 | local_30 >> 0x18) * local_38 +
                 uVar26 * uStack_34 + (int)((ulonglong)lVar1 >> 0x20) ^
                 (uVar25 << 0x18 | (uVar25 >> 8 & 0xff) << 0x10 | (uVar25 >> 0x10 & 0xff) << 8 |
                 uVar25 >> 0x18);
        uVar26 = uVar25;
        if ((local_38 & 0x20) != 0) {
          uVar26 = uVar22;
          uVar22 = uVar25;
        }
        uVar26 = uVar22 << (local_38 & 0x1f) | (uVar26 >> 1) >> (~local_38 & 0x1f);
        uVar22 = uVar26 >> 0x19;
        local_e4 = 0;
        while( true ) {
          uVar26 = uVar12 & uVar26;
          uVar5 = *(uint *)(iVar24 + uVar26);
          uVar25 = uVar5 ^ uVar22 * 0x1010101;
          uVar25 = ~uVar25 & 0x80808080 & uVar25 + 0xfefefeff;
          while (uVar25 != 0) {
            iVar27 = *(int *)(iVar24 + -0xc +
                             (uVar26 + ((uint)LZCOUNT(uVar25 << 0x18 | (uVar25 >> 8 & 0xff) << 0x10
                                                      | (uVar25 >> 0x10 & 0xff) << 8 |
                                                      uVar25 >> 0x18) >> 3) & uVar12) * -0xc);
            uVar25 = uVar25 - 1 & uVar25;
            if ((uVar21 == *(uint *)(iVar27 + 0x10)) &&
               (iVar27 = thunk_FUN_016dd50a(local_78,*(undefined4 *)(iVar27 + 0xc),uVar21),
               iVar27 == 0)) {
              if (iVar20 != 0) {
                thunk_FUN_016d3fb4(local_78);
              }
              goto LAB_01348080;
            }
          }
          if ((uVar5 & 0x80808080 & uVar5 << 1) != 0) break;
          local_e4 = local_e4 + 4;
          uVar26 = uVar26 + local_e4;
        }
        if (iVar23 < 0) {
          uVar11 = 0;
LAB_013481ac:
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(uVar11,iVar23);
        }
        if (iVar23 == 0) {
          iVar18 = 1;
          iVar17 = 0;
        }
        else {
          iVar18 = thunk_FUN_016d4a50(iVar23);
          if (iVar18 == 0) {
            uVar11 = 1;
            goto LAB_013481ac;
          }
          iVar17 = iVar23;
        }
        FUN_016dd1aa(iVar18,uVar11,iVar23);
        *param_1 = &DAT_80000008;
        param_1[1] = iVar17;
        param_1[2] = iVar18;
        param_1[3] = iVar23;
        if (iVar20 != 0) {
          thunk_FUN_016d3fb4(local_78);
        }
      }
      else {
        if (iVar23 < 0) {
          uVar11 = 0;
LAB_01348190:
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(uVar11,iVar23);
        }
        if (iVar23 == 0) {
          iVar18 = 1;
          iVar17 = 0;
        }
        else {
          iVar18 = thunk_FUN_016d4a50(iVar23);
          if (iVar18 == 0) {
            uVar11 = 1;
            goto LAB_01348190;
          }
          iVar17 = iVar23;
        }
        FUN_016dd1aa(iVar18,uVar11,iVar23);
        *param_1 = &DAT_80000008;
        param_1[1] = iVar17;
        param_1[2] = iVar18;
        param_1[3] = iVar23;
        FUN_01343b74(&local_80);
      }
      return;
    }
    goto LAB_01348080;
  }
  uVar21 = uVar22;
  if (iVar23 == 0) goto LAB_01348080;
LAB_01347e34:
  iVar23 = iVar23 + -1;
  iVar20 = *(int *)(iVar20 + uVar21 * 4 + 0x198);
  goto LAB_01347d98;
}

