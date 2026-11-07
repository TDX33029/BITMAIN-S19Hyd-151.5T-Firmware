// FUN_01b4c250 @ 01b4c250 size=196 calls_out=2 calls_in=1
// strings: /aws-lc/crypto/fipsmodule/evp/p_kem.c | /aws-lc/crypto/fipsmodule/evp/p_kem.c | /aws-lc/crypto/fipsmodule/evp/p_kem.c

undefined4 FUN_01b4c250(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if ((param_1 == 0) || (*(int *)(param_1 + 0x14) == 0)) {
    uVar3 = 0x151;
    uVar2 = 0x43;
  }
  else if (*(int *)(param_1 + 8) == 0) {
    iVar1 = FUN_01b4c154(param_2);
    if (iVar1 != 0) {
      **(int **)(param_1 + 0x14) = iVar1;
      return 1;
    }
    uVar3 = 0x15e;
    uVar2 = 0x80;
  }
  else {
    uVar3 = 0x158;
    uVar2 = 0x72;
  }
  FUN_01b053d4(6,0,uVar2,"/aws-lc/crypto/fipsmodule/evp/p_kem.c",uVar3);
  return 0;
}

