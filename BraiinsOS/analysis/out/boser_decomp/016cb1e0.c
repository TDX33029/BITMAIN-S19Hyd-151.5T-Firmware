// FUN_016cb1e0 @ 016cb1e0 size=68 calls_out=2 calls_in=1
// strings: 

void FUN_016cb1e0(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_1[1];
  iVar1 = iVar2;
  for (iVar3 = param_1[2]; iVar3 != 0; iVar3 = iVar3 + -1) {
    FUN_0070899c(iVar1);
    iVar1 = iVar1 + 0x20;
  }
  FUN_0134aee0(*param_1,iVar2,8,0x20);
  return;
}

