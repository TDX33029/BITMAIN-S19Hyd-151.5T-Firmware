// FUN_01b49be0 @ 01b49be0 size=220 calls_out=5 calls_in=0
// strings: /aws-lc/crypto/fipsmodule/evp/p_hmac.c | /aws-lc/crypto/fipsmodule/evp/p_hmac.c

undefined4 FUN_01b49be0(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  
  if (param_2 == 0) {
    uVar5 = 0x71;
    uVar3 = 0x43;
    uVar1 = 0xe;
  }
  else {
    iVar4 = *(int *)(param_1 + 0x14);
    if (iVar4 != 0) {
      puVar2 = (undefined4 *)FUN_01b49a00();
      if (puVar2 == (undefined4 *)0x0) {
        return 0;
      }
      iVar4 = FUN_01b49b48(puVar2,iVar4 + 0x4c8);
      if ((iVar4 == 0) || (iVar4 = FUN_01b47c44(param_2,0x357,puVar2), iVar4 == 0)) {
        FUN_01b6b1c4(*puVar2);
        FUN_01b6b1c4(puVar2);
        return 0;
      }
      return 1;
    }
    uVar5 = 0x75;
    uVar3 = 0x7e;
    uVar1 = 6;
  }
  FUN_01b053d4(uVar1,0,uVar3,"/aws-lc/crypto/fipsmodule/evp/p_hmac.c",uVar5);
  return 0;
}

