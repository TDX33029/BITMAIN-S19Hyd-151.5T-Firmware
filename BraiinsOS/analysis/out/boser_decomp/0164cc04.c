// FUN_0164cc04 @ 0164cc04 size=92 calls_out=2 calls_in=10
// strings: 

void FUN_0164cc04(int *param_1)

{
  bool bVar1;
  
  if (*param_1 == 0) {
    return;
  }
  do {
    bVar1 = (bool)hasExclusiveAccess(0x1d519e0);
  } while (!bVar1);
  DAT_01d519e0 = DAT_01d519e0 + -1;
  FUN_0134c054(param_1[8],param_1[9],4,4);
  if (param_1[6] == 3) {
    return;
  }
  FUN_01651cc8(param_1[6],param_1[7]);
  return;
}

