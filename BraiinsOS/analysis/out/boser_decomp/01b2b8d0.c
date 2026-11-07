// FUN_01b2b8d0 @ 01b2b8d0 size=104 calls_out=2 calls_in=25
// strings: 

int FUN_01b2b8d0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_01b2b88c();
  if (iVar1 == 0) {
    return 0;
  }
  iVar2 = FUN_01b2aec4(*(undefined4 *)(*param_1 + (iVar1 + 0x3fffffff) * 4));
  return iVar2 + (iVar1 + -1) * 0x20;
}

