// FUN_00edfbe8 @ 00edfbe8 size=764 calls_out=5 calls_in=0
// strings: a UUID string | dev_fee

int FUN_00edfbe8(char *param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  int *piVar7;
  uint local_30;
  int *local_2c;
  
  if (*param_1 != '\0') {
    local_30 = 10;
    iVar1 = FUN_01966fbc(&local_30,0,0);
    return iVar1;
  }
  piVar7 = *(int **)(param_1 + 4);
  if (param_1[1] != '\x01') {
    uVar4 = 1;
    iVar1 = *piVar7;
    pcVar5 = ",";
    do {
      uVar6 = *(uint *)(iVar1 + 4);
      uVar3 = uVar6 ^ 0x7fffffff;
      if (uVar4 < uVar3) {
        uVar3 = uVar4;
      }
      FUN_01284394(iVar1,pcVar5,uVar3);
      if (uVar6 == 0x7fffffff) goto LAB_00edfe70;
      pcVar5 = pcVar5 + uVar3;
      uVar4 = uVar4 - uVar3;
    } while (uVar4 != 0);
  }
  iVar1 = *piVar7;
  param_1[1] = '\x02';
  FUN_0096b2b0(&local_30,iVar1,"dev_fee",7);
  if ((char)local_30 == '\x04') {
    uVar4 = 1;
    iVar1 = *piVar7;
    pcVar5 = ":";
    do {
      uVar6 = *(uint *)(iVar1 + 4);
      uVar3 = uVar6 ^ 0x7fffffff;
      if (uVar4 < uVar3) {
        uVar3 = uVar4;
      }
      FUN_01284394(iVar1,pcVar5,uVar3);
      if (uVar6 == 0x7fffffff) goto LAB_00edfe70;
      pcVar5 = pcVar5 + uVar3;
      uVar4 = uVar4 - uVar3;
    } while (uVar4 != 0);
    if ((param_2 & 1) != 0) {
      uVar4 = 1;
      iVar1 = *piVar7;
      pcVar5 = "{";
      do {
        uVar6 = *(uint *)(iVar1 + 4);
        uVar3 = uVar6 ^ 0x7fffffff;
        if (uVar4 < uVar3) {
          uVar3 = uVar4;
        }
        FUN_01284394(iVar1,pcVar5,uVar3);
        if (uVar6 == 0x7fffffff) goto LAB_00edfec4;
        pcVar5 = pcVar5 + uVar3;
        uVar4 = uVar4 - uVar3;
      } while (uVar4 != 0);
      local_30 = 0x100;
      local_2c = piVar7;
      iVar1 = FUN_00ebe9c0(&local_30,"bsp",3,param_3);
      if (iVar1 != 0) {
        return iVar1;
      }
      if ((local_30 & 0xff00) == 0) {
        return 0;
      }
      if ((local_30 & 1) != 0) {
        return 0;
      }
      uVar4 = 1;
      iVar1 = *local_2c;
      pcVar5 = "}";
      while( true ) {
        uVar6 = *(uint *)(iVar1 + 4);
        uVar3 = uVar6 ^ 0x7fffffff;
        if (uVar4 < uVar3) {
          uVar3 = uVar4;
        }
        FUN_01284394(iVar1,pcVar5,uVar3);
        if (uVar6 == 0x7fffffff) break;
        pcVar5 = pcVar5 + uVar3;
        uVar4 = uVar4 - uVar3;
        if (uVar4 == 0) {
          return 0;
        }
      }
LAB_00edfec4:
      iVar1 = FUN_01966f50(2,&DAT_01d2e7b8);
      return iVar1;
    }
    uVar4 = 4;
    iVar1 = *piVar7;
    puVar2 = &DAT_0056d030;
    while( true ) {
      uVar6 = *(uint *)(iVar1 + 4);
      uVar3 = uVar6 ^ 0x7fffffff;
      if (uVar4 < uVar3) {
        uVar3 = uVar4;
      }
      FUN_01284394(iVar1,puVar2,uVar3);
      if (uVar6 == 0x7fffffff) break;
      puVar2 = puVar2 + uVar3;
      uVar4 = uVar4 - uVar3;
      if (uVar4 == 0) {
        return 0;
      }
    }
LAB_00edfe70:
    local_30 = 2;
    local_2c = &DAT_01d2e7b8;
  }
  iVar1 = FUN_01966f50(local_30,local_2c);
  return iVar1;
}

