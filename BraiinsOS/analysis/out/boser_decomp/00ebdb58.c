// FUN_00ebdb58 @ 00ebdb58 size=2040 calls_out=11 calls_in=2
// strings: a UUID string | pools | assertion failed: !self.only_contains_attribute_certs | a UUID string | user-- | enabled

/* WARNING: Removing unreachable block (ram,0x00ebe338) */

void FUN_00ebdb58(uint *param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  undefined *puVar8;
  int iVar9;
  bool bVar10;
  uint local_4c;
  int local_48;
  undefined4 local_40;
  int *local_3c;
  uint local_38;
  int *local_34;
  undefined4 local_30;
  int *local_2c;
  
  iVar9 = *param_2;
  pcVar5 = "{";
  uVar4 = 1;
  do {
    uVar7 = *(uint *)(iVar9 + 4);
    uVar2 = uVar7 ^ 0x7fffffff;
    if (uVar4 < uVar2) {
      uVar2 = uVar4;
    }
    FUN_01284394(iVar9,pcVar5,uVar2);
    if (uVar7 == 0x7fffffff) {
      local_30 = 2;
      local_2c = &DAT_01d2e7b8;
      goto LAB_00ebe2ec;
    }
    pcVar5 = pcVar5 + uVar2;
    uVar4 = uVar4 - uVar2;
  } while (uVar4 != 0);
  local_40 = 0x100;
  local_3c = param_2;
  iVar9 = FUN_00ebc430(&local_40,"uid",3,param_1 + 10);
  if (iVar9 == 0) {
    if ((char)local_40 != '\x01') {
      iVar9 = FUN_0096b5ec(&local_40,&DAT_0056ee18,4,param_1[5],param_1[6]);
      piVar1 = local_3c;
      if (iVar9 != 0) {
        return;
      }
      if ((char)local_40 == '\0') {
        if (local_40._1_1_ != '\x01') {
          uVar4 = 1;
          pcVar5 = ",";
          iVar9 = *local_3c;
          do {
            uVar7 = *(uint *)(iVar9 + 4);
            uVar2 = uVar7 ^ 0x7fffffff;
            if (uVar4 < uVar2) {
              uVar2 = uVar4;
            }
            FUN_01284394(iVar9,pcVar5,uVar2);
            if (uVar7 == 0x7fffffff) goto LAB_00ebe13c;
            pcVar5 = pcVar5 + uVar2;
            uVar4 = uVar4 - uVar2;
          } while (uVar4 != 0);
        }
        FUN_0096b2b0(&local_30,*piVar1,"pools",5);
        if ((char)local_30 == '\x04') {
          uVar4 = 1;
          iVar9 = *piVar1;
          pcVar5 = ":";
          do {
            uVar7 = *(uint *)(iVar9 + 4);
            uVar2 = uVar7 ^ 0x7fffffff;
            if (uVar4 < uVar2) {
              uVar2 = uVar4;
            }
            FUN_01284394(iVar9,pcVar5,uVar2);
            if (uVar7 == 0x7fffffff) goto LAB_00ebe13c;
            pcVar5 = pcVar5 + uVar2;
            uVar4 = uVar4 - uVar2;
          } while (uVar4 != 0);
          uVar4 = param_1[8];
          uVar2 = 1;
          uVar7 = param_1[9];
          puVar8 = &DAT_0053340d;
          iVar9 = *piVar1;
          do {
            uVar6 = *(uint *)(iVar9 + 4);
            uVar3 = uVar6 ^ 0x7fffffff;
            if (uVar2 < uVar3) {
              uVar3 = uVar2;
            }
            FUN_01284394(iVar9,puVar8,uVar3);
            if (uVar6 == 0x7fffffff) goto LAB_00ebe13c;
            puVar8 = puVar8 + uVar3;
            uVar2 = uVar2 - uVar3;
          } while (uVar2 != 0);
          local_48 = 0x100;
          if (uVar7 == 0) {
            uVar2 = 1;
            pcVar5 = "]";
            do {
              uVar6 = *(uint *)(iVar9 + 4);
              uVar3 = uVar6 ^ 0x7fffffff;
              if (uVar2 < uVar3) {
                uVar3 = uVar2;
              }
              FUN_01284394(iVar9,pcVar5,uVar3);
              bVar10 = false;
              if (uVar6 == 0x7fffffff) goto LAB_00ebe13c;
              pcVar5 = pcVar5 + uVar3;
              uVar2 = uVar2 - uVar3;
            } while (uVar2 != 0);
            local_48 = 0;
          }
          else {
            bVar10 = true;
          }
          for (local_4c = uVar4; local_4c != uVar7 * 0x34 + uVar4; local_4c = local_4c + 0x34) {
            iVar9 = *piVar1;
            if (!bVar10) {
              uVar2 = 1;
              pcVar5 = ",";
              do {
                uVar6 = *(uint *)(iVar9 + 4);
                uVar3 = uVar6 ^ 0x7fffffff;
                if (uVar2 < uVar3) {
                  uVar3 = uVar2;
                }
                FUN_01284394(iVar9,pcVar5,uVar3);
                if (uVar6 == 0x7fffffff) goto LAB_00ebe2e0;
                pcVar5 = pcVar5 + uVar3;
                uVar2 = uVar2 - uVar3;
              } while (uVar2 != 0);
              iVar9 = *piVar1;
            }
            uVar2 = 1;
            local_48 = 0x200;
            pcVar5 = "{";
            do {
              uVar6 = *(uint *)(iVar9 + 4);
              uVar3 = uVar6 ^ 0x7fffffff;
              if (uVar2 < uVar3) {
                uVar3 = uVar2;
              }
              FUN_01284394(iVar9,pcVar5,uVar3);
              if (uVar6 == 0x7fffffff) {
                FUN_01966f50(2,&DAT_01d2e7b8);
                return;
              }
              pcVar5 = pcVar5 + uVar3;
              uVar2 = uVar2 - uVar3;
            } while (uVar2 != 0);
            local_34 = piVar1;
            local_38 = 0x100;
            iVar9 = FUN_00ebc430(&local_38,"uid",3,local_4c + 0x18);
            if (iVar9 != 0) {
              return;
            }
            if ((char)local_38 == '\x01') goto LAB_00ebe0b8;
            iVar9 = FUN_0096b5ec(&local_38,"url",3,*(undefined4 *)(local_4c + 4),
                                 *(undefined4 *)(local_4c + 8));
            if (iVar9 != 0) {
              return;
            }
            if ((char)local_38 == '\x01') goto LAB_00ebe0b8;
            iVar9 = FUN_0096b5ec(&local_38,"user--",4,*(undefined4 *)(local_4c + 0x10),
                                 *(undefined4 *)(local_4c + 0x14));
            if (iVar9 != 0) {
              return;
            }
            if ((char)local_38 == '\x01') goto LAB_00ebe0b8;
            iVar9 = FUN_00ebc430(&local_38,&DAT_00571120,8,local_4c + 0x24);
            if (iVar9 != 0) {
              return;
            }
            if ((char)local_38 == '\x01') goto LAB_00ebe0b8;
            iVar9 = FUN_00ebd130(&local_38,"enabled",7,*(undefined1 *)(local_4c + 0x30));
            if (iVar9 != 0) {
              return;
            }
            if (((local_38 & 0xff00) != 0) && ((local_38 & 1) == 0)) {
              uVar2 = 1;
              iVar9 = *local_34;
              pcVar5 = "}";
              do {
                uVar6 = *(uint *)(iVar9 + 4);
                uVar3 = uVar6 ^ 0x7fffffff;
                if (uVar2 < uVar3) {
                  uVar3 = uVar2;
                }
                FUN_01284394(iVar9,pcVar5,uVar3);
                if (uVar6 == 0x7fffffff) goto LAB_00ebe2e0;
                pcVar5 = pcVar5 + uVar3;
                uVar2 = uVar2 - uVar3;
              } while (uVar2 != 0);
            }
            bVar10 = false;
          }
          if (local_48 != 0) {
            uVar4 = 1;
            pcVar5 = "]";
            iVar9 = *piVar1;
            do {
              uVar7 = *(uint *)(iVar9 + 4);
              uVar2 = uVar7 ^ 0x7fffffff;
              if (uVar4 < uVar2) {
                uVar2 = uVar4;
              }
              FUN_01284394(iVar9,pcVar5,uVar2);
              if (uVar7 == 0x7fffffff) goto LAB_00ebe2e0;
              pcVar5 = pcVar5 + uVar2;
              uVar4 = uVar4 - uVar2;
            } while (uVar4 != 0);
          }
          uVar4 = 1;
          pcVar5 = ",";
          iVar9 = *piVar1;
          do {
            uVar7 = *(uint *)(iVar9 + 4);
            uVar2 = uVar7 ^ 0x7fffffff;
            if (uVar4 < uVar2) {
              uVar2 = uVar4;
            }
            FUN_01284394(iVar9,pcVar5,uVar2);
            if (uVar7 == 0x7fffffff) goto LAB_00ebe2e0;
            pcVar5 = pcVar5 + uVar2;
            uVar4 = uVar4 - uVar2;
          } while (uVar4 != 0);
          local_40._0_2_ = CONCAT11(2,(char)local_40);
          FUN_0096b2b0(&local_30,*piVar1,"load_balance_strategy",0x15);
          if ((char)local_30 == '\x04') {
            uVar4 = 1;
            iVar9 = *piVar1;
            pcVar5 = ":";
            do {
              uVar7 = *(uint *)(iVar9 + 4);
              uVar2 = uVar7 ^ 0x7fffffff;
              if (uVar4 < uVar2) {
                uVar2 = uVar4;
              }
              FUN_01284394(iVar9,pcVar5,uVar2);
              if (uVar7 == 0x7fffffff) goto LAB_00ebe2e0;
              pcVar5 = pcVar5 + uVar2;
              uVar4 = uVar4 - uVar2;
            } while (uVar4 != 0);
            if (*param_1 == 2) {
              uVar4 = 4;
              puVar8 = &DAT_0056d030;
              iVar9 = *piVar1;
              do {
                uVar7 = *(uint *)(iVar9 + 4);
                uVar2 = uVar7 ^ 0x7fffffff;
                if (uVar4 < uVar2) {
                  uVar2 = uVar4;
                }
                FUN_01284394(iVar9,puVar8,uVar2);
                if (uVar7 == 0x7fffffff) goto LAB_00ebe2e0;
                puVar8 = puVar8 + uVar2;
                uVar4 = uVar4 - uVar2;
              } while (uVar4 != 0);
            }
            else {
              if ((*param_1 & 1) == 0) {
                iVar9 = FUN_00ebe6dc(piVar1,param_1[1]);
              }
              else {
                iVar9 = FUN_00ebe3ec((int)*(undefined8 *)(param_1 + 2));
              }
              if (iVar9 != 0) {
                return;
              }
            }
            local_30 = local_40;
            local_2c = local_3c;
            FUN_00d57dc0(&local_30);
            return;
          }
        }
        goto LAB_00ebe2ec;
      }
    }
LAB_00ebe0b8:
    local_30 = 10;
    FUN_01966fbc(&local_30,0,0);
  }
  return;
LAB_00ebe13c:
  local_30 = 2;
  local_2c = &DAT_01d2e7b8;
  goto LAB_00ebe2ec;
LAB_00ebe2e0:
  local_30 = 2;
  local_2c = &DAT_01d2e7b8;
LAB_00ebe2ec:
  FUN_01966f50(local_30,local_2c);
  return;
}

