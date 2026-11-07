// FUN_00d383c8 @ 00d383c8 size=104 calls_out=3 calls_in=3
// strings: 

void FUN_00d383c8(int *param_1)

{
  int iVar1;
  
  if (*param_1 != 2 || param_1[1] != 0) {
    iVar1 = param_1[9];
    FUN_00b21d18(iVar1,param_1[10]);
    FUN_0132b958(param_1[8],iVar1,4,0x3c);
    if (param_1[0xb] != -0x80000000) {
      FUN_019bb7e0(param_1[0xb],param_1[0xc]);
    }
    if (param_1[0xe] != -0x80000000) {
      FUN_019bb7e0(param_1[0xe],param_1[0xf]);
      return;
    }
  }
  return;
}

