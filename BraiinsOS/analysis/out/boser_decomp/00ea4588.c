// FUN_00ea4588 @ 00ea4588 size=456 calls_out=4 calls_in=1
// strings: 

int FUN_00ea4588(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 local_30;
  undefined4 *local_2c;
  
  uVar3 = 1;
  iVar4 = *param_1;
  pcVar1 = "{";
  do {
    uVar5 = *(uint *)(iVar4 + 4);
    uVar2 = uVar5 ^ 0x7fffffff;
    if (uVar3 < uVar2) {
      uVar2 = uVar3;
    }
    FUN_01284394(iVar4,pcVar1,uVar2);
    if (uVar5 == 0x7fffffff) goto LAB_00ea4718;
    pcVar1 = pcVar1 + uVar2;
    uVar3 = uVar3 - uVar2;
  } while (uVar3 != 0);
  FUN_0096b2b0(&local_30,iVar4,param_2,param_3);
  if ((char)local_30 == '\x04') {
    uVar3 = 1;
    pcVar1 = ":";
    do {
      uVar5 = *(uint *)(iVar4 + 4);
      uVar2 = uVar5 ^ 0x7fffffff;
      if (uVar3 < uVar2) {
        uVar2 = uVar3;
      }
      FUN_01284394(iVar4,pcVar1,uVar2);
      if (uVar5 == 0x7fffffff) goto LAB_00ea4718;
      pcVar1 = pcVar1 + uVar2;
      uVar3 = uVar3 - uVar2;
    } while (uVar3 != 0);
    iVar4 = FUN_00d57e68(param_5,param_6,param_7,param_1);
    if (iVar4 == 0) {
      uVar3 = 1;
      iVar4 = *param_1;
      pcVar1 = "}";
      do {
        uVar5 = *(uint *)(iVar4 + 4);
        uVar2 = uVar5 ^ 0x7fffffff;
        if (uVar3 < uVar2) {
          uVar2 = uVar3;
        }
        FUN_01284394(iVar4,pcVar1,uVar2);
        if (uVar5 == 0x7fffffff) {
          local_30 = 2;
          local_2c = &DAT_01d2e7b8;
          goto LAB_00ea4730;
        }
        pcVar1 = pcVar1 + uVar2;
        uVar3 = uVar3 - uVar2;
      } while (uVar3 != 0);
      iVar4 = 0;
    }
    return iVar4;
  }
LAB_00ea4730:
  iVar4 = FUN_01966f50(local_30,local_2c);
  return iVar4;
LAB_00ea4718:
  local_30 = 2;
  local_2c = &DAT_01d2e7b8;
  goto LAB_00ea4730;
}

