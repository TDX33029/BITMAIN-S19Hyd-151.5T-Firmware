// FUN_01b3d0e0 @ 01b3d0e0 size=32 calls_out=0 calls_in=1
// strings: 

int FUN_01b3d0e0(int param_1)

{
  if (*(int *)(param_1 + 0x1d4) == 0) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + 4;
  }
  return param_1;
}

