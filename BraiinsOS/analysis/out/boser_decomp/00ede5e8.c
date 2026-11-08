// FUN_00ede5e8 @ 00ede5e8 size=528 calls_out=5 calls_in=6
// strings: a UUID string

undefined4
FUN_00ede5e8(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,uint param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 uVar1;
  int iVar2;
  undefined *puVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  undefined4 local_30;
  undefined4 *local_2c;
  
  if (*param_1 == '\0') {
    piVar7 = *(int **)(param_1 + 4);
    if (param_1[1] != '\x01') {
      uVar6 = 1;
      iVar2 = *piVar7;
      pcVar4 = ",";
      do {
        uVar8 = *(uint *)(iVar2 + 4);
        uVar5 = uVar8 ^ 0x7fffffff;
        if (uVar6 < uVar5) {
          uVar5 = uVar6;
        }
        FUN_01284394(iVar2,pcVar4,uVar5);
        if (uVar8 == 0x7fffffff) goto LAB_00ede7e0;
        pcVar4 = pcVar4 + uVar5;
        uVar6 = uVar6 - uVar5;
      } while (uVar6 != 0);
    }
    iVar2 = *piVar7;
    param_1[1] = '\x02';
    FUN_0096b2b0(&local_30,iVar2,param_2,param_3);
    if ((char)local_30 != '\x04') goto LAB_00ede7ec;
    uVar6 = 1;
    iVar2 = *piVar7;
    pcVar4 = ":";
    do {
      uVar8 = *(uint *)(iVar2 + 4);
      uVar5 = uVar8 ^ 0x7fffffff;
      if (uVar6 < uVar5) {
        uVar5 = uVar6;
      }
      FUN_01284394(iVar2,pcVar4,uVar5);
      if (uVar8 == 0x7fffffff) goto LAB_00ede7e0;
      pcVar4 = pcVar4 + uVar5;
      uVar6 = uVar6 - uVar5;
    } while (uVar6 != 0);
    if ((param_5 & 1) != 0) {
      uVar1 = FUN_00edeeb8(param_7,param_8,piVar7);
      return uVar1;
    }
    uVar6 = 4;
    iVar2 = *piVar7;
    puVar3 = &DAT_0056d030;
    do {
      uVar8 = *(uint *)(iVar2 + 4);
      uVar5 = uVar8 ^ 0x7fffffff;
      if (uVar6 < uVar5) {
        uVar5 = uVar6;
      }
      FUN_01284394(iVar2,puVar3,uVar5);
      if (uVar8 == 0x7fffffff) {
        local_30 = 2;
        local_2c = &DAT_01d2e7b8;
        goto LAB_00ede7ec;
      }
      puVar3 = puVar3 + uVar5;
      uVar6 = uVar6 - uVar5;
    } while (uVar6 != 0);
    uVar1 = 0;
  }
  else {
    local_30 = 10;
    uVar1 = FUN_01966fbc(&local_30,0,0);
  }
  return uVar1;
LAB_00ede7e0:
  local_30 = 2;
  local_2c = &DAT_01d2e7b8;
LAB_00ede7ec:
  uVar1 = FUN_01966f50(local_30,local_2c);
  return uVar1;
}

