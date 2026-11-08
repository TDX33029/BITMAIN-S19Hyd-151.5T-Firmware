// FUN_01b0b68c @ 01b0b68c size=292 calls_out=2 calls_in=0
// strings: /aws-lc/crypto/evp_extra/p_x25519.c | /aws-lc/crypto/evp_extra/p_x25519.c | /aws-lc/crypto/evp_extra/p_x25519.c | /aws-lc/crypto/evp_extra/p_x25519.c | /aws-lc/crypto/evp_extra/p_x25519.c

undefined4 FUN_01b0b68c(int param_1,int param_2,uint *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((*(int *)(param_1 + 8) == 0) || (*(int *)(param_1 + 0xc) == 0)) {
    uVar3 = 0x24;
  }
  else {
    iVar2 = *(int *)(*(int *)(param_1 + 8) + 8);
    if (*(int *)(*(int *)(param_1 + 0xc) + 8) != 0 && iVar2 != 0) {
      if (*(char *)(iVar2 + 0x40) == '\0') {
        uVar3 = 0x30;
        uVar1 = 0x82;
      }
      else {
        if (param_2 == 0) {
LAB_01b0b7a0:
          *param_3 = 0x20;
          return 1;
        }
        if (*param_3 < 0x20) {
          uVar3 = 0x36;
          uVar1 = 100;
        }
        else {
          iVar2 = FUN_01b3aac8(param_2,iVar2 + 0x20);
          if (iVar2 != 0) goto LAB_01b0b7a0;
          uVar3 = 0x3a;
          uVar1 = 0x86;
        }
      }
      goto LAB_01b0b6d8;
    }
    uVar3 = 0x2b;
  }
  uVar1 = 0x75;
LAB_01b0b6d8:
  FUN_01b053d4(6,0,uVar1,"/aws-lc/crypto/evp_extra/p_x25519.c",uVar3);
  return 0;
}

