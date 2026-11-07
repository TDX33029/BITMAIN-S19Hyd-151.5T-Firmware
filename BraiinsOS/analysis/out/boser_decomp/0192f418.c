// FUN_0192f418 @ 0192f418 size=88 calls_out=2 calls_in=1
// strings: 

void FUN_0192f418(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = ((uint)(param_1[3] - param_1[1]) >> 2) * 0x38e38e39 + 1;
  iVar1 = param_1[1];
  while (iVar2 = iVar2 + -1, iVar2 != 0) {
    FUN_0192a054(iVar1);
    iVar1 = iVar1 + 0x24;
  }
  FUN_0134aee0(param_1[2],*param_1,4,0x24);
  return;
}

