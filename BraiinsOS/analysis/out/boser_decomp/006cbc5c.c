// FUN_006cbc5c @ 006cbc5c size=88 calls_out=2 calls_in=3
// strings: 

void FUN_006cbc5c(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = ((uint)(param_1[3] - param_1[1]) >> 2) * -0x3b13b13b + 1;
  iVar1 = param_1[1];
  while (iVar2 = iVar2 + -1, iVar2 != 0) {
    FUN_0137bfa4(iVar1);
    iVar1 = iVar1 + 0x34;
  }
  FUN_0134aee0(param_1[2],*param_1,4,0x34);
  return;
}

