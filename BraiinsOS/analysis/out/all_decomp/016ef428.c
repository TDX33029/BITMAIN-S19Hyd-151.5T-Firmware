// FUN_016ef428 @ 016ef428 size=776 calls_out=10 calls_in=0
// strings: /aws-lc/crypto/evp_extra/p_pqdsa_asn1.c | /aws-lc/crypto/evp_extra/p_pqdsa_asn1.c | /aws-lc/crypto/evp_extra/p_pqdsa_asn1.c | /aws-lc/crypto/evp_extra/p_pqdsa_asn1.c | /aws-lc/crypto/evp_extra/p_pqdsa_asn1.c | /aws-lc/crypto/evp_extra/p_pqdsa_asn1.c

undefined4 FUN_016ef428(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_3c [8];
  undefined1 auStack_34 [8];
  undefined1 auStack_2c [8];
  int local_24;
  
  local_24 = DAT_018ddaf8;
  iVar1 = FUN_016e1e1c(param_3,param_2,&PTR_018bc3f4,0);
  if (iVar1 == 0) {
    uVar2 = FUN_0177b9fc(param_2);
    iVar1 = FUN_01749028(param_1,uVar2);
    if (iVar1 == 0) {
      FUN_016e9cd0(6,0,0x66,"/aws-lc/crypto/evp_extra/p_pqdsa_asn1.c",0x99);
    }
    else {
      iVar1 = FUN_016e25e0(param_4,0x80000000);
      if (iVar1 == 0) {
        iVar1 = FUN_016e25e0(param_4,4);
        if (iVar1 == 0) {
          iVar1 = FUN_016e25e0(param_4,0x20000010);
          if (iVar1 != 0) {
            iVar1 = FUN_016e24e4(param_4,auStack_3c,0x20000010);
            if ((iVar1 != 0) && (iVar1 = FUN_016e24e4(auStack_3c,auStack_34,4), iVar1 != 0)) {
              iVar1 = FUN_016e24e4(auStack_3c,auStack_2c,4);
              if (iVar1 != 0) {
                uVar2 = FUN_01748c6c(*(undefined4 *)(param_1 + 8),auStack_34,auStack_2c);
                goto LAB_016ef528;
              }
            }
            FUN_016e9cd0(6,0,0x66,"/aws-lc/crypto/evp_extra/p_pqdsa_asn1.c",0xc5);
            uVar2 = 0;
            goto LAB_016ef528;
          }
          FUN_016e9cd0(6,0,0x66,"/aws-lc/crypto/evp_extra/p_pqdsa_asn1.c",0xcb);
        }
        else {
          iVar1 = FUN_016e24e4(param_4,auStack_2c,4);
          if (iVar1 == 0) {
            FUN_016e9cd0(6,0,0x66,"/aws-lc/crypto/evp_extra/p_pqdsa_asn1.c",0xb5);
          }
          else {
            iVar1 = FUN_016e1e1c(auStack_2c);
            if (iVar1 == *(int *)(**(int **)(param_1 + 8) + 0x14)) {
              uVar2 = FUN_01748b00(*(int **)(param_1 + 8),auStack_2c);
              goto LAB_016ef528;
            }
            FUN_016e9cd0(6,0,0x89,"/aws-lc/crypto/evp_extra/p_pqdsa_asn1.c",0xba);
          }
        }
      }
      else {
        iVar1 = FUN_016e24e4(param_4,auStack_2c,0x80000000);
        if (iVar1 == 0) {
          FUN_016e9cd0(6,0,0x66,"/aws-lc/crypto/evp_extra/p_pqdsa_asn1.c",0xa7);
        }
        else {
          iVar1 = FUN_016e1e1c(auStack_2c);
          if (iVar1 == *(int *)(**(int **)(param_1 + 8) + 0x1c)) {
            uVar2 = FUN_0174891c(*(int **)(param_1 + 8),auStack_2c);
            goto LAB_016ef528;
          }
          FUN_016e9cd0(6,0,0x89,"/aws-lc/crypto/evp_extra/p_pqdsa_asn1.c",0xac);
        }
      }
    }
  }
  else {
    FUN_016e9cd0(6,0,0x66,"/aws-lc/crypto/evp_extra/p_pqdsa_asn1.c",0x93);
  }
  uVar2 = 0;
LAB_016ef528:
  if (local_24 != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return uVar2;
}

