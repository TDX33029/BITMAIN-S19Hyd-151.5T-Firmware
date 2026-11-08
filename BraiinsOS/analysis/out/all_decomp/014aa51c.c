// FUN_014aa51c @ 014aa51c size=108 calls_out=1 calls_in=0
// strings: 

void FUN_014aa51c(int param_1,int *param_2)

{
  if (*param_2 == 2) {
    FUN_010cbb88(param_1,param_2[4]);
    return;
  }
  if ((param_2[0x8b] != -0x80000000) && (param_2[0x8d] == 2)) {
    if (*(short *)param_2[0x8c] == 0x3268) {
      FUN_010cbb88(param_1,param_2[3]);
      *(undefined1 *)(param_1 + 0xc) = 0;
      return;
    }
  }
  FUN_010cbb88(param_1,param_2[3]);
  return;
}

