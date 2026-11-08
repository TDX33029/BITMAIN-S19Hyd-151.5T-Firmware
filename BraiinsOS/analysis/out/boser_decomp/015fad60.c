// FUN_015fad60 @ 015fad60 size=96 calls_out=3 calls_in=1
// strings: 

void FUN_015fad60(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1[1];
  for (iVar2 = ((uint)(param_1[3] - iVar1) >> 3) * -0x49249249; iVar2 != 0; iVar2 = iVar2 + -1) {
    FUN_0134bd64(*(undefined4 *)(iVar1 + 0x24),*(undefined4 *)(iVar1 + 0x28));
    FUN_015d1bd4(iVar1);
    iVar1 = iVar1 + 0x38;
  }
  FUN_0134aee0(param_1[2],*param_1,8,0x38);
  return;
}

