// FUN_00b16b18 @ 00b16b18 size=60 calls_out=2 calls_in=0
// strings: 

void FUN_00b16b18(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1[2] + 1;
  iVar1 = param_1[1];
  while (iVar2 = iVar2 + -1, iVar2 != 0) {
    FUN_00b16b90(iVar1);
    iVar1 = iVar1 + 0x1a0;
  }
  FUN_0132b958(*param_1,param_1[1],8,0x1a0);
  return;
}

