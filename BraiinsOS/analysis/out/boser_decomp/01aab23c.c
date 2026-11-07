// FUN_01aab23c @ 01aab23c size=80 calls_out=2 calls_in=2
// strings: 

void FUN_01aab23c(int *param_1)

{
  bool bVar1;
  uint *puVar2;
  uint uVar3;
  
  if (*param_1 == 0) {
    return;
  }
  if (*param_1 != 1) {
    FUN_01ac2a34(param_1[1],(char)param_1[2]);
    return;
  }
  puVar2 = (uint *)param_1[2];
  DataMemoryBarrier(0xb);
  do {
    uVar3 = *puVar2;
    bVar1 = (bool)hasExclusiveAccess(puVar2);
  } while (!bVar1);
  *puVar2 = uVar3 - 1;
  if ((uVar3 - 1 & 0xbfffffff) == 0x80000000) {
    FUN_019a33c4();
    return;
  }
  return;
}

