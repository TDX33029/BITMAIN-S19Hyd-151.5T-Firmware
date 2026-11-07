// FUN_00ee5534 @ 00ee5534 size=1224 calls_out=5 calls_in=0
// strings: a UUID string | a UUID string | netmask | assertion failed: !self.only_contains_attribute_certs | assertion failed: !self.only_contains_attribute_certs

int FUN_00ee5534(char *param_1,int param_2,int param_3)

{
  bool bVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  undefined *puVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint local_38;
  int *local_34;
  undefined4 local_30;
  undefined4 *local_2c;
  
  if (*param_1 == '\0') {
    piVar2 = *(int **)(param_1 + 4);
    if (param_1[1] != '\x01') {
      uVar5 = 1;
      pcVar6 = ",";
      iVar4 = *piVar2;
      do {
        uVar8 = *(uint *)(iVar4 + 4);
        uVar3 = uVar8 ^ 0x7fffffff;
        if (uVar5 < uVar3) {
          uVar3 = uVar5;
        }
        FUN_01284394(iVar4,pcVar6,uVar3);
        if (uVar8 == 0x7fffffff) goto LAB_00ee59b4;
        pcVar6 = pcVar6 + uVar3;
        uVar5 = uVar5 - uVar3;
      } while (uVar5 != 0);
    }
    param_1[1] = '\x02';
    FUN_0096b2b0(&local_30,*piVar2,&DAT_0056ff88,8);
    if ((char)local_30 != '\x04') goto LAB_00ee59cc;
    uVar5 = 1;
    iVar4 = *piVar2;
    pcVar6 = ":";
    do {
      uVar8 = *(uint *)(iVar4 + 4);
      uVar3 = uVar8 ^ 0x7fffffff;
      if (uVar5 < uVar3) {
        uVar3 = uVar5;
      }
      FUN_01284394(iVar4,pcVar6,uVar3);
      if (uVar8 == 0x7fffffff) goto LAB_00ee59b4;
      pcVar6 = pcVar6 + uVar3;
      uVar5 = uVar5 - uVar3;
    } while (uVar5 != 0);
    uVar5 = 1;
    iVar4 = *piVar2;
    puVar7 = &DAT_0053340d;
    do {
      uVar8 = *(uint *)(iVar4 + 4);
      uVar3 = uVar8 ^ 0x7fffffff;
      if (uVar5 < uVar3) {
        uVar3 = uVar5;
      }
      FUN_01284394(iVar4,puVar7,uVar3);
      if (uVar8 == 0x7fffffff) goto LAB_00ee59b4;
      puVar7 = puVar7 + uVar3;
      uVar5 = uVar5 - uVar3;
    } while (uVar5 != 0);
    if (param_3 == 0) {
      uVar5 = 1;
      pcVar6 = "]";
      do {
        uVar8 = *(uint *)(iVar4 + 4);
        uVar3 = uVar8 ^ 0x7fffffff;
        if (uVar5 < uVar3) {
          uVar3 = uVar5;
        }
        FUN_01284394(iVar4,pcVar6,uVar3);
        if (uVar8 == 0x7fffffff) {
          local_30 = 2;
          local_2c = &DAT_01d2e7b8;
          goto LAB_00ee59cc;
        }
        pcVar6 = pcVar6 + uVar3;
        uVar5 = uVar5 - uVar3;
      } while (uVar5 != 0);
    }
    else {
      bVar1 = true;
      iVar4 = param_2;
      do {
        iVar9 = *piVar2;
        if (!bVar1) {
          uVar5 = 1;
          pcVar6 = ",";
          do {
            uVar8 = *(uint *)(iVar9 + 4);
            uVar3 = uVar8 ^ 0x7fffffff;
            if (uVar5 < uVar3) {
              uVar3 = uVar5;
            }
            FUN_01284394(iVar9,pcVar6,uVar3);
            if (uVar8 == 0x7fffffff) goto LAB_00ee59f4;
            pcVar6 = pcVar6 + uVar3;
            uVar5 = uVar5 - uVar3;
          } while (uVar5 != 0);
          iVar9 = *piVar2;
        }
        iVar10 = iVar4 + 0x18;
        uVar5 = 1;
        pcVar6 = "{";
        do {
          uVar8 = *(uint *)(iVar9 + 4);
          uVar3 = uVar8 ^ 0x7fffffff;
          if (uVar5 < uVar3) {
            uVar3 = uVar5;
          }
          FUN_01284394(iVar9,pcVar6,uVar3);
          if (uVar8 == 0x7fffffff) {
            iVar4 = FUN_01966f50(2,&DAT_01d2e7b8);
            return iVar4;
          }
          pcVar6 = pcVar6 + uVar3;
          uVar5 = uVar5 - uVar3;
        } while (uVar5 != 0);
        local_38 = 0x100;
        local_34 = piVar2;
        iVar9 = FUN_0096b5ec(&local_38,&DAT_004cfb47,7,*(undefined4 *)(iVar4 + 4),
                             *(undefined4 *)(iVar4 + 8));
        if (iVar9 != 0) {
          return iVar9;
        }
        if ((char)local_38 == '\x01') goto LAB_00ee5994;
        iVar4 = FUN_0096b5ec(&local_38,"netmask",7,*(undefined4 *)(iVar4 + 0x10),
                             *(undefined4 *)(iVar4 + 0x14));
        if (iVar4 != 0) {
          return iVar4;
        }
        if (((local_38 & 0xff00) != 0) && ((local_38 & 1) == 0)) {
          uVar5 = 1;
          iVar4 = *local_34;
          pcVar6 = "}";
          do {
            uVar8 = *(uint *)(iVar4 + 4);
            uVar3 = uVar8 ^ 0x7fffffff;
            if (uVar5 < uVar3) {
              uVar3 = uVar5;
            }
            FUN_01284394(iVar4,pcVar6,uVar3);
            if (uVar8 == 0x7fffffff) goto LAB_00ee59f4;
            pcVar6 = pcVar6 + uVar3;
            uVar5 = uVar5 - uVar3;
          } while (uVar5 != 0);
        }
        bVar1 = false;
        iVar4 = iVar10;
      } while (iVar10 != param_2 + param_3 * 0x18);
      uVar5 = 1;
      iVar4 = *piVar2;
      pcVar6 = "]";
      do {
        uVar8 = *(uint *)(iVar4 + 4);
        uVar3 = uVar8 ^ 0x7fffffff;
        if (uVar5 < uVar3) {
          uVar3 = uVar5;
        }
        FUN_01284394(iVar4,pcVar6,uVar3);
        if (uVar8 == 0x7fffffff) goto LAB_00ee59f4;
        pcVar6 = pcVar6 + uVar3;
        uVar5 = uVar5 - uVar3;
      } while (uVar5 != 0);
    }
    iVar4 = 0;
  }
  else {
LAB_00ee5994:
    local_30 = 10;
    iVar4 = FUN_01966fbc(&local_30,0,0);
  }
  return iVar4;
LAB_00ee59b4:
  local_30 = 2;
  local_2c = &DAT_01d2e7b8;
  goto LAB_00ee59cc;
LAB_00ee59f4:
  local_30 = 2;
  local_2c = &DAT_01d2e7b8;
LAB_00ee59cc:
  iVar4 = FUN_01966f50(local_30,local_2c);
  return iVar4;
}

