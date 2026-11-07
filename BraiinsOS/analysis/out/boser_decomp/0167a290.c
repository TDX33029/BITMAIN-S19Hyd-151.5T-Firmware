// FUN_0167a290 @ 0167a290 size=108 calls_out=2 calls_in=4
// strings: 

void FUN_0167a290(int param_1,int param_2)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)(param_1 + 8);
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_0134bd64(*puVar4,puVar4[1]);
    puVar4 = puVar4 + 3;
  }
  if (param_1 == -1) {
    return;
  }
  piVar2 = (int *)(param_1 + 4);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    thunk_FUN_01be4678(param_1);
    return;
  }
  return;
}

