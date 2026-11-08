// FUN_00edeeb8 @ 00edeeb8 size=332 calls_out=3 calls_in=2
// strings: 

int FUN_00edeeb8(undefined4 param_1,undefined4 param_2,int *param_3)

{
  undefined4 extraout_r3;
  uint uVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint local_2c;
  int *local_28;
  
  iVar3 = *param_3;
  uVar1 = 1;
  pcVar2 = "{";
  do {
    uVar5 = *(uint *)(iVar3 + 4);
    uVar4 = uVar5 ^ 0x7fffffff;
    if (uVar1 < uVar4) {
      uVar4 = uVar1;
    }
    FUN_01284394(iVar3,pcVar2,uVar4);
    if (uVar5 == 0x7fffffff) goto LAB_00edefec;
    pcVar2 = pcVar2 + uVar4;
    uVar1 = uVar1 - uVar4;
  } while (uVar1 != 0);
  local_2c = 0x100;
  local_28 = param_3;
  iVar3 = FUN_0096b424(&local_2c,&DAT_0056f4bc,4,extraout_r3,param_1,param_2);
  if (((iVar3 == 0) && (iVar3 = 0, (local_2c & 0xff00) != 0)) && ((local_2c & 1) == 0)) {
    uVar1 = 1;
    iVar6 = *local_28;
    pcVar2 = "}";
    do {
      uVar5 = *(uint *)(iVar6 + 4);
      uVar4 = uVar5 ^ 0x7fffffff;
      if (uVar1 < uVar4) {
        uVar4 = uVar1;
      }
      FUN_01284394(iVar6,pcVar2,uVar4);
      if (uVar5 == 0x7fffffff) {
LAB_00edefec:
        iVar3 = FUN_01966f50(2,&DAT_01d2e7b8);
        return iVar3;
      }
      pcVar2 = pcVar2 + uVar4;
      uVar1 = uVar1 - uVar4;
    } while (uVar1 != 0);
  }
  return iVar3;
}

