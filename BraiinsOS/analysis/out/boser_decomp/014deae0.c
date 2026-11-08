// FUN_014deae0 @ 014deae0 size=76 calls_out=2 calls_in=8
// strings: 

void FUN_014deae0(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = ((uint)(param_1[3] - param_1[1]) >> 5) + 1;
  iVar1 = param_1[1];
  while (iVar2 = iVar2 + -1, iVar2 != 0) {
    FUN_014ddfc0(iVar1);
    iVar1 = iVar1 + 0x20;
  }
  FUN_0134aee0(param_1[2],*param_1,8,0x20);
  return;
}

