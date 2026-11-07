// FUN_00b169d8 @ 00b169d8 size=60 calls_out=2 calls_in=0
// strings: 

void FUN_00b169d8(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1[2] + 1;
  iVar1 = param_1[1];
  while (iVar2 = iVar2 + -1, iVar2 != 0) {
    FUN_00b16a50(iVar1);
    iVar1 = iVar1 + 0xd8;
  }
  FUN_0132b958(*param_1,param_1[1],8,0xd8);
  return;
}

