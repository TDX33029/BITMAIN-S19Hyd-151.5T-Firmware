// FUN_015faedc @ 015faedc size=88 calls_out=2 calls_in=1
// strings: 

void FUN_015faedc(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = ((uint)(param_1[3] - param_1[1]) >> 2) * -0x33333333 + 1;
  iVar1 = param_1[1];
  while (iVar2 = iVar2 + -1, iVar2 != 0) {
    FUN_015e8b90(iVar1);
    iVar1 = iVar1 + 0x14;
  }
  FUN_0134aee0(param_1[2],*param_1,4,0x14);
  return;
}

