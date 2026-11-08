// FUN_01b47b00 @ 01b47b00 size=164 calls_out=5 calls_in=0
// strings: /aws-lc/crypto/fipsmodule/evp/p_ec.c

undefined4 FUN_01b47b00(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x14);
  if (*(int *)(iVar2 + 4) == 0) {
    FUN_01b053d4(6,0,0x7c,"/aws-lc/crypto/fipsmodule/evp/p_ec.c",0xf2);
  }
  else {
    iVar1 = FUN_01b3d7ac();
    if ((iVar1 != 0) && (iVar2 = FUN_01b451a8(iVar1,*(undefined4 *)(iVar2 + 4)), iVar2 != 0)) {
      FUN_01b47a30(param_2,iVar1);
      return 1;
    }
    FUN_01b3d538(iVar1);
  }
  return 0;
}

