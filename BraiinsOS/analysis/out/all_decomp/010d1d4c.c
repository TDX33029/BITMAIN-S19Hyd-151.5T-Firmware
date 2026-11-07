// FUN_010d1d4c @ 010d1d4c size=208 calls_out=3 calls_in=0
// strings: open pin in

undefined4 FUN_010d1d4c(uint *param_1)

{
  bool bVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  uint local_34;
  uint local_30;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  undefined4 local_20 [6];
  
  uVar4 = *param_1;
  if ((uVar4 != 2) && ((uVar4 & 1) == 0)) {
    return 0;
  }
  if (uVar4 != 2) {
    piVar2 = (int *)param_1[1];
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_010cf448(param_1[1],param_1[2]);
    }
  }
  *param_1 = 2;
  FUN_010ec06c(&local_34,param_1 + 3);
  if (local_34 == 0) {
    local_24 = local_30;
    local_28 = 0xb;
    local_2c = "open pin in";
    local_20[0] = 3;
    uVar3 = FUN_010cf51c(&local_2c,local_20);
    return uVar3;
  }
  param_1[2] = local_30;
  *param_1 = 0;
  param_1[1] = local_34;
  return 0;
}

