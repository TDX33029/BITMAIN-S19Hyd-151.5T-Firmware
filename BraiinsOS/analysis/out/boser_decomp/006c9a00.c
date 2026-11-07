// FUN_006c9a00 @ 006c9a00 size=88 calls_out=2 calls_in=2
// strings: 

void FUN_006c9a00(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1[1];
  for (iVar2 = ((uint)(param_1[3] - iVar1) >> 3) * -0x55555555; iVar2 != 0; iVar2 = iVar2 + -1) {
    FUN_006c9a58(iVar1);
    iVar1 = iVar1 + 0x18;
  }
  FUN_0132b958(param_1[2],*param_1,4,0x18);
  return;
}

