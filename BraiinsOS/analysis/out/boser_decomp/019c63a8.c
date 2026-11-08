// FUN_019c63a8 @ 019c63a8 size=68 calls_out=2 calls_in=0
// strings: 

void FUN_019c63a8(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_1[1];
  iVar1 = iVar2;
  for (iVar3 = param_1[2]; iVar3 != 0; iVar3 = iVar3 + -1) {
    FUN_019bd168(iVar1);
    iVar1 = iVar1 + 0x38;
  }
  FUN_0134aee0(*param_1,iVar2,8,0x38);
  return;
}

