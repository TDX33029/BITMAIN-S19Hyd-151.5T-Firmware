// FUN_0173058c @ 0173058c size=216 calls_out=2 calls_in=2
// strings: /aws-lc/crypto/fipsmodule/ec/oct.c

int FUN_0173058c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if ((param_2 - 2U & 0xfffffffd) == 0) {
    iVar1 = FUN_01714f1c(param_1 + 0x118);
    iVar2 = iVar1 + 1;
    if (param_2 != 4) {
      return iVar2;
    }
  }
  else {
    if (param_2 != 6) {
      FUN_016e9cd0(0xf,0,0x6f,"/aws-lc/crypto/fipsmodule/ec/oct.c",0x20);
      return 0;
    }
    iVar1 = FUN_01714f1c(param_1 + 0x118);
    iVar2 = iVar1 + 1;
  }
  return iVar2 + iVar1;
}

