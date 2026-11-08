// FUN_00ef8f1c @ 00ef8f1c size=2404 calls_out=13 calls_in=0
// strings: buffer underflow | delimited length exceeded | PoolGroupConfiguration | load_balance_strategy | PoolConfiguration | user--

/* WARNING: Restarted to delay deadcode elimination for space: stack */

code * FUN_00ef8f1c(char param_1,uint *param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined1 uVar2;
  byte bVar3;
  code *pcVar4;
  char *pcVar5;
  int iVar6;
  undefined4 *puVar7;
  code *pcVar8;
  undefined4 uVar9;
  undefined *puVar10;
  undefined1 uVar11;
  uint uVar12;
  undefined4 *******pppppppuVar13;
  bool bVar14;
  int iVar15;
  undefined4 *******pppppppuVar16;
  uint uVar17;
  uint uVar18;
  int *piVar19;
  char *local_bc;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  int local_70;
  undefined4 local_6c;
  undefined4 local_68;
  int local_64;
  undefined4 local_60;
  undefined4 local_5c;
  uint local_58;
  undefined4 *******local_54;
  code *local_50;
  undefined4 *******local_48 [2];
  undefined4 ******local_40;
  code *pcStack_3c;
  undefined4 *******local_38;
  code *local_34;
  undefined4 ******local_30;
  undefined4 local_2c;
  
  local_30 = (undefined4 ******)CONCAT31(local_30._1_3_,param_1);
  local_48[0] = (undefined4 *******)CONCAT31(local_48[0]._1_3_,2);
  if (param_1 == '\x02') {
    piVar19 = (int *)*param_3;
    FUN_00ef78d0(&local_40,*piVar19);
    if (local_40 == (undefined4 ******)&DAT_00000001) {
LAB_00ef8f64:
      pcVar8 = pcStack_3c;
    }
    else {
      if ((uint)(local_38 <= *(undefined4 ********)(*piVar19 + 4)) <= (uint)-(int)local_34) {
        uVar9 = 0x10;
        pcVar5 = "buffer underflow";
LAB_00ef982c:
        pcVar8 = (code *)FUN_01aa0da0(pcVar5,uVar9);
        return pcVar8;
      }
      uVar17 = (int)*(undefined4 ********)(*piVar19 + 4) - (int)local_38;
      local_bc = "buffer underflow";
      do {
        if (*(uint *)(*piVar19 + 4) <= uVar17) {
          if (*(uint *)(*piVar19 + 4) == uVar17) {
            return (code *)0x0;
          }
          uVar9 = 0x19;
          pcVar5 = "delimited length exceeded";
          goto LAB_00ef982c;
        }
        FUN_00ef78d0(&local_40);
        if (local_40 == (undefined4 ******)&DAT_00000001) goto LAB_00ef8f64;
        local_48[0] = local_38;
        if (local_34 != (code *)0x0) {
          puVar10 = &DAT_00591421;
          local_54 = local_48;
LAB_00ef97b4:
          local_50 = FUN_012fd074;
          pppppppuVar16 = &local_40;
          pppppppuVar13 = &local_54;
          goto LAB_00ef9808;
        }
        local_30 = (undefined4 ******)((uint)local_38 & 7);
        bVar14 = false;
        local_2c = 0;
        bVar3 = 0;
        switch(local_30) {
        case (undefined4 ******)0x0:
          break;
        case (undefined4 ******)0x1:
          bVar3 = 1;
          break;
        case (undefined4 ******)0x2:
          bVar3 = 2;
          bVar14 = true;
          break;
        case (undefined4 ******)0x3:
          bVar3 = 3;
          break;
        case (undefined4 ******)0x4:
          bVar3 = 4;
          break;
        case (undefined4 ******)0x5:
          bVar3 = 5;
          break;
        default:
          puVar10 = &DAT_00596158;
          local_54 = &local_30;
          goto LAB_00ef97b4;
        }
        uVar18 = (uint)local_38 >> 3;
        if (uVar18 == 0) {
          pcVar8 = (code *)FUN_01aa0da0("invalid tag value: 0",0x14);
          break;
        }
        switch(uVar18) {
        case 1:
          if (param_2[10] == 0x80000000) {
            param_2[10] = 0;
            param_2[0xb] = 1;
            param_2[0xc] = 0;
          }
          pcVar4 = (code *)FUN_01016c90(bVar3,param_2 + 10,param_3);
          pcVar8 = (code *)0x0;
          if (pcVar4 != (code *)0x0) {
            iVar15 = *(int *)(pcVar4 + 8);
            if (iVar15 == *(int *)pcVar4) {
              FUN_018fa978(pcVar4);
            }
            puVar7 = (undefined4 *)(*(int *)(pcVar4 + 4) + iVar15 * 0x10);
            *puVar7 = "PoolGroupConfiguration";
            pcVar5 = "uid";
            uVar9 = 3;
LAB_00ef9734:
            puVar7[1] = 0x16;
            puVar7[2] = pcVar5;
            puVar7[3] = uVar9;
            *(int *)(pcVar4 + 8) = iVar15 + 1;
            return pcVar4;
          }
          break;
        case 2:
          pcVar4 = (code *)FUN_01016c90(bVar3,param_2 + 4,param_3);
          pcVar8 = (code *)0x0;
          if (pcVar4 != (code *)0x0) {
            iVar15 = *(int *)(pcVar4 + 8);
            if (iVar15 == *(int *)pcVar4) {
              FUN_018fa978(pcVar4);
            }
            puVar7 = (undefined4 *)(*(int *)(pcVar4 + 4) + iVar15 * 0x10);
            *puVar7 = "PoolGroupConfiguration";
            pcVar5 = &DAT_0056ee18;
            uVar9 = 4;
            goto LAB_00ef9734;
          }
          break;
        case 3:
        case 4:
          uVar12 = *param_2;
          if (uVar18 == 3) {
            if ((uVar12 == 2) || ((uVar12 & 1) != 0)) {
              local_40 = (undefined4 ******)0x0;
              pcVar4 = (code *)FUN_00ef9a10(bVar3,&local_40,param_3);
              if (pcVar4 == (code *)0x0) {
                *param_2 = 0;
                param_2[1] = (uint)local_40;
              }
            }
            else {
              pcVar4 = (code *)FUN_00ef9a10(bVar3,param_2 + 1,param_3);
            }
          }
          else if ((uVar12 & 1) == 0) {
            pcStack_3c = (code *)0x0;
            local_40 = (undefined4 ******)0x0;
            pcVar4 = (code *)FUN_00ef9c98(bVar3,&local_40,param_3);
            if (pcVar4 == (code *)0x0) {
              *param_2 = 1;
              *(ulonglong *)(param_2 + 2) = CONCAT44(pcStack_3c,local_40);
            }
          }
          else {
            pcVar4 = (code *)FUN_00ef9c98(bVar3,param_2 + 2,param_3);
          }
          pcVar8 = (code *)0x0;
          if (pcVar4 != (code *)0x0) {
            iVar15 = *(int *)(pcVar4 + 8);
            if (iVar15 == *(int *)pcVar4) {
              FUN_018fa978(pcVar4);
            }
            puVar7 = (undefined4 *)(*(int *)(pcVar4 + 4) + iVar15 * 0x10);
            *puVar7 = "PoolGroupConfiguration";
            puVar7[1] = 0x16;
            puVar7[2] = "load_balance_strategy";
            puVar7[3] = 0x15;
            *(int *)(pcVar4 + 8) = iVar15 + 1;
            return pcVar4;
          }
          break;
        case 5:
          local_30 = (undefined4 ******)(uint)bVar3;
          local_48[0]._1_3_ = (undefined3)((uint)local_38 >> 8);
          local_48[0] = (undefined4 *******)CONCAT31(local_48[0]._1_3_,2);
          if (!bVar14) {
            local_38 = local_48;
            local_34 = FUN_00ef7f4c;
            pcStack_3c = FUN_00ef7f4c;
            local_40 = &local_30;
            FUN_01a8da38(&local_54,&DAT_005bfb48,&local_40);
            pcVar8 = (code *)FUN_01aa428c(&local_54);
            goto LAB_00ef9668;
          }
          local_58 = CONCAT31(local_58._1_3_,2);
          local_70 = -0x80000000;
          local_64 = -0x80000000;
          local_74 = 0;
          local_78 = 1;
          local_7c = 0;
          local_80 = 0;
          local_84 = 1;
          local_88 = 0;
          FUN_00ef78d0(&local_40,*piVar19);
          if (local_40 == (undefined4 ******)&DAT_00000001) {
LAB_00ef948c:
            pcVar8 = pcStack_3c;
          }
          else {
            if ((uint)-(int)local_34 < (uint)(local_38 <= *(undefined4 ********)(*piVar19 + 4))) {
              uVar18 = (int)*(undefined4 ********)(*piVar19 + 4) - (int)local_38;
              while (uVar18 < *(uint *)(*piVar19 + 4)) {
                FUN_00ef78d0(&local_40);
                if (local_40 == (undefined4 ******)&DAT_00000001) goto LAB_00ef948c;
                local_48[0] = local_38;
                if (local_34 != (code *)0x0) {
                  local_50 = FUN_012fd074;
                  local_54 = local_48;
                  FUN_01a8da38(&local_40,&DAT_00591421,&local_54);
                  pcVar8 = (code *)FUN_01aa428c(&local_40);
                  goto LAB_00ef94dc;
                }
                local_30 = (undefined4 ******)((uint)local_38 & 7);
                uVar12 = ((uint)local_38 ^ 4) & 7;
                local_2c = 0;
                if ((0xf3U >> uVar12 & 1) == 0) {
                  local_50 = FUN_012fd074;
                  local_54 = &local_30;
                  FUN_00664898(&local_40,&DAT_00596158,&local_54);
                  pcVar8 = (code *)FUN_01aa428c(&local_40);
                  goto LAB_00ef94dc;
                }
                uVar1 = (uint)local_38 >> 3;
                if (uVar1 == 0) {
                  pcVar8 = (code *)FUN_01aa0da0("invalid tag value: 0",0x14);
                  goto LAB_00ef94dc;
                }
                uVar2 = (&DAT_00571008)[uVar12];
                switch(uVar1) {
                case 1:
                  if (local_70 == -0x80000000) {
                    local_68 = 0;
                    local_6c = 1;
                    local_70 = 0;
                  }
                  pcVar4 = (code *)FUN_01016c90(uVar2,&local_70,param_3);
                  pcVar8 = (code *)0x0;
                  if (pcVar4 != (code *)0x0) {
                    iVar15 = *(int *)(pcVar4 + 8);
                    if (iVar15 == *(int *)pcVar4) {
                      FUN_018fa978(pcVar4);
                    }
                    iVar6 = *(int *)(pcVar4 + 4);
                    pcVar5 = "uid";
LAB_00ef95cc:
                    puVar7 = (undefined4 *)(iVar6 + iVar15 * 0x10);
                    *puVar7 = "PoolConfiguration";
                    uVar9 = 3;
LAB_00ef9644:
                    puVar7[1] = 0x11;
                    puVar7[2] = pcVar5;
                    puVar7[3] = uVar9;
                    *(int *)(pcVar4 + 8) = iVar15 + 1;
                    pcVar8 = pcVar4;
                    goto LAB_00ef9660;
                  }
                  break;
                case 2:
                  pcVar4 = (code *)FUN_01016c90(uVar2,&local_88,param_3);
                  pcVar8 = (code *)0x0;
                  if (pcVar4 != (code *)0x0) {
                    iVar15 = *(int *)(pcVar4 + 8);
                    if (iVar15 == *(int *)pcVar4) {
                      FUN_018fa978(pcVar4);
                    }
                    iVar6 = *(int *)(pcVar4 + 4);
                    pcVar5 = "url";
                    goto LAB_00ef95cc;
                  }
                  break;
                case 3:
                  pcVar4 = (code *)FUN_01016c90(uVar2,&local_7c,param_3);
                  pcVar8 = (code *)0x0;
                  if (pcVar4 != (code *)0x0) {
                    iVar15 = *(int *)(pcVar4 + 8);
                    if (iVar15 == *(int *)pcVar4) {
                      FUN_018fa978(pcVar4);
                    }
                    puVar7 = (undefined4 *)(*(int *)(pcVar4 + 4) + iVar15 * 0x10);
                    *puVar7 = "PoolConfiguration";
                    pcVar5 = "user--";
                    uVar9 = 4;
                    goto LAB_00ef9644;
                  }
                  break;
                case 4:
                  if (local_64 == -0x80000000) {
                    local_5c = 0;
                    local_60 = 1;
                    local_64 = 0;
                  }
                  pcVar4 = (code *)FUN_01016c90(uVar2,&local_64,param_3);
                  pcVar8 = (code *)0x0;
                  if (pcVar4 != (code *)0x0) {
                    iVar15 = *(int *)(pcVar4 + 8);
                    if (iVar15 == *(int *)pcVar4) {
                      FUN_018fa978(pcVar4);
                    }
                    puVar7 = (undefined4 *)(*(int *)(pcVar4 + 4) + iVar15 * 0x10);
                    *puVar7 = "PoolConfiguration";
                    pcVar5 = &DAT_00571120;
                    uVar9 = 8;
                    goto LAB_00ef9644;
                  }
                  break;
                case 5:
                  uVar11 = 0;
                  if ((local_58 & 0xff) != 2) {
                    uVar11 = (char)local_58;
                  }
                  local_58 = CONCAT31(local_58._1_3_,uVar11);
                  pcVar4 = (code *)FUN_00ef7e6c(uVar2,&local_58,piVar19);
                  pcVar8 = (code *)0x0;
                  if (pcVar4 != (code *)0x0) {
                    iVar15 = *(int *)(pcVar4 + 8);
                    if (iVar15 == *(int *)pcVar4) {
                      FUN_018fa978(pcVar4);
                    }
                    puVar7 = (undefined4 *)(*(int *)(pcVar4 + 4) + iVar15 * 0x10);
                    *puVar7 = "PoolConfiguration";
                    pcVar5 = "enabled";
                    uVar9 = 7;
                    goto LAB_00ef9644;
                  }
                  break;
                default:
                  pcVar8 = (code *)FUN_00ef7b80(uVar2,uVar1,param_3,0x62);
                }
                if (pcVar8 != (code *)0x0) goto LAB_00ef9660;
              }
              if (*(uint *)(*piVar19 + 4) == uVar18) {
                uVar18 = param_2[9];
                if (uVar18 == param_2[7]) {
                  FUN_00f85d4c(param_2 + 7);
                }
                pcVar8 = (code *)0x0;
                puVar7 = (undefined4 *)(uVar18 * 0x34 + param_2[8]);
                *puVar7 = local_88;
                puVar7[1] = local_84;
                puVar7[2] = local_80;
                puVar7[3] = local_7c;
                puVar7[4] = local_78;
                puVar7[5] = local_74;
                puVar7[6] = local_70;
                puVar7[7] = local_6c;
                puVar7[8] = local_68;
                puVar7[9] = local_64;
                puVar7[10] = local_60;
                puVar7[0xb] = local_5c;
                puVar7[0xc] = local_58;
                param_2[9] = uVar18 + 1;
                break;
              }
              uVar9 = 0x19;
              local_bc = "delimited length exceeded";
            }
            else {
              uVar9 = 0x10;
            }
            pcVar8 = (code *)FUN_01aa0da0(local_bc,uVar9);
LAB_00ef94dc:
          }
LAB_00ef9660:
          FUN_01488358(&local_88);
LAB_00ef9668:
          iVar15 = *(int *)(pcVar8 + 8);
          if (iVar15 == *(int *)pcVar8) {
            FUN_018fa978(pcVar8);
          }
          puVar7 = (undefined4 *)(*(int *)(pcVar8 + 4) + iVar15 * 0x10);
          *puVar7 = "PoolGroupConfiguration";
          puVar7[1] = 0x16;
          puVar7[2] = "pools";
          puVar7[3] = 5;
          *(int *)(pcVar8 + 8) = iVar15 + 1;
          return pcVar8;
        default:
          pcVar8 = (code *)FUN_00ef7b80(bVar3,uVar18,param_3,99);
        }
      } while (pcVar8 == (code *)0x0);
    }
  }
  else {
    local_38 = local_48;
    pppppppuVar16 = &local_54;
    puVar10 = &DAT_005bfb48;
    local_34 = FUN_00ef7f4c;
    pcStack_3c = FUN_00ef7f4c;
    local_40 = &local_30;
    pppppppuVar13 = &local_40;
LAB_00ef9808:
    FUN_01a8da38(pppppppuVar16,puVar10,pppppppuVar13);
    pcVar8 = (code *)FUN_01aa428c(pppppppuVar16);
  }
  return pcVar8;
}

