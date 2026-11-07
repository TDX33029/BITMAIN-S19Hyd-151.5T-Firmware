// FUN_0094aac0 @ 0094aac0 size=100 calls_out=3 calls_in=2
// strings: 

void FUN_0094aac0(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = ((uint)(param_1[3] - param_1[1]) >> 3) * -0x33333333 + 1;
  iVar1 = param_1[1];
  while (iVar2 = iVar2 + -1, iVar2 != 0) {
    FUN_019bb7e0(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(iVar1 + 0x14));
    FUN_0094ab64(iVar1 + 0x1c);
    iVar1 = iVar1 + 0x28;
  }
  FUN_0132b958(param_1[2],*param_1,8,0x28);
  return;
}

