// FUN_01abd230 @ 01abd230 size=88 calls_out=2 calls_in=1
// strings: 

void FUN_01abd230(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = ((uint)(param_1[3] - param_1[1]) >> 3) * -0x33333333 + 1;
  iVar1 = param_1[1];
  while (iVar2 = iVar2 + -1, iVar2 != 0) {
    FUN_01ab0ac0(iVar1);
    iVar1 = iVar1 + 0x28;
  }
  FUN_0134aee0(param_1[2],*param_1,4,0x28);
  return;
}

