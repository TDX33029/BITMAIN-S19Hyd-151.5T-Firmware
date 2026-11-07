// FUN_01264de8 @ 01264de8 size=76 calls_out=2 calls_in=9
// strings: 

void FUN_01264de8(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = ((uint)(param_1[3] - param_1[1]) >> 5) + 1;
  iVar1 = param_1[1];
  while (iVar2 = iVar2 + -1, iVar2 != 0) {
    FUN_01264e74(iVar1);
    iVar1 = iVar1 + 0x20;
  }
  FUN_0134aee0(param_1[2],*param_1,8,0x20);
  return;
}

