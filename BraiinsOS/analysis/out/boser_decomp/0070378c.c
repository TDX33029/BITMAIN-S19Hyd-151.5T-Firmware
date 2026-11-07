// FUN_0070378c @ 0070378c size=88 calls_out=2 calls_in=1
// strings: 

void FUN_0070378c(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = ((uint)(param_1[3] - param_1[1]) >> 3) * -0x49249249 + 1;
  iVar1 = param_1[1];
  while (iVar2 = iVar2 + -1, iVar2 != 0) {
    FUN_00703824(iVar1);
    iVar1 = iVar1 + 0x38;
  }
  FUN_0134aee0(param_1[2],*param_1,8,0x38);
  return;
}

