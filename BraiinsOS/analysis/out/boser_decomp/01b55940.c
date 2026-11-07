// FUN_01b55940 @ 01b55940 size=416 calls_out=5 calls_in=3
// strings: /aws-lc/crypto/fipsmodule/rsa/rsa.c | /aws-lc/crypto/fipsmodule/rsa/rsa.c | /aws-lc/crypto/fipsmodule/rsa/rsa.c | /aws-lc/crypto/fipsmodule/rsa/rsa.c | /aws-lc/crypto/fipsmodule/rsa/rsa.c

undefined4 FUN_01b55940(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (*(int *)(param_1 + 4) == 0) {
    uVar4 = 0x43d;
  }
  else {
    uVar1 = FUN_01b2b8d0(*(int *)(param_1 + 4));
    if (0x4000 < uVar1) {
      uVar4 = 0x443;
      uVar3 = 0x80;
      goto LAB_01b559a8;
    }
    iVar2 = FUN_01b2e5fc(*(undefined4 *)(param_1 + 4));
    if ((iVar2 == 0) || (iVar2 = FUN_01b2b230(*(undefined4 *)(param_1 + 4)), iVar2 != 0)) {
      uVar4 = 0x44a;
      uVar3 = 0x68;
      goto LAB_01b559a8;
    }
    if (*(int *)(param_1 + 8) != 0) {
      uVar1 = FUN_01b2b8d0();
      iVar2 = FUN_01b2e5fc(*(undefined4 *)(param_1 + 8));
      if ((iVar2 == 0) ||
         (iVar2 = FUN_01b2b230(*(undefined4 *)(param_1 + 8)), iVar2 != 0 || uVar1 < 2)) {
        uVar4 = 0x462;
      }
      else {
        if ((*(uint *)(param_1 + 0x30) & 0x80) == 0) {
          if (uVar1 < 0x22) {
            return 1;
          }
          uVar4 = 0x474;
          uVar3 = 0x65;
          goto LAB_01b559a8;
        }
        iVar2 = FUN_01b2be1c(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
        if (0 < iVar2) {
          return 1;
        }
        uVar4 = 0x46a;
      }
      uVar3 = 0x65;
      goto LAB_01b559a8;
    }
    if ((*(uint *)(param_1 + 0x30) & 0x40) != 0) {
      return 1;
    }
    uVar4 = 0x453;
  }
  uVar3 = 0x90;
LAB_01b559a8:
  FUN_01b053d4(4,0,uVar3,"/aws-lc/crypto/fipsmodule/rsa/rsa.c",uVar4);
  return 0;
}

