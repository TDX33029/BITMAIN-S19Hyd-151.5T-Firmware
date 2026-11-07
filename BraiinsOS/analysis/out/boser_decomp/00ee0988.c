// FUN_00ee0988 @ 00ee0988 size=840 calls_out=5 calls_in=0
// strings: a UUID string | hashrate_target | hashrate_step | min_hashrate_target

int FUN_00ee0988(char *param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  undefined *puVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  int iVar7;
  uint local_30;
  int *local_2c;
  
  if (*param_1 != '\0') {
    local_30 = 10;
    iVar7 = FUN_01966fbc(&local_30,0,0);
    return iVar7;
  }
  piVar1 = *(int **)(param_1 + 4);
  if (param_1[1] != '\x01') {
    uVar4 = 1;
    pcVar5 = ",";
    iVar7 = *piVar1;
    do {
      uVar6 = *(uint *)(iVar7 + 4);
      uVar2 = uVar6 ^ 0x7fffffff;
      if (uVar4 < uVar2) {
        uVar2 = uVar4;
      }
      FUN_01284394(iVar7,pcVar5,uVar2);
      if (uVar6 == 0x7fffffff) goto LAB_00ee0b7c;
      pcVar5 = pcVar5 + uVar2;
      uVar4 = uVar4 - uVar2;
    } while (uVar4 != 0);
  }
  param_1[1] = '\x02';
  FUN_0096b2b0(&local_30,*piVar1,"hashrate_target",0xf);
  if ((char)local_30 == '\x04') {
    uVar4 = 1;
    iVar7 = *piVar1;
    pcVar5 = ":";
    do {
      uVar6 = *(uint *)(iVar7 + 4);
      uVar2 = uVar6 ^ 0x7fffffff;
      if (uVar4 < uVar2) {
        uVar2 = uVar4;
      }
      FUN_01284394(iVar7,pcVar5,uVar2);
      if (uVar6 == 0x7fffffff) goto LAB_00ee0b7c;
      pcVar5 = pcVar5 + uVar2;
      uVar4 = uVar4 - uVar2;
    } while (uVar4 != 0);
    if (*param_2 != 2 || param_2[1] != 0) {
      uVar4 = 1;
      pcVar5 = "{";
      iVar7 = *piVar1;
      do {
        uVar6 = *(uint *)(iVar7 + 4);
        uVar2 = uVar6 ^ 0x7fffffff;
        if (uVar4 < uVar2) {
          uVar2 = uVar4;
        }
        FUN_01284394(iVar7,pcVar5,uVar2);
        if (uVar6 == 0x7fffffff) goto LAB_00ee0cbc;
        pcVar5 = pcVar5 + uVar2;
        uVar4 = uVar4 - uVar2;
      } while (uVar4 != 0);
      local_30 = 0x100;
      local_2c = piVar1;
      iVar7 = FUN_00ede3a4((int)*(undefined8 *)(param_2 + 2),&local_30,"hashrate_step",0xd);
      if (iVar7 != 0) {
        return iVar7;
      }
      iVar7 = FUN_00ede3a4((int)*(undefined8 *)(param_2 + 6),&local_30,"min_hashrate_target",0x13,
                           param_2[5],param_2[4],param_2[5]);
      if (iVar7 != 0) {
        return iVar7;
      }
      if ((local_30 & 0xff00) == 0) {
        return 0;
      }
      if ((local_30 & 1) != 0) {
        return 0;
      }
      uVar4 = 1;
      iVar7 = *local_2c;
      pcVar5 = "}";
      while( true ) {
        uVar6 = *(uint *)(iVar7 + 4);
        uVar2 = uVar6 ^ 0x7fffffff;
        if (uVar4 < uVar2) {
          uVar2 = uVar4;
        }
        FUN_01284394(iVar7,pcVar5,uVar2);
        if (uVar6 == 0x7fffffff) break;
        pcVar5 = pcVar5 + uVar2;
        uVar4 = uVar4 - uVar2;
        if (uVar4 == 0) {
          return 0;
        }
      }
LAB_00ee0cbc:
      iVar7 = FUN_01966f50(2,&DAT_01d2e7b8);
      return iVar7;
    }
    uVar4 = 4;
    puVar3 = &DAT_0056d030;
    iVar7 = *piVar1;
    while( true ) {
      uVar6 = *(uint *)(iVar7 + 4);
      uVar2 = uVar6 ^ 0x7fffffff;
      if (uVar4 < uVar2) {
        uVar2 = uVar4;
      }
      FUN_01284394(iVar7,puVar3,uVar2);
      if (uVar6 == 0x7fffffff) break;
      puVar3 = puVar3 + uVar2;
      uVar4 = uVar4 - uVar2;
      if (uVar4 == 0) {
        return 0;
      }
    }
LAB_00ee0b7c:
    local_30 = 2;
    local_2c = &DAT_01d2e7b8;
  }
  iVar7 = FUN_01966f50(local_30,local_2c);
  return iVar7;
}

