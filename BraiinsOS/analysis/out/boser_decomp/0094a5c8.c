// FUN_0094a5c8 @ 0094a5c8 size=88 calls_out=2 calls_in=1
// strings: 

void FUN_0094a5c8(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = ((uint)(param_1[3] - param_1[1]) >> 3) * 0x586fb587 + 1;
  iVar1 = param_1[1];
  while (iVar2 = iVar2 + -1, iVar2 != 0) {
    FUN_0094a660(iVar1);
    iVar1 = iVar1 + 0x1b8;
  }
  FUN_0132b958(param_1[2],*param_1,8,0x1b8);
  return;
}

