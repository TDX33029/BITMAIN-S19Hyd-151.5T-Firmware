// FUN_00b59584 @ 00b59584 size=100 calls_out=3 calls_in=1
// strings: 

void FUN_00b59584(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = ((uint)(param_1[3] - param_1[1]) >> 4) * -0x55555555 + 1;
  iVar1 = param_1[1];
  while (iVar2 = iVar2 + -1, iVar2 != 0) {
    FUN_019bb7e0(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(iVar1 + 0x14));
    FUN_00b51a0c(iVar1 + 0x20);
    iVar1 = iVar1 + 0x30;
  }
  FUN_0132b958(param_1[2],*param_1,8,0x30);
  return;
}

