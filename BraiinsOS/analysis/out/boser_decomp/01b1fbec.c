// FUN_01b1fbec @ 01b1fbec size=220 calls_out=1 calls_in=2
// strings: /aws-lc/crypto/fipsmodule/rsa/rsa.c | /aws-lc/crypto/fipsmodule/rsa/rsa.c | /aws-lc/crypto/fipsmodule/rsa/rsa.c

undefined4 FUN_01b1fbec(int param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_1 == 0x72) {
    if (param_2 == 0x24) {
      return 1;
    }
    uVar3 = 0x2d8;
LAB_01b1fc28:
    uVar1 = 0x7d;
  }
  else {
    iVar2 = 0;
    while( true ) {
      if ((&DAT_0053a9d4)[iVar2 * 7] == 0) break;
      if ((&DAT_0053a9d4)[iVar2 * 7] == param_1) {
        if ((byte)(&DAT_0053a9d8)[iVar2 * 0x1c] == param_2) {
          return 1;
        }
        uVar3 = 0x2e2;
        goto LAB_01b1fc28;
      }
      iVar2 = iVar2 + 1;
    }
    uVar3 = 0x2e9;
    uVar1 = 0x8e;
  }
  FUN_01b053d4(4,0,uVar1,"/aws-lc/crypto/fipsmodule/rsa/rsa.c",uVar3);
  return 0;
}

