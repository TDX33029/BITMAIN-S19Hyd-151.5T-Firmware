// FUN_009634ec @ 009634ec size=88 calls_out=2 calls_in=3
// strings: 

void FUN_009634ec(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = ((uint)(param_1[3] - param_1[1]) >> 3) * 0x38e38e39 + 1;
  iVar1 = param_1[1];
  while (iVar2 = iVar2 + -1, iVar2 != 0) {
    FUN_00943864(iVar1);
    iVar1 = iVar1 + 0x48;
  }
  FUN_0132b958(param_1[2],*param_1,8,0x48);
  return;
}

