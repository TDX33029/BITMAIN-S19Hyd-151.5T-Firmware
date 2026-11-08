// FUN_00ede3a4 @ 00ede3a4 size=548 calls_out=5 calls_in=5
// strings: a UUID string

undefined4
FUN_00ede3a4(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,uint param_5)

{
  undefined4 uVar1;
  uint uVar2;
  char *pcVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  undefined4 local_40;
  undefined4 *local_3c;
  
  if (*param_1 == '\0') {
    piVar7 = *(int **)(param_1 + 4);
    if (param_1[1] != '\x01') {
      uVar8 = 1;
      iVar5 = *piVar7;
      pcVar3 = ",";
      do {
        uVar6 = *(uint *)(iVar5 + 4);
        uVar2 = uVar6 ^ 0x7fffffff;
        if (uVar8 < uVar2) {
          uVar2 = uVar8;
        }
        FUN_01284394(iVar5,pcVar3,uVar2);
        if (uVar6 == 0x7fffffff) goto LAB_00ede5a8;
        pcVar3 = pcVar3 + uVar2;
        uVar8 = uVar8 - uVar2;
      } while (uVar8 != 0);
    }
    iVar5 = *piVar7;
    param_1[1] = '\x02';
    FUN_0096b2b0(&local_40,iVar5,param_2,param_3);
    if ((char)local_40 != '\x04') goto LAB_00ede5b4;
    uVar8 = 1;
    iVar5 = *piVar7;
    pcVar3 = ":";
    do {
      uVar6 = *(uint *)(iVar5 + 4);
      uVar2 = uVar6 ^ 0x7fffffff;
      if (uVar8 < uVar2) {
        uVar2 = uVar8;
      }
      FUN_01284394(iVar5,pcVar3,uVar2);
      if (uVar6 == 0x7fffffff) goto LAB_00ede5a8;
      pcVar3 = pcVar3 + uVar2;
      uVar8 = uVar8 - uVar2;
    } while (uVar8 != 0);
    if ((param_5 & 1) != 0) {
      uVar1 = FUN_00edf01c(piVar7);
      return uVar1;
    }
    uVar8 = 4;
    iVar5 = *piVar7;
    puVar4 = &DAT_0056d030;
    do {
      uVar6 = *(uint *)(iVar5 + 4);
      uVar2 = uVar6 ^ 0x7fffffff;
      if (uVar8 < uVar2) {
        uVar2 = uVar8;
      }
      FUN_01284394(iVar5,puVar4,uVar2);
      if (uVar6 == 0x7fffffff) {
        local_40 = 2;
        local_3c = &DAT_01d2e7b8;
        goto LAB_00ede5b4;
      }
      puVar4 = puVar4 + uVar2;
      uVar8 = uVar8 - uVar2;
    } while (uVar8 != 0);
    uVar1 = 0;
  }
  else {
    local_40 = 10;
    uVar1 = FUN_01966fbc(&local_40,0,0);
  }
  return uVar1;
LAB_00ede5a8:
  local_40 = 2;
  local_3c = &DAT_01d2e7b8;
LAB_00ede5b4:
  uVar1 = FUN_01966f50(local_40,local_3c);
  return uVar1;
}

