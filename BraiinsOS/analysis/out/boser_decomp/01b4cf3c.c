// FUN_01b4cf3c @ 01b4cf3c size=208 calls_out=5 calls_in=1
// strings: /aws-lc/crypto/fipsmodule/evp/p_kem.c | /aws-lc/crypto/fipsmodule/evp/p_kem.c

int FUN_01b4cf3c(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == 0) {
    FUN_01b053d4(6,0,0x43,"/aws-lc/crypto/fipsmodule/evp/p_kem.c",0x18d);
  }
  else {
    iVar1 = FUN_01b4c3ec();
    if ((iVar1 != 0) && (*(int *)(iVar1 + 8) != 0)) {
      iVar2 = FUN_01b4c564();
      if (*(int *)(iVar2 + 0x10) == param_3) {
        iVar2 = FUN_01b4cee8(*(undefined4 *)(iVar1 + 8),param_2);
        if (iVar2 != 0) {
          return iVar1;
        }
      }
      else {
        FUN_01b053d4(6,0,0x89,"/aws-lc/crypto/fipsmodule/evp/p_kem.c",0x199);
      }
    }
    FUN_01b46fd8(iVar1);
  }
  return 0;
}

