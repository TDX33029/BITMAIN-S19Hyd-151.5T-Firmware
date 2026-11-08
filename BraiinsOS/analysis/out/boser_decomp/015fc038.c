// FUN_015fc038 @ 015fc038 size=36 calls_out=3 calls_in=1
// strings: 

void FUN_015fc038(undefined4 *param_1,int param_2)

{
  if ((*(uint *)(param_2 + 8) & 0x2000000) != 0) {
    FUN_012fd9d0(*param_1);
    return;
  }
  if ((*(uint *)(param_2 + 8) & 0x4000000) == 0) {
    FUN_012fd02c();
    return;
  }
  FUN_012fdbc0();
  return;
}

