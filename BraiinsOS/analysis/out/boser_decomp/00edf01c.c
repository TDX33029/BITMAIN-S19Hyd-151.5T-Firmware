// FUN_00edf01c @ 00edf01c size=332 calls_out=3 calls_in=2
// strings: terahash_per_second

int FUN_00edf01c(int *param_1)

{
  uint uVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint local_30;
  int *local_2c;
  
  iVar5 = *param_1;
  pcVar2 = "{";
  uVar1 = 1;
  do {
    uVar3 = *(uint *)(iVar5 + 4);
    uVar4 = uVar3 ^ 0x7fffffff;
    if (uVar1 < uVar4) {
      uVar4 = uVar1;
    }
    FUN_01284394(iVar5,pcVar2,uVar4);
    if (uVar3 == 0x7fffffff) goto LAB_00edf14c;
    pcVar2 = pcVar2 + uVar4;
    uVar1 = uVar1 - uVar4;
  } while (uVar1 != 0);
  local_30 = 0x100;
  local_2c = param_1;
  iVar5 = FUN_00ebeb78(&local_30,"terahash_per_second",0x13);
  if (((iVar5 == 0) && (iVar5 = 0, (local_30 & 0xff00) != 0)) && ((local_30 & 1) == 0)) {
    uVar1 = 1;
    iVar6 = *local_2c;
    pcVar2 = "}";
    do {
      uVar3 = *(uint *)(iVar6 + 4);
      uVar4 = uVar3 ^ 0x7fffffff;
      if (uVar1 < uVar4) {
        uVar4 = uVar1;
      }
      FUN_01284394(iVar6,pcVar2,uVar4);
      if (uVar3 == 0x7fffffff) {
LAB_00edf14c:
        iVar5 = FUN_01966f50(2,&DAT_01d2e7b8);
        return iVar5;
      }
      pcVar2 = pcVar2 + uVar4;
      uVar1 = uVar1 - uVar4;
    } while (uVar1 != 0);
  }
  return iVar5;
}

