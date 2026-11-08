// FUN_00f0b624 @ 00f0b624 size=952 calls_out=5 calls_in=0
// strings: a UUID string | assertion failed: !self.only_contains_attribute_certs | a UUID string | assertion failed: !self.only_contains_attribute_certs | internal error: entered unreachable code | internal error: entered unreachable code

/* WARNING: Removing unreachable block (ram,0x00f0b9c4) */

int FUN_00f0b624(char *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  undefined *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  undefined4 local_30;
  undefined4 *local_2c;
  
  if (*param_1 == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d2ffb0);
  }
  piVar2 = *(int **)(param_1 + 4);
  if (param_1[1] != '\x01') {
    uVar3 = 1;
    pcVar4 = ",";
    iVar5 = *piVar2;
    do {
      uVar8 = *(uint *)(iVar5 + 4);
      uVar7 = uVar8 ^ 0x7fffffff;
      if (uVar3 < uVar7) {
        uVar7 = uVar3;
      }
      FUN_01284394(iVar5,pcVar4,uVar7);
      if (uVar8 == 0x7fffffff) goto LAB_00f0b978;
      pcVar4 = pcVar4 + uVar7;
      uVar3 = uVar3 - uVar7;
    } while (uVar3 != 0);
  }
  param_1[1] = '\x02';
  FUN_0096b2b0(&local_30,*piVar2,param_2,5);
  if ((char)local_30 == '\x04') {
    uVar3 = 1;
    iVar5 = *piVar2;
    pcVar4 = ":";
    do {
      uVar8 = *(uint *)(iVar5 + 4);
      uVar7 = uVar8 ^ 0x7fffffff;
      if (uVar3 < uVar7) {
        uVar7 = uVar3;
      }
      FUN_01284394(iVar5,pcVar4,uVar7);
      if (uVar8 == 0x7fffffff) goto LAB_00f0b978;
      pcVar4 = pcVar4 + uVar7;
      uVar3 = uVar3 - uVar7;
    } while (uVar3 != 0);
    uVar3 = 1;
    iVar11 = *(int *)(param_3 + 8);
    iVar5 = *(int *)(param_3 + 4);
    iVar12 = *piVar2;
    puVar6 = &DAT_0053340d;
    do {
      uVar8 = *(uint *)(iVar12 + 4);
      uVar7 = uVar8 ^ 0x7fffffff;
      if (uVar3 < uVar7) {
        uVar7 = uVar3;
      }
      FUN_01284394(iVar12,puVar6,uVar7);
      if (uVar8 == 0x7fffffff) goto LAB_00f0b978;
      puVar6 = puVar6 + uVar7;
      uVar3 = uVar3 - uVar7;
    } while (uVar3 != 0);
    iVar9 = 0x100;
    if (iVar11 == 0) {
      uVar3 = 1;
      pcVar4 = "]";
      do {
        uVar8 = *(uint *)(iVar12 + 4);
        uVar7 = uVar8 ^ 0x7fffffff;
        if (uVar3 < uVar7) {
          uVar7 = uVar3;
        }
        FUN_01284394(iVar12,pcVar4,uVar7);
        bVar10 = false;
        if (uVar8 == 0x7fffffff) goto LAB_00f0b978;
        pcVar4 = pcVar4 + uVar7;
        uVar3 = uVar3 - uVar7;
      } while (uVar3 != 0);
      iVar9 = 0;
    }
    else {
      bVar10 = true;
    }
    iVar12 = iVar5;
    while (iVar12 != iVar11 * 0x178 + iVar5) {
      if (!bVar10) {
        uVar3 = 1;
        iVar9 = *piVar2;
        pcVar4 = ",";
        do {
          uVar8 = *(uint *)(iVar9 + 4);
          uVar7 = uVar8 ^ 0x7fffffff;
          if (uVar3 < uVar7) {
            uVar7 = uVar3;
          }
          FUN_01284394(iVar9,pcVar4,uVar7);
          if (uVar8 == 0x7fffffff) goto LAB_00f0b99c;
          pcVar4 = pcVar4 + uVar7;
          uVar3 = uVar3 - uVar7;
        } while (uVar3 != 0);
      }
      iVar9 = 0x200;
      iVar1 = FUN_00d91e78(iVar12,piVar2);
      bVar10 = false;
      iVar12 = iVar12 + 0x178;
      if (iVar1 != 0) {
        return iVar1;
      }
    }
    if (iVar9 == 0) {
      return 0;
    }
    uVar3 = 1;
    pcVar4 = "]";
    iVar5 = *piVar2;
    while( true ) {
      uVar8 = *(uint *)(iVar5 + 4);
      uVar7 = uVar8 ^ 0x7fffffff;
      if (uVar3 < uVar7) {
        uVar7 = uVar3;
      }
      FUN_01284394(iVar5,pcVar4,uVar7);
      if (uVar8 == 0x7fffffff) break;
      pcVar4 = pcVar4 + uVar7;
      uVar3 = uVar3 - uVar7;
      if (uVar3 == 0) {
        return 0;
      }
    }
LAB_00f0b99c:
    local_30 = 2;
    local_2c = &DAT_01d2e7b8;
  }
LAB_00f0b9a0:
  iVar5 = FUN_01966f50(local_30,local_2c);
  return iVar5;
LAB_00f0b978:
  local_30 = 2;
  local_2c = &DAT_01d2e7b8;
  goto LAB_00f0b9a0;
}

