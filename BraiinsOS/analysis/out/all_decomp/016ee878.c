// FUN_016ee878 @ 016ee878 size=624 calls_out=10 calls_in=0
// strings: /aws-lc/crypto/evp_extra/p_kem_asn1.c | /aws-lc/crypto/evp_extra/p_kem_asn1.c | /aws-lc/crypto/evp_extra/p_kem_asn1.c | /aws-lc/crypto/evp_extra/p_kem_asn1.c | /aws-lc/crypto/evp_extra/p_kem_asn1.c | /aws-lc/crypto/evp_extra/p_kem_asn1.c

undefined4 FUN_016ee878(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined1 auStack_2c [8];
  int local_24;
  
  local_24 = DAT_018ddaf8;
  iVar1 = FUN_016e1e1c(param_3,param_2,&PTR_018bc3f4,0);
  if (iVar1 == 0) {
    uVar2 = FUN_0177b9fc(param_2);
    iVar1 = FUN_01740200(param_1,uVar2);
    if (iVar1 == 0) {
      FUN_016e9cd0(6,0,0x66,"/aws-lc/crypto/evp_extra/p_kem_asn1.c",0xb1);
    }
    else {
      iVar1 = FUN_016e25e0(param_4,0x80000000);
      if (iVar1 == 0) {
        iVar1 = FUN_016e25e0(param_4,4);
        if (iVar1 != 0) {
          iVar1 = FUN_016e24e4(param_4,auStack_2c,4);
          uVar2 = 0;
          if (iVar1 == 0) {
            FUN_016e9cd0(6,0,0x66,"/aws-lc/crypto/evp_extra/p_kem_asn1.c",0xcd);
          }
          else {
            iVar1 = FUN_016e1e1c(auStack_2c);
            piVar3 = *(int **)(param_1 + 8);
            if (iVar1 == *(int *)(*piVar3 + 0x14)) {
              uVar2 = FUN_016e1e04(auStack_2c);
              uVar2 = FUN_01741078(piVar3,uVar2);
            }
            else {
              FUN_016e9cd0(6,0,0x89,"/aws-lc/crypto/evp_extra/p_kem_asn1.c",0xd2);
            }
          }
          goto LAB_016ee978;
        }
        FUN_016e9cd0(6,0,0x66,"/aws-lc/crypto/evp_extra/p_kem_asn1.c",0xd9);
      }
      else {
        iVar1 = FUN_016e24e4(param_4,auStack_2c,0x80000000);
        if (iVar1 == 0) {
          FUN_016e9cd0(6,0,0x66,"/aws-lc/crypto/evp_extra/p_kem_asn1.c",0xbf);
        }
        else {
          iVar1 = FUN_016e1e1c(auStack_2c);
          if (iVar1 == *(int *)(**(int **)(param_1 + 8) + 0x20)) {
            uVar2 = FUN_017410d8(*(int **)(param_1 + 8),auStack_2c);
            goto LAB_016ee978;
          }
          FUN_016e9cd0(6,0,0x89,"/aws-lc/crypto/evp_extra/p_kem_asn1.c",0xc4);
        }
      }
    }
  }
  else {
    FUN_016e9cd0(6,0,0x66,"/aws-lc/crypto/evp_extra/p_kem_asn1.c",0xab);
  }
  uVar2 = 0;
LAB_016ee978:
  if (local_24 != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return uVar2;
}

