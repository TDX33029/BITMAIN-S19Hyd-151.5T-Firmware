// FUN_01b69d1c @ 01b69d1c size=204 calls_out=2 calls_in=0
// strings: /aws-lc/crypto/fipsmodule/evp/p_ed25519.c | /aws-lc/crypto/fipsmodule/evp/p_ed25519.c

undefined4 FUN_01b69d1c(int param_1,int param_2,uint *param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (*(char *)(*(int *)(*(int *)(param_1 + 8) + 8) + 0x40) == '\0') {
    uVar3 = 0x29;
    uVar2 = 0x82;
LAB_01b69d68:
    FUN_01b053d4(6,0,uVar2,"/aws-lc/crypto/fipsmodule/evp/p_ed25519.c",uVar3);
    return 0;
  }
  if (param_2 != 0) {
    if (*param_3 < 0x40) {
      uVar3 = 0x33;
      uVar2 = 100;
      goto LAB_01b69d68;
    }
    iVar1 = FUN_01b69d08(param_2,param_4,param_5);
    if (iVar1 == 0) {
      return 0;
    }
  }
  *param_3 = 0x40;
  return 1;
}

