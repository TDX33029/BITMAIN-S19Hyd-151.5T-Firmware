// FUN_00ec6bb4 @ 00ec6bb4 size=1316 calls_out=6 calls_in=0
// strings: a UUID string | previous_releasesREADYUNSUPPORTEDABSENT | assertion failed: !self.only_contains_attribute_certs | a UUID string | description | assertion failed: !self.only_contains_attribute_certs

/* WARNING: Removing unreachable block (ram,0x00ec70c0) */

int FUN_00ec6bb4(char *param_1,int param_2,int param_3)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  int local_40;
  uint local_38;
  int *local_34;
  undefined4 local_30;
  undefined4 *local_2c;
  
  if (*param_1 == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d2ffb0);
  }
  piVar1 = *(int **)(param_1 + 4);
  if (param_1[1] != '\x01') {
    uVar6 = 1;
    pcVar4 = ",";
    iVar8 = *piVar1;
    do {
      uVar2 = *(uint *)(iVar8 + 4);
      uVar3 = uVar2 ^ 0x7fffffff;
      if (uVar6 < uVar3) {
        uVar3 = uVar6;
      }
      FUN_01284394(iVar8,pcVar4,uVar3);
      if (uVar2 == 0x7fffffff) goto LAB_00ec7038;
      pcVar4 = pcVar4 + uVar3;
      uVar6 = uVar6 - uVar3;
    } while (uVar6 != 0);
  }
  param_1[1] = '\x02';
  FUN_0096b2b0(&local_30,*piVar1,"previous_releasesREADYUNSUPPORTEDABSENT",0x11);
  if ((char)local_30 == '\x04') {
    uVar6 = 1;
    iVar8 = *piVar1;
    pcVar4 = ":";
    do {
      uVar2 = *(uint *)(iVar8 + 4);
      uVar3 = uVar2 ^ 0x7fffffff;
      if (uVar6 < uVar3) {
        uVar3 = uVar6;
      }
      FUN_01284394(iVar8,pcVar4,uVar3);
      if (uVar2 == 0x7fffffff) goto LAB_00ec7038;
      pcVar4 = pcVar4 + uVar3;
      uVar6 = uVar6 - uVar3;
    } while (uVar6 != 0);
    iVar8 = *piVar1;
    uVar6 = 1;
    puVar5 = &DAT_0053340d;
    do {
      uVar2 = *(uint *)(iVar8 + 4);
      uVar3 = uVar2 ^ 0x7fffffff;
      if (uVar6 < uVar3) {
        uVar3 = uVar6;
      }
      FUN_01284394(iVar8,puVar5,uVar3);
      if (uVar2 == 0x7fffffff) goto LAB_00ec7038;
      puVar5 = puVar5 + uVar3;
      uVar6 = uVar6 - uVar3;
    } while (uVar6 != 0);
    bVar9 = param_3 != 0;
    local_40 = 0x100;
    if (!bVar9) {
      uVar6 = 1;
      pcVar4 = "]";
      do {
        uVar2 = *(uint *)(iVar8 + 4);
        uVar3 = uVar2 ^ 0x7fffffff;
        if (uVar6 < uVar3) {
          uVar3 = uVar6;
        }
        FUN_01284394(iVar8,pcVar4,uVar3);
        if (uVar2 == 0x7fffffff) goto LAB_00ec7038;
        pcVar4 = pcVar4 + uVar3;
        uVar6 = uVar6 - uVar3;
      } while (uVar6 != 0);
      local_40 = 0;
    }
    for (iVar8 = param_2; iVar8 != param_2 + param_3 * 0x18; iVar8 = iVar8 + 0x18) {
      if (!bVar9) {
        uVar6 = 1;
        iVar7 = *piVar1;
        pcVar4 = ",";
        do {
          uVar2 = *(uint *)(iVar7 + 4);
          uVar3 = uVar2 ^ 0x7fffffff;
          if (uVar6 < uVar3) {
            uVar3 = uVar6;
          }
          FUN_01284394(iVar7,pcVar4,uVar3);
          if (uVar2 == 0x7fffffff) goto LAB_00ec70a0;
          pcVar4 = pcVar4 + uVar3;
          uVar6 = uVar6 - uVar3;
        } while (uVar6 != 0);
      }
      uVar6 = 1;
      local_40 = 0x200;
      iVar7 = *piVar1;
      pcVar4 = "{";
      do {
        uVar2 = *(uint *)(iVar7 + 4);
        uVar3 = uVar2 ^ 0x7fffffff;
        if (uVar6 < uVar3) {
          uVar3 = uVar6;
        }
        FUN_01284394(iVar7,pcVar4,uVar3);
        if (uVar2 == 0x7fffffff) {
          iVar8 = FUN_01966f50(2,&DAT_01d2e7b8);
          return iVar8;
        }
        pcVar4 = pcVar4 + uVar3;
        uVar6 = uVar6 - uVar3;
      } while (uVar6 != 0);
      local_38 = 0x100;
      local_34 = piVar1;
      iVar7 = FUN_0096b5ec(&local_38,&DAT_00520eda,7,*(undefined4 *)(iVar8 + 4),
                           *(undefined4 *)(iVar8 + 8));
      if (iVar7 != 0) {
        return iVar7;
      }
      if ((char)local_38 == '\x01') {
        local_30 = 10;
        iVar8 = FUN_01966fbc(&local_30,0,0);
        return iVar8;
      }
      iVar7 = FUN_0096b5ec(&local_38,"description",0xb,*(undefined4 *)(iVar8 + 0x10),
                           *(undefined4 *)(iVar8 + 0x14));
      if (iVar7 != 0) {
        return iVar7;
      }
      if (((local_38 & 0xff00) != 0) && ((local_38 & 1) == 0)) {
        uVar6 = 1;
        iVar7 = *local_34;
        pcVar4 = "}";
        do {
          uVar2 = *(uint *)(iVar7 + 4);
          uVar3 = uVar2 ^ 0x7fffffff;
          if (uVar6 < uVar3) {
            uVar3 = uVar6;
          }
          FUN_01284394(iVar7,pcVar4,uVar3);
          if (uVar2 == 0x7fffffff) goto LAB_00ec70a0;
          pcVar4 = pcVar4 + uVar3;
          uVar6 = uVar6 - uVar3;
        } while (uVar6 != 0);
      }
      bVar9 = false;
    }
    if (local_40 != 0) {
      uVar6 = 1;
      pcVar4 = "]";
      iVar8 = *piVar1;
      do {
        uVar2 = *(uint *)(iVar8 + 4);
        uVar3 = uVar2 ^ 0x7fffffff;
        if (uVar6 < uVar3) {
          uVar3 = uVar6;
        }
        FUN_01284394(iVar8,pcVar4,uVar3);
        if (uVar2 == 0x7fffffff) goto LAB_00ec70a0;
        pcVar4 = pcVar4 + uVar3;
        uVar6 = uVar6 - uVar3;
      } while (uVar6 != 0);
    }
    return 0;
  }
LAB_00ec7050:
  iVar8 = FUN_01966f50(local_30,local_2c);
  return iVar8;
LAB_00ec7038:
  local_30 = 2;
  local_2c = &DAT_01d2e7b8;
  goto LAB_00ec7050;
LAB_00ec70a0:
  local_30 = 2;
  local_2c = &DAT_01d2e7b8;
  goto LAB_00ec7050;
}

