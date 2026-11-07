// FUN_0141aa10 @ 0141aa10 size=3992 calls_out=16 calls_in=1
// strings: current header name

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0141aa10(uint *param_1,uint *param_2,int *param_3,byte param_4,uint param_5,uint param_6,
                 undefined4 param_7)

{
  byte bVar1;
  bool bVar2;
  undefined4 *puVar3;
  undefined4 *puVar5;
  undefined4 *puVar4;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  char *pcVar11;
  uint uVar12;
  uint *puVar13;
  int iVar14;
  byte *pbVar15;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined *puVar16;
  uint uVar17;
  undefined4 uVar18;
  uint uVar19;
  bool bVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  code *pcVar24;
  bool bVar25;
  uint uVar26;
  bool bVar27;
  undefined8 uVar28;
  int local_180;
  uint *local_17c;
  uint *local_178;
  uint local_174;
  uint local_148;
  uint local_120;
  int local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined1 auStack_fc [4];
  int local_f8;
  undefined4 local_e0;
  undefined1 local_dc;
  uint local_d8;
  uint local_d4;
  uint local_d0;
  uint *local_cc;
  uint *local_c8;
  uint uStack_c4;
  int local_bc;
  uint *local_b8;
  int local_b4;
  int local_b0;
  uint local_ac;
  uint local_a8;
  uint *local_a4;
  uint *puStack_a0;
  undefined4 local_9c [2];
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 uStack_88;
  int iStack_84;
  uint local_80;
  byte *local_7c;
  uint local_78;
  uint *puStack_74;
  uint *puStack_70;
  uint local_68;
  byte *local_64;
  uint local_60;
  uint *puStack_5c;
  uint *puStack_58;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint *puStack_44;
  uint *puStack_40;
  uint local_3c;
  byte *pbStack_38;
  uint uStack_34;
  uint *puStack_30;
  uint *puStack_2c;
  
  local_e0 = param_7;
  local_f8 = 3;
  uVar21 = param_2[4];
  local_d8 = 1;
  local_dc = *(undefined1 *)((int)param_2 + 0x19);
  local_bc = -0x80000000;
  puVar3 = *(undefined4 **)(uVar21 + 0x18);
  iVar14 = *(int *)(uVar21 + 0x1c);
  local_cc = (uint *)0x0;
  local_d0 = 0;
  local_c8 = (uint *)((uint)local_c8 & 0xffffff00);
  local_b0 = 0;
  if (iVar14 != 0) {
    puVar4 = puVar3;
    do {
      puVar5 = puVar4 + 1;
      *puVar4 = 0xffff;
      puVar4 = puVar5;
    } while (puVar5 != puVar3 + iVar14);
  }
  local_120 = param_6;
  iStack_84 = uVar21 + 0x2c;
  local_8c = *(undefined4 *)(uVar21 + 0x24);
  local_90 = *(undefined4 *)(uVar21 + 0x28);
  *(undefined4 *)(uVar21 + 0x28) = 0;
  uVar6 = (uint)&local_d8 | 4;
  uVar7 = *param_2;
  uVar8 = param_2[1];
  uVar9 = param_2[2];
  puVar10 = (uint *)param_2[3];
  pcVar11 = (char *)param_2[5];
  local_148 = 0;
  local_94 = 0;
  local_9c[0] = 0;
  bVar2 = false;
  bVar27 = false;
  puVar13 = param_2;
  bVar25 = false;
  uStack_88 = local_90;
LAB_0141ab7c:
  uVar26 = 2;
  puVar16 = &DAT_00531047;
  if ((local_148 & 1) != 0) {
    uVar26 = 0xb;
    puVar16 = &DAT_00477b65;
  }
  do {
    FUN_0141e75c(&local_50,local_9c);
    if (local_50 == 2) {
      FUN_0141e6c4(local_9c);
      if (bVar25) {
        FUN_01ac6cbc(param_3,puVar16,uVar26);
      }
      if ((local_120 & 1) == 0) {
        if (uVar7 == 2 && uVar8 == 0) {
LAB_0141b3a0:
          uVar7 = (uint)*(ushort *)(uVar21 + 0x44);
          if ((99 < uVar7 - 100) &&
             ((((99 < uVar7 - 200 || (*pcVar11 != '\a')) && (uVar7 != 0xcc)) &&
              (uVar7 != 0x130 && *pcVar11 != '\x05')))) {
            local_50 = 0;
            local_4c = 0x18;
            local_48 = 0;
            puStack_44 = (uint *)0x0;
            FUN_0141be60(&local_108,param_3);
            FUN_01ac6cbc(param_3,&DAT_00477b70,5);
            if (local_50 != 0) {
              (**(code **)(local_50 + 0x10))(&puStack_44,local_4c,local_48);
            }
          }
LAB_0141b664:
          uVar8 = 1;
          puVar13 = (uint *)0x0;
          uVar26 = 0;
        }
        else {
          if ((uVar7 & 1) == 0) {
            if (uVar9 == 0 && puVar10 == (uint *)0x0) goto LAB_0141b3a0;
            uVar8 = 1;
            uVar7 = (uint)*(ushort *)(uVar21 + 0x44);
            if ((99 < uVar7 - 100) &&
               (((99 < uVar7 - 200 || (*pcVar11 != '\a')) && (uVar7 != 0xcc)))) {
              puVar13 = (uint *)0x0;
              uVar26 = 0;
              if (uVar7 != 0x130) {
                local_50 = 0;
                local_4c = 0x18;
                local_48 = 0;
                puStack_44 = (uint *)0x0;
                FUN_0141be60(&local_108,param_3);
                FUN_01ac6cbc(param_3,0x5312dd,2);
                uVar18 = extraout_r1;
                if (local_50 != 0) {
                  (**(code **)(local_50 + 0x10))(&puStack_44,local_4c,local_48);
                  uVar18 = extraout_r1_00;
                }
                uVar28 = FUN_01415f98(&local_50,uVar18,uVar9,puVar10);
                FUN_01ac6cbc(param_3,(int)uVar28,(int)((ulonglong)uVar28 >> 0x20));
                FUN_01ac6cbc(param_3,&DAT_00531047,2);
                uVar8 = 1;
                puVar13 = puVar10;
                uVar26 = uVar9;
              }
              goto LAB_0141b6ec;
            }
            goto LAB_0141b664;
          }
          uVar8 = 2;
          if ((*(char *)(uVar21 + 0x46) != '\x01') && (*pcVar11 != '\x05')) {
            uVar7 = (uint)*(ushort *)(uVar21 + 0x44);
            if (*pcVar11 == '\a') {
              if (199 < uVar7 - 100) {
LAB_0141b674:
                if ((uVar7 != 0xcc) && (uVar7 != 0x130)) {
                  local_50 = 0;
                  local_4c = 0x45;
                  local_48 = 0;
                  puStack_44 = (uint *)0x0;
                  FUN_0141be60(&local_108,param_3);
                  FUN_01ac6cbc(param_3,&DAT_00477b88,0xb);
                  if (local_50 != 0) {
                    (**(code **)(local_50 + 0x10))(&puStack_44,local_4c,local_48);
                  }
                  uVar8 = 0;
                  puVar13 = (uint *)0x0;
                }
              }
            }
            else if (99 < uVar7 - 100) goto LAB_0141b674;
          }
        }
LAB_0141b6ec:
        if ((local_d8 == 0) && (local_d4 != 0x80000000)) {
          FUN_0141a4fc(uVar6);
        }
        local_d4 = 0x80000000;
        local_c8 = (uint *)((uint)local_c8 & 0xffffff00);
        local_d8 = uVar8;
        local_d0 = uVar26;
        local_cc = puVar13;
      }
      if (*pcVar11 == '\x05') {
LAB_0141b774:
        if ((local_d8 == 0) && (local_d4 != 0x80000000)) {
          FUN_0141a4fc(uVar6);
        }
        local_c8 = (uint *)((uint)local_c8 & 0xffffff00);
        local_d0 = 0;
        local_cc = (uint *)0x0;
        local_d8 = 1;
      }
      else {
        uVar21 = (uint)*(ushort *)(uVar21 + 0x44);
        if (*pcVar11 != '\a') {
          if (99 < uVar21 - 100) goto LAB_0141b768;
          goto LAB_0141b774;
        }
        if (uVar21 - 100 < 200) goto LAB_0141b774;
LAB_0141b768:
        if (uVar21 == 0x130 || uVar21 == 0xcc) goto LAB_0141b774;
      }
      uVar18 = 2;
      if (bVar27) {
        puVar16 = &DAT_00531047;
      }
      else {
        puVar16 = &DAT_00531047;
        if ((*(byte *)((int)param_2 + 0x1a) & 1) != 0) {
          if ((uint)(*param_3 - param_3[2]) < 0x25) {
            FUN_016092cc(param_3,param_3[2],0x25,1,1);
          }
          local_50 = 0;
          local_4c = 0x20;
          local_48 = 0;
          puStack_44 = (uint *)0x0;
          FUN_0141be60(&local_108,param_3);
          FUN_01ac6cbc(param_3,0x5312dd,2);
          if (local_50 != 0) {
            (**(code **)(local_50 + 0x10))(&puStack_44,local_4c,local_48);
          }
          FUN_01420ea4(param_3);
          uVar18 = 4;
          puVar16 = &DAT_0056eb54;
        }
      }
      FUN_01ac6cbc(param_3,puVar16,uVar18);
      iVar14 = local_bc;
      bVar27 = local_d8 != 0;
      bVar2 = local_bc == -0x80000000;
      if (!bVar27 && !bVar2) {
        FUN_01428bac(&local_50,&local_d8,&local_bc);
        local_d8 = local_50;
        local_d4 = local_4c;
        local_d0 = local_48;
        local_cc = puStack_44;
        local_c8 = puStack_40;
        uStack_c4 = local_3c;
      }
      *param_1 = local_d8;
      param_1[1] = local_d4;
      param_1[2] = local_d0;
      param_1[3] = (uint)local_cc;
      param_1[5] = uStack_c4;
      *(uint *)((int)param_1 + 0x11) = CONCAT13((undefined1)uStack_c4,local_c8._1_3_);
      uVar21 = CONCAT13((undefined1)uStack_c4,local_c8._1_3_);
      if (local_b0 != 0) {
        uVar21 = local_ac;
      }
      *(byte *)(param_1 + 4) = param_4 & 1;
      if (local_b0 != 0 && uVar21 != 0) {
        (**(code **)(uVar21 + 0x10))(&puStack_a0,local_a8,local_a4);
      }
      if ((bVar27 || bVar2) && iVar14 != -0x80000000) {
        FUN_0141a4fc(&local_bc);
      }
      goto LAB_0141b934;
    }
    local_80 = local_3c;
    local_7c = pbStack_38;
    local_78 = uStack_34;
    puStack_74 = puStack_30;
    puStack_70 = puStack_2c;
    puVar13 = puStack_2c;
    bVar20 = bVar25;
    if ((local_50 & 1) == 0) {
LAB_0141ac38:
      if (local_b0 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("current header name",0x13,&DAT_01cf4488);
      }
    }
    else {
      uVar12 = 0;
      if (local_b0 != 0) {
        uVar12 = local_ac;
      }
      if (local_b0 != 0 && uVar12 != 0) {
        (**(code **)(uVar12 + 0x10))(&puStack_a0,local_a8,local_a4);
      }
      puVar13 = puStack_40;
      local_b0 = 1;
      bVar20 = false;
      local_ac = local_4c;
      local_a8 = local_48;
      local_a4 = puStack_44;
      puStack_a0 = puStack_40;
      if (bVar25) {
        FUN_01ac6cbc(param_3,puVar16,uVar26);
        bVar20 = false;
        goto LAB_0141ac38;
      }
    }
    if (local_ac == 0) {
      uVar12 = local_a8 & 0xff;
      if (uVar12 < 0x20) {
        if (uVar12 == 0x18) {
          if ((~local_120 & 1) == 0 && !bVar20) goto LAB_0141b4a4;
          if (uVar7 != 2 || uVar8 != 0) {
            if ((uVar7 & 1) == 0) {
              bVar25 = !bVar20;
              bVar20 = true;
              if (bVar25) {
                if ((local_d8 == 0) && (local_d4 != 0x80000000)) {
                  FUN_0141a4fc(uVar6);
                }
                local_d8 = 1;
                local_c8 = (uint *)((uint)local_c8 & 0xffffff00);
                local_68 = 0;
                local_64 = &DAT_00000018;
                local_60 = 0;
                puVar13 = (uint *)0x0;
                local_d0 = uVar9;
                local_cc = puVar10;
                puStack_5c = puVar13;
                FUN_0141be60(&local_108,param_3);
                FUN_01ac6cbc(param_3,0x5312dd,2);
                if (local_68 != 0) {
                  (**(code **)(local_68 + 0x10))(&puStack_5c,local_64,local_60);
                }
                bVar20 = true;
                FUN_01ac6cbc(param_3,local_7c,local_78);
                local_120 = 1;
              }
              goto LAB_0141b078;
            }
            if (local_78 == 0) goto LAB_0141b4a4;
            uVar12 = 0;
            puVar13 = (uint *)0x0;
            uVar26 = local_78;
            pbVar15 = local_7c;
            break;
          }
          if (*pcVar11 != '\x05') goto LAB_0141ad9c;
          local_120 = 1;
        }
        else if (uVar12 == 0x14) {
          bVar1 = param_4 & 1;
          param_4 = 1;
          if (bVar1 == 0) {
            param_4 = FUN_01429a28(local_7c,local_78,&DAT_005319a4,5);
          }
          if (bVar20) {
            FUN_01ac6cbc(param_3,&DAT_00533bc1,2);
          }
          else {
            local_68 = 0;
            local_64 = &DAT_00000014;
            local_60 = 0;
            puVar13 = (uint *)0x0;
            puStack_5c = puVar13;
            FUN_0141be60(&local_108,param_3);
            FUN_01ac6cbc(param_3,0x5312dd,2);
            if (local_68 != 0) {
              (**(code **)(local_68 + 0x10))(&puStack_5c,local_64,local_60);
            }
          }
          bVar20 = true;
          FUN_01ac6cbc(param_3,local_7c,local_78);
          goto LAB_0141b078;
        }
      }
      else if (uVar12 == 0x20) {
        bVar27 = true;
      }
      else {
        if (uVar12 == 0x44) {
          if (*(char *)(uVar21 + 0x46) == '\x01') {
LAB_0141ad9c:
            goto LAB_0141b078;
          }
          if (*pcVar11 == '\x05') goto LAB_0141b074;
          uVar26 = (uint)*(ushort *)(uVar21 + 0x44);
          if (*pcVar11 == '\a') {
            if (uVar26 - 100 < 200) goto LAB_0141b074;
          }
          else if (uVar26 - 100 < 100) goto LAB_0141b074;
          if (uVar26 == 0xcc || uVar26 == 0x130) goto LAB_0141b074;
          if (bVar20) {
            FUN_01ac6cbc(param_3,&DAT_00533bc1,2);
          }
          else {
            local_68 = 0;
            local_64 = &DAT_00000044;
            local_60 = 0;
            puStack_5c = (uint *)0x0;
            FUN_0141be60(&local_108,param_3);
            FUN_01ac6cbc(param_3,0x5312dd,2);
            if (local_68 != 0) {
              (**(code **)(local_68 + 0x10))(&puStack_5c,local_64,local_60);
            }
          }
          FUN_01ac6cbc(param_3,local_7c,local_78);
          if (local_bc == -0x80000000) {
            local_17c = (uint *)thunk_FUN_01be5118(0x14);
            if (local_17c == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_0066439c(4,0x14);
            }
            *local_17c = local_80;
            local_17c[1] = (uint)local_7c;
            local_17c[2] = local_78;
            local_17c[3] = (uint)puStack_74;
            local_17c[4] = (uint)puStack_70;
            local_b4 = 1;
            local_bc = 1;
            local_b8 = local_17c;
          }
          else {
            local_68 = local_80;
            local_64 = local_7c;
            local_60 = local_78;
            puStack_5c = puStack_74;
            puStack_58 = puStack_70;
            if (local_180 == local_bc) {
              FUN_01429324(&local_bc);
              local_17c = local_b8;
            }
            local_b4 = local_180 + 1;
            puVar13 = local_17c + local_180 * 5;
            *puVar13 = local_68;
            puVar13[1] = (uint)local_64;
            puVar13[2] = local_60;
            puVar13[3] = (uint)puStack_5c;
            puVar13[4] = (uint)puStack_58;
            puStack_70 = puStack_58;
          }
          bVar20 = true;
          local_180 = local_b4;
          goto LAB_0141b090;
        }
        if (uVar12 == 0x45) goto LAB_0141ada8;
      }
    }
    FUN_0141be60(&local_108,param_3,&local_ac);
    FUN_01ac6cbc(param_3,0x5312dd,2);
    FUN_01ac6cbc(param_3,local_7c,local_78);
    FUN_01ac6cbc(param_3,&DAT_00531047,2);
    (**(code **)(local_80 + 0x10))(&puStack_74,local_7c,local_78);
    bVar25 = bVar20;
  } while( true );
LAB_0141ae2c:
  if (uVar26 == 0) goto LAB_0141aff0;
  uVar17 = *pbVar15 - 0x30 & 0xff;
  if (9 < uVar17) goto LAB_0141b4a4;
  uVar19 = (uint)((ulonglong)uVar12 * 10);
  uVar12 = (uint)((ulonglong)uVar12 * 10 >> 0x20);
  uVar22 = (uint)(ZEXT48(puVar13) * 10);
  uVar23 = uVar12 + uVar22;
  if ((int)(ZEXT48(puVar13) * 10 >> 0x20) != 0 || CARRY4(uVar12,uVar22)) goto LAB_0141b4a4;
  uVar12 = uVar19 + uVar17;
  uVar26 = uVar26 - 1;
  puVar13 = (uint *)(uVar23 + CARRY4(uVar19,uVar17));
  pbVar15 = pbVar15 + 1;
  if (CARRY4(uVar23,(uint)CARRY4(uVar19,uVar17))) goto LAB_0141b4a4;
  goto LAB_0141ae2c;
LAB_0141aff0:
  if (bVar2) {
    bVar2 = true;
    if (local_174 != uVar12 || local_178 != puVar13) goto LAB_0141b4a4;
  }
  else {
    if ((local_d8 == 0) && (local_d4 != 0x80000000)) {
      FUN_0141a4fc(uVar6);
    }
    local_c8 = (uint *)((uint)local_c8 & 0xffffff00);
    local_d8 = 1;
    local_68 = 0;
    local_64 = &DAT_00000018;
    local_60 = 0;
    puStack_5c = (uint *)0x0;
    local_d0 = uVar12;
    local_cc = puVar13;
    FUN_0141be60(&local_108,param_3);
    FUN_01ac6cbc(param_3,0x5312dd,2);
    if (local_68 != 0) {
      (**(code **)(local_68 + 0x10))(&puStack_5c,local_64,local_60);
    }
    bVar2 = true;
    FUN_01ac6cbc(param_3,local_7c,local_78);
    local_120 = 1;
    local_174 = uVar12;
    bVar20 = true;
    local_178 = puVar13;
  }
  goto LAB_0141b078;
LAB_0141ada8:
  if ((~local_120 & 1) == 0 && !bVar20) {
LAB_0141b4a4:
    if (param_5 <= (uint)param_3[2]) {
      param_3[2] = param_5;
    }
    uVar21 = FUN_01427b74(1,4);
    pcVar24 = *(code **)(local_80 + 0x10);
    *param_1 = 3;
    param_1[1] = uVar21;
    (*pcVar24)(&puStack_74,local_7c,local_78);
    FUN_0141e6c4(local_9c);
    uVar21 = 0;
    if (local_b0 != 0) {
      uVar21 = local_ac;
    }
    if (local_b0 != 0 && uVar21 != 0) {
      (**(code **)(uVar21 + 0x10))(&puStack_a0,local_a8,local_a4);
    }
    if (local_bc != -0x80000000) {
      FUN_0141a4fc(&local_bc);
    }
    if ((local_d8 == 0) && (local_d4 != 0x80000000)) {
      FUN_0141a4fc(uVar6);
    }
LAB_0141b934:
    iVar14 = local_f8;
    if (local_f8 != 3) {
      iVar14 = local_108;
    }
    if (local_f8 != 3 && iVar14 != 0) {
      (**(code **)(iVar14 + 0x10))(auStack_fc,local_104,local_100);
    }
    return;
  }
  if ((*(char *)(uVar21 + 0x46) != '\x01') && (*pcVar11 != '\x05')) {
    uVar26 = (uint)*(ushort *)(uVar21 + 0x44);
    if (*pcVar11 == '\a') {
      if (199 < uVar26 - 100) {
LAB_0141b068:
        if (uVar26 != 0xcc && uVar26 != 0x130) {
          puVar13 = (uint *)FUN_0142994c(local_7c,local_78);
          if (bVar20) {
            FUN_01ac6cbc(param_3,&DAT_00533bc1,2);
          }
          else {
            if ((local_d8 == 0) && (local_d4 != 0x80000000)) {
              FUN_0141a4fc(uVar6);
            }
            local_c8 = (uint *)((uint)local_c8 & 0xffffff00);
            local_d4 = 0x80000000;
            local_d8 = 0;
            local_68 = 0;
            local_64 = &DAT_00000045;
            local_60 = 0;
            puStack_5c = (uint *)0x0;
            FUN_0141be60(&local_108,param_3);
            FUN_01ac6cbc(param_3,0x5312dd,2);
            if (local_68 != 0) {
              (**(code **)(local_68 + 0x10))(&puStack_5c,local_64,local_60);
            }
          }
          FUN_01ac6cbc(param_3,local_7c,local_78);
          local_148 = (uint)puVar13 ^ 1;
          local_120 = 1;
          bVar20 = true;
          goto LAB_0141b078;
        }
      }
    }
    else if (99 < uVar26 - 100) goto LAB_0141b068;
  }
LAB_0141b074:
LAB_0141b078:
  (**(code **)(local_80 + 0x10))(&puStack_74,local_7c,local_78);
  puStack_70 = puVar13;
LAB_0141b090:
  puVar13 = puStack_70;
  bVar25 = bVar20;
  goto LAB_0141ab7c;
}

