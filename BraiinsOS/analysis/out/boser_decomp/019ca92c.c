// FUN_019ca92c @ 019ca92c size=88 calls_out=2 calls_in=1
// strings: 

void FUN_019ca92c(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = ((uint)(param_1[3] - param_1[1]) >> 5) * 0x38e38e39 + 1;
  iVar1 = param_1[1];
  while (iVar2 = iVar2 + -1, iVar2 != 0) {
    FUN_019c6e68(iVar1);
    iVar1 = iVar1 + 0x120;
  }
  FUN_0134aee0(param_1[2],*param_1,8,0x120);
  return;
}

