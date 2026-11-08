// FUN_01a53260 @ 01a53260 size=88 calls_out=2 calls_in=12
// strings: 

void FUN_01a53260(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = ((uint)(param_1[3] - param_1[1]) >> 4) * -0x49249249 + 1;
  iVar1 = param_1[1];
  while (iVar2 = iVar2 + -1, iVar2 != 0) {
    FUN_01a530f0(iVar1);
    iVar1 = iVar1 + 0x70;
  }
  FUN_0134aee0(param_1[2],*param_1,8,0x70);
  return;
}

