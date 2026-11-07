// FUN_00ee0650 @ 00ee0650 size=772 calls_out=5 calls_in=1
// strings: a UUID string | hoursmonthsdays_of_weekyearsdom_and_dow

int FUN_00ee0650(char *param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined4 param_5
                )

{
  undefined *puVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  uint local_30;
  int *local_2c;
  
  if (*param_1 != '\0') {
    local_30 = 10;
    iVar3 = FUN_01966fbc(&local_30,0,0);
    return iVar3;
  }
  piVar5 = *(int **)(param_1 + 4);
  if (param_1[1] != '\x01') {
    uVar6 = 1;
    iVar3 = *piVar5;
    pcVar2 = ",";
    do {
      uVar7 = *(uint *)(iVar3 + 4);
      uVar4 = uVar7 ^ 0x7fffffff;
      if (uVar6 < uVar4) {
        uVar4 = uVar6;
      }
      FUN_01284394(iVar3,pcVar2,uVar4);
      if (uVar7 == 0x7fffffff) goto LAB_00ee08e0;
      pcVar2 = pcVar2 + uVar4;
      uVar6 = uVar6 - uVar4;
    } while (uVar6 != 0);
  }
  iVar3 = *piVar5;
  param_1[1] = '\x02';
  FUN_0096b2b0(&local_30,iVar3,param_2,param_3);
  if ((char)local_30 == '\x04') {
    uVar6 = 1;
    iVar3 = *piVar5;
    pcVar2 = ":";
    do {
      uVar7 = *(uint *)(iVar3 + 4);
      uVar4 = uVar7 ^ 0x7fffffff;
      if (uVar6 < uVar4) {
        uVar4 = uVar6;
      }
      FUN_01284394(iVar3,pcVar2,uVar4);
      if (uVar7 == 0x7fffffff) goto LAB_00ee08e0;
      pcVar2 = pcVar2 + uVar4;
      uVar6 = uVar6 - uVar4;
    } while (uVar6 != 0);
    if ((param_4 & 1) != 0) {
      uVar6 = 1;
      iVar3 = *piVar5;
      pcVar2 = "{";
      do {
        uVar7 = *(uint *)(iVar3 + 4);
        uVar4 = uVar7 ^ 0x7fffffff;
        if (uVar6 < uVar4) {
          uVar4 = uVar6;
        }
        FUN_01284394(iVar3,pcVar2,uVar4);
        if (uVar7 == 0x7fffffff) goto LAB_00ee0934;
        pcVar2 = pcVar2 + uVar4;
        uVar6 = uVar6 - uVar4;
      } while (uVar6 != 0);
      local_30 = 0x100;
      local_2c = piVar5;
      iVar3 = FUN_00ebe9c0(&local_30,"hoursmonthsdays_of_weekyearsdom_and_dow",5,param_5);
      if (iVar3 != 0) {
        return iVar3;
      }
      if ((local_30 & 0xff00) == 0) {
        return 0;
      }
      if ((local_30 & 1) != 0) {
        return 0;
      }
      uVar6 = 1;
      iVar3 = *local_2c;
      pcVar2 = "}";
      while( true ) {
        uVar7 = *(uint *)(iVar3 + 4);
        uVar4 = uVar7 ^ 0x7fffffff;
        if (uVar6 < uVar4) {
          uVar4 = uVar6;
        }
        FUN_01284394(iVar3,pcVar2,uVar4);
        if (uVar7 == 0x7fffffff) break;
        pcVar2 = pcVar2 + uVar4;
        uVar6 = uVar6 - uVar4;
        if (uVar6 == 0) {
          return 0;
        }
      }
LAB_00ee0934:
      iVar3 = FUN_01966f50(2,&DAT_01d2e7b8);
      return iVar3;
    }
    uVar6 = 4;
    iVar3 = *piVar5;
    puVar1 = &DAT_0056d030;
    while( true ) {
      uVar7 = *(uint *)(iVar3 + 4);
      uVar4 = uVar7 ^ 0x7fffffff;
      if (uVar6 < uVar4) {
        uVar4 = uVar6;
      }
      FUN_01284394(iVar3,puVar1,uVar4);
      if (uVar7 == 0x7fffffff) break;
      puVar1 = puVar1 + uVar4;
      uVar6 = uVar6 - uVar4;
      if (uVar6 == 0) {
        return 0;
      }
    }
LAB_00ee08e0:
    local_30 = 2;
    local_2c = &DAT_01d2e7b8;
  }
  iVar3 = FUN_01966f50(local_30,local_2c);
  return iVar3;
}

