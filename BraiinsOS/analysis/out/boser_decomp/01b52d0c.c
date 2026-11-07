// FUN_01b52d0c @ 01b52d0c size=284 calls_out=8 calls_in=2
// strings: /aws-lc/crypto/fipsmodule/ec/ec_key.c | /aws-lc/crypto/fipsmodule/ec/ec_key.c

undefined4 FUN_01b52d0c(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if ((param_1 == (int *)0x0) || (*param_1 == 0)) {
    uVar5 = 0x1aa;
    uVar4 = 0x43;
  }
  else {
    iVar1 = FUN_01b3d268();
    if (0x9f < iVar1) {
      iVar1 = FUN_01b1fcd8(*param_1);
      iVar2 = FUN_01b42428(*param_1);
      if (((iVar2 == 0 || iVar1 == 0) ||
          (iVar3 = FUN_01b52cc4(*param_1,iVar1 + 0x14,&DAT_0053a1cd), iVar3 == 0)) ||
         (iVar3 = FUN_01b446c0(*param_1,iVar2 + 4,iVar1 + 0x14), iVar3 == 0)) {
        FUN_01b3d37c(iVar2);
        FUN_01b6b1c4(iVar1);
        return 0;
      }
      FUN_01b6b1c4(param_1[2]);
      param_1[2] = iVar1;
      FUN_01b3d37c(param_1[1]);
      param_1[1] = iVar2;
      return 1;
    }
    uVar5 = 0x1b0;
    uVar4 = 0x70;
  }
  FUN_01b053d4(0xf,0,uVar4,"/aws-lc/crypto/fipsmodule/ec/ec_key.c",uVar5);
  return 0;
}

