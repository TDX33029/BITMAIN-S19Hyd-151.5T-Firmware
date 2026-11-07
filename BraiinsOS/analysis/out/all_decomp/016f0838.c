// FUN_016f0838 @ 016f0838 size=352 calls_out=2 calls_in=0
// strings: /aws-lc/crypto/evp_extra/p_x25519.c | /aws-lc/crypto/evp_extra/p_x25519.c | /aws-lc/crypto/evp_extra/p_x25519.c | /aws-lc/crypto/evp_extra/p_x25519.c | /aws-lc/crypto/evp_extra/p_x25519.c

undefined8 FUN_016f0838(int param_1,int param_2,uint *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(int *)(param_1 + 8) == 0) || (*(int *)(param_1 + 0xc) == 0)) {
    uVar2 = 0x24;
  }
  else {
    iVar1 = *(int *)(*(int *)(param_1 + 8) + 8);
    if (*(int *)(*(int *)(param_1 + 0xc) + 8) != 0 && iVar1 != 0) {
      if (*(char *)(iVar1 + 0x40) == '\0') {
        FUN_016e9cd0(6,0,0x82,"/aws-lc/crypto/evp_extra/p_x25519.c",0x30);
        return 0;
      }
      if (param_2 != 0) {
        if (*param_3 < 0x20) {
          FUN_016e9cd0(6,0,100,"/aws-lc/crypto/evp_extra/p_x25519.c",0x36);
          return 0;
        }
        iVar1 = FUN_017297e0(param_2,iVar1 + 0x20);
        if (iVar1 == 0) {
          FUN_016e9cd0(6,0,0x86,"/aws-lc/crypto/evp_extra/p_x25519.c",0x3a);
          return 0;
        }
      }
      *param_3 = 0x20;
      return 1;
    }
    uVar2 = 0x2b;
  }
  FUN_016e9cd0(6,0,0x75,"/aws-lc/crypto/evp_extra/p_x25519.c",uVar2);
  return 0;
}

