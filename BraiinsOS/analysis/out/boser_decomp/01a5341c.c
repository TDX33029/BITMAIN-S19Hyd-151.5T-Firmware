// FUN_01a5341c @ 01a5341c size=88 calls_out=2 calls_in=1
// strings: 

void FUN_01a5341c(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = ((uint)(param_1[3] - param_1[1]) >> 3) * -0x55555555 + 1;
  iVar1 = param_1[1];
  while (iVar2 = iVar2 + -1, iVar2 != 0) {
    FUN_01a4c510(iVar1);
    iVar1 = iVar1 + 0x18;
  }
  FUN_0134aee0(param_1[2],*param_1,4,0x18);
  return;
}

