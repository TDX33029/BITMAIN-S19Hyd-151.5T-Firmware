// FUN_0169d8ac @ 0169d8ac size=100 calls_out=3 calls_in=0
// strings: 

void FUN_0169d8ac(int *param_1,int param_2)

{
  FUN_016b9ca8(param_2 + 0x268,param_1[0x2a4]);
  if (param_1[0x2aa] != 2) {
    if (*(int *)(param_2 + 0x2d4) == -0x80000000) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01d08ba8);
    }
    *(undefined4 *)(param_2 + 0x2e8) = 0;
  }
  FUN_016b9ce8(param_2 + 600,param_1[0x2b1],param_1[0x2ba]);
  if (*param_1 == 2 && param_1[1] == 0) {
    return;
  }
  if (*(int *)(param_2 + 0x248) == 2) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0cc(&DAT_01d08b68);
  }
  FUN_016c5cd0(param_2 + 0xd8,param_1);
  FUN_016c5cd0(param_2 + 0x198,param_1 + 0xa2);
  return;
}

