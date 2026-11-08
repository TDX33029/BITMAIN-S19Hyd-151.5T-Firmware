// FUN_016eb0f4 @ 016eb0f4 size=372 calls_out=8 calls_in=0
// strings: /aws-lc/crypto/evp_extra/p_dh_asn1.c

undefined8 FUN_016eb0f4(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar4 = *(int *)(param_2 + 8);
  if (((iVar4 == 0) || (iVar1 = FUN_0172a3d4(iVar4), iVar1 == 0)) ||
     (iVar4 = FUN_0172a404(iVar4), iVar4 == 0)) {
    FUN_016e9cd0(6,0,0x76,"/aws-lc/crypto/evp_extra/p_dh_asn1.c",99);
  }
  else {
    if (*(int *)(param_1 + 8) == 0) {
      iVar4 = FUN_0172a2c0();
      *(int *)(param_1 + 8) = iVar4;
      if (iVar4 == 0) {
        return 0;
      }
    }
    uVar5 = *(undefined4 *)(param_2 + 8);
    iVar4 = FUN_0172a3ec(uVar5);
    FUN_0172a3d4(uVar5);
    iVar1 = FUN_0171485c();
    if (iVar4 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_0171485c(iVar4);
    }
    FUN_0172a404(uVar5);
    iVar3 = FUN_0171485c();
    if (((iVar1 != 0) && (iVar3 != 0 && (iVar2 != 0 || iVar4 == 0))) &&
       (iVar4 = FUN_0172a41c(*(undefined4 *)(param_1 + 8),iVar1,iVar2,iVar3), iVar4 != 0)) {
      return 1;
    }
    FUN_017046e0(iVar1);
    FUN_017046e0(iVar2);
    FUN_017046e0(iVar3);
  }
  return 0;
}

