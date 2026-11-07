// FUN_00ab523c @ 00ab523c size=2160 calls_out=22 calls_in=8
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00ab523c(int *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 extraout_r1_02;
  undefined4 extraout_r1_03;
  undefined4 extraout_r1_04;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  uint uVar13;
  undefined4 *puVar14;
  undefined1 *puVar15;
  uint uVar16;
  undefined4 *puVar17;
  undefined1 *puVar18;
  int iVar19;
  int iVar20;
  bool bVar21;
  bool bVar22;
  undefined8 uVar23;
  ulonglong uVar24;
  int local_134;
  int local_130;
  int local_128;
  int local_104;
  undefined1 *local_100;
  undefined1 *local_fc;
  undefined1 *local_f8;
  undefined1 *local_f4;
  undefined1 *local_f0;
  undefined1 *local_ec;
  undefined1 *local_e8;
  undefined1 *local_e4;
  int local_e0;
  undefined1 *local_d8;
  undefined1 *local_d4;
  undefined1 *local_d0;
  undefined1 *local_cc;
  undefined1 *local_c8;
  undefined1 *puStack_c4;
  undefined1 *puStack_c0;
  undefined1 *puStack_bc;
  undefined4 *local_b8;
  undefined4 *local_b4;
  undefined1 *local_b0;
  undefined4 *local_ac;
  undefined1 *local_a8;
  undefined4 *local_a4;
  undefined1 *local_a0;
  uint local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined1 *local_80;
  undefined1 *puStack_7c;
  undefined1 *puStack_78;
  undefined1 *puStack_74;
  undefined1 *puStack_70;
  undefined1 *local_68;
  undefined1 *local_64;
  undefined1 *local_60;
  undefined1 *local_5c;
  undefined1 *local_58;
  undefined1 *puStack_54;
  undefined1 *puStack_50;
  undefined1 *puStack_4c;
  undefined1 *local_48;
  undefined4 *local_44;
  undefined1 *local_40;
  undefined1 *local_38;
  undefined1 *local_34;
  undefined1 *local_30;
  undefined4 uStack_2c;
  
  local_f8 = (undefined1 *)*param_2;
  local_f4 = (undefined1 *)param_2[1];
  local_e0 = param_2[2];
  if (local_f8 == (undefined1 *)0x0) {
    local_e0 = 0;
  }
  local_100 = (undefined1 *)(uint)(local_f8 != (undefined1 *)0x0);
  local_ec = (undefined1 *)0x0;
  local_fc = (undefined1 *)0x0;
  local_f0 = local_100;
  local_e8 = local_f8;
  local_e4 = local_f4;
  uVar23 = FUN_01a41998(&local_100);
  iVar8 = (int)uVar23;
  if (iVar8 != 0) {
    FUN_006666fc(&local_68,*(undefined4 *)(iVar8 + 4),*(undefined4 *)(iVar8 + 8));
    FUN_00ab5054(&local_d8,(int)((ulonglong)uVar23 >> 0x20));
    puVar14 = (undefined4 *)((uint)&local_98 | 4);
    *puVar14 = local_d8;
    puVar14[1] = local_d4;
    puVar14[2] = local_d0;
    puVar14[3] = local_cc;
    if (local_68 != (undefined1 *)0x80000000) {
      local_d8 = local_68;
      local_d4 = local_64;
      local_d0 = local_60;
      local_cc = (undefined1 *)local_98;
      local_c8 = (undefined1 *)uStack_94;
      puStack_c4 = (undefined1 *)uStack_90;
      puStack_c0 = (undefined1 *)uStack_8c;
      puStack_bc = (undefined1 *)uStack_88;
      uVar12 = 0;
      puVar2 = (undefined1 *)(local_e0 + 1);
      if (local_e0 == -1) {
        puVar2 = (undefined1 *)0xffffffff;
      }
      puVar15 = puVar2;
      if (puVar2 < (undefined1 *)0x5) {
        puVar15 = (undefined1 *)0x4;
      }
      bVar22 = (undefined1 *)0x7fffffe < puVar2;
      bVar21 = puVar2 == (undefined1 *)0x7ffffff;
      uVar4 = (int)puVar15 * 0x20;
      if (puVar2 < (undefined1 *)0x8000000) {
        bVar22 = 0x7ffffff7 < uVar4;
        bVar21 = uVar4 == 0x7ffffff8;
      }
      if (bVar22 && !bVar21) {
LAB_00ab5358:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(uVar12,uVar4);
      }
      uVar12 = 8;
      puVar14 = (undefined4 *)FUN_01298504(uVar4,8);
      if (puVar14 == (undefined4 *)0x0) goto LAB_00ab5358;
      *puVar14 = local_d8;
      puVar14[1] = local_d4;
      puVar14[2] = local_d0;
      puVar14[3] = local_cc;
      puVar14[4] = local_c8;
      puVar14[5] = puStack_c4;
      puVar14[6] = puStack_c0;
      puVar14[7] = puStack_bc;
      local_a0 = (undefined1 *)0x1;
      local_d8 = local_100;
      local_d4 = local_fc;
      local_d0 = local_f8;
      local_cc = local_f4;
      local_c8 = local_f0;
      puStack_c4 = local_ec;
      puStack_c0 = local_e8;
      puStack_bc = local_e4;
      local_b8 = (undefined4 *)local_e0;
      puVar17 = (undefined4 *)((uint)&local_68 | 4);
      local_a8 = puVar15;
      local_a4 = puVar14;
      while( true ) {
        puVar2 = local_a0;
        uVar23 = FUN_01a41998(&local_d8);
        iVar8 = (int)uVar23;
        if (iVar8 == 0) break;
        FUN_006666fc(&local_48,*(undefined4 *)(iVar8 + 4),*(undefined4 *)(iVar8 + 8));
        FUN_00ab5054(&local_38,(int)((ulonglong)uVar23 >> 0x20));
        puStack_4c = local_58;
        puStack_50 = local_5c;
        puVar15 = local_68;
        *puVar17 = local_38;
        puVar17[1] = local_34;
        puVar17[2] = local_30;
        puVar17[3] = uStack_2c;
        local_80 = local_68;
        puStack_7c = local_64;
        puStack_78 = local_60;
        puStack_74 = local_5c;
        puStack_70 = local_58;
        if (local_48 == (undefined1 *)0x80000000) break;
        local_68 = local_48;
        *puVar17 = local_44;
        puVar17[1] = local_40;
        local_5c = puVar15;
        local_58 = local_64;
        puStack_54 = local_60;
        if (puVar2 == local_a8) {
          iVar8 = (int)local_b8 + 1;
          if (local_b8 == (undefined4 *)0xffffffff) {
            iVar8 = -1;
          }
          FUN_0132b898(&local_a8,puVar2,iVar8,8,0x20);
          puVar14 = local_a4;
        }
        puVar6 = puVar14 + (int)puVar2 * 8;
        local_a0 = puVar2 + 1;
        *puVar6 = local_68;
        puVar6[1] = local_64;
        puVar6[2] = local_60;
        puVar6[3] = local_5c;
        puVar6[4] = local_58;
        puVar6[5] = puStack_54;
        puVar6[6] = puStack_50;
        puVar6[7] = puStack_4c;
      }
      puVar14 = local_a4;
      local_48 = local_a8;
      local_44 = local_a4;
      local_40 = local_a0;
      if (local_a0 != (undefined1 *)0x0) {
        if (local_a0 != (undefined1 *)0x1) {
          if (local_a0 < (undefined1 *)0x15) {
            iVar8 = (int)local_a0 * 0x20;
            iVar3 = 0x20;
            do {
              FUN_0093fdf4(puVar14,(undefined1 *)((int)puVar14 + iVar3));
              iVar3 = iVar3 + 0x20;
            } while (iVar8 != iVar3);
          }
          else {
            FUN_00a5249c(local_a4);
          }
        }
        uVar23 = FUN_01498c44();
        local_134 = (int)uVar23;
        *(undefined4 *)(local_134 + 0xb0) = 0;
        *(undefined2 *)(local_134 + 0x13a) = 0;
        local_128 = 0;
        local_ac = local_44 + (int)local_40 * 8;
        local_b0 = local_48;
        local_b4 = local_44;
        local_b8 = local_44;
        local_d8 = (undefined1 *)0x80000001;
        local_130 = 0;
        puVar14 = local_44;
        puVar2 = (undefined1 *)0x80000001;
        puVar17 = local_ac;
        do {
          puVar6 = (undefined4 *)((ulonglong)uVar23 >> 0x20);
          iVar8 = (int)uVar23;
          if (puVar2 == (undefined1 *)0x80000001) {
            if (puVar14 == puVar17) {
LAB_00ab57d8:
              local_d8 = (undefined1 *)0x80000001;
              FUN_014896f8(&local_d8,puVar6);
              if (local_128 != 0) {
                local_104 = local_128;
                iVar8 = local_134;
                do {
                  if (*(ushort *)(iVar8 + 0x13a) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_012fb0ec(&DAT_00533a28,0x19,&DAT_01d305a8);
                  }
                  iVar10 = *(ushort *)(iVar8 + 0x13a) - 1;
                  iVar3 = iVar8 + iVar10 * 4;
                  local_104 = local_104 + -1;
                  iVar11 = *(int *)(iVar3 + 0x144);
                  uVar4 = (uint)*(ushort *)(iVar11 + 0x13a);
                  if (uVar4 < 5) {
                    iVar3 = *(int *)(iVar3 + 0x140);
                    uVar16 = -uVar4 + 5;
                    uVar13 = (uint)*(ushort *)(iVar3 + 0x13a);
                    if (uVar13 < uVar16) {
                    /* WARNING: Subroutine does not return */
                      FUN_012fb0ec(&DAT_00533acc,0x27,&DAT_01d30618);
                    }
                    iVar19 = uVar13 - uVar16;
                    *(ushort *)(iVar3 + 0x13a) = (ushort)iVar19;
                    *(ushort *)(iVar11 + 0x13a) = 5;
                    iVar7 = iVar11 + 0xb4;
                    FUN_01bed864(iVar7 + uVar16 * 0xc,iVar7,uVar4 * 0xc);
                    FUN_01bed864(iVar11 + uVar16 * 0x10,iVar11,uVar4 << 4);
                    iVar9 = iVar19 + 1;
                    iVar20 = uVar13 - iVar9;
                    if (iVar20 != -uVar4 + 4) {
                    /* WARNING: Subroutine does not return */
                      FUN_012fb0ec(&DAT_00533a71,0x28,&DAT_01d305f8);
                    }
                    FUN_01bed4e2(iVar7,iVar3 + 0xb4 + iVar9 * 0xc,iVar20 * 0xc);
                    FUN_01bed4e2(iVar11,iVar3 + iVar9 * 0x10,iVar20 * 0x10);
                    puVar14 = (undefined4 *)(iVar3 + iVar19 * 0x10);
                    local_68 = (undefined1 *)*puVar14;
                    local_64 = (undefined1 *)puVar14[1];
                    local_60 = (undefined1 *)puVar14[2];
                    local_5c = (undefined1 *)puVar14[3];
                    iVar5 = iVar8 + iVar10 * 0xc;
                    local_d8 = *(undefined1 **)(iVar5 + 0xb4);
                    local_d4 = *(undefined1 **)(iVar5 + 0xb8);
                    local_d0 = *(undefined1 **)(iVar5 + 0xbc);
                    FUN_01bed864((undefined4 *)(iVar5 + 0xb4),iVar3 + 0xb4 + iVar19 * 0xc,0xc);
                    puVar14 = (undefined4 *)(iVar8 + iVar10 * 0x10);
                    local_100 = (undefined1 *)*puVar14;
                    local_fc = (undefined1 *)puVar14[1];
                    local_f8 = (undefined1 *)puVar14[2];
                    local_f4 = (undefined1 *)puVar14[3];
                    *puVar14 = local_68;
                    puVar14[1] = local_64;
                    puVar14[2] = local_60;
                    puVar14[3] = local_5c;
                    local_80 = local_d8;
                    puStack_7c = local_d4;
                    puStack_78 = local_d0;
                    puVar14 = (undefined4 *)(iVar7 + iVar20 * 0xc);
                    *puVar14 = local_d8;
                    puVar14[1] = local_d4;
                    puVar14[2] = local_d0;
                    puVar14 = (undefined4 *)(iVar11 + iVar20 * 0x10);
                    *puVar14 = local_100;
                    puVar14[1] = local_fc;
                    puVar14[2] = local_f8;
                    puVar14[3] = local_f4;
                    local_c8 = local_100;
                    puStack_c4 = local_fc;
                    puStack_c0 = local_f8;
                    puStack_bc = local_f4;
                    if (local_104 != 0) {
                      iVar8 = iVar11 + 0x140;
                      FUN_01bed864(iVar8 + uVar16 * 4,iVar8,uVar4 * 4 + 4);
                      FUN_01bed4e2(iVar8,iVar3 + iVar9 * 4 + 0x140,uVar16 * 4);
                      iVar8 = 0;
                      do {
                        iVar3 = *(int *)(iVar11 + iVar8 * 4 + 0x140);
                        *(short *)(iVar3 + 0x138) = (short)iVar8;
                        iVar8 = iVar8 + 1;
                        *(int *)(iVar3 + 0xb0) = iVar11;
                      } while (iVar8 != 6);
                    }
                  }
                  iVar8 = iVar11;
                } while (local_104 != 0);
              }
              *param_1 = local_134;
              param_1[1] = local_128;
              param_1[2] = local_130;
              return;
            }
            local_b4 = puVar14 + 8;
            puVar15 = (undefined1 *)*puVar14;
            puVar6 = puVar14 + 1;
            puVar14 = local_b4;
          }
          else {
            puVar6 = (undefined4 *)((uint)&local_d8 | 4);
            puVar15 = puVar2;
          }
          if (puVar15 == (undefined1 *)0x80000000) goto LAB_00ab57d8;
          FUN_01bed864((uint)&local_100 | 4,puVar6,0x1c);
          local_100 = puVar15;
          if (puVar14 == puVar17) {
LAB_00ab5698:
            local_d8 = (undefined1 *)0x80000000;
            puVar18 = local_fc;
LAB_00ab56ac:
            local_68 = local_f8;
            local_64 = local_f4;
            local_60 = local_f0;
            local_5c = local_ec;
            local_58 = local_e8;
            puStack_54 = local_e4;
            local_80 = local_f0;
            puStack_7c = local_ec;
            puStack_78 = local_e8;
            puStack_74 = local_e4;
            if (*(ushort *)(iVar8 + 0x13a) < 0xb) {
              local_100 = local_f0;
              local_fc = local_ec;
              local_f8 = local_e8;
              local_f4 = local_e4;
              local_38 = puVar15;
              local_34 = puVar18;
              local_30 = local_68;
              FUN_01488b78(&local_98,iVar8,&local_38);
              uVar12 = extraout_r1_03;
            }
            else {
              iVar3 = 0;
              do {
                iVar8 = *(int *)(iVar8 + 0xb0);
                uVar23 = CONCAT44(local_128,iVar8);
                if (iVar8 == 0) {
                  uVar23 = FUN_01488ce4(local_134);
                  uVar1 = uVar23;
                  break;
                }
                iVar3 = iVar3 + 1;
                uVar1 = CONCAT44(iVar3,local_134);
              } while (10 < *(ushort *)(iVar8 + 0x13a));
              iVar10 = (int)((ulonglong)uVar1 >> 0x20);
              local_134 = (int)uVar1;
              local_128 = (int)((ulonglong)uVar23 >> 0x20);
              iVar8 = (int)uVar23;
              uVar4 = FUN_01498c44();
              uVar24 = (ulonglong)uVar4;
              *(undefined2 *)(uVar4 + 0x13a) = 0;
              *(undefined4 *)(uVar4 + 0xb0) = 0;
              iVar3 = iVar10;
              while (iVar3 = iVar3 + -1, iVar3 != 0) {
                uVar24 = FUN_01488ce4();
              }
              local_100 = puVar15;
              local_fc = puVar18;
              local_f8 = local_68;
              FUN_01488c10(iVar8,iVar10,&local_100,&local_60,uVar24);
              for (; uVar12 = extraout_r1_04, iVar10 != 0; iVar10 = iVar10 + -1) {
                iVar8 = *(int *)(iVar8 + (uint)*(ushort *)(iVar8 + 0x13a) * 4 + 0x140);
              }
            }
            uVar23 = CONCAT44(uVar12,iVar8);
            local_130 = local_130 + 1;
            puVar14 = local_b4;
            puVar2 = local_d8;
            puVar17 = local_ac;
          }
          else {
            puVar6 = puVar14 + 8;
            puVar2 = (undefined1 *)*puVar14;
            local_b4 = puVar6;
            FUN_01bed864((undefined4 *)((uint)&local_d8 | 4),puVar14 + 1,0x1c);
            puVar18 = local_fc;
            if (puVar2 == (undefined1 *)0x80000000) goto LAB_00ab5698;
            if ((local_f8 != local_d0) ||
               (iVar3 = thunk_FUN_01bed842(local_fc,local_d4), iVar3 != 0)) {
              local_d8 = puVar2;
              goto LAB_00ab56ac;
            }
            FUN_019bb7e0(puVar15,puVar18);
            puVar15 = local_f0;
            uVar23 = CONCAT44(extraout_r1,iVar8);
            puVar14 = puVar6;
            if (local_f0 != &DAT_80000005) {
              uVar4 = 5;
              if ((int)local_f0 < 0) {
                uVar4 = (uint)local_f0 ^ 0x80000000;
              }
              uVar23 = CONCAT44(&switchD_00ab5644::switchdataD_00ab5648,iVar8);
              switch(uVar4) {
              case 0:
              case 1:
              case 3:
                break;
              case 2:
                FUN_019bb7e0(local_ec,local_e8);
                uVar23 = CONCAT44(extraout_r1_00,iVar8);
                break;
              case 4:
                FUN_0165d624(&local_ec);
                uVar23 = CONCAT44(extraout_r1_01,iVar8);
                break;
              default:
                FUN_0165d0b8(&local_f0);
                FUN_0134aee0(puVar15,local_ec,8,0x10);
                uVar23 = CONCAT44(extraout_r1_02,iVar8);
              }
            }
          }
        } while( true );
      }
      goto LAB_00ab52f4;
    }
  }
  local_40 = (undefined1 *)0x0;
  local_44 = (undefined4 *)&DAT_00000008;
  local_48 = (undefined1 *)0x0;
LAB_00ab52f4:
  param_1[2] = 0;
  *param_1 = 0;
  FUN_014945f8(&local_48);
  return;
}

