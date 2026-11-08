// FUN_012e8d04 @ 012e8d04 size=88 calls_out=2 calls_in=5
// strings: 

void FUN_012e8d04(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1[1];
  for (iVar2 = ((uint)(param_1[3] - iVar1) >> 2) * -0x3b13b13b; iVar2 != 0; iVar2 = iVar2 + -1) {
    FUN_007390c4(iVar1);
    iVar1 = iVar1 + 0x34;
  }
  FUN_0134aee0(param_1[2],*param_1,4,0x34);
  return;
}

