// FUN_01475c4c @ 01475c4c size=36 calls_out=2 calls_in=1
// strings: 

void FUN_01475c4c(uint *param_1)

{
  if ((*param_1 & 7) == 3) {
    FUN_0147beec(param_1 + 2);
    return;
  }
  if (*param_1 == 4) {
    return;
  }
  FUN_0146b7d0();
  return;
}

