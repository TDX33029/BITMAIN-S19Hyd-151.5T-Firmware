// FUN_015fb0b0 @ 015fb0b0 size=88 calls_out=2 calls_in=1
// strings: 

void FUN_015fb0b0(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1[1];
  for (iVar2 = ((uint)(param_1[3] - iVar1) >> 3) * -0x45d1745d; iVar2 != 0; iVar2 = iVar2 + -1) {
    FUN_015f1020(iVar1);
    iVar1 = iVar1 + 0x58;
  }
  FUN_0134aee0(param_1[2],*param_1,8,0x58);
  return;
}

