// FUN_01a534b4 @ 01a534b4 size=88 calls_out=2 calls_in=1
// strings: 

void FUN_01a534b4(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = ((uint)(param_1[3] - param_1[1]) >> 3) * -0x3d70a3d7 + 1;
  iVar1 = param_1[1];
  while (iVar2 = iVar2 + -1, iVar2 != 0) {
    FUN_01a5354c(iVar1);
    iVar1 = iVar1 + 200;
  }
  FUN_0134aee0(param_1[2],*param_1,8,200);
  return;
}

