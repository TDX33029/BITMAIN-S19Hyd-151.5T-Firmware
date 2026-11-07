// FUN_0094a438 @ 0094a438 size=88 calls_out=2 calls_in=2
// strings: 

void FUN_0094a438(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = ((uint)(param_1[3] - param_1[1]) >> 3) * -0x5f75270d + 1;
  iVar1 = param_1[1];
  while (iVar2 = iVar2 + -1, iVar2 != 0) {
    FUN_0094a4d0(iVar1);
    iVar1 = iVar1 + 0x1d8;
  }
  FUN_0132b958(param_1[2],*param_1,8,0x1d8);
  return;
}

