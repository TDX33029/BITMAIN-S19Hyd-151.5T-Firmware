// FUN_00da9b4c @ 00da9b4c size=4340 calls_out=13 calls_in=1
// strings: tunermode | manualmode | global_voltage | a UUID string | hashratetarget | powertarget

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00da9b4c(undefined4 param_1,int *param_2)

{
  uint *puVar1;
  uint **ppuVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined *puVar9;
  char *pcVar10;
  uint uVar11;
  int iVar12;
  uint *puVar13;
  int local_60;
  uint local_50;
  uint local_4c;
  undefined4 local_48;
  undefined4 local_44;
  uint local_40;
  uint **local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  uint *local_30;
  undefined4 local_2c;
  uint **local_28;
  
  local_50 = thunk_FUN_01be5118(0x80);
  if (local_50 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1);
  }
  local_44 = 1;
  local_4c = 0;
  local_30 = &local_50;
  local_48 = 0x80;
  if (*param_2 == 3 && param_2[1] == 0) {
    uVar7 = 4;
    puVar9 = &DAT_0056d030;
    do {
      uVar8 = local_4c;
      uVar11 = local_4c ^ 0x7fffffff;
      if (uVar7 < (local_4c ^ 0x7fffffff)) {
        uVar11 = uVar7;
      }
      FUN_01284394(&local_50,puVar9,uVar11);
      if (uVar8 == 0x7fffffff) goto LAB_00daabac;
      puVar9 = puVar9 + uVar11;
      uVar7 = uVar7 - uVar11;
    } while (uVar7 != 0);
  }
  else if (*param_2 == 2 && param_2[1] == 0) {
    uVar7 = 1;
    pcVar10 = "{";
    do {
      uVar8 = local_4c;
      uVar11 = local_4c ^ 0x7fffffff;
      if (uVar7 < (local_4c ^ 0x7fffffff)) {
        uVar11 = uVar7;
      }
      FUN_01284394(&local_50,pcVar10,uVar11);
      if (uVar8 == 0x7fffffff) goto LAB_00daabac;
      pcVar10 = pcVar10 + uVar11;
      uVar7 = uVar7 - uVar11;
    } while (uVar7 != 0);
    FUN_0096b2b0(&local_40,local_30,"tunermode",9);
    puVar13 = local_30;
    if ((char)local_40 != '\x04') {
      iVar6 = FUN_01966f50(local_40,local_3c);
      goto LAB_00daabb8;
    }
    uVar7 = 1;
    pcVar10 = ":";
    do {
      uVar11 = puVar13[1];
      uVar8 = uVar11 ^ 0x7fffffff;
      if (uVar7 < uVar8) {
        uVar8 = uVar7;
      }
      FUN_01284394(puVar13,pcVar10,uVar8);
      puVar1 = local_30;
      if (uVar11 == 0x7fffffff) goto LAB_00daabac;
      pcVar10 = pcVar10 + uVar8;
      uVar7 = uVar7 - uVar8;
    } while (uVar7 != 0);
    uVar7 = 1;
    pcVar10 = "{";
    do {
      uVar11 = puVar1[1];
      uVar8 = uVar11 ^ 0x7fffffff;
      if (uVar7 < uVar8) {
        uVar8 = uVar7;
      }
      FUN_01284394(puVar1,pcVar10,uVar8);
      if (uVar11 == 0x7fffffff) goto LAB_00daabac;
      pcVar10 = pcVar10 + uVar8;
      uVar7 = uVar7 - uVar8;
    } while (uVar7 != 0);
    FUN_0096b2b0(&local_40,local_30,&DAT_00531484,6);
    puVar13 = local_30;
    if ((char)local_40 != '\x04') {
      iVar6 = FUN_01966f50(local_40,local_3c);
      goto LAB_00daabb8;
    }
    uVar7 = 1;
    pcVar10 = ":";
    do {
      uVar11 = puVar13[1];
      uVar8 = uVar11 ^ 0x7fffffff;
      if (uVar7 < uVar8) {
        uVar8 = uVar7;
      }
      FUN_01284394(puVar13,pcVar10,uVar8);
      puVar1 = local_30;
      if (uVar11 == 0x7fffffff) goto LAB_00daabac;
      pcVar10 = pcVar10 + uVar8;
      uVar7 = uVar7 - uVar8;
    } while (uVar7 != 0);
    if (param_2[2] == 2 && param_2[3] == 0) {
      uVar7 = 4;
      puVar9 = &DAT_0056d030;
      do {
        uVar11 = puVar1[1];
        uVar8 = uVar11 ^ 0x7fffffff;
        if (uVar7 < uVar8) {
          uVar8 = uVar7;
        }
        FUN_01284394(puVar1,puVar9,uVar8);
        if (uVar11 == 0x7fffffff) goto LAB_00daabac;
        puVar9 = puVar9 + uVar8;
        uVar7 = uVar7 - uVar8;
      } while (uVar7 != 0);
    }
    else {
      pcVar10 = "{";
      if ((param_2[2] & 1U) == 0) {
        uVar7 = 1;
        do {
          uVar11 = puVar1[1];
          uVar8 = uVar11 ^ 0x7fffffff;
          if (uVar7 < uVar8) {
            uVar8 = uVar7;
          }
          FUN_01284394(puVar1,pcVar10,uVar8);
          if (uVar11 == 0x7fffffff) goto LAB_00daabac;
          pcVar10 = pcVar10 + uVar8;
          uVar7 = uVar7 - uVar8;
        } while (uVar7 != 0);
        FUN_0096b2b0(&local_40,local_30,"powertarget",0xb);
        puVar13 = local_30;
        if ((char)local_40 != '\x04') {
          iVar6 = FUN_01966f50(local_40,local_3c);
          goto LAB_00daabb8;
        }
        uVar7 = 1;
        pcVar10 = ":";
        do {
          uVar11 = puVar13[1];
          uVar8 = uVar11 ^ 0x7fffffff;
          if (uVar7 < uVar8) {
            uVar8 = uVar7;
          }
          FUN_01284394(puVar13,pcVar10,uVar8);
          puVar1 = local_30;
          if (uVar11 == 0x7fffffff) goto LAB_00daabac;
          pcVar10 = pcVar10 + uVar8;
          uVar7 = uVar7 - uVar8;
        } while (uVar7 != 0);
        uVar7 = 1;
        pcVar10 = "{";
        do {
          uVar11 = puVar1[1];
          uVar8 = uVar11 ^ 0x7fffffff;
          if (uVar7 < uVar8) {
            uVar8 = uVar7;
          }
          FUN_01284394(puVar1,pcVar10,uVar8);
          if (uVar11 == 0x7fffffff) {
            iVar6 = FUN_01966f50(2,&DAT_01d2e7b8);
            goto LAB_00daabb8;
          }
          pcVar10 = pcVar10 + uVar8;
          uVar7 = uVar7 - uVar8;
        } while (uVar7 != 0);
        local_3c = &local_30;
        local_40 = 0x100;
        iVar6 = FUN_00ede5e8(&local_40,"power_target",0xc,param_2[5],param_2[4],param_2[5],
                             param_2[6],param_2[7]);
        if (iVar6 != 0) goto LAB_00daabb8;
        if (((local_40 & 0xff00) != 0) && ((local_40 & 1) == 0)) {
          uVar7 = 1;
          puVar13 = *local_3c;
          pcVar10 = "}";
          do {
            uVar11 = puVar13[1];
            uVar8 = uVar11 ^ 0x7fffffff;
            if (uVar7 < uVar8) {
              uVar8 = uVar7;
            }
            FUN_01284394(puVar13,pcVar10,uVar8);
            if (uVar11 == 0x7fffffff) {
              iVar6 = FUN_01966f50(2,&DAT_01d2e7b8);
              goto LAB_00daabb8;
            }
            pcVar10 = pcVar10 + uVar8;
            uVar7 = uVar7 - uVar8;
          } while (uVar7 != 0);
        }
        puVar13 = local_30;
        uVar7 = 1;
        pcVar10 = "}";
        do {
          uVar11 = puVar13[1];
          uVar8 = uVar11 ^ 0x7fffffff;
          if (uVar7 < uVar8) {
            uVar8 = uVar7;
          }
          FUN_01284394(puVar13,pcVar10,uVar8);
          if (uVar11 == 0x7fffffff) goto LAB_00daabac;
          pcVar10 = pcVar10 + uVar8;
          uVar7 = uVar7 - uVar8;
        } while (uVar7 != 0);
      }
      else {
        uVar7 = 1;
        do {
          uVar11 = puVar1[1];
          uVar8 = uVar11 ^ 0x7fffffff;
          if (uVar7 < uVar8) {
            uVar8 = uVar7;
          }
          FUN_01284394(puVar1,pcVar10,uVar8);
          if (uVar11 == 0x7fffffff) goto LAB_00daabac;
          pcVar10 = pcVar10 + uVar8;
          uVar7 = uVar7 - uVar8;
        } while (uVar7 != 0);
        FUN_0096b2b0(&local_40,local_30,"hashratetarget",0xe);
        puVar13 = local_30;
        if ((char)local_40 != '\x04') {
          iVar6 = FUN_01966f50(local_40,local_3c);
          goto LAB_00daabb8;
        }
        uVar7 = 1;
        pcVar10 = ":";
        do {
          uVar11 = puVar13[1];
          uVar8 = uVar11 ^ 0x7fffffff;
          if (uVar7 < uVar8) {
            uVar8 = uVar7;
          }
          FUN_01284394(puVar13,pcVar10,uVar8);
          puVar1 = local_30;
          if (uVar11 == 0x7fffffff) goto LAB_00daabac;
          pcVar10 = pcVar10 + uVar8;
          uVar7 = uVar7 - uVar8;
        } while (uVar7 != 0);
        uVar7 = 1;
        pcVar10 = "{";
        do {
          uVar11 = puVar1[1];
          uVar8 = uVar11 ^ 0x7fffffff;
          if (uVar7 < uVar8) {
            uVar8 = uVar7;
          }
          FUN_01284394(puVar1,pcVar10,uVar8);
          if (uVar11 == 0x7fffffff) {
            iVar6 = FUN_01966f50(2,&DAT_01d2e7b8);
            goto LAB_00daabb8;
          }
          pcVar10 = pcVar10 + uVar8;
          uVar7 = uVar7 - uVar8;
        } while (uVar7 != 0);
        local_3c = &local_30;
        local_40 = 0x100;
        iVar6 = FUN_00ede3a4((int)*(undefined8 *)(param_2 + 6),&local_40,"hashrate_target",0xf,
                             param_2[5],param_2[4],param_2[5]);
        if (iVar6 != 0) goto LAB_00daabb8;
        if (((local_40 & 0xff00) != 0) && ((local_40 & 1) == 0)) {
          uVar7 = 1;
          puVar13 = *local_3c;
          pcVar10 = "}";
          do {
            uVar11 = puVar13[1];
            uVar8 = uVar11 ^ 0x7fffffff;
            if (uVar7 < uVar8) {
              uVar8 = uVar7;
            }
            FUN_01284394(puVar13,pcVar10,uVar8);
            if (uVar11 == 0x7fffffff) {
              iVar6 = FUN_01966f50(2,&DAT_01d2e7b8);
              goto LAB_00daabb8;
            }
            pcVar10 = pcVar10 + uVar8;
            uVar7 = uVar7 - uVar8;
          } while (uVar7 != 0);
        }
        puVar13 = local_30;
        uVar7 = 1;
        pcVar10 = "}";
        do {
          uVar11 = puVar13[1];
          uVar8 = uVar11 ^ 0x7fffffff;
          if (uVar7 < uVar8) {
            uVar8 = uVar7;
          }
          FUN_01284394(puVar13,pcVar10,uVar8);
          if (uVar11 == 0x7fffffff) goto LAB_00daabac;
          pcVar10 = pcVar10 + uVar8;
          uVar7 = uVar7 - uVar8;
        } while (uVar7 != 0);
      }
    }
    puVar13 = local_30;
    uVar7 = 1;
    pcVar10 = "}";
    do {
      uVar11 = puVar13[1];
      uVar8 = uVar11 ^ 0x7fffffff;
      if (uVar7 < uVar8) {
        uVar8 = uVar7;
      }
      FUN_01284394(puVar13,pcVar10,uVar8);
      puVar1 = local_30;
      if (uVar11 == 0x7fffffff) goto LAB_00daabac;
      pcVar10 = pcVar10 + uVar8;
      uVar7 = uVar7 - uVar8;
    } while (uVar7 != 0);
    uVar7 = 1;
    pcVar10 = "}";
    do {
      uVar11 = puVar1[1];
      uVar8 = uVar11 ^ 0x7fffffff;
      if (uVar7 < uVar8) {
        uVar8 = uVar7;
      }
      FUN_01284394(puVar1,pcVar10,uVar8);
      if (uVar11 == 0x7fffffff) goto LAB_00daabac;
      pcVar10 = pcVar10 + uVar8;
      uVar7 = uVar7 - uVar8;
    } while (uVar7 != 0);
  }
  else {
    uVar7 = 1;
    pcVar10 = "{";
    do {
      uVar8 = local_4c;
      uVar11 = local_4c ^ 0x7fffffff;
      if (uVar7 < (local_4c ^ 0x7fffffff)) {
        uVar11 = uVar7;
      }
      FUN_01284394(&local_50,pcVar10,uVar11);
      if (uVar8 == 0x7fffffff) goto LAB_00daabac;
      pcVar10 = pcVar10 + uVar11;
      uVar7 = uVar7 - uVar11;
    } while (uVar7 != 0);
    FUN_0096b2b0(&local_40,local_30,"manualmode",10);
    puVar13 = local_30;
    if ((char)local_40 != '\x04') {
      iVar6 = FUN_01966f50(local_40,local_3c);
      goto LAB_00daabb8;
    }
    uVar7 = 1;
    pcVar10 = ":";
    do {
      uVar11 = puVar13[1];
      uVar8 = uVar11 ^ 0x7fffffff;
      if (uVar7 < uVar8) {
        uVar8 = uVar7;
      }
      FUN_01284394(puVar13,pcVar10,uVar8);
      puVar1 = local_30;
      if (uVar11 == 0x7fffffff) goto LAB_00daabac;
      pcVar10 = pcVar10 + uVar8;
      uVar7 = uVar7 - uVar8;
    } while (uVar7 != 0);
    uVar7 = 1;
    pcVar10 = "{";
    do {
      uVar11 = puVar1[1];
      uVar8 = uVar11 ^ 0x7fffffff;
      if (uVar7 < uVar8) {
        uVar8 = uVar7;
      }
      FUN_01284394(puVar1,pcVar10,uVar8);
      if (uVar11 == 0x7fffffff) goto LAB_00daa008;
      pcVar10 = pcVar10 + uVar8;
      uVar7 = uVar7 - uVar8;
    } while (uVar7 != 0);
    local_28 = &local_30;
    local_2c = 0x100;
    iVar6 = FUN_00ede818((int)*(undefined8 *)(param_2 + 2),&local_2c,&DAT_00567e78,0x10);
    if (iVar6 != 0) goto LAB_00daabb8;
    iVar6 = FUN_00edeb68((int)*(undefined8 *)(param_2 + 6),&local_2c,"global_voltage",0xe,param_2[5]
                         ,param_2[4],param_2[5]);
    ppuVar2 = local_28;
    if (iVar6 != 0) goto LAB_00daabb8;
    if ((char)local_2c != '\0') {
      local_40 = 10;
      iVar6 = FUN_01966fbc(&local_40,0,0);
      goto LAB_00daabb8;
    }
    if (local_2c._1_1_ != '\x01') {
      uVar7 = 1;
      puVar13 = *local_28;
      pcVar10 = ",";
      do {
        uVar11 = puVar13[1];
        uVar8 = uVar11 ^ 0x7fffffff;
        if (uVar7 < uVar8) {
          uVar8 = uVar7;
        }
        FUN_01284394(puVar13,pcVar10,uVar8);
        if (uVar11 == 0x7fffffff) goto LAB_00daa008;
        pcVar10 = pcVar10 + uVar8;
        uVar7 = uVar7 - uVar8;
      } while (uVar7 != 0);
    }
    local_2c._0_2_ = CONCAT11(2,(char)local_2c);
    FUN_0096b2b0(&local_40,*ppuVar2,"hashboards",10);
    if ((char)local_40 != '\x04') {
      iVar6 = FUN_01966f50(local_40,local_3c);
      goto LAB_00daabb8;
    }
    uVar7 = 1;
    puVar13 = *ppuVar2;
    pcVar10 = ":";
    do {
      uVar11 = puVar13[1];
      uVar8 = uVar11 ^ 0x7fffffff;
      if (uVar7 < uVar8) {
        uVar8 = uVar7;
      }
      FUN_01284394(puVar13,pcVar10,uVar8);
      if (uVar11 == 0x7fffffff) goto LAB_00daa008;
      pcVar10 = pcVar10 + uVar8;
      uVar7 = uVar7 - uVar8;
    } while (uVar7 != 0);
    iVar12 = param_2[10];
    uVar7 = 1;
    iVar5 = param_2[9];
    puVar13 = *ppuVar2;
    puVar9 = &DAT_0053340d;
    do {
      uVar11 = puVar13[1];
      uVar8 = uVar11 ^ 0x7fffffff;
      if (uVar7 < uVar8) {
        uVar8 = uVar7;
      }
      FUN_01284394(puVar13,puVar9,uVar8);
      if (uVar11 == 0x7fffffff) goto LAB_00daa008;
      puVar9 = puVar9 + uVar8;
      uVar7 = uVar7 - uVar8;
    } while (uVar7 != 0);
    if (iVar12 == 0) {
      uVar7 = 1;
      pcVar10 = "]";
      do {
        uVar11 = puVar13[1];
        uVar8 = uVar11 ^ 0x7fffffff;
        if (uVar7 < uVar8) {
          uVar8 = uVar7;
        }
        FUN_01284394(puVar13,pcVar10,uVar8);
        if (uVar11 == 0x7fffffff) goto LAB_00daa008;
        pcVar10 = pcVar10 + uVar8;
        uVar7 = uVar7 - uVar8;
      } while (uVar7 != 0);
    }
    else {
      bVar3 = true;
      local_60 = iVar5;
      do {
        puVar13 = *ppuVar2;
        if (!bVar3) {
          uVar7 = 1;
          pcVar10 = ",";
          do {
            uVar11 = puVar13[1];
            uVar8 = uVar11 ^ 0x7fffffff;
            if (uVar7 < uVar8) {
              uVar8 = uVar7;
            }
            FUN_01284394(puVar13,pcVar10,uVar8);
            if (uVar11 == 0x7fffffff) goto LAB_00daa008;
            pcVar10 = pcVar10 + uVar8;
            uVar7 = uVar7 - uVar8;
          } while (uVar7 != 0);
          puVar13 = *ppuVar2;
        }
        iVar4 = local_60 + 0x30;
        uVar7 = 1;
        pcVar10 = "{";
        do {
          uVar11 = puVar13[1];
          uVar8 = uVar11 ^ 0x7fffffff;
          if (uVar7 < uVar8) {
            uVar8 = uVar7;
          }
          FUN_01284394(puVar13,pcVar10,uVar8);
          if (uVar11 == 0x7fffffff) {
            iVar6 = FUN_01966f50(2,&DAT_01d2e7b8);
            goto LAB_00daabb8;
          }
          pcVar10 = pcVar10 + uVar8;
          uVar7 = uVar7 - uVar8;
        } while (uVar7 != 0);
        local_3c = ppuVar2;
        local_40 = 0x100;
        iVar6 = FUN_0096b5ec(&local_40,"idlast_updatedlast_ticknext_tickran",2,
                             *(undefined4 *)(local_60 + 0x24),*(undefined4 *)(local_60 + 0x28));
        if (((iVar6 != 0) ||
            (iVar6 = FUN_00ede818((int)*(undefined8 *)(local_60 + 8),&local_40,"frequency",9),
            iVar6 != 0)) ||
           (iVar6 = FUN_00edeb68((int)*(undefined8 *)(local_60 + 0x18),&local_40,"voltage",7),
           iVar6 != 0)) goto LAB_00daabb8;
        if (((local_40 & 0xff00) != 0) && ((local_40 & 1) == 0)) {
          uVar7 = 1;
          puVar13 = *local_3c;
          pcVar10 = "}";
          do {
            uVar11 = puVar13[1];
            uVar8 = uVar11 ^ 0x7fffffff;
            if (uVar7 < uVar8) {
              uVar8 = uVar7;
            }
            FUN_01284394(puVar13,pcVar10,uVar8);
            if (uVar11 == 0x7fffffff) {
              iVar6 = FUN_01966f50(2,&DAT_01d2e7b8);
              goto LAB_00daabb8;
            }
            pcVar10 = pcVar10 + uVar8;
            uVar7 = uVar7 - uVar8;
          } while (uVar7 != 0);
        }
        bVar3 = false;
        local_60 = iVar4;
      } while (iVar4 != iVar5 + iVar12 * 0x30);
      uVar7 = 1;
      puVar13 = *ppuVar2;
      pcVar10 = "]";
      do {
        uVar11 = puVar13[1];
        uVar8 = uVar11 ^ 0x7fffffff;
        if (uVar7 < uVar8) {
          uVar8 = uVar7;
        }
        FUN_01284394(puVar13,pcVar10,uVar8);
        if (uVar11 == 0x7fffffff) goto LAB_00daa008;
        pcVar10 = pcVar10 + uVar8;
        uVar7 = uVar7 - uVar8;
      } while (uVar7 != 0);
    }
    if (((local_2c & 0xff00) != 0) && ((local_2c & 1) == 0)) {
      uVar7 = 1;
      pcVar10 = "}";
      puVar13 = *ppuVar2;
      do {
        uVar11 = puVar13[1];
        uVar8 = uVar11 ^ 0x7fffffff;
        if (uVar7 < uVar8) {
          uVar8 = uVar7;
        }
        FUN_01284394(puVar13,pcVar10,uVar8);
        if (uVar11 == 0x7fffffff) {
          iVar6 = FUN_01966f50(2,&DAT_01d2e7b8);
          goto LAB_00daabb8;
        }
        pcVar10 = pcVar10 + uVar8;
        uVar7 = uVar7 - uVar8;
      } while (uVar7 != 0);
    }
    puVar13 = local_30;
    uVar7 = 1;
    pcVar10 = "}";
    do {
      uVar11 = puVar13[1];
      uVar8 = uVar11 ^ 0x7fffffff;
      if (uVar7 < uVar8) {
        uVar8 = uVar7;
      }
      FUN_01284394(puVar13,pcVar10,uVar8);
      if (uVar11 == 0x7fffffff) goto LAB_00daabac;
      pcVar10 = pcVar10 + uVar8;
      uVar7 = uVar7 - uVar8;
    } while (uVar7 != 0);
  }
  iVar6 = 0;
LAB_00daabb8:
  local_40 = local_50;
  local_3c = (uint **)local_4c;
  uStack_38 = local_48;
  uStack_34 = local_44;
  FUN_00710a2c(param_1,&local_40,iVar6);
  FUN_00d5cae4(param_2);
  return;
LAB_00daa008:
  iVar6 = FUN_01966f50(2,&DAT_01d2e7b8);
  goto LAB_00daabb8;
LAB_00daabac:
  iVar6 = FUN_01966f50(2,&DAT_01d2e7b8);
  goto LAB_00daabb8;
}

