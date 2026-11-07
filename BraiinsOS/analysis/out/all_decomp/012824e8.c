// FUN_012824e8 @ 012824e8 size=132 calls_out=4 calls_in=6
// strings: 

void FUN_012824e8(int *param_1)

{
  bool bVar1;
  int iVar2;
  
  if (*param_1 == 0) {
    return;
  }
  do {
    iVar2 = DAT_018dd954 + -1;
    bVar1 = (bool)hasExclusiveAccess(0x18dd954);
  } while (!bVar1);
  DAT_018dd954 = iVar2;
  if (param_1[8] != 0) {
    thunk_FUN_016d3fb4(param_1[9]);
  }
  iVar2 = param_1[6];
  if (iVar2 == 3) {
    return;
  }
  if (iVar2 == 0) {
    FUN_012848c0(param_1[7]);
    return;
  }
  if (iVar2 == 1) {
    FUN_01283d28();
    return;
  }
  FUN_01284358();
  return;
}

