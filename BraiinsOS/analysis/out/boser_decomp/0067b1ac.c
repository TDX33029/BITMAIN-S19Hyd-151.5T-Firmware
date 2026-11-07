// FUN_0067b1ac @ 0067b1ac size=2588 calls_out=18 calls_in=67
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0067b1ac(ulonglong *param_1,undefined4 *param_2)

{
  ulonglong uVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint *puVar13;
  int iVar14;
  uint *unaff_r5;
  uint unaff_r6;
  uint uVar15;
  uint *puVar16;
  uint *puVar17;
  uint uVar18;
  uint *puVar19;
  int iVar20;
  uint *puVar21;
  uint *puVar22;
  int iVar23;
  undefined4 *puVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  int local_11c;
  int local_118;
  int local_10c;
  undefined4 *local_ec;
  int local_e4;
  uint *local_e0;
  uint local_dc;
  uint *local_d8;
  uint *local_d4;
  uint local_d0;
  uint *local_cc;
  undefined1 *local_c8;
  uint local_c4;
  uint local_c0;
  uint *local_b8;
  undefined4 *local_b4;
  uint *local_b0;
  uint *local_a8;
  uint local_a4;
  uint *puStack_a0;
  uint *local_98;
  uint local_94;
  uint *local_90;
  uint *local_8c;
  uint uStack_88;
  uint *puStack_84;
  uint local_80;
  uint *local_7c;
  uint *local_78;
  uint local_74;
  uint *puStack_70;
  uint *local_68;
  uint *local_64;
  uint *local_60;
  uint *local_58;
  uint local_54;
  uint *local_50;
  uint *local_4c;
  uint local_48;
  uint *local_44;
  undefined4 *local_40;
  undefined4 *local_3c;
  uint *local_38;
  undefined4 *local_34;
  uint *local_30;
  uint local_2c;
  uint *local_28;
  
  local_d4 = (uint *)*param_2;
  iVar12 = param_2[1];
  uVar6 = param_2[3];
  if (iVar12 == 0) {
    local_e0 = (uint *)0x0;
  }
  else {
    unaff_r5 = local_d4 + iVar12 * -6 + -6;
    unaff_r6 = iVar12 * 0x19 + 0x1d;
    local_e0 = (uint *)&SUB_00000004;
  }
  local_c8 = (undefined1 *)((int)local_d4 + iVar12 + 1);
  local_cc = local_d4 + 1;
  uVar10 = *local_d4 & 0x80808080 ^ 0x80808080;
  local_c0 = 0x1f;
  local_dc = unaff_r6;
  local_d8 = unaff_r5;
  local_d0 = uVar10;
  local_c4 = uVar6;
  if (uVar6 == 0) {
LAB_0067b32c:
    local_60 = (uint *)0x0;
    local_68 = (uint *)0x0;
    local_64 = (uint *)&SUB_00000004;
    FUN_00763280(&local_e0);
  }
  else {
    puVar13 = local_cc;
    if ((*local_d4 & 0x80808080) == 0x80808080) {
      do {
        local_cc = puVar13 + 1;
        uVar10 = *puVar13;
        local_d4 = local_d4 + -0x18;
        puVar13 = local_cc;
      } while ((uVar10 & 0x80808080) == 0x80808080);
      uVar10 = uVar10 & 0x80808080 ^ 0x80808080;
    }
    local_d0 = uVar10 - 1 & uVar10;
    uVar10 = LZCOUNT(uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 | (uVar10 >> 0x10 & 0xff) << 8 |
                     uVar10 >> 0x18);
    iVar12 = (uVar10 >> 3) * -2 - (uVar10 >> 3);
    local_68 = (uint *)local_d4[iVar12 * 2 + -6];
    local_a8 = (uint *)local_d4[iVar12 * 2 + -5];
    local_a4 = local_d4[iVar12 * 2 + -4];
    uVar10 = uVar6 - 1;
    puVar17 = (uint *)local_d4[iVar12 * 2 + -1];
    uVar15 = local_d4[iVar12 * 2 + -2];
    puVar13 = (uint *)local_d4[iVar12 * 2 + -3];
    local_c4 = uVar10;
    if (local_68 == (uint *)&DAT_80000000) goto LAB_0067b32c;
    local_64 = local_a8;
    local_60 = (uint *)local_a4;
    FUN_0067a9c4(&local_30,&local_68,0x80);
    local_58 = puVar13;
    local_54 = uVar15;
    local_50 = puVar17;
    FUN_0067a9c4(&local_98,&local_58,0x200);
    local_78 = local_98;
    local_74 = local_94;
    puStack_70 = local_90;
    if (local_30 == (uint *)&DAT_80000000) goto LAB_0067b32c;
    local_58 = local_30;
    local_54 = local_2c;
    if (uVar10 < 4) {
      uVar10 = 3;
    }
    local_50 = local_28;
    if (0x1e < uVar10) {
      uVar10 = 0x1f;
    }
    puVar13 = (uint *)(uVar10 + 1);
    local_4c = local_98;
    local_48 = local_94;
    local_44 = local_90;
    puVar2 = (undefined4 *)FUN_01298504((int)puVar13 * 0x18,4);
    if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(4,(int)puVar13 * 0x18);
    }
    *puVar2 = local_58;
    puVar2[1] = local_54;
    puVar2[2] = local_50;
    puVar2[3] = local_4c;
    puVar2[4] = local_48;
    puVar2[5] = local_44;
    local_b0 = (uint *)0x1;
    local_58 = local_e0;
    local_54 = local_dc;
    local_50 = local_d8;
    local_4c = local_d4;
    local_48 = local_d0;
    local_44 = local_cc;
    local_40 = (undefined4 *)local_c8;
    local_3c = (undefined4 *)local_c4;
    local_38 = (uint *)local_c0;
    local_b8 = puVar13;
    local_b4 = puVar2;
    if (local_c0 != 0) {
      uVar10 = local_d0;
      puVar13 = local_d4;
      uVar15 = local_c0;
      uVar18 = local_c4;
      puVar17 = local_cc;
      do {
        puVar4 = local_b0;
        uVar15 = uVar15 - 1;
        if (uVar18 == 0) {
          uVar18 = 0;
          goto LAB_0067b604;
        }
        uVar3 = uVar10;
        puVar19 = puVar17;
        if (uVar10 == 0) {
          do {
            puVar17 = puVar19 + 1;
            uVar10 = *puVar19;
            puVar13 = puVar13 + -0x18;
            puVar19 = puVar17;
          } while ((uVar10 & 0x80808080) == 0x80808080);
          uVar3 = uVar10 & 0x80808080 ^ 0x80808080;
          local_4c = puVar13;
          local_44 = puVar17;
        }
        uVar18 = uVar18 - 1;
        uVar10 = uVar3 - 1 & uVar3;
        uVar3 = LZCOUNT(uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 | (uVar3 >> 0x10 & 0xff) << 8 |
                        uVar3 >> 0x18);
        iVar12 = (uVar3 >> 3) * -2 - (uVar3 >> 3);
        local_80 = puVar13[iVar12 * 2 + -5];
        local_7c = (uint *)puVar13[iVar12 * 2 + -4];
        local_48 = uVar10;
        if ((uint *)puVar13[iVar12 * 2 + -6] == (uint *)&DAT_80000000) goto LAB_0067b604;
        puVar19 = (uint *)puVar13[iVar12 * 2 + -3];
        uVar3 = puVar13[iVar12 * 2 + -2];
        puVar22 = (uint *)puVar13[iVar12 * 2 + -1];
        local_78 = (uint *)puVar13[iVar12 * 2 + -6];
        local_74 = local_80;
        puStack_70 = local_7c;
        FUN_0067a9c4(&local_68,&local_78,0x80);
        local_98 = puVar19;
        local_94 = uVar3;
        local_90 = puVar22;
        FUN_0067a9c4(&local_30,&local_98,0x200);
        local_a8 = local_30;
        local_a4 = local_2c;
        puStack_a0 = local_28;
        if (local_68 == (uint *)&DAT_80000000) {
          local_3c = (undefined4 *)uVar18;
          local_38 = (uint *)uVar15;
          goto LAB_0067b624;
        }
        local_98 = local_68;
        *(undefined4 *)((uint)&local_98 | 4) = local_64;
        ((undefined4 *)((uint)&local_98 | 4))[1] = local_60;
        local_8c = local_30;
        uStack_88 = local_2c;
        puStack_84 = local_28;
        if (puVar4 == local_b8) {
          uVar3 = uVar18;
          if (uVar15 < uVar18) {
            uVar3 = uVar15;
          }
          iVar12 = uVar3 + 1;
          if (uVar3 == 0xffffffff) {
            iVar12 = -1;
          }
          if (uVar15 == 0) {
            iVar12 = 1;
          }
          FUN_0132b898(&local_b8,puVar4,iVar12,4,0x18);
          puVar2 = local_b4;
        }
        local_b0 = (uint *)((int)puVar4 + 1);
        puVar24 = puVar2 + (int)puVar4 * 6;
        *puVar24 = local_98;
        puVar24[1] = local_94;
        puVar24[2] = local_90;
        puVar24[3] = local_8c;
        puVar24[4] = uStack_88;
        puVar24[5] = puStack_84;
      } while (uVar15 != 0);
      uVar15 = 0;
LAB_0067b604:
      local_3c = (undefined4 *)uVar18;
      local_38 = (uint *)uVar15;
    }
LAB_0067b624:
    FUN_00763280(&local_58);
    puVar2 = local_b4;
    local_68 = local_b8;
    local_64 = local_b4;
    local_60 = local_b0;
    if (local_b0 != (uint *)0x0) {
      if (local_b0 != (uint *)0x1) {
        if (local_b0 < (uint *)0x15) {
          iVar23 = 0x18;
          iVar12 = (int)local_b0 * 0x18;
          do {
            FUN_0067bf3c(puVar2,(int)puVar2 + iVar23);
            iVar23 = iVar23 + 0x18;
          } while (iVar12 != iVar23);
        }
        else {
          FUN_0069f378(local_b4);
        }
      }
      puVar4 = local_60;
      puVar17 = local_64;
      puVar13 = local_68;
      puVar2 = (undefined4 *)FUN_00ab2960();
      *puVar2 = 0;
      local_38 = puVar13;
      *(undefined2 *)((int)puVar2 + 0x10e) = 0;
      uVar1 = ZEXT48(puVar2);
      local_ec = puVar17 + (int)puVar4 * 6;
      local_3c = puVar17;
      local_40 = puVar17;
      local_58 = (uint *)&DAT_80000001;
      local_118 = 0;
      puVar13 = (uint *)&DAT_80000001;
      local_34 = local_ec;
LAB_0067b6b4:
      local_10c = (int)(uVar1 >> 0x20);
      local_11c = (int)uVar1;
      if (puVar13 == (uint *)&DAT_80000001) {
        if (puVar17 == local_ec) goto LAB_0067b8ac;
        local_3c = puVar17 + 6;
        puVar13 = (uint *)*puVar17;
        puVar4 = puVar17 + 1;
        puVar17 = local_3c;
      }
      else {
        puVar4 = &local_54;
      }
      if (puVar13 == (uint *)&DAT_80000000) goto LAB_0067b8ac;
      puVar22 = (uint *)puVar4[2];
      uVar15 = *puVar4;
      puVar16 = (uint *)puVar4[1];
      uVar10 = puVar4[3];
      puVar19 = (uint *)puVar4[4];
      puVar4 = (uint *)&DAT_80000000;
      if (puVar17 == local_ec) {
LAB_0067b780:
        local_58 = puVar4;
        if (*(ushort *)((int)puVar2 + 0x10e) < 0xb) {
          local_98 = puVar22;
          local_94 = uVar10;
          local_90 = puVar19;
          local_30 = puVar13;
          local_2c = uVar15;
          local_28 = puVar16;
          FUN_0067db88(&local_e0,puVar2,&local_30,&local_98);
        }
        else {
          iVar12 = 0;
          do {
            puVar2 = (undefined4 *)*puVar2;
            if (puVar2 == (undefined4 *)0x0) {
              uVar25 = FUN_0067dc1c(local_11c,local_10c);
              uVar1 = uVar25;
              break;
            }
            iVar12 = iVar12 + 1;
            uVar25 = CONCAT44(iVar12,puVar2);
          } while (10 < *(ushort *)((int)puVar2 + 0x10e));
          iVar23 = (int)(uVar25 >> 0x20);
          puVar2 = (undefined4 *)FUN_00ab2960();
          uVar26 = ZEXT48(puVar2);
          *puVar2 = 0;
          *(undefined2 *)((int)puVar2 + 0x10e) = 0;
          iVar12 = iVar23;
          while (iVar12 = iVar12 + -1, iVar12 != 0) {
            uVar26 = FUN_0067dc1c();
          }
          local_e0 = puVar22;
          local_dc = uVar10;
          local_d8 = puVar19;
          local_98 = puVar13;
          local_94 = uVar15;
          local_90 = puVar16;
          FUN_0067dc98((int)uVar25,iVar23,&local_98,&local_e0,uVar26);
          while( true ) {
            iVar12 = (int)(uVar25 >> 0x20);
            puVar2 = (undefined4 *)uVar25;
            if (iVar12 == 0) break;
            uVar25 = CONCAT44(iVar12 + -1,puVar2[*(ushort *)((int)puVar2 + 0x10e) + 0x44]);
          }
        }
        local_118 = local_118 + 1;
        local_ec = local_34;
        puVar13 = local_58;
        puVar17 = local_3c;
      }
      else {
        puVar21 = (uint *)*puVar17;
        local_3c = puVar17 + 6;
        FUN_01bed864(&local_54,puVar17 + 1,0x14);
        if (puVar21 == (uint *)&DAT_80000000) goto LAB_0067b780;
        if ((puVar16 != local_50) ||
           (iVar12 = thunk_FUN_01bed842(uVar15,local_54,puVar16), iVar12 != 0)) {
          puVar4 = puVar21;
          goto LAB_0067b780;
        }
        FUN_019bb7e0(puVar13,uVar15);
        FUN_019bb7e0(puVar22,uVar10);
        puVar13 = puVar21;
        puVar17 = puVar17 + 6;
      }
      goto LAB_0067b6b4;
    }
  }
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)param_1 = 0;
  FUN_0067daec(&local_68);
LAB_0067b35c:
  *(bool *)((int)param_1 + 0xc) = 0x20 < uVar6;
  return;
LAB_0067b8ac:
  local_58 = (uint *)&DAT_80000001;
  FUN_0067db1c(&local_58);
  if (local_10c != 0) {
    local_e4 = local_10c;
    do {
      uVar10 = (uint)*(ushort *)(local_11c + 0x10e);
      if (uVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec(&DAT_00533a28,0x19,&DAT_01d305a8);
      }
      iVar12 = uVar10 - 1;
      local_e4 = local_e4 + -1;
      iVar23 = *(int *)(local_11c + (uVar10 + 0x44) * 4);
      uVar15 = (uint)*(ushort *)(iVar23 + 0x10e);
      if (uVar15 < 5) {
        iVar20 = *(int *)(local_11c + (uVar10 + 0x43) * 4);
        uVar10 = -uVar15 + 5;
        uVar18 = (uint)*(ushort *)(iVar20 + 0x10e);
        if (uVar18 < uVar10) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0ec(&DAT_00533acc,0x27,&DAT_01d30618);
        }
        iVar14 = uVar18 - uVar10;
        *(ushort *)(iVar20 + 0x10e) = (ushort)iVar14;
        *(ushort *)(iVar23 + 0x10e) = 5;
        iVar7 = iVar23 + 4;
        FUN_01bed864(iVar7 + uVar10 * 0xc,iVar7,uVar15 * 0xc);
        iVar8 = iVar23 + 0x88;
        FUN_01bed864(iVar8 + uVar10 * 0xc,iVar8,uVar15 * 0xc);
        iVar11 = iVar14 + 1;
        iVar5 = uVar18 - iVar11;
        if (iVar5 != -uVar15 + 4) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0ec(&DAT_00533a71,0x28,&DAT_01d305f8);
        }
        FUN_01bed4e2(iVar7,iVar20 + 4 + iVar11 * 0xc,iVar5 * 0xc);
        FUN_01bed4e2(iVar8,iVar20 + 0x88 + iVar11 * 0xc,iVar5 * 0xc);
        puVar2 = (undefined4 *)(iVar20 + 0x88 + iVar14 * 0xc);
        local_30 = (uint *)*puVar2;
        local_2c = puVar2[1];
        local_28 = (uint *)puVar2[2];
        puVar2 = (undefined4 *)(local_11c + (iVar12 * 3 + 1) * 4);
        local_58 = (uint *)*puVar2;
        local_54 = *(uint *)(local_11c + (iVar12 * 3 + 2) * 4);
        local_50 = *(uint **)(local_11c + (iVar12 * 3 + 3) * 4);
        FUN_01bed864(puVar2,iVar20 + 4 + iVar14 * 0xc,0xc);
        puVar2 = (undefined4 *)(local_11c + (iVar12 * 3 + 0x22) * 4);
        local_e0 = (uint *)*puVar2;
        local_dc = *(uint *)(local_11c + (iVar12 * 3 + 0x23) * 4);
        local_d8 = *(uint **)(local_11c + (iVar12 * 3 + 0x24) * 4);
        *puVar2 = local_30;
        *(uint *)(local_11c + (iVar12 * 3 + 0x23) * 4) = local_2c;
        *(uint **)(local_11c + (iVar12 * 3 + 0x24) * 4) = local_28;
        local_98 = local_58;
        local_94 = local_54;
        local_90 = local_50;
        puVar2 = (undefined4 *)(iVar7 + iVar5 * 0xc);
        *puVar2 = local_58;
        puVar2[1] = local_54;
        puVar2[2] = local_50;
        puVar2 = (undefined4 *)(iVar8 + iVar5 * 0xc);
        *puVar2 = local_e0;
        puVar2[1] = local_dc;
        puVar2[2] = local_d8;
        local_4c = local_e0;
        local_48 = local_dc;
        local_44 = local_d8;
        if (local_e4 != 0) {
          iVar12 = iVar23 + 0x110;
          FUN_01bed864(iVar12 + uVar10 * 4,iVar12,uVar15 * 4 + 4);
          FUN_01bed4e2(iVar12,iVar20 + iVar11 * 4 + 0x110,uVar10 * 4);
          iVar12 = 0;
          do {
            piVar9 = *(int **)(iVar23 + (iVar12 + 0x44) * 4);
            *piVar9 = iVar23;
            *(short *)(piVar9 + 0x43) = (short)iVar12;
            iVar12 = iVar12 + 1;
          } while (iVar12 != 6);
        }
      }
      local_11c = iVar23;
    } while (local_e4 != 0);
  }
  *param_1 = uVar1;
  *(int *)(param_1 + 1) = local_118;
  goto LAB_0067b35c;
}

