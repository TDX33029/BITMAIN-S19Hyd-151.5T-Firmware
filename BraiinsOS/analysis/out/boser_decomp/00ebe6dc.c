// FUN_00ebe6dc @ 00ebe6dc size=680 calls_out=4 calls_in=1
// strings: quota | value

int FUN_00ebe6dc(int *param_1,undefined4 param_2)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  int iVar6;
  uint local_30;
  int *local_2c;
  
  iVar6 = *param_1;
  pcVar5 = "{";
  uVar2 = 1;
  do {
    uVar4 = *(uint *)(iVar6 + 4);
    uVar3 = uVar4 ^ 0x7fffffff;
    if (uVar2 < uVar3) {
      uVar3 = uVar2;
    }
    FUN_01284394(iVar6,pcVar5,uVar3);
    if (uVar4 == 0x7fffffff) goto LAB_00ebe93c;
    pcVar5 = pcVar5 + uVar3;
    uVar2 = uVar2 - uVar3;
  } while (uVar2 != 0);
  FUN_0096b2b0(&local_30,iVar6,"quota",5);
  if ((char)local_30 == '\x04') {
    uVar2 = 1;
    pcVar5 = ":";
    do {
      uVar4 = *(uint *)(iVar6 + 4);
      uVar3 = uVar4 ^ 0x7fffffff;
      if (uVar2 < uVar3) {
        uVar3 = uVar2;
      }
      FUN_01284394(iVar6,pcVar5,uVar3);
      if (uVar4 == 0x7fffffff) goto LAB_00ebe93c;
      pcVar5 = pcVar5 + uVar3;
      uVar2 = uVar2 - uVar3;
    } while (uVar2 != 0);
    uVar2 = 1;
    pcVar5 = "{";
    do {
      uVar4 = *(uint *)(iVar6 + 4);
      uVar3 = uVar4 ^ 0x7fffffff;
      if (uVar2 < uVar3) {
        uVar3 = uVar2;
      }
      FUN_01284394(iVar6,pcVar5,uVar3);
      if (uVar4 == 0x7fffffff) {
        iVar6 = FUN_01966f50(2,&DAT_01d2e7b8);
        return iVar6;
      }
      pcVar5 = pcVar5 + uVar3;
      uVar2 = uVar2 - uVar3;
    } while (uVar2 != 0);
    local_30 = 0x100;
    local_2c = param_1;
    iVar6 = FUN_00ebe9c0(&local_30,"value",5,param_2);
    if (iVar6 == 0) {
      if (((local_30 & 0xff00) != 0) && ((local_30 & 1) == 0)) {
        uVar2 = 1;
        pcVar5 = "}";
        iVar6 = *local_2c;
        do {
          uVar4 = *(uint *)(iVar6 + 4);
          uVar3 = uVar4 ^ 0x7fffffff;
          if (uVar2 < uVar3) {
            uVar3 = uVar2;
          }
          FUN_01284394(iVar6,pcVar5,uVar3);
          if (uVar4 == 0x7fffffff) goto LAB_00ebe93c;
          pcVar5 = pcVar5 + uVar3;
          uVar2 = uVar2 - uVar3;
        } while (uVar2 != 0);
      }
      uVar2 = 1;
      iVar6 = *param_1;
      pcVar5 = "}";
      do {
        uVar4 = *(uint *)(iVar6 + 4);
        uVar3 = uVar4 ^ 0x7fffffff;
        if (uVar2 < uVar3) {
          uVar3 = uVar2;
        }
        FUN_01284394(iVar6,pcVar5,uVar3);
        if (uVar4 == 0x7fffffff) {
          uVar2 = 2;
          piVar1 = &DAT_01d2e7b8;
          goto LAB_00ebe950;
        }
        pcVar5 = pcVar5 + uVar3;
        uVar2 = uVar2 - uVar3;
      } while (uVar2 != 0);
      iVar6 = 0;
    }
    return iVar6;
  }
  uVar2 = local_30;
  piVar1 = local_2c;
LAB_00ebe950:
  iVar6 = FUN_01966f50(uVar2,piVar1);
  return iVar6;
LAB_00ebe93c:
  uVar2 = 2;
  piVar1 = &DAT_01d2e7b8;
  goto LAB_00ebe950;
}

