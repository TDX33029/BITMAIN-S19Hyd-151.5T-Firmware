// FUN_0177fdf8 @ 0177fdf8 size=968 calls_out=13 calls_in=0
// strings: /aws-lc/crypto/rsa_extra/rsa_asn1.c | /aws-lc/crypto/rsa_extra/rsa_asn1.c | /aws-lc/crypto/rsa_extra/rsa_asn1.c | /aws-lc/crypto/rsa_extra/rsa_asn1.c

int FUN_0177fdf8(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int local_30;
  int local_2c;
  undefined1 auStack_24 [8];
  int local_1c;
  
  local_1c = DAT_018ddaf8;
  iVar1 = FUN_017530f0();
  if (iVar1 == 0) {
LAB_01780050:
    iVar1 = 0;
  }
  else {
    iVar2 = FUN_016e24e4(param_1,auStack_24,0x20000010);
    if ((iVar2 == 0) || (iVar2 = FUN_016e2bf0(auStack_24,&local_30), iVar2 == 0)) {
      uVar3 = 0x8c;
LAB_017800a4:
      FUN_016e9cd0(4,0,100,"/aws-lc/crypto/rsa_extra/rsa_asn1.c",uVar3);
LAB_01780048:
      FUN_0174ff8c(iVar1);
      goto LAB_01780050;
    }
    if (local_30 != 0 || local_2c != 0) {
      FUN_016e9cd0(4,0,0x6a,"/aws-lc/crypto/rsa_extra/rsa_asn1.c",0x91);
      goto LAB_01780048;
    }
    if (*(int *)(iVar1 + 4) != 0) {
LAB_017801b8:
      FUN_0177f8f8();
      goto LAB_017801bc;
    }
    iVar2 = FUN_017141d0();
    *(int *)(iVar1 + 4) = iVar2;
    if ((iVar2 == 0) || (iVar2 = FUN_016e04b0(auStack_24,iVar2), iVar2 == 0)) goto LAB_01780048;
    if (*(int *)(iVar1 + 8) != 0) goto LAB_017801b8;
    iVar2 = FUN_017141d0();
    *(int *)(iVar1 + 8) = iVar2;
    if ((iVar2 == 0) || (iVar2 = FUN_016e04b0(auStack_24,iVar2), iVar2 == 0)) goto LAB_01780048;
    if (*(int *)(iVar1 + 0xc) != 0) goto LAB_017801b8;
    iVar2 = FUN_017141d0();
    *(int *)(iVar1 + 0xc) = iVar2;
    if ((iVar2 == 0) || (iVar2 = FUN_016e04b0(auStack_24,iVar2), iVar2 == 0)) goto LAB_01780048;
    if (*(int *)(iVar1 + 0x10) != 0) goto LAB_017801b8;
    iVar2 = FUN_017141d0();
    *(int *)(iVar1 + 0x10) = iVar2;
    if ((iVar2 == 0) || (iVar2 = FUN_016e04b0(auStack_24,iVar2), iVar2 == 0)) goto LAB_01780048;
    if (*(int *)(iVar1 + 0x14) != 0) goto LAB_017801b8;
    iVar2 = FUN_017141d0();
    *(int *)(iVar1 + 0x14) = iVar2;
    if ((iVar2 == 0) || (iVar2 = FUN_016e04b0(auStack_24,iVar2), iVar2 == 0)) goto LAB_01780048;
    if (*(int *)(iVar1 + 0x18) != 0) goto LAB_017801b8;
    iVar2 = FUN_017141d0();
    *(int *)(iVar1 + 0x18) = iVar2;
    if ((iVar2 == 0) || (iVar2 = FUN_016e04b0(auStack_24,iVar2), iVar2 == 0)) goto LAB_01780048;
    if (*(int *)(iVar1 + 0x1c) != 0) goto LAB_017801b8;
    iVar2 = FUN_017141d0();
    *(int *)(iVar1 + 0x1c) = iVar2;
    if ((iVar2 == 0) || (iVar2 = FUN_016e04b0(auStack_24,iVar2), iVar2 == 0)) goto LAB_01780048;
    if (*(int *)(iVar1 + 0x20) != 0) goto LAB_017801b8;
    iVar2 = FUN_017141d0();
    *(int *)(iVar1 + 0x20) = iVar2;
    if ((iVar2 == 0) || (iVar2 = FUN_016e04b0(auStack_24,iVar2), iVar2 == 0)) goto LAB_01780048;
    iVar2 = FUN_016e1e1c(auStack_24);
    if (iVar2 != 0) {
      uVar3 = 0xa1;
      goto LAB_017800a4;
    }
    iVar2 = FUN_01717e5c(*(undefined4 *)(iVar1 + 0xc));
    if (((((iVar2 == 0) && (iVar2 = FUN_01717e5c(*(undefined4 *)(iVar1 + 4)), iVar2 == 0)) &&
         (iVar2 = FUN_01717e5c(*(undefined4 *)(iVar1 + 8)), iVar2 != 0)) &&
        ((iVar2 = FUN_01717e5c(*(undefined4 *)(iVar1 + 0x20)), iVar2 != 0 &&
         (iVar2 = FUN_01717e5c(*(undefined4 *)(iVar1 + 0x10)), iVar2 != 0)))) &&
       ((iVar2 = FUN_01717e5c(*(undefined4 *)(iVar1 + 0x14)), iVar2 != 0 &&
        ((iVar2 = FUN_01717e5c(*(undefined4 *)(iVar1 + 0x18)), iVar2 != 0 &&
         (iVar2 = FUN_01717e5c(*(undefined4 *)(iVar1 + 0x1c)), iVar2 != 0)))))) {
      FUN_017046e0(*(undefined4 *)(iVar1 + 8));
      FUN_017046e0(*(undefined4 *)(iVar1 + 0x10));
      FUN_017046e0(*(undefined4 *)(iVar1 + 0x14));
      FUN_017046e0(*(undefined4 *)(iVar1 + 0x18));
      FUN_017046e0(*(undefined4 *)(iVar1 + 0x1c));
      FUN_017046e0(*(undefined4 *)(iVar1 + 0x20));
      *(undefined4 *)(iVar1 + 8) = 0;
      *(undefined4 *)(iVar1 + 0x10) = 0;
      *(undefined4 *)(iVar1 + 0x14) = 0;
      *(undefined4 *)(iVar1 + 0x18) = 0;
      *(undefined4 *)(iVar1 + 0x1c) = 0;
      *(undefined4 *)(iVar1 + 0x20) = 0;
      *(uint *)(iVar1 + 0x30) = *(uint *)(iVar1 + 0x30) | 0x40;
    }
    iVar2 = FUN_0174f320(iVar1);
    if (iVar2 == 0) {
      FUN_016e9cd0(4,0,0x68,"/aws-lc/crypto/rsa_extra/rsa_asn1.c",0xa8);
      goto LAB_01780048;
    }
  }
  if (local_1c == DAT_018ddaf8) {
    return iVar1;
  }
LAB_017801bc:
                    /* WARNING: Subroutine does not return */
  FUN_016d2b78();
}

