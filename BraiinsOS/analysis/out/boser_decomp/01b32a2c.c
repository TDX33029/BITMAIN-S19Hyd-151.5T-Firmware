// FUN_01b32a2c @ 01b32a2c size=304 calls_out=8 calls_in=2
// strings: /aws-lc/crypto/fipsmodule/bn/montgomery.c | /aws-lc/crypto/fipsmodule/bn/montgomery.c | /aws-lc/crypto/fipsmodule/bn/montgomery.c | /aws-lc/crypto/fipsmodule/bn/montgomery.c | /aws-lc/crypto/fipsmodule/bn/montgomery.c

undefined4 FUN_01b32a2c(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  iVar1 = FUN_01b2e300(param_2);
  if (iVar1 == 0) {
    iVar1 = FUN_01b2e5fc(param_2);
    if (iVar1 == 0) {
      uVar4 = 0x69;
      uVar2 = 0x68;
    }
    else {
      iVar1 = FUN_01b2b230(param_2);
      if (iVar1 == 0) {
        iVar1 = FUN_01b2b09c(param_2,0x800);
        if (iVar1 == 0) {
          uVar4 = 0x71;
          uVar2 = 0x66;
        }
        else {
          iVar1 = FUN_01b2b33c(param_1 + 0x14,param_2);
          if (iVar1 != 0) {
            FUN_01b2b964(param_1 + 0x14);
            uVar3 = FUN_01b328ac(param_1 + 0x14);
            *(undefined8 *)(param_1 + 0x28) = uVar3;
            return 1;
          }
          uVar4 = 0x77;
          uVar2 = 0x44;
        }
      }
      else {
        uVar2 = 0x6d;
        uVar4 = 0x6d;
      }
    }
  }
  else {
    uVar4 = 0x65;
    uVar2 = 0x69;
  }
  FUN_01b053d4(3,0,uVar2,"/aws-lc/crypto/fipsmodule/bn/montgomery.c",uVar4);
  return 0;
}

