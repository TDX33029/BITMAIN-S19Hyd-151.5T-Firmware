// FUN_00ee2848 @ 00ee2848 size=872 calls_out=7 calls_in=0
// strings: a UUID string | idlast_updatedlast_ticknext_tickran | temperature

int FUN_00ee2848(char *param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  char *pcVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  uint local_38;
  int *local_34;
  undefined4 local_30;
  undefined4 *local_2c;
  
  if (*param_1 != '\0') {
LAB_00ee2b4c:
    local_30 = 10;
    iVar3 = FUN_01966fbc(&local_30,0,0);
    return iVar3;
  }
  piVar7 = *(int **)(param_1 + 4);
  if (param_1[1] != '\x01') {
    uVar5 = 1;
    iVar3 = *piVar7;
    pcVar1 = ",";
    do {
      uVar6 = *(uint *)(iVar3 + 4);
      uVar4 = uVar6 ^ 0x7fffffff;
      if (uVar5 < uVar4) {
        uVar4 = uVar5;
      }
      FUN_01284394(iVar3,pcVar1,uVar4);
      if (uVar6 == 0x7fffffff) goto LAB_00ee2a30;
      pcVar1 = pcVar1 + uVar4;
      uVar5 = uVar5 - uVar4;
    } while (uVar5 != 0);
  }
  iVar3 = *piVar7;
  param_1[1] = '\x02';
  FUN_0096b2b0(&local_30,iVar3,param_2,param_3);
  if ((char)local_30 == '\x04') {
    uVar5 = 1;
    iVar3 = *piVar7;
    pcVar1 = ":";
    do {
      uVar6 = *(uint *)(iVar3 + 4);
      uVar4 = uVar6 ^ 0x7fffffff;
      if (uVar5 < uVar4) {
        uVar4 = uVar5;
      }
      FUN_01284394(iVar3,pcVar1,uVar4);
      if (uVar6 == 0x7fffffff) goto LAB_00ee2a30;
      pcVar1 = pcVar1 + uVar4;
      uVar5 = uVar5 - uVar4;
    } while (uVar5 != 0);
    if (*param_4 != 2 || param_4[1] != 0) {
      uVar5 = 1;
      iVar3 = *piVar7;
      pcVar1 = "{";
      do {
        uVar6 = *(uint *)(iVar3 + 4);
        uVar4 = uVar6 ^ 0x7fffffff;
        if (uVar5 < uVar4) {
          uVar4 = uVar5;
        }
        FUN_01284394(iVar3,pcVar1,uVar4);
        if (uVar6 == 0x7fffffff) goto LAB_00ee2b9c;
        pcVar1 = pcVar1 + uVar4;
        uVar5 = uVar5 - uVar4;
      } while (uVar5 != 0);
      local_38 = 0x100;
      local_34 = piVar7;
      iVar3 = FUN_00ee0f5c(&local_38,"idlast_updatedlast_ticknext_tickran",2,param_4[4],param_4[5]);
      if (iVar3 != 0) {
        return iVar3;
      }
      if ((char)local_38 != '\x01') {
        iVar3 = FUN_00ec44f0(&local_38,&DAT_005704f8,8,param_4[6]);
        if (iVar3 != 0) {
          return iVar3;
        }
        iVar3 = FUN_00ee13d4((int)*(undefined8 *)(param_4 + 2),&local_38,"temperature",0xb);
        if (iVar3 != 0) {
          return iVar3;
        }
        if ((local_38 & 0xff00) == 0) {
          return 0;
        }
        if ((local_38 & 1) != 0) {
          return 0;
        }
        uVar5 = 1;
        iVar3 = *local_34;
        pcVar1 = "}";
        while( true ) {
          uVar6 = *(uint *)(iVar3 + 4);
          uVar4 = uVar6 ^ 0x7fffffff;
          if (uVar5 < uVar4) {
            uVar4 = uVar5;
          }
          FUN_01284394(iVar3,pcVar1,uVar4);
          if (uVar6 == 0x7fffffff) break;
          pcVar1 = pcVar1 + uVar4;
          uVar5 = uVar5 - uVar4;
          if (uVar5 == 0) {
            return 0;
          }
        }
LAB_00ee2b9c:
        iVar3 = FUN_01966f50(2,&DAT_01d2e7b8);
        return iVar3;
      }
      goto LAB_00ee2b4c;
    }
    uVar5 = 4;
    iVar3 = *piVar7;
    puVar2 = &DAT_0056d030;
    while( true ) {
      uVar6 = *(uint *)(iVar3 + 4);
      uVar4 = uVar6 ^ 0x7fffffff;
      if (uVar5 < uVar4) {
        uVar4 = uVar5;
      }
      FUN_01284394(iVar3,puVar2,uVar4);
      if (uVar6 == 0x7fffffff) break;
      puVar2 = puVar2 + uVar4;
      uVar5 = uVar5 - uVar4;
      if (uVar5 == 0) {
        return 0;
      }
    }
LAB_00ee2a30:
    local_30 = 2;
    local_2c = &DAT_01d2e7b8;
  }
  iVar3 = FUN_01966f50(local_30,local_2c);
  return iVar3;
}

