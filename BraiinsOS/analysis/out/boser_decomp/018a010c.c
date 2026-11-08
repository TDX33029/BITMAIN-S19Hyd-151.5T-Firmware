// FUN_018a010c @ 018a010c size=36 calls_out=3 calls_in=2
// strings: 

void FUN_018a010c(undefined4 *param_1,int param_2)

{
  if ((*(uint *)(param_2 + 8) & 0x2000000) != 0) {
    FUN_012fd63c(*param_1);
    return;
  }
  if ((*(uint *)(param_2 + 8) & 0x4000000) == 0) {
    FUN_012fcc70();
    return;
  }
  FUN_012fd6b4();
  return;
}

