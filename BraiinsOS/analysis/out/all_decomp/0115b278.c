// FUN_0115b278 @ 0115b278 size=3044 calls_out=3 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_0115b278(int param_1,int *param_2)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  uint *puVar4;
  undefined4 ***pppuVar5;
  undefined4 ****ppppuVar6;
  int iVar7;
  undefined *puVar8;
  undefined4 uVar9;
  code *pcVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined4 local_d0;
  undefined4 ***local_c8;
  int iStack_c4;
  undefined1 *puStack_c0;
  undefined1 local_b9;
  undefined4 ****local_b8;
  undefined *local_b4;
  undefined4 ****local_b0;
  undefined *puStack_ac;
  undefined4 ****local_a8;
  undefined *puStack_a4;
  undefined1 *puStack_a0;
  undefined1 local_99;
  undefined4 ****local_98;
  undefined *local_94;
  undefined4 ****local_90;
  undefined *puStack_8c;
  undefined4 ***local_88;
  undefined4 ****local_84;
  undefined *local_80;
  undefined4 ****local_7c;
  undefined *local_78;
  int local_74;
  undefined *local_70;
  int local_6c;
  undefined *local_68;
  int local_64;
  undefined *local_60;
  int local_5c;
  undefined *local_58;
  int local_54;
  undefined *local_50;
  int local_4c;
  undefined *local_48;
  int local_44;
  undefined *local_40;
  int local_3c;
  undefined *local_38;
  int local_34;
  undefined *local_30;
  undefined4 ****local_2c;
  undefined *local_28;
  
  iVar11 = *(int *)(param_1 + 4);
  iVar12 = *(int *)(param_1 + 8);
  local_d0 = 1;
  uVar3 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00418df9,1);
  if (iVar12 != 0) {
    iVar14 = 0;
    puVar4 = (uint *)(param_2 + 2);
    bVar2 = false;
    do {
      uVar1 = uVar3 & 1;
      uVar3 = 1;
      if (uVar1 != 0) goto LAB_0115b300;
      pppuVar5 = (undefined4 ***)*param_2;
      iVar7 = param_2[1];
      iVar13 = iVar11 + iVar14;
      if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
        if (bVar2) {
          iVar7 = (**(code **)(iVar7 + 0xc))(pppuVar5,&DAT_0041950f,2);
          uVar3 = 1;
          if (iVar7 != 0) goto LAB_0115b300;
          pppuVar5 = (undefined4 ***)*param_2;
          iVar7 = param_2[1];
        }
        iVar7 = (**(code **)(iVar7 + 0xc))(pppuVar5,1,0);
        if (iVar7 != 0) goto LAB_0115b2fc;
        if ((*(byte *)((int)param_2 + 10) & 0x80) != 0) {
          iVar7 = (**(code **)(param_2[1] + 0xc))(*param_2,"(\n",2);
          if (iVar7 == 0) {
            local_a8 = (undefined4 ****)CONCAT31(local_a8._1_3_,1);
            local_7c = (undefined4 ****)*puVar4;
            local_78 = (undefined *)param_2[3];
            local_90 = &local_a8;
            local_98 = (undefined4 ****)*param_2;
            local_94 = (undefined *)param_2[1];
            local_b8 = (undefined4 ****)(iVar13 + 0xc);
            local_80 = &DAT_01880dc4;
            local_84 = &local_98;
            iVar7 = FUN_00fb34b0(&local_84,&DAT_0038bde8,10,&DAT_0038bdf2,10,iVar13,&LAB_011dd55c,
                                 &DAT_0056a088,8,iVar13 + 4,FUN_011cadf8,&DAT_0038bdfc,0xd,
                                 iVar13 + 0x10,FUN_011cac74,&DAT_0038be09,0x19,&local_b8,
                                 FUN_011dca7c);
            if (iVar7 != 0) {
LAB_0115bc20:
              uVar3 = 1;
              goto LAB_0115b300;
            }
            iVar7 = (**(code **)(local_80 + 0xc))(local_84,&DAT_00414a81,2);
            if (iVar7 == 0) goto LAB_0115b704;
          }
          goto LAB_0115b2fc;
        }
        uVar3 = 1;
        iVar7 = (**(code **)(param_2[1] + 0xc))(*param_2,"(",1);
        if (iVar7 == 0) {
          local_84 = (undefined4 ****)(iVar13 + 0xc);
          iVar7 = FUN_00fb34b0(param_2,&DAT_0038bde8,10,&DAT_0038bdf2,10,iVar13,&LAB_011dd55c,
                               &DAT_0056a088,8,iVar13 + 4,FUN_011cadf8,&DAT_0038bdfc,0xd,
                               iVar13 + 0x10,FUN_011cac74,&DAT_0038be09,0x19,&local_84,FUN_011dca7c)
          ;
          if (iVar7 == 0) {
LAB_0115b704:
            if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
              iVar7 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0041950f,2);
              if (iVar7 != 0) goto LAB_0115b2fc;
              local_2c = &local_98;
              local_28 = &DAT_0188a450;
              local_30 = &DAT_0188a440;
              local_34 = iVar13 + 0x7c;
              local_38 = &DAT_0188a430;
              local_3c = iVar13 + 0x78;
              local_40 = &DAT_0188a420;
              local_44 = iVar13 + 0x74;
              local_48 = &DAT_0188a410;
              local_4c = iVar13 + 0x70;
              local_54 = iVar13 + 0xa4;
              local_5c = iVar13 + 0x98;
              local_64 = iVar13 + 0x8c;
              local_50 = &DAT_0188a400;
              local_6c = iVar13 + 0x5c;
              local_58 = &DAT_0188a400;
              local_60 = &DAT_0188a400;
              local_68 = &DAT_0188a3e0;
              local_78 = &DAT_0188a3e0;
              local_70 = &DAT_0188a3f0;
              local_74 = iVar13 + 0x80;
              local_7c = (undefined4 ****)(iVar13 + 0x48);
              local_80 = &DAT_0188a3d0;
              local_98 = (undefined4 ****)(iVar13 + 0xb0);
              local_84 = (undefined4 ****)(iVar13 + 0x18);
              iVar7 = FUN_00fb36b8(param_2,&DAT_0038c12c,0x12,&DAT_0188a460,0xc,&local_84,0xc);
            }
            else {
              local_b8 = (undefined4 ****)*param_2;
              local_b4 = (undefined *)param_2[1];
              local_c8 = (undefined4 ***)CONCAT31(local_c8._1_3_,1);
              local_90 = (undefined4 ****)*puVar4;
              puStack_8c = (undefined *)param_2[3];
              local_b0 = &local_c8;
              local_94 = &DAT_01880dc4;
              local_98 = &local_b8;
              local_28 = &DAT_0188a450;
              local_2c = &local_a8;
              local_30 = &DAT_0188a440;
              local_34 = iVar13 + 0x7c;
              local_38 = &DAT_0188a430;
              local_3c = iVar13 + 0x78;
              local_40 = &DAT_0188a420;
              local_44 = iVar13 + 0x74;
              local_48 = &DAT_0188a410;
              local_4c = iVar13 + 0x70;
              local_54 = iVar13 + 0xa4;
              local_5c = iVar13 + 0x98;
              local_64 = iVar13 + 0x8c;
              local_50 = &DAT_0188a400;
              local_6c = iVar13 + 0x5c;
              local_58 = &DAT_0188a400;
              local_60 = &DAT_0188a400;
              local_68 = &DAT_0188a3e0;
              local_78 = &DAT_0188a3e0;
              local_70 = &DAT_0188a3f0;
              local_74 = iVar13 + 0x80;
              local_7c = (undefined4 ****)(iVar13 + 0x48);
              local_80 = &DAT_0188a3d0;
              local_a8 = (undefined4 ****)(iVar13 + 0xb0);
              local_84 = (undefined4 ****)(iVar13 + 0x18);
              iVar7 = FUN_00fb36b8(&local_98,&DAT_0038c12c,0x12,&DAT_0188a460,0xc,&local_84,0xc);
              if (iVar7 != 0) goto LAB_0115bc20;
              iVar7 = (**(code **)(local_94 + 0xc))(local_98,&DAT_00414a81,2);
            }
            uVar3 = 1;
            if (iVar7 == 0) {
              uVar9 = 1;
              pcVar10 = *(code **)(param_2[1] + 0xc);
              puVar8 = &DAT_00418e07;
              ppppuVar6 = (undefined4 ****)*param_2;
LAB_0115be20:
              uVar3 = (*pcVar10)(ppppuVar6,puVar8,uVar9);
            }
          }
        }
      }
      else {
        if (!bVar2) {
          iVar7 = (**(code **)(iVar7 + 0xc))(pppuVar5,&DAT_0041950e,1);
          if (iVar7 != 0) goto LAB_0115b300;
          pppuVar5 = (undefined4 ***)*param_2;
          iVar7 = param_2[1];
        }
        local_b9 = 1;
        local_b0 = (undefined4 ****)*puVar4;
        puStack_ac = (undefined *)param_2[3];
        puStack_c0 = &local_b9;
        local_b4 = &DAT_01880dc4;
        local_b8 = &local_c8;
        local_c8 = pppuVar5;
        iStack_c4 = iVar7;
        iVar7 = FUN_00fb1f64(local_b8,1,0);
        if (iVar7 == 0) {
          if (((uint)local_b0 & 0x800000) == 0) {
            iVar7 = (**(code **)(local_b4 + 0xc))(local_b8,"(",1);
            if (iVar7 == 0) {
              local_84 = (undefined4 ****)(iVar13 + 0xc);
              iVar7 = FUN_00fb34b0(&local_b8,&DAT_0038bde8,10,&DAT_0038bdf2,10,iVar13,&LAB_011dd55c,
                                   &DAT_0056a088,8,iVar13 + 4,FUN_011cadf8,&DAT_0038bdfc,0xd,
                                   iVar13 + 0x10,FUN_011cac74,&DAT_0038be09,0x19,&local_84,
                                   FUN_011dca7c);
joined_r0x0115b98c:
              if (iVar7 == 0) {
                if (((uint)local_b0 & 0x800000) == 0) {
                  iVar7 = (**(code **)(local_b4 + 0xc))(local_b8,&DAT_0041950f,2);
                  if (iVar7 == 0) {
                    local_2c = &local_98;
                    local_28 = &DAT_0188a450;
                    local_30 = &DAT_0188a440;
                    local_34 = iVar13 + 0x7c;
                    local_38 = &DAT_0188a430;
                    local_3c = iVar13 + 0x78;
                    local_40 = &DAT_0188a420;
                    local_44 = iVar13 + 0x74;
                    local_48 = &DAT_0188a410;
                    local_4c = iVar13 + 0x70;
                    local_54 = iVar13 + 0xa4;
                    local_5c = iVar13 + 0x98;
                    local_64 = iVar13 + 0x8c;
                    local_50 = &DAT_0188a400;
                    local_6c = iVar13 + 0x5c;
                    local_58 = &DAT_0188a400;
                    local_60 = &DAT_0188a400;
                    local_68 = &DAT_0188a3e0;
                    local_78 = &DAT_0188a3e0;
                    local_70 = &DAT_0188a3f0;
                    local_74 = iVar13 + 0x80;
                    local_7c = (undefined4 ****)(iVar13 + 0x48);
                    local_80 = &DAT_0188a3d0;
                    local_98 = (undefined4 ****)(iVar13 + 0xb0);
                    local_84 = (undefined4 ****)(iVar13 + 0x18);
                    iVar7 = FUN_00fb36b8(&local_b8,&DAT_0038c12c,0x12,&DAT_0188a460,0xc,&local_84,
                                         0xc);
joined_r0x0115bd9c:
                    if ((iVar7 == 0) &&
                       (iVar7 = (**(code **)(local_b4 + 0xc))(local_b8,&DAT_00418e07,1), iVar7 == 0)
                       ) {
                      uVar9 = 2;
                      pcVar10 = *(code **)(local_b4 + 0xc);
                      puVar8 = &DAT_00414a81;
                      ppppuVar6 = local_b8;
                      goto LAB_0115be20;
                    }
                  }
                }
                else {
                  local_99 = 1;
                  puStack_a0 = &local_99;
                  local_94 = &DAT_01880dc4;
                  local_98 = &local_a8;
                  local_28 = &DAT_0188a450;
                  local_2c = &local_88;
                  local_30 = &DAT_0188a440;
                  local_34 = iVar13 + 0x7c;
                  local_38 = &DAT_0188a430;
                  local_3c = iVar13 + 0x78;
                  local_40 = &DAT_0188a420;
                  local_44 = iVar13 + 0x74;
                  local_48 = &DAT_0188a410;
                  local_4c = iVar13 + 0x70;
                  local_54 = iVar13 + 0xa4;
                  local_5c = iVar13 + 0x98;
                  local_64 = iVar13 + 0x8c;
                  local_50 = &DAT_0188a400;
                  local_6c = iVar13 + 0x5c;
                  local_58 = &DAT_0188a400;
                  local_60 = &DAT_0188a400;
                  local_68 = &DAT_0188a3e0;
                  local_78 = &DAT_0188a3e0;
                  local_70 = &DAT_0188a3f0;
                  local_74 = iVar13 + 0x80;
                  local_7c = (undefined4 ****)(iVar13 + 0x48);
                  local_80 = &DAT_0188a3d0;
                  local_88 = (undefined4 ***)(iVar13 + 0xb0);
                  local_a8 = local_b8;
                  puStack_a4 = local_b4;
                  local_90 = local_b0;
                  local_84 = (undefined4 ****)(iVar13 + 0x18);
                  puStack_8c = puStack_ac;
                  iVar7 = FUN_00fb36b8(&local_98,&DAT_0038c12c,0x12,&DAT_0188a460,0xc,&local_84,0xc)
                  ;
                  if (iVar7 == 0) {
                    iVar7 = (**(code **)(local_94 + 0xc))(local_98,&DAT_00414a81,2);
                    goto joined_r0x0115bd9c;
                  }
                }
              }
            }
          }
          else {
            iVar7 = (**(code **)(local_b4 + 0xc))(local_b8,"(\n",2);
            if (iVar7 == 0) {
              local_88 = (undefined4 ***)CONCAT31(local_88._1_3_,1);
              local_7c = local_b0;
              local_78 = puStack_ac;
              local_90 = &local_88;
              local_98 = local_b8;
              local_94 = local_b4;
              local_80 = &DAT_01880dc4;
              local_84 = &local_98;
              local_a8 = (undefined4 ****)(iVar13 + 0xc);
              iVar7 = FUN_00fb34b0(&local_84,&DAT_0038bde8,10,&DAT_0038bdf2,10,iVar13,&LAB_011dd55c,
                                   &DAT_0056a088,8,iVar13 + 4,FUN_011cadf8,&DAT_0038bdfc,0xd,
                                   iVar13 + 0x10,FUN_011cac74,&DAT_0038be09,0x19,&local_a8,
                                   FUN_011dca7c);
              if (iVar7 == 0) {
                iVar7 = (**(code **)(local_80 + 0xc))(local_84,&DAT_00414a81,2);
                goto joined_r0x0115b98c;
              }
            }
          }
        }
LAB_0115b2fc:
        uVar3 = 1;
      }
LAB_0115b300:
      iVar14 = iVar14 + 0xc0;
      bVar2 = true;
    } while (iVar12 * 0xc0 != iVar14);
  }
  if (uVar3 == 0) {
    local_d0 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00418ec5,1);
  }
  return local_d0;
}

