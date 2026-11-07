// FUN_01960218 @ 01960218 size=88 calls_out=2 calls_in=6
// strings: 

void FUN_01960218(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = ((uint)(param_1[3] - param_1[1]) >> 2) * -0x41041041 + 1;
  iVar1 = param_1[1];
  while (iVar2 = iVar2 + -1, iVar2 != 0) {
    FUN_0194f07c(iVar1);
    iVar1 = iVar1 + 0xfc;
  }
  FUN_0132b958(param_1[2],*param_1,4,0xfc);
  return;
}

