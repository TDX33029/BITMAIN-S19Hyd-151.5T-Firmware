// FUN_01b6efac @ 01b6efac size=720 calls_out=11 calls_in=0
// strings: /aws-lc/crypto/rsa_extra/rsa_asn1.c | /aws-lc/crypto/rsa_extra/rsa_asn1.c | /aws-lc/crypto/rsa_extra/rsa_asn1.c

int FUN_01b6efac(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int local_30;
  int local_2c;
  undefined1 auStack_24 [8];
  int local_1c;
  
  local_1c = DAT_01d53560;
  iVar1 = FUN_01b58d74();
  if (iVar1 != 0) {
    iVar2 = FUN_01afddc0(param_1,auStack_24,0x20000010);
    if ((iVar2 == 0) || (iVar2 = FUN_01afe3d0(auStack_24,&local_30), iVar2 == 0)) {
      uVar4 = 0x8c;
LAB_01b6f018:
      uVar3 = 100;
LAB_01b6f05c:
      FUN_01b053d4(4,0,uVar3,"/aws-lc/crypto/rsa_extra/rsa_asn1.c",uVar4);
    }
    else {
      if (local_30 != 0 || local_2c != 0) {
        uVar4 = 0x91;
        uVar3 = 0x6a;
        goto LAB_01b6f05c;
      }
      iVar2 = FUN_01b6ea68(auStack_24,iVar1 + 4);
      if (((((iVar2 != 0) && (iVar2 = FUN_01b6ea68(auStack_24,iVar1 + 8), iVar2 != 0)) &&
           (iVar2 = FUN_01b6ea68(auStack_24,iVar1 + 0xc), iVar2 != 0)) &&
          ((iVar2 = FUN_01b6ea68(auStack_24,iVar1 + 0x10), iVar2 != 0 &&
           (iVar2 = FUN_01b6ea68(auStack_24,iVar1 + 0x14), iVar2 != 0)))) &&
         ((iVar2 = FUN_01b6ea68(auStack_24,iVar1 + 0x18), iVar2 != 0 &&
          ((iVar2 = FUN_01b6ea68(auStack_24,iVar1 + 0x1c), iVar2 != 0 &&
           (iVar2 = FUN_01b6ea68(auStack_24,iVar1 + 0x20), iVar2 != 0)))))) {
        iVar2 = FUN_01afd684(auStack_24);
        if (iVar2 != 0) {
          uVar4 = 0xa1;
          goto LAB_01b6f018;
        }
        iVar2 = FUN_01b2e300(*(undefined4 *)(iVar1 + 0xc));
        if ((((iVar2 == 0) && (iVar2 = FUN_01b2e300(*(undefined4 *)(iVar1 + 4)), iVar2 == 0)) &&
            (iVar2 = FUN_01b2e300(*(undefined4 *)(iVar1 + 8)), iVar2 != 0)) &&
           (((iVar2 = FUN_01b2e300(*(undefined4 *)(iVar1 + 0x20)), iVar2 != 0 &&
             (iVar2 = FUN_01b2e300(*(undefined4 *)(iVar1 + 0x10)), iVar2 != 0)) &&
            ((iVar2 = FUN_01b2e300(*(undefined4 *)(iVar1 + 0x14)), iVar2 != 0 &&
             ((iVar2 = FUN_01b2e300(*(undefined4 *)(iVar1 + 0x18)), iVar2 != 0 &&
              (iVar2 = FUN_01b2e300(*(undefined4 *)(iVar1 + 0x1c)), iVar2 != 0)))))))) {
          FUN_01b1f904(*(undefined4 *)(iVar1 + 8));
          FUN_01b1f904(*(undefined4 *)(iVar1 + 0x10));
          FUN_01b1f904(*(undefined4 *)(iVar1 + 0x14));
          FUN_01b1f904(*(undefined4 *)(iVar1 + 0x18));
          FUN_01b1f904(*(undefined4 *)(iVar1 + 0x1c));
          FUN_01b1f904(*(undefined4 *)(iVar1 + 0x20));
          *(undefined4 *)(iVar1 + 8) = 0;
          *(undefined4 *)(iVar1 + 0x10) = 0;
          *(undefined4 *)(iVar1 + 0x14) = 0;
          *(undefined4 *)(iVar1 + 0x18) = 0;
          *(undefined4 *)(iVar1 + 0x1c) = 0;
          *(undefined4 *)(iVar1 + 0x20) = 0;
          *(uint *)(iVar1 + 0x30) = *(uint *)(iVar1 + 0x30) | 0x40;
        }
        iVar2 = FUN_01b55afc(iVar1);
        if (iVar2 != 0) goto LAB_01b6f070;
        uVar4 = 0xa8;
        uVar3 = 0x68;
        goto LAB_01b6f05c;
      }
    }
    FUN_01b564e4(iVar1);
  }
  iVar1 = 0;
LAB_01b6f070:
  if (local_1c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return iVar1;
}

