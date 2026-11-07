// FUN_00ec69b8 @ 00ec69b8 size=468 calls_out=4 calls_in=1
// strings: a UUID string | FIRMWARE_AND_PACKAGESREALIZING | internal error: entered unreachable code

undefined4 FUN_00ec69b8(char *param_1,undefined4 param_2,char param_3)

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
  
  if (*param_1 == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d2ffb0);
  }
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
      if (uVar6 == 0x7fffffff) goto LAB_00ec6b5c;
      pcVar5 = pcVar5 + uVar3;
      uVar4 = uVar4 - uVar3;
    } while (uVar4 != 0);
  }
  iVar2 = *piVar7;
  param_1[1] = '\x02';
  FUN_0096b2b0(&local_30,iVar2,param_2,4);
  if ((char)local_30 != '\x04') goto LAB_00ec6b68;
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
    if (uVar6 == 0x7fffffff) goto LAB_00ec6b5c;
    pcVar5 = pcVar5 + uVar3;
    uVar4 = uVar4 - uVar3;
  } while (uVar4 != 0);
  if (param_3 == '\0') {
    iVar2 = *piVar7;
    pcVar5 = &DAT_00571118;
  }
  else {
    if (param_3 == '\x01') {
      iVar2 = *piVar7;
      uVar1 = 0x15;
      pcVar5 = "FIRMWARE_AND_PACKAGESREALIZING";
      goto LAB_00ec6b24;
    }
    iVar2 = *piVar7;
    pcVar5 = &DAT_0056fb20;
  }
  uVar1 = 8;
LAB_00ec6b24:
  FUN_0096b2b0(&local_30,iVar2,pcVar5,uVar1);
  uVar1 = 0;
  if ((char)local_30 != '\x04') {
    uVar1 = FUN_01966f50(local_30,local_2c);
  }
  return uVar1;
LAB_00ec6b5c:
  local_30 = 2;
  local_2c = &DAT_01d2e7b8;
LAB_00ec6b68:
  uVar1 = FUN_01966f50(local_30,local_2c);
  return uVar1;
}

