// FUN_013d5d08 @ 013d5d08 size=88 calls_out=2 calls_in=3
// strings: 

void FUN_013d5d08(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = ((uint)(param_1[3] - param_1[1]) >> 3) * 0x4f72c235 + 1;
  iVar1 = param_1[1];
  while (iVar2 = iVar2 + -1, iVar2 != 0) {
    FUN_013d5da0(iVar1);
    iVar1 = iVar1 + 0xe8;
  }
  FUN_01af7af8(param_1[2],*param_1,4,0xe8);
  return;
}

