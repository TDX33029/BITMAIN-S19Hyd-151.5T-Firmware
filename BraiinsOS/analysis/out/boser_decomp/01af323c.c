// FUN_01af323c @ 01af323c size=24 calls_out=0 calls_in=1
// strings: 

undefined4 FUN_01af323c(int param_1)

{
  if (-1 < param_1) {
    param_1 = 4;
  }
  return *(undefined4 *)(&DAT_00539b14 + param_1 * 4);
}

