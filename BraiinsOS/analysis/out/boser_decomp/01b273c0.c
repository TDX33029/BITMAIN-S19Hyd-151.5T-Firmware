// FUN_01b273c0 @ 01b273c0 size=192 calls_out=3 calls_in=0
// strings: /aws-lc/crypto/fipsmodule/evp/p_ed25519ph.c | /aws-lc/crypto/fipsmodule/evp/p_ed25519ph.c

int FUN_01b273c0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar1 = FUN_01b1fd70();
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x14);
    if (iVar2 == 0) {
      uVar4 = 0x2b;
    }
    else {
      iVar3 = *(int *)(param_2 + 0x14);
      if (iVar3 != 0) {
        FUN_01b26974(iVar2,iVar3,0xff);
        *(undefined4 *)(iVar2 + 0x100) = *(undefined4 *)(iVar3 + 0x100);
        return iVar1;
      }
      uVar4 = 0x2c;
    }
    FUN_01b053d4(0xe,0,0x43,"/aws-lc/crypto/fipsmodule/evp/p_ed25519ph.c",uVar4);
  }
  return 0;
}

