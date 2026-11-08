// FUN_00def85c @ 00def85c size=88 calls_out=2 calls_in=1
// strings: 

void FUN_00def85c(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = ((uint)(param_1[3] - param_1[1]) >> 2) * 0x3cf3cf3d + 1;
  iVar1 = param_1[1];
  while (iVar2 = iVar2 + -1, iVar2 != 0) {
    FUN_00def8f4(iVar1);
    iVar1 = iVar1 + 0x54;
  }
  FUN_0134aee0(param_1[2],*param_1,4,0x54);
  return;
}

