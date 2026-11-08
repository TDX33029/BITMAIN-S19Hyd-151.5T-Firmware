// FUN_0177f938 @ 0177f938 size=368 calls_out=10 calls_in=2
// strings: /aws-lc/crypto/rsa_extra/rsa_asn1.c | /aws-lc/crypto/rsa_extra/rsa_asn1.c

int FUN_0177f938(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_24 [8];
  int local_1c;
  
  local_1c = DAT_018ddaf8;
  iVar1 = FUN_017530f0();
  if (iVar1 == 0) {
LAB_0177fa84:
    iVar1 = 0;
  }
  else {
    iVar2 = FUN_016e24e4(param_1,auStack_24,0x20000010);
    if (iVar2 == 0) {
LAB_0177fa5c:
      uVar4 = 0x31;
      uVar3 = 100;
LAB_0177fa6c:
      FUN_016e9cd0(4,0,uVar3,"/aws-lc/crypto/rsa_extra/rsa_asn1.c",uVar4);
      FUN_0174ff8c(iVar1);
      goto LAB_0177fa84;
    }
    if (*(int *)(iVar1 + 4) != 0) {
LAB_0177faa0:
      FUN_0177f8f8();
      goto LAB_0177faa4;
    }
    iVar2 = FUN_017141d0();
    *(int *)(iVar1 + 4) = iVar2;
    if ((iVar2 == 0) || (iVar2 = FUN_016e04b0(auStack_24,iVar2), iVar2 == 0)) goto LAB_0177fa5c;
    if (*(int *)(iVar1 + 8) != 0) goto LAB_0177faa0;
    iVar2 = FUN_017141d0();
    *(int *)(iVar1 + 8) = iVar2;
    if (((iVar2 == 0) || (iVar2 = FUN_016e04b0(auStack_24,iVar2), iVar2 == 0)) ||
       (iVar2 = FUN_016e1e1c(auStack_24), iVar2 != 0)) goto LAB_0177fa5c;
    iVar2 = FUN_0174f320(iVar1);
    if (iVar2 == 0) {
      uVar4 = 0x37;
      uVar3 = 0x68;
      goto LAB_0177fa6c;
    }
  }
  if (local_1c == DAT_018ddaf8) {
    return iVar1;
  }
LAB_0177faa4:
                    /* WARNING: Subroutine does not return */
  FUN_016d2b78();
}

