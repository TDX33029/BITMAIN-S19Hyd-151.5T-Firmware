// FUN_00ede1fc @ 00ede1fc size=400 calls_out=4 calls_in=1
// strings: a UUID string | stage

undefined4 FUN_00ede1fc(char *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  int *piVar7;
  undefined4 local_30;
  undefined4 *local_2c;
  
  if (*param_1 == '\0') {
    piVar7 = *(int **)(param_1 + 4);
    if (param_1[1] != '\x01') {
      uVar4 = 1;
      iVar2 = *piVar7;
      pcVar5 = ",";
      do {
        uVar6 = *(uint *)(iVar2 + 4);
        uVar3 = uVar6 ^ 0x7fffffff;
        if (uVar4 < uVar3) {
          uVar3 = uVar4;
        }
        FUN_01284394(iVar2,pcVar5,uVar3);
        if (uVar6 == 0x7fffffff) goto LAB_00ede374;
        pcVar5 = pcVar5 + uVar3;
        uVar4 = uVar4 - uVar3;
      } while (uVar4 != 0);
    }
    iVar2 = *piVar7;
    param_1[1] = '\x02';
    FUN_0096b2b0(&local_30,iVar2,"stage",5);
    if ((char)local_30 != '\x04') goto LAB_00ede380;
    uVar4 = 1;
    iVar2 = *piVar7;
    pcVar5 = ":";
    do {
      uVar6 = *(uint *)(iVar2 + 4);
      uVar3 = uVar6 ^ 0x7fffffff;
      if (uVar4 < uVar3) {
        uVar3 = uVar4;
      }
      FUN_01284394(iVar2,pcVar5,uVar3);
      if (uVar6 == 0x7fffffff) goto LAB_00ede374;
      pcVar5 = pcVar5 + uVar3;
      uVar4 = uVar4 - uVar3;
    } while (uVar4 != 0);
    FUN_0096b2b0(&local_30,*piVar7,param_2,param_3);
    uVar1 = 0;
    if ((char)local_30 != '\x04') {
      uVar1 = FUN_01966f50(local_30,local_2c);
    }
  }
  else {
    local_30 = 10;
    uVar1 = FUN_01966fbc(&local_30,0,0);
  }
  return uVar1;
LAB_00ede374:
  local_30 = 2;
  local_2c = &DAT_01d2e7b8;
LAB_00ede380:
  uVar1 = FUN_01966f50(local_30,local_2c);
  return uVar1;
}

