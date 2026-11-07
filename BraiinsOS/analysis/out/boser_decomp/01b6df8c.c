// FUN_01b6df8c @ 01b6df8c size=204 calls_out=6 calls_in=1
// strings: /aws-lc/crypto/rsa_extra/rsassa_pss_asn1.c

bool FUN_01b6df8c(int *param_1,int *param_2)

{
  int iVar1;
  
  if ((param_1 == (int *)0x0) || (iVar1 = *param_1, iVar1 == 0x40)) {
    iVar1 = FUN_01b3be88();
  }
  else if (iVar1 - 0x2a0U < 4) {
    switch(iVar1) {
    case 0x2a1:
      iVar1 = FUN_01b3c3a0();
      break;
    case 0x2a2:
      iVar1 = FUN_01b3c3ec();
      break;
    case 0x2a3:
      iVar1 = FUN_01b3c308();
      break;
    default:
      iVar1 = FUN_01b3c354();
    }
  }
  else {
    FUN_01b053d4(4,0,0x80,"/aws-lc/crypto/rsa_extra/rsassa_pss_asn1.c",0x1c8);
    iVar1 = 0;
  }
  *param_2 = iVar1;
  return iVar1 != 0;
}

