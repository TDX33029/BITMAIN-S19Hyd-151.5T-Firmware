// FUN_00eeaaac @ 00eeaaac size=2112 calls_out=11 calls_in=0
// strings: a UUID string | global_voltage | a UUID string | hashboards | assertion failed: !self.only_contains_attribute_certs | a UUID string

/* WARNING: Removing unreachable block (ram,0x00eeb2d4) */

int FUN_00eeaaac(char *param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  undefined *puVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  int local_50;
  int local_4c;
  undefined4 local_40;
  int *local_3c;
  uint local_38;
  int *local_34;
  undefined4 local_30;
  int *local_2c;
  
  if (*param_1 != '\0') {
LAB_00eeb19c:
    local_30 = 10;
    iVar8 = FUN_01966fbc(&local_30,0,0);
    return iVar8;
  }
  piVar1 = *(int **)(param_1 + 4);
  if (param_1[1] != '\x01') {
    uVar4 = 1;
    pcVar5 = ",";
    iVar8 = *piVar1;
    do {
      uVar6 = *(uint *)(iVar8 + 4);
      uVar2 = uVar6 ^ 0x7fffffff;
      if (uVar4 < uVar2) {
        uVar2 = uVar4;
      }
      FUN_01284394(iVar8,pcVar5,uVar2);
      if (uVar6 == 0x7fffffff) goto LAB_00eeada8;
      pcVar5 = pcVar5 + uVar2;
      uVar4 = uVar4 - uVar2;
    } while (uVar4 != 0);
  }
  param_1[1] = '\x02';
  FUN_0096b2b0(&local_30,*piVar1,&DAT_00568408,0x10);
  if ((char)local_30 == '\x04') {
    uVar4 = 1;
    iVar8 = *piVar1;
    pcVar5 = ":";
    do {
      uVar6 = *(uint *)(iVar8 + 4);
      uVar2 = uVar6 ^ 0x7fffffff;
      if (uVar4 < uVar2) {
        uVar2 = uVar4;
      }
      FUN_01284394(iVar8,pcVar5,uVar2);
      if (uVar6 == 0x7fffffff) goto LAB_00eeada8;
      pcVar5 = pcVar5 + uVar2;
      uVar4 = uVar4 - uVar2;
    } while (uVar4 != 0);
    if (*param_2 != 2 || param_2[1] != 0) {
      uVar4 = 1;
      pcVar5 = "{";
      iVar8 = *piVar1;
      do {
        uVar6 = *(uint *)(iVar8 + 4);
        uVar2 = uVar6 ^ 0x7fffffff;
        if (uVar4 < uVar2) {
          uVar2 = uVar4;
        }
        FUN_01284394(iVar8,pcVar5,uVar2);
        if (uVar6 == 0x7fffffff) goto LAB_00eeb1b8;
        pcVar5 = pcVar5 + uVar2;
        uVar4 = uVar4 - uVar2;
      } while (uVar4 != 0);
      local_40 = 0x100;
      local_3c = piVar1;
      iVar8 = FUN_00ede818((int)*(undefined8 *)(param_2 + 2),&local_40,&DAT_00567e78,0x10);
      if (iVar8 != 0) {
        return iVar8;
      }
      iVar8 = FUN_00edeb68((int)*(undefined8 *)(param_2 + 6),&local_40,"global_voltage",0xe,
                           param_2[5],param_2[4],param_2[5]);
      piVar1 = local_3c;
      if (iVar8 != 0) {
        return iVar8;
      }
      if ((char)local_40 == '\0') {
        if (local_40._1_1_ != '\x01') {
          uVar4 = 1;
          iVar8 = *local_3c;
          pcVar5 = ",";
          do {
            uVar6 = *(uint *)(iVar8 + 4);
            uVar2 = uVar6 ^ 0x7fffffff;
            if (uVar4 < uVar2) {
              uVar2 = uVar4;
            }
            FUN_01284394(iVar8,pcVar5,uVar2);
            if (uVar6 == 0x7fffffff) goto LAB_00eeb1b8;
            pcVar5 = pcVar5 + uVar2;
            uVar4 = uVar4 - uVar2;
          } while (uVar4 != 0);
        }
        local_40._0_2_ = CONCAT11(2,(char)local_40);
        FUN_0096b2b0(&local_30,*piVar1,"hashboards",10);
        if ((char)local_30 == '\x04') {
          uVar4 = 1;
          iVar8 = *piVar1;
          pcVar5 = ":";
          do {
            uVar6 = *(uint *)(iVar8 + 4);
            uVar2 = uVar6 ^ 0x7fffffff;
            if (uVar4 < uVar2) {
              uVar2 = uVar4;
            }
            FUN_01284394(iVar8,pcVar5,uVar2);
            if (uVar6 == 0x7fffffff) goto LAB_00eeb1b8;
            pcVar5 = pcVar5 + uVar2;
            uVar4 = uVar4 - uVar2;
          } while (uVar4 != 0);
          uVar4 = 1;
          iVar7 = param_2[0xe];
          iVar8 = param_2[0xd];
          iVar9 = *piVar1;
          puVar3 = &DAT_0053340d;
          do {
            uVar6 = *(uint *)(iVar9 + 4);
            uVar2 = uVar6 ^ 0x7fffffff;
            if (uVar4 < uVar2) {
              uVar2 = uVar4;
            }
            FUN_01284394(iVar9,puVar3,uVar2);
            if (uVar6 == 0x7fffffff) goto LAB_00eeb1b8;
            puVar3 = puVar3 + uVar2;
            uVar4 = uVar4 - uVar2;
          } while (uVar4 != 0);
          bVar10 = iVar7 != 0;
          local_4c = 0x100;
          if (!bVar10) {
            uVar4 = 1;
            pcVar5 = "]";
            do {
              uVar6 = *(uint *)(iVar9 + 4);
              uVar2 = uVar6 ^ 0x7fffffff;
              if (uVar4 < uVar2) {
                uVar2 = uVar4;
              }
              FUN_01284394(iVar9,pcVar5,uVar2);
              if (uVar6 == 0x7fffffff) goto LAB_00eeb1b8;
              pcVar5 = pcVar5 + uVar2;
              uVar4 = uVar4 - uVar2;
            } while (uVar4 != 0);
            local_4c = 0;
          }
          for (local_50 = iVar8; local_50 != iVar8 + iVar7 * 0x30; local_50 = local_50 + 0x30) {
            iVar9 = *piVar1;
            if (!bVar10) {
              uVar4 = 1;
              pcVar5 = ",";
              do {
                uVar6 = *(uint *)(iVar9 + 4);
                uVar2 = uVar6 ^ 0x7fffffff;
                if (uVar4 < uVar2) {
                  uVar2 = uVar4;
                }
                FUN_01284394(iVar9,pcVar5,uVar2);
                if (uVar6 == 0x7fffffff) goto LAB_00eeb2c4;
                pcVar5 = pcVar5 + uVar2;
                uVar4 = uVar4 - uVar2;
              } while (uVar4 != 0);
              iVar9 = *piVar1;
            }
            uVar4 = 1;
            local_4c = 0x200;
            pcVar5 = "{";
            do {
              uVar6 = *(uint *)(iVar9 + 4);
              uVar2 = uVar6 ^ 0x7fffffff;
              if (uVar4 < uVar2) {
                uVar2 = uVar4;
              }
              FUN_01284394(iVar9,pcVar5,uVar2);
              if (uVar6 == 0x7fffffff) goto LAB_00eeb2c4;
              pcVar5 = pcVar5 + uVar2;
              uVar4 = uVar4 - uVar2;
            } while (uVar4 != 0);
            local_34 = piVar1;
            local_38 = 0x100;
            iVar9 = FUN_0096b5ec(&local_38,"idlast_updatedlast_ticknext_tickran",2,
                                 *(undefined4 *)(local_50 + 0x24),*(undefined4 *)(local_50 + 0x28));
            if (iVar9 != 0) {
              return iVar9;
            }
            if ((char)local_38 == '\x01') goto LAB_00eeb19c;
            iVar9 = FUN_00ebd130(&local_38,"enabled",7,*(undefined1 *)(local_50 + 0x2c));
            if (iVar9 != 0) {
              return iVar9;
            }
            iVar9 = FUN_00ede818((int)*(undefined8 *)(local_50 + 8),&local_38,"frequency",9);
            if (iVar9 != 0) {
              return iVar9;
            }
            iVar9 = FUN_00edeb68((int)*(undefined8 *)(local_50 + 0x18),&local_38,"voltage",7);
            if (iVar9 != 0) {
              return iVar9;
            }
            if (((local_38 & 0xff00) != 0) && ((local_38 & 1) == 0)) {
              uVar4 = 1;
              iVar9 = *local_34;
              pcVar5 = "}";
              do {
                uVar6 = *(uint *)(iVar9 + 4);
                uVar2 = uVar6 ^ 0x7fffffff;
                if (uVar4 < uVar2) {
                  uVar2 = uVar4;
                }
                FUN_01284394(iVar9,pcVar5,uVar2);
                if (uVar6 == 0x7fffffff) goto LAB_00eeb2c4;
                pcVar5 = pcVar5 + uVar2;
                uVar4 = uVar4 - uVar2;
              } while (uVar4 != 0);
            }
            bVar10 = false;
          }
          if (local_4c != 0) {
            uVar4 = 1;
            iVar8 = *piVar1;
            pcVar5 = "]";
            do {
              uVar6 = *(uint *)(iVar8 + 4);
              uVar2 = uVar6 ^ 0x7fffffff;
              if (uVar4 < uVar2) {
                uVar2 = uVar4;
              }
              FUN_01284394(iVar8,pcVar5,uVar2);
              if (uVar6 == 0x7fffffff) goto LAB_00eeb2c4;
              pcVar5 = pcVar5 + uVar2;
              uVar4 = uVar4 - uVar2;
            } while (uVar4 != 0);
          }
          iVar8 = FUN_00ee0f5c(&local_40,"quick_ramping_time_up_s",0x17,param_2[8],param_2[9]);
          if (iVar8 != 0) {
            return iVar8;
          }
          iVar8 = FUN_00ee0f5c(&local_40,"quick_ramping_time_down_s",0x19,param_2[10],param_2[0xb]);
          if (iVar8 == 0) {
            local_30 = local_40;
            local_2c = local_3c;
            iVar8 = FUN_00d57dc0(&local_30);
            return iVar8;
          }
          return iVar8;
        }
        goto LAB_00eeb1c4;
      }
      goto LAB_00eeb19c;
    }
    uVar4 = 4;
    puVar3 = &DAT_0056d030;
    iVar8 = *piVar1;
    while( true ) {
      uVar6 = *(uint *)(iVar8 + 4);
      uVar2 = uVar6 ^ 0x7fffffff;
      if (uVar4 < uVar2) {
        uVar2 = uVar4;
      }
      FUN_01284394(iVar8,puVar3,uVar2);
      if (uVar6 == 0x7fffffff) break;
      puVar3 = puVar3 + uVar2;
      uVar4 = uVar4 - uVar2;
      if (uVar4 == 0) {
        return 0;
      }
    }
    local_30 = 2;
    local_2c = &DAT_01d2e7b8;
  }
  goto LAB_00eeadb4;
LAB_00eeb1b8:
  local_30 = 2;
  local_2c = &DAT_01d2e7b8;
  goto LAB_00eeb1c4;
LAB_00eeb2c4:
  local_30 = 2;
  local_2c = &DAT_01d2e7b8;
LAB_00eeb1c4:
  iVar8 = FUN_01966f50(local_30,local_2c);
  return iVar8;
LAB_00eeada8:
  local_30 = 2;
  local_2c = &DAT_01d2e7b8;
LAB_00eeadb4:
  iVar8 = FUN_01966f50(local_30,local_2c);
  return iVar8;
}

