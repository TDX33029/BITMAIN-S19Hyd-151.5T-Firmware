// FUN_01b05020 @ 01b05020 size=116 calls_out=4 calls_in=4
// strings: 

int FUN_01b05020(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_01b70844(0);
  if ((iVar1 == 0) && (iVar2 = thunk_FUN_01be5118(0x10c), iVar2 != 0)) {
    FUN_01b04f58(iVar2,0,0x10c);
    iVar3 = FUN_01b708d8(0,iVar2,FUN_01b04fc8);
    if (iVar3 != 0) {
      iVar1 = iVar2;
    }
  }
  return iVar1;
}

