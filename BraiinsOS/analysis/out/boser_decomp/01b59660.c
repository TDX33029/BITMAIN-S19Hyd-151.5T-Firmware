// FUN_01b59660 @ 01b59660 size=252 calls_out=9 calls_in=0
// strings: /aws-lc/crypto/fipsmodule/evp/p_ec.c

undefined4 FUN_01b59660(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0x14) + 4);
  if (iVar2 == 0) {
    if (*(int *)(param_1 + 8) == 0) {
      FUN_01b053d4(6,0,0x7c,"/aws-lc/crypto/fipsmodule/evp/p_ec.c",0xd8);
      return 0;
    }
    iVar2 = FUN_01b3d638(*(undefined4 *)(*(int *)(param_1 + 8) + 8));
  }
  iVar1 = FUN_01b3d7ac();
  if ((((iVar1 == 0) || (iVar2 = FUN_01b451a8(iVar1,iVar2), iVar2 == 0)) ||
      ((iVar2 = FUN_01b59650(), iVar2 == 0 && (iVar2 = FUN_01b52d0c(iVar1), iVar2 == 0)))) ||
     ((iVar2 = FUN_01b59650(), iVar2 != 0 && (iVar2 = FUN_01b52e34(iVar1), iVar2 == 0)))) {
    FUN_01b3d538(iVar1);
    return 0;
  }
  FUN_01b47a30(param_2,iVar1);
  return 1;
}

