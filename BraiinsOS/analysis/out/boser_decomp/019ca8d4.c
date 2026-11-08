// FUN_019ca8d4 @ 019ca8d4 size=88 calls_out=2 calls_in=2
// strings: 

void FUN_019ca8d4(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1[1];
  for (iVar2 = ((uint)(param_1[3] - iVar1) >> 3) * -0x49249249; iVar2 != 0; iVar2 = iVar2 + -1) {
    FUN_019bd168(iVar1);
    iVar1 = iVar1 + 0x38;
  }
  FUN_0134aee0(param_1[2],*param_1,8,0x38);
  return;
}

