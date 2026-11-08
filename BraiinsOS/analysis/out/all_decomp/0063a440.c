// FUN_0063a440 @ 0063a440 size=124 calls_out=3 calls_in=2
// strings: 

void FUN_0063a440(undefined4 param_1,int param_2,undefined4 param_3)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = *(int **)(param_2 + 0x5c);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01089b40(*(undefined4 *)(param_2 + 0x5c));
  }
  if ((*(uint *)(param_2 + 0x50) & 0x7fffffff) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_2 + 0x54));
  }
  FUN_016dd1aa(param_2,param_3,0x80);
  FUN_016dd1aa(param_1,param_2,0xe0);
  return;
}

