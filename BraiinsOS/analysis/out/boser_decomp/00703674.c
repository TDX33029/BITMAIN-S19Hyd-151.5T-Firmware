// FUN_00703674 @ 00703674 size=76 calls_out=2 calls_in=0
// strings: 

void FUN_00703674(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = ((uint)(param_1[3] - param_1[1]) >> 6) + 1;
  iVar1 = param_1[1];
  while (iVar2 = iVar2 + -1, iVar2 != 0) {
    FUN_007022d4(iVar1);
    iVar1 = iVar1 + 0x40;
  }
  FUN_0134aee0(param_1[2],*param_1,8,0x40);
  return;
}

