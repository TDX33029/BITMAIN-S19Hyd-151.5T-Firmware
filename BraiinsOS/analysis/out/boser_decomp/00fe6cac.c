// FUN_00fe6cac @ 00fe6cac size=2052 calls_out=21 calls_in=1
// strings: enabled | hashrate_target_thsstruct Tuner with 4 elementsstruct CfgHashChainGlobal with 1 elementstruct Cooling with 1 elementstruct StorageData with 1 element | power_target_w | power_target_w | enabled | hashrate_target_thsstruct Tuner with 4 elementsstruct CfgHashChainGlobal with 1 elementstruct Cooling with 1 elementstruct StorageData with 1 element

void FUN_00fe6cac(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  char cVar4;
  int iVar5;
  undefined1 extraout_r1;
  undefined1 extraout_r1_00;
  undefined1 extraout_r1_01;
  undefined1 extraout_r1_02;
  undefined1 extraout_r1_03;
  undefined1 extraout_r1_04;
  undefined1 extraout_r1_05;
  undefined1 uVar6;
  undefined1 extraout_r1_06;
  undefined1 extraout_r1_07;
  undefined1 extraout_r1_08;
  undefined1 extraout_r1_09;
  undefined1 extraout_r2;
  undefined1 extraout_r2_00;
  undefined1 extraout_r2_01;
  undefined1 extraout_r2_02;
  undefined1 extraout_r2_03;
  undefined1 extraout_r2_04;
  undefined1 extraout_r2_05;
  undefined1 uVar7;
  undefined1 extraout_r2_06;
  undefined1 extraout_r2_07;
  undefined1 extraout_r2_08;
  undefined1 extraout_r2_09;
  undefined4 uVar8;
  undefined4 uVar9;
  int *unaff_r7;
  int *piVar10;
  int *unaff_r9;
  int *piVar11;
  bool bVar12;
  undefined8 unaff_d8;
  int *local_c8;
  uint local_c4;
  uint local_c0;
  int *local_bc;
  int *local_b8;
  int *local_b4;
  char local_b0;
  char local_af;
  char local_ae;
  int *local_ac;
  undefined4 local_a8;
  int *piStack_a4;
  int *piStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined8 local_90;
  undefined4 local_88;
  int *local_84;
  int *local_80;
  undefined4 uStack_7c;
  int *local_78;
  int *piStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  int *local_68 [2];
  undefined4 local_60;
  int *local_5c;
  undefined8 local_58;
  int *local_50;
  int *local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined1 uStack_31;
  
  FUN_012c3960(&local_b0);
  if (local_b0 != '\x01') {
    bVar12 = local_af == '\x01';
    if (bVar12) {
      local_af = local_ae;
    }
    if (bVar12 && local_af == 'n') {
      FUN_012c6160(param_2 + 0xc);
      local_ac = (int *)FUN_012c3a60(param_2,"ull",3);
      if (local_ac == (int *)0x0) {
        *param_1 = 2;
        param_1[1] = 0;
        return;
      }
    }
    else {
      piVar10 = &local_60;
      FUN_012c3960(piVar10,param_2);
      if ((char)local_60 == '\x01') {
        local_ac = local_5c;
      }
      else if (local_60._1_1_ == '\x01') {
        if (local_60._2_1_ == '[') {
          cVar4 = *(char *)(param_2 + 0x40) + -1;
          *(char *)(param_2 + 0x40) = cVar4;
          if (cVar4 == '\0') {
LAB_00fe73ac:
            uVar8 = *(undefined4 *)(param_2 + 0x30);
            uVar9 = *(undefined4 *)(param_2 + 0x34);
            local_88 = (int *)0x18;
            goto LAB_00fe73b4;
          }
          FUN_012c6160(param_2 + 0xc);
          local_5c = (int *)CONCAT31(local_5c._1_3_,1);
          local_60 = (int *)param_2;
          FUN_012c54a0(&local_88,&local_60);
          uVar2 = extraout_r2;
          uVar3 = extraout_r1;
          if ((char)local_88 == '\x01') goto LAB_00fe7108;
          if (local_88._1_1_ == '\x01') {
            FUN_00fe8f88(&local_88,local_60);
            uVar2 = extraout_r2_00;
            uVar3 = extraout_r1_00;
            if ((char)local_88 == '\x01') {
LAB_00fe7108:
              uVar6 = uVar3;
              uVar7 = uVar2;
              piVar11 = piVar10;
LAB_00fe710c:
              piVar10 = piVar11;
              goto LAB_00fe7110;
            }
            uVar6 = local_88._1_1_;
            FUN_012c54a0(&local_88,&local_60);
            uVar2 = extraout_r2_01;
            uVar3 = extraout_r1_01;
            if ((char)local_88 == '\x01') goto LAB_00fe7108;
            if (local_88._1_1_ != '\x01') {
              uVar8 = 1;
              piVar11 = piVar10;
LAB_00fe7320:
              local_84 = (int *)FUN_012cc2c0(uVar8,&DAT_01c1af14,&DAT_01d064b8);
              uVar7 = extraout_r2_07;
              uVar6 = extraout_r1_07;
              goto LAB_00fe710c;
            }
            FUN_00fe6960(&local_88,local_60);
            uVar2 = extraout_r2_02;
            uVar3 = extraout_r1_02;
            if ((char)local_88 == '\x01') goto LAB_00fe7108;
            uVar7 = local_88._1_1_;
            FUN_012c54a0(&local_88,&local_60);
            uVar2 = extraout_r2_03;
            uVar3 = extraout_r1_03;
            if ((char)local_88 == '\x01') goto LAB_00fe7108;
            if (local_88._1_1_ == '\x01') {
              FUN_00fe594c(&local_88,local_60);
              piVar11 = local_84;
              unaff_r9 = local_88;
              uVar2 = extraout_r2_04;
              uVar3 = extraout_r1_04;
              if (local_88 != (int *)0x2) {
                FUN_012c54a0(&local_88,&local_60);
                piVar10 = piVar11;
                uVar2 = extraout_r2_05;
                uVar3 = extraout_r1_05;
                if ((char)local_88 != '\x01') {
                  if (local_88._1_1_ == '\0') {
                    uVar8 = 3;
                    goto LAB_00fe7320;
                  }
                  FUN_00fe6340(&local_88,local_60);
                  if (local_88 == (int *)0x2 && local_84 == (int *)0x0) {
                    local_84 = local_80;
                    uVar7 = extraout_r2_08;
                    uVar6 = extraout_r1_08;
                    goto LAB_00fe710c;
                  }
                  local_40 = CONCAT44(uStack_7c,local_80);
                  piVar11 = local_88;
                  goto LAB_00fe7118;
                }
              }
              goto LAB_00fe7108;
            }
            piVar11 = (int *)0x2;
            uVar8 = FUN_012cc2c0(2,&DAT_01c1af14,&DAT_01d064b8);
            local_40 = CONCAT44(local_40._4_4_,uVar8);
            local_84 = (int *)0x0;
            uVar7 = extraout_r2_09;
            uVar6 = extraout_r1_09;
          }
          else {
            local_84 = (int *)FUN_012cc2c0(0,&DAT_01c1af14,&DAT_01d064b8);
            uVar7 = extraout_r2_06;
            uVar6 = extraout_r1_06;
LAB_00fe7110:
            local_40 = CONCAT44(local_40._4_4_,local_84);
            local_84 = (int *)0x0;
            piVar11 = (int *)0x2;
          }
LAB_00fe7118:
          *(char *)(param_2 + 0x40) = *(char *)(param_2 + 0x40) + '\x01';
          local_48 = CONCAT31(CONCAT21(local_48._2_2_,uVar7),uVar6);
          local_58 = local_40;
          local_60 = piVar11;
          local_5c = local_84;
          local_50 = unaff_r9;
          local_4c = piVar10;
          local_68[0] = (int *)FUN_012c4e3c(param_2);
          local_ac = (int *)local_58;
          local_88 = local_60;
          local_84 = local_5c;
          local_80 = (int *)local_58;
          uStack_7c = local_58._4_4_;
          local_78 = local_50;
          piStack_74 = local_4c;
          uStack_70 = local_48;
          uStack_6c = uStack_44;
          if (local_60 == (int *)0x2 && local_5c == (int *)0x0) {
            piVar11 = (int *)0x0;
            piVar10 = (int *)0x2;
            if (local_68[0] != (int *)0x0) {
              FUN_00f80260(local_68);
            }
          }
          else if (local_68[0] == (int *)0x0) {
LAB_00fe72bc:
            local_a8 = uStack_7c;
            piStack_a4 = local_50;
            piStack_a0 = local_4c;
            uStack_9c = local_48;
            uStack_98 = uStack_6c;
            local_ac = (int *)local_58;
            piVar10 = local_60;
            piVar11 = local_5c;
            local_88 = local_60;
            local_84 = local_5c;
            local_80 = (int *)local_58;
            local_78 = local_50;
            piStack_74 = local_4c;
            uStack_70 = local_48;
          }
          else {
LAB_00fe72a8:
            local_ac = local_68[0];
            piVar10 = (int *)0x2;
            piVar11 = (int *)0x0;
            local_88 = local_60;
            local_84 = local_5c;
            local_78 = local_50;
            piStack_74 = local_4c;
            uStack_70 = local_48;
          }
LAB_00fe72c8:
          if (piVar10 != (int *)0x2 || piVar11 != (int *)0x0) {
            param_1[3] = local_a8;
            param_1[4] = piStack_a4;
            param_1[5] = piStack_a0;
            param_1[6] = uStack_9c;
            param_1[7] = uStack_98;
            *param_1 = piVar10;
            param_1[1] = piVar11;
            goto LAB_00fe6d4c;
          }
        }
        else {
          if (local_60._2_1_ == '{') {
            cVar4 = *(char *)(param_2 + 0x40) + -1;
            *(char *)(param_2 + 0x40) = cVar4;
            if (cVar4 == '\0') goto LAB_00fe73ac;
            FUN_012c6160(param_2 + 0xc);
            local_40 = CONCAT35(local_40._5_3_,0x100000000);
            local_b8 = (int *)0x2;
            local_c4 = 3;
            local_c0 = 4;
            local_bc = (int *)0x2;
            local_b4 = (int *)0x0;
            local_40 = CONCAT44(local_40._4_4_,param_2);
LAB_00fe6ddc:
            do {
              FUN_012c4f64(&local_88,&local_40);
              if ((char)local_88 == '\x01') {
LAB_00fe71b8:
                local_50 = local_84;
                break;
              }
              if (local_88._1_1_ == '\0') {
                local_50 = (int *)0x0;
                if (local_b8 != (int *)0x2) {
                  local_50 = local_b8;
                }
                if (local_bc == (int *)0x2 && local_b4 == (int *)0x0) {
                  local_bc = (int *)0x0;
                  local_b4 = (int *)0x0;
                }
                if (local_c0 == 4) {
                  local_c0._0_1_ = 3;
                }
                local_90 = unaff_d8;
                if (local_c4 == 3) {
                  local_c4._0_1_ = 2;
                }
                goto LAB_00fe7218;
              }
              iVar1 = (int)local_40;
              unaff_r7 = (int *)((int)local_40 + 0xc);
              FUN_012c6160(unaff_r7);
              *(undefined4 *)(iVar1 + 8) = 0;
              FUN_012c6380(&local_88,unaff_r7,iVar1);
              local_50 = local_84;
              if (local_88 == (int *)0x2) break;
              if ((int)local_80 < 0xe) {
                if (local_80 == (int *)&SUB_00000004) {
                  if (*local_84 == 0x65646f6d) {
                    if (local_c0 != 4) {
                      local_5c = (int *)0x4;
                      local_60 = (int *)&DAT_0056d358;
                      goto LAB_00fe7498;
                    }
                    local_50 = (int *)FUN_012c4d2c(iVar1);
                    if (local_50 != (int *)0x0) break;
                    FUN_00fe6960(&local_88,iVar1);
                    if ((char)local_88 != '\0') goto LAB_00fe71b8;
                    local_c0 = (uint)local_88 >> 8 & 0xff;
                    goto LAB_00fe6ddc;
                  }
                }
                else if (local_80 == (int *)&DAT_00000007) {
                  iVar5 = thunk_FUN_01bed842(local_84,"enabled",7);
                  if (iVar5 == 0) {
                    if (local_c4 != 3) {
                      local_5c = (int *)0x7;
                      local_60 = (int *)0x49e42e;
                      goto LAB_00fe7498;
                    }
                    local_50 = (int *)FUN_012c4d2c(iVar1);
                    if (local_50 != (int *)0x0) break;
                    FUN_00fe8f88(&local_88,iVar1);
                    if ((char)local_88 != '\0') goto LAB_00fe71b8;
                    local_c4 = (uint)local_88 >> 8 & 0xff;
                    goto LAB_00fe6ddc;
                  }
                }
              }
              else if (local_80 == (int *)&DAT_0000000e) {
                iVar5 = thunk_FUN_01bed842(local_84,"power_target_w",0xe);
                if (iVar5 == 0) {
                  if (local_b8 != (int *)0x2) {
                    local_5c = (int *)0xe;
                    local_60 = (int *)0x3f3383;
LAB_00fe7498:
                    local_84 = (int *)&DAT_0132b6a0;
                    local_88 = piVar10;
                    local_50 = (int *)FUN_019676ac(&DAT_005ab34f,&local_88);
                    break;
                  }
                  local_50 = (int *)FUN_012c4d2c(iVar1);
                  if (local_50 != (int *)0x0) break;
                  FUN_00fe594c(&local_88,iVar1);
                  local_b8 = local_88;
                  local_50 = local_84;
                  if (local_88 == (int *)0x2) break;
                  local_c8 = local_84;
                  goto LAB_00fe6ddc;
                }
              }
              else if (local_80 == (int *)&DAT_00000013) {
                iVar5 = thunk_FUN_01bed842(local_84,
                                           "hashrate_target_thsstruct Tuner with 4 elementsstruct CfgHashChainGlobal with 1 elementstruct Cooling with 1 elementstruct StorageData with 1 element"
                                           ,0x13);
                if (iVar5 == 0) {
                  if (local_bc != (int *)0x2 || local_b4 != (int *)0x0) {
                    local_5c = (int *)0x13;
                    local_60 = (int *)0x3f3391;
                    goto LAB_00fe7498;
                  }
                  local_50 = (int *)FUN_012c4d2c(iVar1);
                  if (local_50 != (int *)0x0) break;
                  FUN_00fe6340(&local_88,iVar1);
                  local_bc = local_88;
                  local_b4 = local_84;
                  if (local_88 == (int *)0x2 && local_84 == (int *)0x0) {
                    local_50 = local_80;
                    break;
                  }
                  unaff_d8 = CONCAT44(uStack_7c,local_80);
                  goto LAB_00fe6ddc;
                }
              }
              local_50 = (int *)FUN_012c50c0(iVar1);
            } while (local_50 == (int *)0x0);
            local_c8 = unaff_r7;
            local_90 = CONCAT44(local_90._4_4_,local_50);
            local_c0._0_1_ = 0;
            local_bc = (int *)0x2;
            local_c4._0_1_ = 0;
            local_b4 = (int *)0x0;
LAB_00fe7218:
            *(char *)(param_2 + 0x40) = *(char *)(param_2 + 0x40) + '\x01';
            local_48 = CONCAT31(CONCAT21(local_48._2_2_,(undefined1)local_c0),(undefined1)local_c4);
            local_58 = local_90;
            local_60 = local_bc;
            local_5c = local_b4;
            local_4c = local_c8;
            local_68[0] = (int *)FUN_012c4db0(param_2);
            local_ac = (int *)local_58;
            local_88 = local_60;
            local_84 = local_5c;
            local_80 = (int *)local_58;
            uStack_7c = local_58._4_4_;
            local_78 = local_50;
            piStack_74 = local_4c;
            uStack_70 = local_48;
            uStack_6c = uStack_44;
            if (local_60 != (int *)0x2 || local_5c != (int *)0x0) {
              if (local_68[0] != (int *)0x0) goto LAB_00fe72a8;
              goto LAB_00fe72bc;
            }
            if (local_68[0] != (int *)0x0) {
              FUN_00f80260(local_68);
            }
            piVar10 = (int *)0x2;
            piVar11 = (int *)0x0;
            goto LAB_00fe72c8;
          }
          local_ac = (int *)FUN_012c4a28(param_2,&uStack_31,&DAT_01c1ccc8);
        }
        local_ac = (int *)FUN_012c6694(local_ac,*(undefined4 *)(param_2 + 0x30),
                                       *(undefined4 *)(param_2 + 0x34));
      }
      else {
        uVar8 = *(undefined4 *)(param_2 + 0x30);
        uVar9 = *(undefined4 *)(param_2 + 0x34);
        local_88 = (int *)0x5;
LAB_00fe73b4:
        local_ac = (int *)FUN_01966fbc(&local_88,uVar8,uVar9);
      }
    }
  }
  *param_1 = 3;
  param_1[1] = 0;
LAB_00fe6d4c:
  param_1[2] = local_ac;
  return;
}

