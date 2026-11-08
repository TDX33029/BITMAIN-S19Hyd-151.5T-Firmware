// FUN_00963320 @ 00963320 size=76 calls_out=2 calls_in=2
// strings: 

void FUN_00963320(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = ((uint)(param_1[3] - param_1[1]) >> 5) + 1;
  iVar1 = param_1[1];
  while (iVar2 = iVar2 + -1, iVar2 != 0) {
    FUN_01ada488(iVar1);
    iVar1 = iVar1 + 0x20;
  }
  FUN_0132b958(param_1[2],*param_1,8,0x20);
  return;
}

