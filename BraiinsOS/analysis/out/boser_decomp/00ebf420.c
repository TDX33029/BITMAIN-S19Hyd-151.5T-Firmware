// FUN_00ebf420 @ 00ebf420 size=516 calls_out=5 calls_in=4
// strings: a UUID string

undefined4 FUN_00ebf420(char *param_1,undefined4 param_2,undefined4 param_3,uint *param_4)

{
  undefined4 uVar1;
  undefined *puVar2;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  undefined4 local_30;
  undefined4 *local_2c;
  
  if (*param_1 == '\0') {
    piVar8 = *(int **)(param_1 + 4);
    if (param_1[1] != '\x01') {
      uVar6 = 1;
      iVar5 = *piVar8;
      pcVar4 = ",";
      do {
        uVar7 = *(uint *)(iVar5 + 4);
        uVar3 = uVar7 ^ 0x7fffffff;
        if (uVar6 < uVar3) {
          uVar3 = uVar6;
        }
        FUN_01284394(iVar5,pcVar4,uVar3);
        if (uVar7 == 0x7fffffff) goto LAB_00ebf60c;
        pcVar4 = pcVar4 + uVar3;
        uVar6 = uVar6 - uVar3;
      } while (uVar6 != 0);
    }
    iVar5 = *piVar8;
    param_1[1] = '\x02';
    FUN_0096b2b0(&local_30,iVar5,param_2,param_3);
    if ((char)local_30 != '\x04') goto LAB_00ebf618;
    uVar6 = 1;
    iVar5 = *piVar8;
    pcVar4 = ":";
    do {
      uVar7 = *(uint *)(iVar5 + 4);
      uVar3 = uVar7 ^ 0x7fffffff;
      if (uVar6 < uVar3) {
        uVar3 = uVar6;
      }
      FUN_01284394(iVar5,pcVar4,uVar3);
      if (uVar7 == 0x7fffffff) goto LAB_00ebf60c;
      pcVar4 = pcVar4 + uVar3;
      uVar6 = uVar6 - uVar3;
    } while (uVar6 != 0);
    if ((*param_4 & 1) != 0) {
      uVar1 = FUN_00d57e68(param_4[2],param_4[3],param_4[4],piVar8);
      return uVar1;
    }
    uVar6 = 4;
    iVar5 = *piVar8;
    puVar2 = &DAT_0056d030;
    do {
      uVar7 = *(uint *)(iVar5 + 4);
      uVar3 = uVar7 ^ 0x7fffffff;
      if (uVar6 < uVar3) {
        uVar3 = uVar6;
      }
      FUN_01284394(iVar5,puVar2,uVar3);
      if (uVar7 == 0x7fffffff) {
        local_30 = 2;
        local_2c = &DAT_01d2e7b8;
        goto LAB_00ebf618;
      }
      puVar2 = puVar2 + uVar3;
      uVar6 = uVar6 - uVar3;
    } while (uVar6 != 0);
    uVar1 = 0;
  }
  else {
    local_30 = 10;
    uVar1 = FUN_01966fbc(&local_30,0,0);
  }
  return uVar1;
LAB_00ebf60c:
  local_30 = 2;
  local_2c = &DAT_01d2e7b8;
LAB_00ebf618:
  uVar1 = FUN_01966f50(local_30,local_2c);
  return uVar1;
}

