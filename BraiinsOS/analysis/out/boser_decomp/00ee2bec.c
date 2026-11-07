// FUN_00ee2bec @ 00ee2bec size=2360 calls_out=10 calls_in=1
// strings: a UUID string | real_hashrate | a UUID string | last_5s | last_15s | last_1m

int FUN_00ee2bec(char *param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined4 local_40;
  int *local_3c;
  uint local_38;
  int *local_34;
  uint local_30;
  int *local_2c;
  
  if (*param_1 != '\0') goto LAB_00ee34f0;
  piVar1 = *(int **)(param_1 + 4);
  if (param_1[1] != '\x01') {
    uVar7 = 1;
    pcVar3 = ",";
    iVar5 = *piVar1;
    do {
      uVar8 = *(uint *)(iVar5 + 4);
      uVar6 = uVar8 ^ 0x7fffffff;
      if (uVar7 < uVar6) {
        uVar6 = uVar7;
      }
      FUN_01284394(iVar5,pcVar3,uVar6);
      if (uVar8 == 0x7fffffff) goto LAB_00ee3224;
      pcVar3 = pcVar3 + uVar6;
      uVar7 = uVar7 - uVar6;
    } while (uVar7 != 0);
  }
  param_1[1] = '\x02';
  FUN_0096b2b0(&local_30,*piVar1,param_2,param_3);
  if ((char)local_30 == '\x04') {
    uVar7 = 1;
    iVar5 = *piVar1;
    pcVar3 = ":";
    do {
      uVar8 = *(uint *)(iVar5 + 4);
      uVar6 = uVar8 ^ 0x7fffffff;
      if (uVar7 < uVar6) {
        uVar6 = uVar7;
      }
      FUN_01284394(iVar5,pcVar3,uVar6);
      if (uVar8 == 0x7fffffff) goto LAB_00ee3224;
      pcVar3 = pcVar3 + uVar6;
      uVar7 = uVar7 - uVar6;
    } while (uVar7 != 0);
    iVar5 = *param_4;
    iVar2 = param_4[1];
    if (iVar5 != 2 || iVar2 != 0) {
      uVar7 = 1;
      pcVar3 = "{";
      iVar9 = *piVar1;
      do {
        uVar8 = *(uint *)(iVar9 + 4);
        uVar6 = uVar8 ^ 0x7fffffff;
        if (uVar7 < uVar6) {
          uVar6 = uVar7;
        }
        FUN_01284394(iVar9,pcVar3,uVar6);
        if (uVar8 == 0x7fffffff) goto LAB_00ee350c;
        pcVar3 = pcVar3 + uVar6;
        uVar7 = uVar7 - uVar6;
      } while (uVar7 != 0);
      local_40 = 0x200;
      local_3c = piVar1;
      FUN_0096b2b0(&local_30,*piVar1,"real_hashrate",0xd);
      if ((char)local_30 == '\x04') {
        uVar7 = 1;
        iVar9 = *piVar1;
        pcVar3 = ":";
        do {
          uVar8 = *(uint *)(iVar9 + 4);
          uVar6 = uVar8 ^ 0x7fffffff;
          if (uVar7 < uVar6) {
            uVar6 = uVar7;
          }
          FUN_01284394(iVar9,pcVar3,uVar6);
          if (uVar8 == 0x7fffffff) goto LAB_00ee350c;
          pcVar3 = pcVar3 + uVar6;
          uVar7 = uVar7 - uVar6;
        } while (uVar7 != 0);
        if (param_4[8] == 2 && param_4[9] == 0) {
          uVar7 = 4;
          puVar4 = &DAT_0056d030;
          iVar9 = *piVar1;
          do {
            uVar8 = *(uint *)(iVar9 + 4);
            uVar6 = uVar8 ^ 0x7fffffff;
            if (uVar7 < uVar6) {
              uVar6 = uVar7;
            }
            FUN_01284394(iVar9,puVar4,uVar6);
            if (uVar8 == 0x7fffffff) goto LAB_00ee350c;
            puVar4 = puVar4 + uVar6;
            uVar7 = uVar7 - uVar6;
          } while (uVar7 != 0);
        }
        else {
          uVar7 = 1;
          pcVar3 = "{";
          iVar9 = *piVar1;
          do {
            uVar8 = *(uint *)(iVar9 + 4);
            uVar6 = uVar8 ^ 0x7fffffff;
            if (uVar7 < uVar6) {
              uVar6 = uVar7;
            }
            FUN_01284394(iVar9,pcVar3,uVar6);
            if (uVar8 == 0x7fffffff) goto LAB_00ee350c;
            pcVar3 = pcVar3 + uVar6;
            uVar7 = uVar7 - uVar6;
          } while (uVar7 != 0);
          local_38 = 0x100;
          local_34 = piVar1;
          iVar9 = FUN_00ee35d0((int)*(undefined8 *)(param_4 + 10),&local_38,"last_5s",7);
          if (iVar9 != 0) {
            return iVar9;
          }
          iVar9 = FUN_00ee35d0((int)*(undefined8 *)(param_4 + 0xe),&local_38,"last_15s",8,
                               param_4[0xd],param_4[0xc],param_4[0xd]);
          if (iVar9 != 0) {
            return iVar9;
          }
          iVar9 = FUN_00ee35d0((int)*(undefined8 *)(param_4 + 0x12),&local_38,&DAT_00570290,8,
                               param_4[0x11],param_4[0x10],param_4[0x11]);
          if (iVar9 != 0) {
            return iVar9;
          }
          iVar9 = FUN_00ee35d0((int)*(undefined8 *)(param_4 + 0x16),&local_38,"last_1m",7,
                               param_4[0x15],param_4[0x14],param_4[0x15]);
          if (iVar9 != 0) {
            return iVar9;
          }
          iVar9 = FUN_00ee35d0((int)*(undefined8 *)(param_4 + 0x1a),&local_38,"last_5m",7,
                               param_4[0x19],param_4[0x18],param_4[0x19]);
          if (iVar9 != 0) {
            return iVar9;
          }
          iVar9 = FUN_00ee35d0((int)*(undefined8 *)(param_4 + 0x1e),&local_38,&DAT_005702a8,8,
                               param_4[0x1d],param_4[0x1c],param_4[0x1d]);
          if (iVar9 != 0) {
            return iVar9;
          }
          iVar9 = FUN_00ee35d0((int)*(undefined8 *)(param_4 + 0x22),&local_38,&DAT_00570518,8,
                               param_4[0x21],param_4[0x20],param_4[0x21]);
          if (iVar9 != 0) {
            return iVar9;
          }
          iVar9 = FUN_00ee35d0((int)*(undefined8 *)(param_4 + 0x26),&local_38,"last_1h",7,
                               param_4[0x25],param_4[0x24],param_4[0x25]);
          if (iVar9 != 0) {
            return iVar9;
          }
          iVar9 = FUN_00ee35d0((int)*(undefined8 *)(param_4 + 0x2a),&local_38,&DAT_005705f8,8,
                               param_4[0x29],param_4[0x28],param_4[0x29]);
          if (iVar9 != 0) {
            return iVar9;
          }
          iVar9 = FUN_00ee35d0((int)*(undefined8 *)(param_4 + 0x2e),&local_38,"since_restart",0xd,
                               param_4[0x2d],param_4[0x2c],param_4[0x2d]);
          if (iVar9 != 0) {
            return iVar9;
          }
          local_30 = local_38;
          local_2c = local_34;
          iVar9 = FUN_00d57dc0(&local_30);
          if (iVar9 != 0) {
            return iVar9;
          }
        }
        iVar9 = FUN_00ee35d0((int)*(undefined8 *)(param_4 + 2),&local_40,&DAT_00569a18,0x10);
        piVar1 = local_3c;
        if (iVar9 != 0) {
          return iVar9;
        }
        if ((char)local_40 != '\0') {
LAB_00ee34f0:
          local_30 = 10;
          iVar5 = FUN_01966fbc(&local_30,0,0);
          return iVar5;
        }
        if (local_40._1_1_ != '\x01') {
          uVar7 = 1;
          iVar9 = *local_3c;
          pcVar3 = ",";
          do {
            uVar8 = *(uint *)(iVar9 + 4);
            uVar6 = uVar8 ^ 0x7fffffff;
            if (uVar7 < uVar6) {
              uVar6 = uVar7;
            }
            FUN_01284394(iVar9,pcVar3,uVar6);
            if (uVar8 == 0x7fffffff) goto LAB_00ee350c;
            pcVar3 = pcVar3 + uVar6;
            uVar7 = uVar7 - uVar6;
          } while (uVar7 != 0);
        }
        local_40._0_2_ = CONCAT11(2,(char)local_40);
        FUN_0096b2b0(&local_30,*piVar1,"error_hashrate",0xe,iVar5,iVar2);
        if ((char)local_30 == '\x04') {
          uVar7 = 1;
          iVar5 = *piVar1;
          pcVar3 = ":";
          do {
            uVar8 = *(uint *)(iVar5 + 4);
            uVar6 = uVar8 ^ 0x7fffffff;
            if (uVar7 < uVar6) {
              uVar6 = uVar7;
            }
            FUN_01284394(iVar5,pcVar3,uVar6);
            if (uVar8 == 0x7fffffff) goto LAB_00ee350c;
            pcVar3 = pcVar3 + uVar6;
            uVar7 = uVar7 - uVar6;
          } while (uVar7 != 0);
          if ((param_4[4] & 1U) == 0) {
            uVar7 = 4;
            iVar5 = *piVar1;
            puVar4 = &DAT_0056d030;
            do {
              uVar8 = *(uint *)(iVar5 + 4);
              uVar6 = uVar8 ^ 0x7fffffff;
              if (uVar7 < uVar6) {
                uVar6 = uVar7;
              }
              FUN_01284394(iVar5,puVar4,uVar6);
              if (uVar8 == 0x7fffffff) goto LAB_00ee350c;
              puVar4 = puVar4 + uVar6;
              uVar7 = uVar7 - uVar6;
            } while (uVar7 != 0);
          }
          else {
            uVar7 = 1;
            iVar5 = *piVar1;
            pcVar3 = "{";
            do {
              uVar8 = *(uint *)(iVar5 + 4);
              uVar6 = uVar8 ^ 0x7fffffff;
              if (uVar7 < uVar6) {
                uVar6 = uVar7;
              }
              FUN_01284394(iVar5,pcVar3,uVar6);
              if (uVar8 == 0x7fffffff) goto LAB_00ee350c;
              pcVar3 = pcVar3 + uVar6;
              uVar7 = uVar7 - uVar6;
            } while (uVar7 != 0);
            local_30 = 0x100;
            local_2c = piVar1;
            iVar5 = FUN_00ebeb78((int)*(undefined8 *)(param_4 + 6),&local_30,"megahash_per_second",
                                 0x13);
            if (iVar5 != 0) {
              return iVar5;
            }
            if (((local_30 & 0xff00) != 0) && ((local_30 & 1) == 0)) {
              uVar7 = 1;
              iVar5 = *local_2c;
              pcVar3 = "}";
              do {
                uVar8 = *(uint *)(iVar5 + 4);
                uVar6 = uVar8 ^ 0x7fffffff;
                if (uVar7 < uVar6) {
                  uVar6 = uVar7;
                }
                FUN_01284394(iVar5,pcVar3,uVar6);
                if (uVar8 == 0x7fffffff) goto LAB_00ee350c;
                pcVar3 = pcVar3 + uVar6;
                uVar7 = uVar7 - uVar6;
              } while (uVar7 != 0);
            }
          }
          iVar5 = FUN_00ebe9c0(&local_40,"found_blocks",0xc,param_4[0x35]);
          if (iVar5 != 0) {
            return iVar5;
          }
          if ((char)local_40 != '\x01') {
            iVar5 = FUN_0096b424(&local_40,"best_share",10,param_4[0x31],param_4[0x30],param_4[0x31]
                                );
            if (iVar5 != 0) {
              return iVar5;
            }
            if ((char)local_40 != '\x01') {
              iVar5 = FUN_0096b5ec(&local_40,"best_share_str",0xe,param_4[0x33],param_4[0x34]);
              if (iVar5 == 0) {
                local_30 = local_40;
                local_2c = local_3c;
                iVar5 = FUN_00d57dc0(&local_30);
                return iVar5;
              }
              return iVar5;
            }
          }
          goto LAB_00ee34f0;
        }
      }
      uVar7 = local_30;
      piVar1 = local_2c;
      goto LAB_00ee3518;
    }
    uVar7 = 4;
    puVar4 = &DAT_0056d030;
    iVar5 = *piVar1;
    while( true ) {
      uVar8 = *(uint *)(iVar5 + 4);
      uVar6 = uVar8 ^ 0x7fffffff;
      if (uVar7 < uVar6) {
        uVar6 = uVar7;
      }
      FUN_01284394(iVar5,puVar4,uVar6);
      if (uVar8 == 0x7fffffff) break;
      puVar4 = puVar4 + uVar6;
      uVar7 = uVar7 - uVar6;
      if (uVar7 == 0) {
        return 0;
      }
    }
    local_30 = 2;
    local_2c = &DAT_01d2e7b8;
  }
LAB_00ee3230:
  iVar5 = FUN_01966f50(local_30,local_2c);
  return iVar5;
LAB_00ee3224:
  local_30 = 2;
  local_2c = &DAT_01d2e7b8;
  goto LAB_00ee3230;
LAB_00ee350c:
  uVar7 = 2;
  piVar1 = &DAT_01d2e7b8;
LAB_00ee3518:
  iVar5 = FUN_01966f50(uVar7,piVar1);
  return iVar5;
}

