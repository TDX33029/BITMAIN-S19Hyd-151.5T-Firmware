// FUN_00eddfd8 @ 00eddfd8 size=512 calls_out=5 calls_in=1
// strings: a UUID string

undefined4 FUN_00eddfd8(char *param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  uint uVar7;
  int *piVar8;
  undefined4 local_30;
  undefined4 *local_2c;
  
  if (*param_1 == '\0') {
    piVar8 = *(int **)(param_1 + 4);
    if (param_1[1] != '\x01') {
      uVar5 = 1;
      iVar2 = *piVar8;
      pcVar6 = ",";
      do {
        uVar7 = *(uint *)(iVar2 + 4);
        uVar4 = uVar7 ^ 0x7fffffff;
        if (uVar5 < uVar4) {
          uVar4 = uVar5;
        }
        FUN_01284394(iVar2,pcVar6,uVar4);
        if (uVar7 == 0x7fffffff) goto LAB_00ede1c0;
        pcVar6 = pcVar6 + uVar4;
        uVar5 = uVar5 - uVar4;
      } while (uVar5 != 0);
    }
    iVar2 = *piVar8;
    param_1[1] = '\x02';
    FUN_0096b2b0(&local_30,iVar2,&DAT_0056fd80,8);
    if ((char)local_30 != '\x04') goto LAB_00ede1cc;
    uVar5 = 1;
    iVar2 = *piVar8;
    pcVar6 = ":";
    do {
      uVar7 = *(uint *)(iVar2 + 4);
      uVar4 = uVar7 ^ 0x7fffffff;
      if (uVar5 < uVar4) {
        uVar4 = uVar5;
      }
      FUN_01284394(iVar2,pcVar6,uVar4);
      if (uVar7 == 0x7fffffff) goto LAB_00ede1c0;
      pcVar6 = pcVar6 + uVar4;
      uVar5 = uVar5 - uVar4;
    } while (uVar5 != 0);
    if (*param_2 != 2 || param_2[1] != 0) {
      uVar1 = FUN_00edd42c(param_2,piVar8);
      return uVar1;
    }
    uVar5 = 4;
    iVar2 = *piVar8;
    puVar3 = &DAT_0056d030;
    do {
      uVar7 = *(uint *)(iVar2 + 4);
      uVar4 = uVar7 ^ 0x7fffffff;
      if (uVar5 < uVar4) {
        uVar4 = uVar5;
      }
      FUN_01284394(iVar2,puVar3,uVar4);
      if (uVar7 == 0x7fffffff) {
        local_30 = 2;
        local_2c = &DAT_01d2e7b8;
        goto LAB_00ede1cc;
      }
      puVar3 = puVar3 + uVar4;
      uVar5 = uVar5 - uVar4;
    } while (uVar5 != 0);
    uVar1 = 0;
  }
  else {
    local_30 = 10;
    uVar1 = FUN_01966fbc(&local_30,0,0);
  }
  return uVar1;
LAB_00ede1c0:
  local_30 = 2;
  local_2c = &DAT_01d2e7b8;
LAB_00ede1cc:
  uVar1 = FUN_01966f50(local_30,local_2c);
  return uVar1;
}

