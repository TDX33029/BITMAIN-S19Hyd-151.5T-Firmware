// FUN_0177f648 @ 0177f648 size=656 calls_out=6 calls_in=2
// strings: /aws-lc/crypto/rsa_extra/rsassa_pss_asn1.c | /aws-lc/crypto/rsa_extra/rsassa_pss_asn1.c | /aws-lc/crypto/rsa_extra/rsassa_pss_asn1.c | /aws-lc/crypto/rsa_extra/rsassa_pss_asn1.c

undefined4 FUN_0177f648(int *param_1,int *param_2,int *param_3,undefined4 *param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  
  if (param_2 == (int *)0x0 || param_1 == (int *)0x0) {
    return 0;
  }
  if (param_4 != (undefined4 *)0x0 && param_3 != (int *)0x0) {
    if (((int *)*param_1 == (int *)0x0) || (iVar1 = *(int *)*param_1, iVar1 == 0x40)) {
      iVar1 = FUN_0172b1f4();
    }
    else {
      if (3 < iVar1 - 0x2a0U) {
        FUN_016e9cd0(4,0,0x80,"/aws-lc/crypto/rsa_extra/rsassa_pss_asn1.c",0x1c8);
        *param_2 = 0;
        return 0;
      }
      switch(iVar1) {
      case 0x2a1:
        iVar1 = FUN_0172b820();
        break;
      case 0x2a2:
        iVar1 = FUN_0172b86c();
        break;
      case 0x2a3:
        iVar1 = FUN_0172b788();
        break;
      default:
        iVar1 = FUN_0172b7d4();
      }
    }
    *param_2 = iVar1;
    if (iVar1 != 0) {
      if (((param_1[1] == 0) || (piVar2 = *(int **)(param_1[1] + 4), piVar2 == (int *)0x0)) ||
         (iVar1 = *piVar2, iVar1 == 0x40)) {
        iVar1 = FUN_0172b1f4();
      }
      else {
        if (3 < iVar1 - 0x2a0U) {
          FUN_016e9cd0(4,0,0x80,"/aws-lc/crypto/rsa_extra/rsassa_pss_asn1.c",0x1c8);
          *param_3 = 0;
          return 0;
        }
        switch(iVar1) {
        case 0x2a1:
          iVar1 = FUN_0172b820();
          break;
        case 0x2a2:
          iVar1 = FUN_0172b86c();
          break;
        case 0x2a3:
          iVar1 = FUN_0172b788();
          break;
        default:
          iVar1 = FUN_0172b7d4();
        }
      }
      *param_3 = iVar1;
      if (iVar1 != 0) {
        puVar3 = (undefined4 *)param_1[2];
        if (puVar3 == (undefined4 *)0x0) {
          uVar4 = 0x14;
        }
        else {
          uVar4 = *puVar3;
          if ((int)puVar3[1] < 0) {
            FUN_016e9cd0(4,0,0x1f5,"/aws-lc/crypto/rsa_extra/rsassa_pss_asn1.c",0x1eb);
            return 0;
          }
        }
        piVar2 = (int *)param_1[3];
        *param_4 = uVar4;
        if ((piVar2 == (int *)0x0) || (*piVar2 == 1 && piVar2[1] == 0)) {
          return 1;
        }
        FUN_016e9cd0(4,0,0x1f6,"/aws-lc/crypto/rsa_extra/rsassa_pss_asn1.c",500);
      }
    }
  }
  return 0;
}

