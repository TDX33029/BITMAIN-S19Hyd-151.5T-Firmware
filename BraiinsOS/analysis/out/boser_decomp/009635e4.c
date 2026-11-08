// FUN_009635e4 @ 009635e4 size=100 calls_out=3 calls_in=3
// strings: 

void FUN_009635e4(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = ((uint)(param_1[3] - param_1[1]) >> 3) * 0x684bda13 + 1;
  iVar1 = param_1[1];
  while (iVar2 = iVar2 + -1, iVar2 != 0) {
    FUN_019bb7e0(*(undefined4 *)(iVar1 + 0xcc),*(undefined4 *)(iVar1 + 0xd0));
    FUN_009636a4(iVar1);
    iVar1 = iVar1 + 0xd8;
  }
  FUN_0132b958(param_1[2],*param_1,8,0xd8);
  return;
}

