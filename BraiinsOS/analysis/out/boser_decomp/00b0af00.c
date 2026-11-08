// FUN_00b0af00 @ 00b0af00 size=96 calls_out=3 calls_in=1
// strings: 

void FUN_00b0af00(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1[1];
  for (iVar2 = ((uint)(param_1[3] - iVar1) >> 2) * -0x55555555; iVar2 != 0; iVar2 = iVar2 + -1) {
    FUN_006a41c0(iVar1);
    iVar1 = iVar1 + 0xc;
  }
  FUN_0132b958(param_1[2],*param_1,4,0xc);
  FUN_00963320(param_1 + 4);
  return;
}

