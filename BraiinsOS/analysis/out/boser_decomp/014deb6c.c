// FUN_014deb6c @ 014deb6c size=76 calls_out=2 calls_in=20
// strings: 

void FUN_014deb6c(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = ((uint)(param_1[3] - param_1[1]) >> 4) + 1;
  iVar1 = param_1[1];
  while (iVar2 = iVar2 + -1, iVar2 != 0) {
    FUN_014ddff0(iVar1);
    iVar1 = iVar1 + 0x10;
  }
  FUN_0134aee0(param_1[2],*param_1,8,0x10);
  return;
}

