// FUN_01b40190 @ 01b40190 size=140 calls_out=2 calls_in=2
// strings: /aws-lc/crypto/fipsmodule/ec/oct.c

int FUN_01b40190(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  
  if ((param_2 & 0xfffffffb) == 2 || param_2 == 4) {
    iVar2 = FUN_01b2b938(param_1 + 0x118);
    iVar1 = iVar2;
    if ((param_2 & 0xfffffffd) != 4) {
      iVar1 = 0;
    }
    iVar1 = iVar1 + iVar2 + 1;
  }
  else {
    FUN_01b053d4(0xf,0,0x6f,"/aws-lc/crypto/fipsmodule/ec/oct.c",0x20);
    iVar1 = 0;
  }
  return iVar1;
}

