// FUN_00ec098c @ 00ec098c size=2076 calls_out=9 calls_in=0
// strings: a UUID string | packages | changes | assertion failed: !self.only_contains_attribute_certs | a UUID string | version_from

/* WARNING: Removing unreachable block (ram,0x00ec1190) */

int FUN_00ec098c(char *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  uint uVar5;
  char *pcVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  int local_4c;
  int local_48;
  undefined4 local_40;
  int *local_3c;
  uint local_38;
  int *local_34;
  undefined4 local_30;
  int *local_2c;
  
  if (*param_1 == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d2ffb0);
  }
  piVar1 = *(int **)(param_1 + 4);
  if (param_1[1] != '\x01') {
    uVar5 = 1;
    pcVar6 = ",";
    iVar10 = *piVar1;
    do {
      uVar7 = *(uint *)(iVar10 + 4);
      uVar3 = uVar7 ^ 0x7fffffff;
      if (uVar5 < uVar3) {
        uVar3 = uVar5;
      }
      FUN_01284394(iVar10,pcVar6,uVar3);
      if (uVar7 == 0x7fffffff) goto LAB_00ec1020;
      pcVar6 = pcVar6 + uVar3;
      uVar5 = uVar5 - uVar3;
    } while (uVar5 != 0);
  }
  param_1[1] = '\x02';
  FUN_0096b2b0(&local_30,*piVar1,"packages",8);
  if ((char)local_30 == '\x04') {
    uVar5 = 1;
    iVar10 = *piVar1;
    pcVar6 = ":";
    do {
      uVar7 = *(uint *)(iVar10 + 4);
      uVar3 = uVar7 ^ 0x7fffffff;
      if (uVar5 < uVar3) {
        uVar3 = uVar5;
      }
      FUN_01284394(iVar10,pcVar6,uVar3);
      if (uVar7 == 0x7fffffff) goto LAB_00ec1020;
      pcVar6 = pcVar6 + uVar3;
      uVar5 = uVar5 - uVar3;
    } while (uVar5 != 0);
    iVar2 = *param_2;
    iVar10 = param_2[1];
    if (iVar2 != 2 || iVar10 != 0) {
      uVar5 = 1;
      iVar8 = *piVar1;
      pcVar6 = "{";
      do {
        uVar7 = *(uint *)(iVar8 + 4);
        uVar3 = uVar7 ^ 0x7fffffff;
        if (uVar5 < uVar3) {
          uVar3 = uVar5;
        }
        FUN_01284394(iVar8,pcVar6,uVar3);
        if (uVar7 == 0x7fffffff) goto LAB_00ec1038;
        pcVar6 = pcVar6 + uVar3;
        uVar5 = uVar5 - uVar3;
      } while (uVar5 != 0);
      local_40 = 0x200;
      local_3c = piVar1;
      FUN_0096b2b0(&local_30,*piVar1,"changes",7);
      if ((char)local_30 == '\x04') {
        uVar5 = 1;
        iVar8 = *piVar1;
        pcVar6 = ":";
        do {
          uVar7 = *(uint *)(iVar8 + 4);
          uVar3 = uVar7 ^ 0x7fffffff;
          if (uVar5 < uVar3) {
            uVar3 = uVar5;
          }
          FUN_01284394(iVar8,pcVar6,uVar3);
          if (uVar7 == 0x7fffffff) goto LAB_00ec1038;
          pcVar6 = pcVar6 + uVar3;
          uVar5 = uVar5 - uVar3;
        } while (uVar5 != 0);
        iVar11 = param_2[10];
        iVar8 = param_2[9];
        uVar5 = 1;
        iVar9 = *piVar1;
        puVar4 = &DAT_0053340d;
        do {
          uVar7 = *(uint *)(iVar9 + 4);
          uVar3 = uVar7 ^ 0x7fffffff;
          if (uVar5 < uVar3) {
            uVar3 = uVar5;
          }
          FUN_01284394(iVar9,puVar4,uVar3);
          if (uVar7 == 0x7fffffff) goto LAB_00ec1038;
          puVar4 = puVar4 + uVar3;
          uVar5 = uVar5 - uVar3;
        } while (uVar5 != 0);
        bVar12 = iVar11 != 0;
        local_48 = 0x100;
        if (!bVar12) {
          uVar5 = 1;
          pcVar6 = "]";
          do {
            uVar7 = *(uint *)(iVar9 + 4);
            uVar3 = uVar7 ^ 0x7fffffff;
            if (uVar5 < uVar3) {
              uVar3 = uVar5;
            }
            FUN_01284394(iVar9,pcVar6,uVar3);
            if (uVar7 == 0x7fffffff) goto LAB_00ec1038;
            pcVar6 = pcVar6 + uVar3;
            uVar5 = uVar5 - uVar3;
          } while (uVar5 != 0);
          local_48 = 0;
        }
        for (local_4c = iVar8; local_4c != iVar8 + iVar11 * 0x3c; local_4c = local_4c + 0x3c) {
          iVar9 = *piVar1;
          if (!bVar12) {
            uVar5 = 1;
            pcVar6 = ",";
            do {
              uVar7 = *(uint *)(iVar9 + 4);
              uVar3 = uVar7 ^ 0x7fffffff;
              if (uVar5 < uVar3) {
                uVar3 = uVar5;
              }
              FUN_01284394(iVar9,pcVar6,uVar3);
              if (uVar7 == 0x7fffffff) goto LAB_00ec1168;
              pcVar6 = pcVar6 + uVar3;
              uVar5 = uVar5 - uVar3;
            } while (uVar5 != 0);
            iVar9 = *piVar1;
          }
          uVar5 = 1;
          local_48 = 0x200;
          pcVar6 = "{";
          do {
            uVar7 = *(uint *)(iVar9 + 4);
            uVar3 = uVar7 ^ 0x7fffffff;
            if (uVar5 < uVar3) {
              uVar3 = uVar5;
            }
            FUN_01284394(iVar9,pcVar6,uVar3);
            if (uVar7 == 0x7fffffff) goto LAB_00ec1168;
            pcVar6 = pcVar6 + uVar3;
            uVar5 = uVar5 - uVar3;
          } while (uVar5 != 0);
          local_38 = 0x100;
          local_34 = piVar1;
          iVar9 = FUN_0096b5ec(&local_38,&DAT_0056ee18,4,*(undefined4 *)(local_4c + 4),
                               *(undefined4 *)(local_4c + 8));
          if (iVar9 != 0) {
            return iVar9;
          }
          if ((char)local_38 == '\x01') goto LAB_00ec1148;
          iVar9 = FUN_00ebc430(&local_38,"version_from",0xc,local_4c + 0xc);
          if (iVar9 != 0) {
            return iVar9;
          }
          if ((char)local_38 == '\x01') goto LAB_00ec1148;
          iVar9 = FUN_00ebc430(&local_38,"version_to",10,local_4c + 0x18);
          if (iVar9 != 0) {
            return iVar9;
          }
          if ((char)local_38 == '\x01') goto LAB_00ec1148;
          iVar9 = FUN_00ebc430(&local_38,&DAT_005702d0,8,local_4c + 0x24);
          if (iVar9 != 0) {
            return iVar9;
          }
          if ((char)local_38 == '\x01') goto LAB_00ec1148;
          iVar9 = FUN_00ebc430(&local_38,"changelog",9,local_4c + 0x30);
          if (iVar9 != 0) {
            return iVar9;
          }
          if (((local_38 & 0xff00) != 0) && ((local_38 & 1) == 0)) {
            uVar5 = 1;
            iVar9 = *local_34;
            pcVar6 = "}";
            do {
              uVar7 = *(uint *)(iVar9 + 4);
              uVar3 = uVar7 ^ 0x7fffffff;
              if (uVar5 < uVar3) {
                uVar3 = uVar5;
              }
              FUN_01284394(iVar9,pcVar6,uVar3);
              if (uVar7 == 0x7fffffff) goto LAB_00ec1168;
              pcVar6 = pcVar6 + uVar3;
              uVar5 = uVar5 - uVar3;
            } while (uVar5 != 0);
          }
          bVar12 = false;
        }
        if (local_48 != 0) {
          uVar5 = 1;
          iVar8 = *piVar1;
          pcVar6 = "]";
          do {
            uVar7 = *(uint *)(iVar8 + 4);
            uVar3 = uVar7 ^ 0x7fffffff;
            if (uVar5 < uVar3) {
              uVar3 = uVar5;
            }
            FUN_01284394(iVar8,pcVar6,uVar3);
            if (uVar7 == 0x7fffffff) goto LAB_00ec1168;
            pcVar6 = pcVar6 + uVar3;
            uVar5 = uVar5 - uVar3;
          } while (uVar5 != 0);
        }
        iVar10 = FUN_00ec1250(&local_40,"download_size_bytes",0x13,param_2[3],iVar2,iVar10,
                              param_2[2],param_2[3]);
        if (iVar10 != 0) {
          return iVar10;
        }
        iVar10 = FUN_00ec1250(&local_40,"unpacked_size_bytes",0x13,param_2[6],param_2[4],param_2[5],
                              param_2[6],param_2[7]);
        if (iVar10 != 0) {
          return iVar10;
        }
        if ((char)local_40 != '\x01') {
          iVar10 = FUN_00ebc430(&local_40,"bmc_version",0xb,param_2 + 0xb);
          if (iVar10 != 0) {
            return iVar10;
          }
          if ((char)local_40 != '\x01') {
            iVar10 = FUN_00ebc430(&local_40,"bmc_changelog",0xd,param_2 + 0xe);
            if (iVar10 == 0) {
              local_30 = local_40;
              local_2c = local_3c;
              iVar10 = FUN_00d57dc0(&local_30);
              return iVar10;
            }
            return iVar10;
          }
        }
LAB_00ec1148:
        local_30 = 10;
        iVar10 = FUN_01966fbc(&local_30,0,0);
        return iVar10;
      }
      goto LAB_00ec1050;
    }
    uVar5 = 4;
    iVar10 = *piVar1;
    puVar4 = &DAT_0056d030;
    while( true ) {
      uVar7 = *(uint *)(iVar10 + 4);
      uVar3 = uVar7 ^ 0x7fffffff;
      if (uVar5 < uVar3) {
        uVar3 = uVar5;
      }
      FUN_01284394(iVar10,puVar4,uVar3);
      if (uVar7 == 0x7fffffff) break;
      puVar4 = puVar4 + uVar3;
      uVar5 = uVar5 - uVar3;
      if (uVar5 == 0) {
        return 0;
      }
    }
    local_30 = 2;
    local_2c = &DAT_01d2e7b8;
  }
LAB_00ec102c:
  iVar10 = FUN_01966f50(local_30,local_2c);
  return iVar10;
LAB_00ec1020:
  local_30 = 2;
  local_2c = &DAT_01d2e7b8;
  goto LAB_00ec102c;
LAB_00ec1038:
  local_30 = 2;
  local_2c = &DAT_01d2e7b8;
  goto LAB_00ec1050;
LAB_00ec1168:
  local_30 = 2;
  local_2c = &DAT_01d2e7b8;
LAB_00ec1050:
  iVar10 = FUN_01966f50(local_30,local_2c);
  return iVar10;
}

