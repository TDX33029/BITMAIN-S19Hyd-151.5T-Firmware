// FUN_00c38474 @ 00c38474 size=68 calls_out=1 calls_in=0
// strings: 

int FUN_00c38474(int *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  param_1 = (int *)*param_1;
  iVar3 = param_1[2];
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *param_1;
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00aaaeec();
  }
  return param_2 * 3 + iVar3;
}

