// FUN_0130c5f4 @ 0130c5f4 size=7364 calls_out=35 calls_in=1
// strings: range step cannot be zero | range step cannot be zero | range step cannot be zero | range step cannot be zero | range step cannot be zero | range step cannot be zero

void FUN_0130c5f4(undefined4 *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  undefined4 *puVar5;
  int iVar6;
  uint *extraout_r2;
  uint *extraout_r2_00;
  uint *extraout_r2_01;
  uint *extraout_r2_02;
  uint *extraout_r2_03;
  uint *extraout_r2_04;
  uint *puVar7;
  uint *puVar8;
  uint *extraout_r3;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  uint uVar13;
  undefined8 uVar14;
  uint *local_224;
  uint *local_220;
  uint *local_208;
  uint *local_204;
  uint *local_200;
  uint *local_1fc;
  uint *local_1f8;
  uint *local_1f4;
  uint *local_1f0;
  uint *local_1ec;
  uint *local_1e8;
  int local_1e4;
  undefined1 local_1e0;
  undefined1 auStack_1b8 [80];
  uint *local_168;
  undefined8 local_164;
  uint *local_15c;
  uint *puStack_158;
  uint *puStack_154;
  uint *puStack_150;
  uint *local_14c;
  undefined8 local_148;
  uint *puStack_140;
  uint *local_13c;
  uint *local_138;
  uint *puStack_134;
  uint *puStack_130;
  uint local_12c;
  uint *local_128;
  uint *puStack_124;
  uint *puStack_120;
  int local_118;
  undefined1 auStack_114 [12];
  uint *local_108;
  uint *local_104;
  uint *local_100;
  uint *local_fc;
  uint *local_f8;
  undefined8 local_f4;
  uint *local_ec;
  uint *local_e8;
  undefined8 local_e4;
  uint *puStack_dc;
  uint *local_d8;
  uint *local_d4;
  uint *local_d0;
  uint *local_cc;
  uint *local_c8;
  undefined8 local_c4;
  uint *puStack_bc;
  uint *local_b8;
  uint *local_b4;
  uint *local_b0;
  uint *local_ac;
  uint *local_a8;
  uint *local_a4;
  uint *local_a0;
  uint *local_98;
  uint *local_94;
  uint *local_90;
  uint *local_88;
  uint *local_84;
  uint *local_80;
  uint *local_7c;
  uint *local_78;
  uint *puStack_74;
  uint *puStack_70;
  uint uStack_6c;
  uint uStack_68;
  uint uStack_64;
  uint local_60;
  uint *local_5c;
  uint *local_58;
  uint *local_54;
  uint uStack_50;
  uint uStack_4c;
  uint *local_40;
  uint *local_3c;
  uint *local_38;
  uint *local_34;
  uint *local_30;
  uint *local_2c;
  uint *local_28;
  
  FUN_0130b364(&local_208);
  puVar10 = local_1f8;
  puVar7 = local_1fc;
  puVar8 = local_200;
  puVar9 = local_204;
  if (local_208 == (uint *)&DAT_00000001) {
    uVar1 = (uint)local_1f8 >> 8;
    param_3 = local_1fc;
LAB_0130c9b4:
    puVar11 = (uint *)((uint)local_1f8 & 0xff | uVar1 << 8);
    uVar14 = CONCAT44(local_200,local_204);
    goto LAB_0130c9bc;
  }
  local_e4._0_4_ = local_1f8;
  local_e8 = local_1fc;
  local_e4._4_4_ = local_1f4;
  puVar2 = local_1f4;
  if (local_1f4 == (uint *)&DAT_00000001) {
    local_208 = (uint *)0x80000003;
    uVar1 = 0x80000000;
    local_204 = (uint *)&DAT_80000000;
    if (*local_1f8 == 0x80000003) {
      uVar1 = local_1f8[1];
    }
    if (*local_1f8 != 0x80000003 || uVar1 != 0x80000000) {
      FUN_0130f600(&local_208);
      puVar2 = (uint *)&DAT_00000001;
      goto LAB_0130c688;
    }
    FUN_0130f600(&local_208);
    local_f4 = FUN_0130aeb4(&local_e8);
    puVar7 = (uint *)0x0;
    local_ec = extraout_r2;
  }
  else {
LAB_0130c688:
    local_d0 = (uint *)0x0;
    local_d8 = (uint *)0x0;
    local_80 = puVar7;
    puVar7 = puVar10 + (int)puVar2 * 7;
    local_84 = puVar10;
    local_88 = puVar10;
    local_7c = puVar7;
    if (puVar2 != (uint *)0x0) {
      do {
        puVar2 = puVar10 + 7;
        uVar13 = *puVar10;
        local_78 = (uint *)puVar10[1];
        puStack_74 = (uint *)puVar10[2];
        puStack_70 = (uint *)puVar10[3];
        uStack_6c = puVar10[4];
        uStack_68 = puVar10[5];
        uVar1 = puVar10[6];
        uStack_64 = uVar1;
        if (uVar13 == 0x80000006) goto LAB_0130c928;
        iVar6 = 1;
        if (0x80000002 < uVar13) {
          iVar6 = uVar13 + 0x7ffffffd;
        }
        local_54 = puStack_70;
        local_60 = uVar13;
        local_5c = local_78;
        local_58 = puStack_74;
        uStack_50 = uStack_6c;
        uStack_4c = uStack_68;
        if (iVar6 != 0) {
          if (iVar6 == 1) {
            if (uVar1 == 0) {
              puVar4 = (uint *)thunk_FUN_01be5118(0x19);
              if (puVar4 == (uint *)0x0) {
                local_84 = puVar2;
                    /* WARNING: Subroutine does not return */
                FUN_00664620(1,0x19);
              }
              FUN_01bed4e2(puVar4,"range step cannot be zero",0x19);
              puVar10 = (uint *)&DAT_00000019;
            }
            else if (uVar13 == 0x80000001) {
              FUN_013127c4(&local_208,local_78);
              puVar4 = local_204;
              puVar10 = local_208;
              if (local_208 == (uint *)&DAT_80000000) {
                local_200 = (uint *)((uint)local_200 & 0xffffff00);
                local_204 = (uint *)0x3b;
                local_208 = puVar4;
                FUN_0130ef7c(&local_b8,&local_208);
                goto LAB_0130c83c;
              }
            }
            else {
              FUN_013128a8(&local_208,&local_60);
              puVar4 = local_200;
              puVar10 = local_204;
              if (local_208 == (uint *)0x0) {
                local_b0 = local_1fc;
                local_b4 = local_200;
                local_b8 = local_204;
LAB_0130c83c:
                local_1e0 = 1;
                local_1e4 = uVar1 - 1;
                local_1e8 = local_b0;
                if (local_b8 == (uint *)0x0) {
                  local_1e8 = (uint *)0x0;
                }
                local_208 = (uint *)(uint)(local_b8 != (uint *)0x0);
                local_1f4 = (uint *)0x0;
                local_204 = (uint *)0x0;
                local_200 = local_b8;
                local_1fc = local_b4;
                local_1f8 = local_208;
                local_1f0 = local_b8;
                local_1ec = local_b4;
                FUN_0130e774(&local_c8,&local_208);
                goto LAB_0130c888;
              }
            }
          }
          else {
            FUN_01312c24(&local_208,puStack_74,puStack_70);
            puVar4 = local_204;
            puVar10 = local_208;
            if (local_208 == (uint *)&DAT_80000000) {
              local_f8 = local_204;
              FUN_0130ee0c(&local_c8,&local_f8,&local_f4);
              goto LAB_0130c888;
            }
          }
LAB_0130d1ec:
          local_84 = puVar2;
LAB_0130c980:
          FUN_0130f600(&local_60);
          FUN_0130f630(&local_88);
          FUN_0130f9ac(&local_d8);
          uVar1 = FUN_0134bd64(puVar10,puVar4);
          local_1f8 = (uint *)&DAT_00000001;
          local_204 = (uint *)&DAT_00000001;
          local_200 = param_2;
          goto LAB_0130c9b4;
        }
        FUN_013128a8(&local_208,&local_5c);
        puVar4 = local_200;
        puVar10 = local_204;
        if (local_208 != (uint *)0x0) goto LAB_0130d1ec;
        local_c4._4_4_ = local_1fc;
        local_c4._0_4_ = local_200;
        local_c8 = local_204;
LAB_0130c888:
        local_1f4 = (uint *)0x0;
        local_204 = (uint *)0x0;
        local_1e8 = local_c4._4_4_;
        if (local_c8 == (uint *)0x0) {
          local_1e8 = local_c8;
        }
        local_1f0 = local_c8;
        local_1ec = (uint *)local_c4;
        local_208 = local_c8;
        if (local_c8 != (uint *)0x0) {
          local_208 = (uint *)&DAT_00000001;
        }
        local_200 = local_c8;
        local_1fc = (uint *)local_c4;
        local_1f8 = local_208;
        while (uVar1 = FUN_0130f688(&local_208), (uVar1 & 1) != 0) {
          FUN_013127c4(&local_c8);
          puVar4 = (uint *)local_c4;
          puVar10 = local_c8;
          if (local_c8 != (uint *)&DAT_80000000) {
            local_84 = puVar2;
            do {
              FUN_0130f6c8(&local_b8,&local_208);
            } while (local_b8 != (uint *)0x0);
            goto LAB_0130c980;
          }
          FUN_0130f1cc(&local_d8,(uint *)local_c4);
        }
        do {
          FUN_0130f6c8(&local_b8,&local_208);
        } while (local_b8 != (uint *)0x0);
        FUN_0130f600(&local_60);
        puVar10 = puVar2;
      } while (puVar2 != puVar7);
      puVar2 = puVar7;
LAB_0130c928:
      local_84 = puVar2;
    }
    FUN_0130f630(&local_88);
    local_f4 = CONCAT44(local_d4,local_d8);
    puVar7 = (uint *)0x1;
    local_ec = local_d0;
  }
  local_f8 = puVar7;
  FUN_0130b364(&local_208,puVar9,puVar8);
  puVar12 = local_1f8;
  puVar4 = local_1fc;
  puVar2 = local_200;
  puVar10 = local_204;
  if (local_208 == (uint *)&DAT_00000001) {
    uVar1 = (uint)local_1f8 >> 8;
    puVar8 = local_1fc;
    puVar9 = local_200;
    local_224 = local_204;
    puVar10 = local_1f8;
LAB_0130cdc4:
    param_3 = puVar8;
    puVar11 = (uint *)((uint)puVar10 & 0xff | uVar1 << 8);
  }
  else {
    local_e4._0_4_ = local_1f8;
    local_e8 = local_1fc;
    local_e4._4_4_ = local_1f4;
    puVar3 = local_1f4;
    if (local_1f4 == (uint *)&DAT_00000001) {
      local_208 = (uint *)0x80000003;
      uVar1 = 0x80000000;
      local_204 = (uint *)&DAT_80000000;
      if (*local_1f8 == 0x80000003) {
        uVar1 = local_1f8[1];
      }
      if (*local_1f8 != 0x80000003 || uVar1 != 0x80000000) {
        FUN_0130f600(&local_208);
        puVar3 = (uint *)&DAT_00000001;
        goto LAB_0130ca80;
      }
      FUN_0130f600(&local_208);
      local_e4 = FUN_0130aeb4(&local_e8);
      puVar8 = (uint *)0x0;
      puStack_dc = extraout_r2_00;
    }
    else {
LAB_0130ca80:
      local_d0 = (uint *)0x0;
      local_d8 = (uint *)0x0;
      local_80 = puVar4;
      puVar4 = puVar12 + (int)puVar3 * 7;
      local_84 = puVar12;
      local_88 = puVar12;
      local_7c = puVar4;
      if (puVar3 != (uint *)0x0) {
        do {
          puVar3 = puVar12 + 7;
          uVar13 = *puVar12;
          local_78 = (uint *)puVar12[1];
          puStack_74 = (uint *)puVar12[2];
          puStack_70 = (uint *)puVar12[3];
          uStack_6c = puVar12[4];
          uStack_68 = puVar12[5];
          uVar1 = puVar12[6];
          uStack_64 = uVar1;
          if (uVar13 == 0x80000006) goto LAB_0130cd30;
          iVar6 = 1;
          if (0x80000002 < uVar13) {
            iVar6 = uVar13 + 0x7ffffffd;
          }
          local_54 = puStack_70;
          local_60 = uVar13;
          local_5c = local_78;
          local_58 = puStack_74;
          uStack_50 = uStack_6c;
          uStack_4c = uStack_68;
          if (iVar6 != 0) {
            if (iVar6 == 1) {
              if (uVar1 == 0) {
                puVar11 = (uint *)thunk_FUN_01be5118(0x19);
                if (puVar11 == (uint *)0x0) {
                  local_84 = puVar3;
                    /* WARNING: Subroutine does not return */
                  FUN_00664620(1,0x19);
                }
                FUN_01bed4e2(puVar11,"range step cannot be zero",0x19);
                puVar12 = (uint *)&DAT_00000019;
              }
              else if (uVar13 == 0x80000001) {
                FUN_01311c4c(&local_208,local_78);
                puVar11 = local_204;
                puVar12 = local_208;
                if (local_208 == (uint *)&DAT_80000000) {
                  local_208 = local_204;
                  local_200 = (uint *)((uint)local_200 & 0xffffff00);
                  local_204 = (uint *)0x3b;
                  FUN_0130ef7c(&local_b8,&local_208);
                  goto LAB_0130cc38;
                }
              }
              else {
                FUN_01311d30(&local_208,&local_60);
                puVar11 = local_200;
                puVar12 = local_204;
                if (local_208 == (uint *)0x0) {
                  local_b0 = local_1fc;
                  local_b4 = local_200;
                  local_b8 = local_204;
LAB_0130cc38:
                  local_1e0 = 1;
                  local_1e4 = uVar1 - 1;
                  local_1e8 = local_b0;
                  if (local_b8 == (uint *)0x0) {
                    local_1e8 = (uint *)0x0;
                  }
                  local_208 = (uint *)(uint)(local_b8 != (uint *)0x0);
                  local_1f4 = (uint *)0x0;
                  local_204 = (uint *)0x0;
                  local_200 = local_b8;
                  local_1fc = local_b4;
                  local_1f8 = local_208;
                  local_1f0 = local_b8;
                  local_1ec = local_b4;
                  FUN_0130e774(&local_c8,&local_208);
                  goto LAB_0130cc88;
                }
              }
            }
            else {
              FUN_013120ac(&local_208,puStack_74,puStack_70);
              puVar11 = local_204;
              puVar12 = local_208;
              if (local_208 == (uint *)&DAT_80000000) {
                local_30 = local_204;
                FUN_0130ee0c(&local_c8,&local_30,&local_2c);
                goto LAB_0130cc88;
              }
            }
LAB_0130d608:
            local_84 = puVar3;
LAB_0130cd94:
            FUN_0130f600(&local_60);
            FUN_0130f630(&local_88);
            FUN_0130f9ac(&local_d8);
            uVar1 = FUN_0134bd64(puVar12,puVar11);
            puVar10 = (uint *)&DAT_00000001;
            local_224 = (uint *)&DAT_00000001;
            goto LAB_0130cdc4;
          }
          FUN_01311d30(&local_208,&local_5c);
          puVar11 = local_200;
          puVar12 = local_204;
          if (local_208 != (uint *)0x0) goto LAB_0130d608;
          local_c4._4_4_ = local_1fc;
          local_c4._0_4_ = local_200;
          local_c8 = local_204;
LAB_0130cc88:
          local_1e8 = local_c4._4_4_;
          if (local_c8 == (uint *)0x0) {
            local_1e8 = local_c8;
          }
          local_1f0 = local_c8;
          local_1ec = (uint *)local_c4;
          local_208 = local_c8;
          if (local_c8 != (uint *)0x0) {
            local_208 = (uint *)&DAT_00000001;
          }
          local_1f4 = (uint *)0x0;
          local_200 = local_c8;
          local_1fc = (uint *)local_c4;
          local_204 = (uint *)0x0;
          local_1f8 = local_208;
          while( true ) {
            uVar1 = FUN_0130f688(&local_208);
            if ((uVar1 & 1) == 0) break;
            FUN_01311c4c(&local_c8);
            puVar11 = (uint *)local_c4;
            puVar12 = local_c8;
            if (local_c8 != (uint *)&DAT_80000000) {
              local_84 = puVar3;
              do {
                FUN_0130f6c8(&local_b8,&local_208);
              } while (local_b8 != (uint *)0x0);
              goto LAB_0130cd94;
            }
            FUN_0130f1cc(&local_d8,(uint *)local_c4);
          }
          do {
            FUN_0130f6c8(&local_b8,&local_208);
          } while (local_b8 != (uint *)0x0);
          FUN_0130f600(&local_60);
          puVar12 = puVar3;
        } while (puVar3 != puVar4);
        puVar3 = puVar4;
LAB_0130cd30:
        local_84 = puVar3;
      }
      FUN_0130f630(&local_88);
      local_e4 = CONCAT44(local_d4,local_d8);
      puVar8 = (uint *)&DAT_00000001;
      puStack_dc = local_d0;
    }
    local_e8 = puVar8;
    FUN_0130b364(&local_208,puVar10,puVar2);
    puVar12 = local_1f8;
    puVar7 = local_1fc;
    puVar4 = local_200;
    puVar9 = local_204;
    local_224 = local_204;
    if (local_208 == (uint *)&DAT_00000001) {
      uVar1 = (uint)local_1f8 >> 8;
      puVar2 = local_1fc;
      puVar10 = local_200;
      puVar9 = local_1f8;
LAB_0130d1b0:
      puVar12 = (uint *)((uint)puVar9 & 0xff | uVar1 << 8);
      puVar4 = puVar2;
      puVar9 = puVar10;
    }
    else {
      local_2c = local_1f8;
      local_30 = local_1fc;
      local_28 = local_1f4;
      puVar3 = local_1f4;
      if (local_1f4 == (uint *)&DAT_00000001) {
        local_208 = (uint *)0x80000003;
        uVar1 = 0x80000000;
        local_204 = (uint *)&DAT_80000000;
        if (*local_1f8 == 0x80000003) {
          uVar1 = local_1f8[1];
        }
        if (*local_1f8 != 0x80000003 || uVar1 != 0x80000000) {
          FUN_0130f600(&local_208);
          puVar3 = (uint *)&DAT_00000001;
          goto LAB_0130ce7c;
        }
        FUN_0130f600(&local_208);
        local_d8 = (uint *)FUN_0130aeb4(&local_30);
        puVar8 = (uint *)0x0;
        local_d0 = extraout_r2_01;
        local_d4 = extraout_r3;
      }
      else {
LAB_0130ce7c:
        local_d0 = (uint *)0x0;
        local_d8 = (uint *)0x0;
        local_80 = puVar7;
        puVar7 = puVar12 + (int)puVar3 * 7;
        local_84 = puVar12;
        local_88 = puVar12;
        local_7c = puVar7;
        if (puVar3 != (uint *)0x0) {
          do {
            puVar3 = puVar12 + 7;
            uVar13 = *puVar12;
            local_78 = (uint *)puVar12[1];
            puStack_74 = (uint *)puVar12[2];
            puStack_70 = (uint *)puVar12[3];
            uStack_6c = puVar12[4];
            uStack_68 = puVar12[5];
            uVar1 = puVar12[6];
            uStack_64 = uVar1;
            if (uVar13 == 0x80000006) goto LAB_0130d118;
            iVar6 = 1;
            if (0x80000002 < uVar13) {
              iVar6 = uVar13 + 0x7ffffffd;
            }
            local_54 = puStack_70;
            local_60 = uVar13;
            local_5c = local_78;
            local_58 = puStack_74;
            uStack_50 = uStack_6c;
            uStack_4c = uStack_68;
            if (iVar6 != 0) {
              if (iVar6 == 1) {
                if (uVar1 == 0) {
                  puVar11 = (uint *)thunk_FUN_01be5118(0x19);
                  if (puVar11 == (uint *)0x0) {
                    local_84 = puVar3;
                    /* WARNING: Subroutine does not return */
                    FUN_00664620(1,0x19);
                  }
                  FUN_01bed4e2(puVar11,"range step cannot be zero",0x19);
                  puVar12 = (uint *)&DAT_00000019;
                }
                else if (uVar13 == 0x80000001) {
                  FUN_0131217c(&local_208,local_78);
                  puVar12 = local_208;
                  puVar11 = local_204;
                  if (local_208 == (uint *)&DAT_80000000) {
                    local_208 = local_204;
                    local_200 = (uint *)((uint)local_200 & 0xffffff00);
                    local_204 = (uint *)0x17;
                    FUN_0130ef7c(&local_b8,&local_208);
                    goto LAB_0130d024;
                  }
                }
                else {
                  FUN_01312260(&local_208,&local_60);
                  puVar12 = local_204;
                  puVar11 = local_200;
                  if (local_208 == (uint *)0x0) {
                    local_b0 = local_1fc;
                    local_b4 = local_200;
                    local_b8 = local_204;
LAB_0130d024:
                    local_1e0 = 1;
                    local_1e4 = uVar1 - 1;
                    local_1e8 = local_b0;
                    if (local_b8 == (uint *)0x0) {
                      local_1e8 = (uint *)0x0;
                    }
                    local_204 = (uint *)0x0;
                    local_208 = (uint *)(uint)(local_b8 != (uint *)0x0);
                    local_1f4 = (uint *)0x0;
                    local_200 = local_b8;
                    local_1fc = local_b4;
                    local_1f8 = local_208;
                    local_1f0 = local_b8;
                    local_1ec = local_b4;
                    FUN_0130e774(&local_c8,&local_208);
                    goto LAB_0130d070;
                  }
                }
              }
              else {
                FUN_013125dc(&local_208,puStack_74,puStack_70);
                puVar12 = local_208;
                puVar11 = local_204;
                if (local_208 == (uint *)&DAT_80000000) {
                  local_40 = local_204;
                  FUN_0130ee0c(&local_c8,&local_40,&local_3c);
                  goto LAB_0130d070;
                }
              }
LAB_0130da94:
              local_84 = puVar3;
LAB_0130d178:
              FUN_0130f600(&local_60);
              FUN_0130f630(&local_88);
              FUN_0130f9ac(&local_d8);
              uVar1 = FUN_0134bd64(puVar12,puVar11);
              puVar9 = (uint *)&DAT_00000001;
              local_224 = (uint *)&DAT_00000001;
              goto LAB_0130d1b0;
            }
            FUN_01312260(&local_208,&local_5c);
            puVar12 = local_204;
            puVar11 = local_200;
            if (local_208 != (uint *)0x0) goto LAB_0130da94;
            local_c4._4_4_ = local_1fc;
            local_c4._0_4_ = local_200;
            local_c8 = local_204;
LAB_0130d070:
            local_1e8 = local_c4._4_4_;
            if (local_c8 == (uint *)0x0) {
              local_1e8 = local_c8;
            }
            local_1f0 = local_c8;
            local_1ec = (uint *)local_c4;
            local_208 = local_c8;
            if (local_c8 != (uint *)0x0) {
              local_208 = (uint *)&DAT_00000001;
            }
            local_1f4 = (uint *)0x0;
            local_200 = local_c8;
            local_1fc = (uint *)local_c4;
            local_204 = (uint *)0x0;
            local_1f8 = local_208;
            while( true ) {
              uVar1 = FUN_0130f688(&local_208);
              if ((uVar1 & 1) == 0) break;
              FUN_0131217c(&local_c8);
              puVar11 = (uint *)local_c4;
              puVar12 = local_c8;
              if (local_c8 != (uint *)&DAT_80000000) {
                local_84 = puVar3;
                do {
                  FUN_0130f6c8(&local_b8,&local_208);
                } while (local_b8 != (uint *)0x0);
                goto LAB_0130d178;
              }
              FUN_0130f1cc(&local_d8,(uint *)local_c4);
            }
            do {
              FUN_0130f6c8(&local_b8,&local_208);
            } while (local_b8 != (uint *)0x0);
            FUN_0130f600(&local_60);
            puVar12 = puVar3;
          } while (puVar3 != puVar7);
          puVar3 = puVar7;
LAB_0130d118:
          local_84 = puVar3;
        }
        FUN_0130f630(&local_88);
        puVar8 = (uint *)&DAT_00000001;
      }
      puVar7 = local_d8;
      local_d8 = puVar8;
      puVar10 = local_d4;
      local_d4 = puVar7;
      local_cc = local_d0;
      FUN_0130aae0(&local_208,puVar9,puVar4);
      local_d0 = puVar10;
      puVar12 = local_1f8;
      puVar2 = local_1fc;
      puVar10 = local_200;
      puVar7 = local_204;
      if (local_208 == (uint *)&DAT_00000001) {
        uVar1 = (uint)local_1f8 >> 8;
        puVar4 = local_1fc;
        puVar9 = local_200;
        puVar7 = local_1f8;
        local_224 = local_204;
LAB_0130d5cc:
        puVar12 = (uint *)((uint)puVar7 & 0xff | uVar1 << 8);
      }
      else {
        local_3c = local_1f8;
        local_40 = local_1fc;
        local_38 = local_1f4;
        puVar3 = local_1f4;
        if (local_1f4 == (uint *)&DAT_00000001) {
          local_208 = (uint *)0x80000003;
          uVar1 = 0x80000000;
          local_204 = (uint *)&DAT_80000000;
          if (*local_1f8 == 0x80000003) {
            uVar1 = local_1f8[1];
          }
          if (*local_1f8 != 0x80000003 || uVar1 != 0x80000000) {
            FUN_0130f600(&local_208);
            puVar3 = (uint *)&DAT_00000001;
            goto LAB_0130d2a0;
          }
          FUN_0130f600(&local_208);
          local_c4 = FUN_0130aeb4(&local_40);
          puVar8 = (uint *)0x0;
          puStack_bc = extraout_r2_02;
        }
        else {
LAB_0130d2a0:
          local_28 = (uint *)0x0;
          local_30 = (uint *)0x0;
          local_80 = puVar2;
          puVar2 = puVar12 + (int)puVar3 * 7;
          local_84 = puVar12;
          local_88 = puVar12;
          local_7c = puVar2;
          if (puVar3 != (uint *)0x0) {
            do {
              puVar3 = puVar12 + 7;
              uVar13 = *puVar12;
              local_78 = (uint *)puVar12[1];
              puStack_74 = (uint *)puVar12[2];
              puStack_70 = (uint *)puVar12[3];
              uStack_6c = puVar12[4];
              uStack_68 = puVar12[5];
              uVar1 = puVar12[6];
              uStack_64 = uVar1;
              if (uVar13 == 0x80000006) goto LAB_0130d540;
              iVar6 = 1;
              if (0x80000002 < uVar13) {
                iVar6 = uVar13 + 0x7ffffffd;
              }
              local_54 = puStack_70;
              local_60 = uVar13;
              local_5c = local_78;
              local_58 = puStack_74;
              uStack_50 = uStack_6c;
              uStack_4c = uStack_68;
              if (iVar6 != 0) {
                if (iVar6 == 1) {
                  if (uVar1 == 0) {
                    puVar11 = (uint *)thunk_FUN_01be5118(0x19);
                    if (puVar11 == (uint *)0x0) {
                      local_84 = puVar3;
                    /* WARNING: Subroutine does not return */
                      FUN_00664620(1,0x19);
                    }
                    FUN_01bed4e2(puVar11,"range step cannot be zero",0x19);
                    puVar12 = (uint *)&DAT_00000019;
                  }
                  else if (uVar13 == 0x80000001) {
                    FUN_01312dd0(&local_208,local_78);
                    puVar11 = local_204;
                    puVar12 = local_208;
                    if (local_208 == (uint *)&DAT_80000000) {
                      local_200 = (uint *)((uint)local_200 & 0xffffff00);
                      local_204 = (uint *)0x1f;
                      local_208 = puVar11;
                      FUN_0130ef7c(&local_b8,&local_208);
                      goto LAB_0130d454;
                    }
                  }
                  else {
                    FUN_01312f4c(&local_208,&local_60);
                    puVar11 = local_200;
                    puVar12 = local_204;
                    if (local_208 == (uint *)0x0) {
                      local_b0 = local_1fc;
                      local_b4 = local_200;
                      local_b8 = local_204;
LAB_0130d454:
                      local_1e0 = 1;
                      local_1e4 = uVar1 - 1;
                      local_1e8 = local_b0;
                      if (local_b8 == (uint *)0x0) {
                        local_1e8 = (uint *)0x0;
                      }
                      local_208 = (uint *)(uint)(local_b8 != (uint *)0x0);
                      local_1f4 = (uint *)0x0;
                      local_204 = (uint *)0x0;
                      local_200 = local_b8;
                      local_1fc = local_b4;
                      local_1f8 = local_208;
                      local_1f0 = local_b8;
                      local_1ec = local_b4;
                      FUN_0130e774(&local_c8,&local_208);
                      goto LAB_0130d4a0;
                    }
                  }
                }
                else {
                  FUN_013132c0(&local_208,puStack_74,puStack_70);
                  puVar11 = local_204;
                  puVar12 = local_208;
                  if (local_208 == (uint *)&DAT_80000000) {
                    local_98 = local_204;
                    FUN_0130ee0c(&local_c8,&local_98,&local_94);
                    goto LAB_0130d4a0;
                  }
                }
LAB_0130deec:
                local_84 = puVar3;
LAB_0130d598:
                FUN_0130f600(&local_60);
                FUN_0130f630(&local_88);
                FUN_0130f9ac(&local_30);
                uVar1 = FUN_0134bd64(puVar12,puVar11);
                puVar7 = (uint *)&DAT_00000001;
                local_224 = (uint *)&DAT_00000001;
                goto LAB_0130d5cc;
              }
              FUN_01312f4c(&local_208,&local_5c);
              puVar11 = local_200;
              puVar12 = local_204;
              if (local_208 != (uint *)0x0) goto LAB_0130deec;
              local_c4._4_4_ = local_1fc;
              local_c4._0_4_ = local_200;
              local_c8 = local_204;
LAB_0130d4a0:
              local_1f4 = (uint *)0x0;
              local_204 = (uint *)0x0;
              local_1e8 = local_c4._4_4_;
              if (local_c8 == (uint *)0x0) {
                local_1e8 = local_c8;
              }
              local_1f0 = local_c8;
              local_1ec = (uint *)local_c4;
              local_208 = local_c8;
              if (local_c8 != (uint *)0x0) {
                local_208 = (uint *)&DAT_00000001;
              }
              local_200 = local_c8;
              local_1fc = (uint *)local_c4;
              local_1f8 = local_208;
              while( true ) {
                uVar1 = FUN_0130f688(&local_208);
                if ((uVar1 & 1) == 0) break;
                FUN_01312dd0(&local_c8);
                puVar11 = (uint *)local_c4;
                puVar12 = local_c8;
                if (local_c8 != (uint *)&DAT_80000000) {
                  local_84 = puVar3;
                  do {
                    FUN_0130f6c8(&local_b8,&local_208);
                  } while (local_b8 != (uint *)0x0);
                  goto LAB_0130d598;
                }
                FUN_0130f1cc(&local_30,(uint *)local_c4);
              }
              do {
                FUN_0130f6c8(&local_b8,&local_208);
              } while (local_b8 != (uint *)0x0);
              FUN_0130f600(&local_60);
              puVar12 = puVar3;
            } while (puVar3 != puVar2);
            puVar3 = puVar2;
LAB_0130d540:
            local_84 = puVar3;
          }
          FUN_0130f630(&local_88);
          local_c4 = CONCAT44(local_2c,local_30);
          puVar8 = (uint *)&DAT_00000001;
          puStack_bc = local_28;
        }
        local_c8 = puVar8;
        FUN_0130b364(&local_208,puVar7,puVar10);
        puVar12 = local_1f8;
        puVar2 = local_1fc;
        puVar4 = local_200;
        puVar9 = local_204;
        if (local_208 == (uint *)&DAT_00000001) {
          uVar1 = (uint)local_1f8 >> 8;
          puVar10 = local_1fc;
          puVar7 = local_200;
          puVar9 = local_1f8;
          local_224 = local_204;
LAB_0130da00:
          puVar12 = (uint *)((uint)puVar9 & 0xff | uVar1 << 8);
          puVar4 = puVar10;
          puVar9 = puVar7;
        }
        else {
          local_94 = local_1f8;
          local_98 = local_1fc;
          local_90 = local_1f4;
          puVar3 = local_1f4;
          if (local_1f4 == (uint *)&DAT_00000001) {
            local_208 = (uint *)0x80000003;
            uVar1 = 0x80000000;
            local_204 = (uint *)&DAT_80000000;
            if (*local_1f8 == 0x80000003) {
              uVar1 = local_1f8[1];
            }
            if (*local_1f8 != 0x80000003 || uVar1 != 0x80000000) {
              FUN_0130f600(&local_208);
              puVar3 = (uint *)&DAT_00000001;
              goto LAB_0130d6bc;
            }
            FUN_0130f600(&local_208);
            uVar14 = FUN_0130aeb4(&local_98);
            puVar7 = (uint *)0x0;
            local_ac = extraout_r2_03;
          }
          else {
LAB_0130d6bc:
            local_38 = (uint *)0x0;
            local_40 = (uint *)0x0;
            local_80 = puVar2;
            puVar2 = puVar12 + (int)puVar3 * 7;
            local_84 = puVar12;
            local_88 = puVar12;
            local_7c = puVar2;
            if (puVar3 != (uint *)0x0) {
              do {
                puVar3 = puVar12 + 7;
                uVar13 = *puVar12;
                local_78 = (uint *)puVar12[1];
                puStack_74 = (uint *)puVar12[2];
                puStack_70 = (uint *)puVar12[3];
                uStack_6c = puVar12[4];
                uStack_68 = puVar12[5];
                uVar1 = puVar12[6];
                uStack_64 = uVar1;
                if (uVar13 == 0x80000006) goto LAB_0130d968;
                iVar6 = 1;
                if (0x80000002 < uVar13) {
                  iVar6 = uVar13 + 0x7ffffffd;
                }
                local_54 = puStack_70;
                local_60 = uVar13;
                local_5c = local_78;
                local_58 = puStack_74;
                uStack_50 = uStack_6c;
                uStack_4c = uStack_68;
                if (iVar6 != 0) {
                  if (iVar6 == 1) {
                    if (uVar1 == 0) {
                      puVar11 = (uint *)thunk_FUN_01be5118(0x19);
                      if (puVar11 == (uint *)0x0) {
                        local_84 = puVar3;
                    /* WARNING: Subroutine does not return */
                        FUN_00664620(1,0x19);
                      }
                      FUN_01bed4e2(puVar11,"range step cannot be zero",0x19);
                      puVar12 = (uint *)&DAT_00000019;
                    }
                    else if (uVar13 == 0x80000001) {
                      FUN_01310544(&local_208,local_78);
                      puVar11 = local_204;
                      puVar12 = local_208;
                      if (local_208 == (uint *)&DAT_80000000) {
                        local_208 = local_204;
                        local_200 = (uint *)((uint)local_200 & 0xffffff00);
                        local_204 = (uint *)0xc;
                        FUN_0130ef7c(&local_b8,&local_208);
                        goto LAB_0130d874;
                      }
                    }
                    else {
                      FUN_013106c0(&local_208,&local_60);
                      puVar11 = local_200;
                      puVar12 = local_204;
                      if (local_208 == (uint *)0x0) {
                        local_b0 = local_1fc;
                        local_b4 = local_200;
                        local_b8 = local_204;
LAB_0130d874:
                        local_1e0 = 1;
                        local_1e4 = uVar1 - 1;
                        local_1e8 = local_b0;
                        if (local_b8 == (uint *)0x0) {
                          local_1e8 = (uint *)0x0;
                        }
                        local_208 = (uint *)(uint)(local_b8 != (uint *)0x0);
                        local_1f4 = (uint *)0x0;
                        local_204 = (uint *)0x0;
                        local_200 = local_b8;
                        local_1fc = local_b4;
                        local_1f8 = local_208;
                        local_1f0 = local_b8;
                        local_1ec = local_b4;
                        FUN_0130e774(&local_30,&local_208);
                        goto LAB_0130d8c4;
                      }
                    }
                  }
                  else {
                    FUN_01310a34(&local_208,puStack_74,puStack_70);
                    puVar11 = local_204;
                    puVar12 = local_208;
                    if (local_208 == (uint *)&DAT_80000000) {
                      local_a8 = local_204;
                      FUN_0130ee0c(&local_30,&local_a8,&local_a4);
                      goto LAB_0130d8c4;
                    }
                  }
LAB_0130e1fc:
                  local_84 = puVar3;
LAB_0130d9cc:
                  FUN_0130f600(&local_60);
                  FUN_0130f630(&local_88);
                  FUN_0130f9ac(&local_40);
                  uVar1 = FUN_0134bd64(puVar12,puVar11);
                  puVar9 = (uint *)&DAT_00000001;
                  local_224 = (uint *)&DAT_00000001;
                  goto LAB_0130da00;
                }
                FUN_013106c0(&local_208,&local_5c);
                puVar11 = local_200;
                puVar12 = local_204;
                if (local_208 != (uint *)0x0) goto LAB_0130e1fc;
                local_28 = local_1fc;
                local_2c = local_200;
                local_30 = local_204;
LAB_0130d8c4:
                local_1e8 = local_28;
                if (local_30 == (uint *)0x0) {
                  local_1e8 = local_30;
                }
                local_1f0 = local_30;
                local_1ec = local_2c;
                local_208 = local_30;
                if (local_30 != (uint *)0x0) {
                  local_208 = (uint *)&DAT_00000001;
                }
                local_1f4 = (uint *)0x0;
                local_200 = local_30;
                local_1fc = local_2c;
                local_204 = (uint *)0x0;
                local_1f8 = local_208;
                while( true ) {
                  uVar1 = FUN_0130f688(&local_208);
                  if ((uVar1 & 1) == 0) break;
                  FUN_01310544(&local_30);
                  puVar11 = local_2c;
                  puVar12 = local_30;
                  if (local_30 != (uint *)&DAT_80000000) {
                    local_84 = puVar3;
                    do {
                      FUN_0130f6c8(&local_b8,&local_208);
                    } while (local_b8 != (uint *)0x0);
                    goto LAB_0130d9cc;
                  }
                  FUN_0130f1cc(&local_40,local_2c);
                }
                do {
                  FUN_0130f6c8(&local_b8,&local_208);
                } while (local_b8 != (uint *)0x0);
                FUN_0130f600(&local_60);
                puVar12 = puVar3;
              } while (puVar3 != puVar2);
              puVar3 = puVar2;
LAB_0130d968:
              local_84 = puVar3;
            }
            FUN_0130f630(&local_88);
            uVar14 = CONCAT44(local_40,local_3c);
            puVar7 = (uint *)&DAT_00000001;
            local_ac = local_38;
          }
          local_b4 = (uint *)((ulonglong)uVar14 >> 0x20);
          local_b0 = (uint *)uVar14;
          local_b8 = puVar7;
          FUN_0130aae0(&local_208,puVar9,puVar4);
          puVar3 = local_1f8;
          puVar12 = local_1fc;
          puVar2 = local_200;
          puVar10 = local_204;
          if (local_208 == (uint *)&DAT_00000001) {
            uVar1 = (uint)local_1f8 >> 8;
            puVar4 = local_1fc;
            puVar9 = local_200;
            puVar10 = local_1f8;
            local_224 = local_204;
LAB_0130de9c:
            puVar12 = (uint *)((uint)puVar10 & 0xff | uVar1 << 8);
          }
          else {
            local_a4 = local_1f8;
            local_a8 = local_1fc;
            local_a0 = local_1f4;
            puVar11 = local_1f4;
            if (local_1f4 == (uint *)&DAT_00000001) {
              local_208 = (uint *)0x80000003;
              uVar1 = 0x80000000;
              local_204 = (uint *)&DAT_80000000;
              if (*local_1f8 == 0x80000003) {
                uVar1 = local_1f8[1];
              }
              if (*local_1f8 != 0x80000003 || uVar1 != 0x80000000) {
                FUN_0130f600(&local_208);
                puVar11 = (uint *)&DAT_00000001;
                goto LAB_0130db5c;
              }
              FUN_0130f600(&local_208);
              uVar14 = FUN_0130aeb4(&local_a8);
              uVar1 = 0;
              local_54 = extraout_r2_04;
            }
            else {
LAB_0130db5c:
              local_90 = (uint *)0x0;
              local_98 = (uint *)0x0;
              local_80 = puVar12;
              puVar12 = puVar3 + (int)puVar11 * 7;
              local_84 = puVar3;
              local_88 = puVar3;
              local_7c = puVar12;
              if (puVar11 != (uint *)0x0) {
                do {
                  local_220 = puVar3 + 7;
                  uVar13 = *puVar3;
                  local_78 = (uint *)puVar3[1];
                  puStack_74 = (uint *)puVar3[2];
                  puStack_70 = (uint *)puVar3[3];
                  uStack_6c = puVar3[4];
                  uStack_68 = puVar3[5];
                  uVar1 = puVar3[6];
                  uStack_64 = uVar1;
                  if (uVar13 == 0x80000006) goto LAB_0130de00;
                  iVar6 = 1;
                  if (0x80000002 < uVar13) {
                    iVar6 = uVar13 + 0x7ffffffd;
                  }
                  local_54 = puStack_70;
                  local_60 = uVar13;
                  local_5c = local_78;
                  local_58 = puStack_74;
                  uStack_50 = uStack_6c;
                  uStack_4c = uStack_68;
                  if (iVar6 != 0) {
                    if (iVar6 == 1) {
                      if (uVar1 == 0) {
                        puVar11 = (uint *)thunk_FUN_01be5118(0x19);
                        if (puVar11 == (uint *)0x0) {
                          local_84 = local_220;
                    /* WARNING: Subroutine does not return */
                          FUN_00664620(1,0x19);
                        }
                        FUN_01bed4e2(puVar11,"range step cannot be zero",0x19);
                        puVar3 = (uint *)&DAT_00000019;
                      }
                      else if (uVar13 == 0x80000001) {
                        FUN_01311448(&local_208,local_78);
                        puVar3 = local_208;
                        puVar11 = local_204;
                        if (local_208 == (uint *)&DAT_80000000) {
                          local_208 = local_204;
                          local_200 = (uint *)((uint)local_200 & 0xffffff00);
                          local_204 = (uint *)0x7;
                          FUN_0130ef7c(&local_30,&local_208);
                          goto LAB_0130dd08;
                        }
                      }
                      else {
                        FUN_013115c4(&local_208,&local_60);
                        puVar3 = local_204;
                        puVar11 = local_200;
                        if (local_208 == (uint *)0x0) {
                          local_28 = local_1fc;
                          local_2c = local_200;
                          local_30 = local_204;
LAB_0130dd08:
                          local_1e0 = 1;
                          local_1e4 = uVar1 - 1;
                          local_1e8 = local_28;
                          if (local_30 == (uint *)0x0) {
                            local_1e8 = (uint *)0x0;
                          }
                          local_204 = (uint *)0x0;
                          local_208 = (uint *)(uint)(local_30 != (uint *)0x0);
                          local_1f4 = (uint *)0x0;
                          local_200 = local_30;
                          local_1fc = local_2c;
                          local_1f8 = local_208;
                          local_1f0 = local_30;
                          local_1ec = local_2c;
                          FUN_0130e774(&local_40,&local_208);
                          goto LAB_0130dd54;
                        }
                      }
                    }
                    else {
                      FUN_01311938(&local_208,puStack_74,puStack_70);
                      puVar3 = local_208;
                      puVar11 = local_204;
                      if (local_208 == (uint *)&DAT_80000000) {
                        local_34 = local_204;
                        FUN_0130ee0c(&local_40,&local_34,&local_30);
                        goto LAB_0130dd54;
                      }
                    }
LAB_0130e238:
                    local_84 = local_220;
LAB_0130de68:
                    FUN_0130f600(&local_60);
                    FUN_0130f630(&local_88);
                    FUN_0130f9ac(&local_98);
                    uVar1 = FUN_0134bd64(puVar3,puVar11);
                    puVar10 = (uint *)&DAT_00000001;
                    local_224 = (uint *)&DAT_00000001;
                    goto LAB_0130de9c;
                  }
                  FUN_013115c4(&local_208,&local_5c);
                  puVar3 = local_204;
                  puVar11 = local_200;
                  if (local_208 != (uint *)0x0) goto LAB_0130e238;
                  local_38 = local_1fc;
                  local_3c = local_200;
                  local_40 = local_204;
LAB_0130dd54:
                  local_1e8 = local_38;
                  if (local_40 == (uint *)0x0) {
                    local_1e8 = local_40;
                  }
                  local_1f0 = local_40;
                  local_1ec = local_3c;
                  local_208 = local_40;
                  if (local_40 != (uint *)0x0) {
                    local_208 = (uint *)&DAT_00000001;
                  }
                  local_1f4 = (uint *)0x0;
                  local_200 = local_40;
                  local_1fc = local_3c;
                  local_204 = (uint *)0x0;
                  local_1f8 = local_208;
                  while( true ) {
                    uVar1 = FUN_0130f688(&local_208);
                    if ((uVar1 & 1) == 0) break;
                    FUN_01311448(&local_40);
                    puVar11 = local_3c;
                    puVar3 = local_40;
                    if (local_40 != (uint *)&DAT_80000000) {
                      local_84 = local_220;
                      do {
                        FUN_0130f6c8(&local_30,&local_208);
                      } while (local_30 != (uint *)0x0);
                      goto LAB_0130de68;
                    }
                    FUN_0130f1cc(&local_98,local_3c);
                  }
                  do {
                    FUN_0130f6c8(&local_30,&local_208);
                  } while (local_30 != (uint *)0x0);
                  FUN_0130f600(&local_60);
                  puVar3 = local_220;
                } while (local_220 != puVar12);
                local_220 = puVar12;
LAB_0130de00:
                local_84 = local_220;
              }
              FUN_0130f630(&local_88);
              uVar14 = CONCAT44(local_98,local_94);
              uVar1 = 1;
              local_54 = local_90;
            }
            local_5c = (uint *)((ulonglong)uVar14 >> 0x20);
            local_58 = (uint *)uVar14;
            local_60 = uVar1;
            FUN_0131001c(&local_208,puVar10,puVar2);
            puVar11 = local_e8;
            param_3 = local_ec;
            uVar14 = local_f4;
            puVar3 = local_f8;
            puVar2 = local_1f0;
            puVar10 = local_1f4;
            puVar12 = local_1f8;
            puVar4 = local_1fc;
            puVar9 = local_200;
            local_224 = local_204;
            if (local_208 != (uint *)&DAT_00000001) {
              puVar5 = (undefined4 *)((uint)&local_e8 | 4);
              local_168 = (uint *)*puVar5;
              local_164._0_4_ = puVar5[1];
              local_164._4_4_ = puVar5[2];
              local_15c = local_d8;
              puStack_158 = local_d4;
              puStack_154 = local_d0;
              puStack_150 = local_cc;
              local_14c = local_c8;
              puStack_140 = puStack_bc;
              local_13c = local_b8;
              local_138 = local_b4;
              puStack_134 = local_b0;
              puStack_130 = local_ac;
              local_12c = local_60;
              local_128 = local_5c;
              puStack_124 = local_58;
              puStack_120 = local_54;
              local_148 = local_c4;
              FUN_01bed4e2(auStack_1b8,&local_168,0x4c);
              if (puVar3 != (uint *)0x2) {
                FUN_01bed4e2(&local_208,auStack_1b8,0x4c);
                local_168 = puVar3;
                local_15c = param_3;
                puStack_158 = puVar11;
                local_164 = uVar14;
                FUN_01bed4e2(&puStack_154,&local_208,0x4c);
                local_100 = puVar10;
                puVar7 = local_224;
                puVar8 = (uint *)0x0;
                if (puVar9 != (uint *)0x0) {
                  puVar7 = (uint *)&DAT_00000001;
                  puVar8 = local_224;
                }
                local_108 = puVar4;
                local_104 = puVar12;
                local_fc = puVar2;
                if (puVar9 == (uint *)0x0) {
                  param_1[2] = puVar3;
                  *(undefined8 *)(param_1 + 3) = uVar14;
                  param_1[5] = param_3;
                  param_1[6] = puVar11;
                  FUN_01bed4e2(param_1 + 7,&local_208,0x4c);
                  param_1[0x1c] = puVar10;
                  *param_1 = puVar7;
                  param_1[0x1a] = puVar4;
                  param_1[0x1b] = puVar12;
                  param_1[0x1d] = puVar2;
                  param_1[1] = puVar8;
                  return;
                }
                param_1[2] = 2;
                param_1[3] = puVar7;
                param_1[4] = puVar8;
                param_1[5] = puVar9;
                param_1[6] = 0x17;
                if (puVar3 != (uint *)0x0) {
                  FUN_0130f9ac(&local_164);
                }
                if (puVar11 != (uint *)0x0) {
                  FUN_0130f9ac(&puStack_154);
                }
                if ((int)local_148 != 0) {
                  FUN_0130f9ac((int)&local_148 + 4);
                }
                if (local_138 != (uint *)0x0) {
                  FUN_0130f9ac(&puStack_134);
                }
                if (local_128 != (uint *)0x0) {
                  FUN_0130f9ac(&puStack_124);
                }
                if (local_118 != 0) {
                  FUN_0130f9ac(auStack_114);
                }
                if (((uint)puVar4 & 0xfffffffd) == 0) {
                  return;
                }
                FUN_0130f9ac(&local_104);
                return;
              }
              goto LAB_0130c9bc;
            }
            if (uVar1 != 0) {
              FUN_0130f9ac((uint)&local_60 | 4);
            }
          }
          if (puVar7 != (uint *)0x0) {
            FUN_0130f9ac((uint)&local_b8 | 4);
          }
        }
        if (puVar8 != (uint *)0x0) {
          FUN_0130f9ac((uint)&local_c8 | 4);
        }
        puVar8 = local_d8;
      }
      if (puVar8 != (uint *)0x0) {
        FUN_0130f9ac((uint)&local_d8 | 4);
      }
      puVar8 = local_e8;
    }
    if (puVar8 != (uint *)0x0) {
      FUN_0130f9ac((uint)&local_e8 | 4);
    }
    puVar7 = local_f8;
    param_3 = puVar4;
    puVar11 = puVar12;
  }
  uVar14 = CONCAT44(puVar9,local_224);
  if (puVar7 != (uint *)0x0) {
    FUN_0130f9ac((uint)&local_f8 | 4);
    uVar14 = CONCAT44(puVar9,local_224);
  }
LAB_0130c9bc:
  param_1[3] = (int)uVar14;
  param_1[2] = 2;
  param_1[4] = (int)((ulonglong)uVar14 >> 0x20);
  param_1[5] = param_3;
  param_1[6] = puVar11;
  return;
}

