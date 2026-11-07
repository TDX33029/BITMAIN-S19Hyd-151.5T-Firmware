// FUN_0175eea4 @ 0175eea4 size=68 calls_out=1 calls_in=2
// strings: 

void FUN_0175eea4(int *param_1)

{
  bool bVar1;
  int iVar2;
  int *in_r12;
  
  if (*param_1 != 0) {
    in_r12 = (int *)param_1[1];
  }
  if (*param_1 == 0 || in_r12 == (int *)0x0) {
    return;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *in_r12;
    bVar1 = (bool)hasExclusiveAccess(in_r12);
  } while (!bVar1);
  *in_r12 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01421174(param_1[1]);
    return;
  }
  return;
}

