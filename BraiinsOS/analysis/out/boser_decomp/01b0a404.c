// FUN_01b0a404 @ 01b0a404 size=704 calls_out=10 calls_in=0
// strings: /aws-lc/crypto/evp_extra/p_pqdsa_asn1.c | /aws-lc/crypto/evp_extra/p_pqdsa_asn1.c | /aws-lc/crypto/evp_extra/p_pqdsa_asn1.c | /aws-lc/crypto/evp_extra/p_pqdsa_asn1.c | /aws-lc/crypto/evp_extra/p_pqdsa_asn1.c | /aws-lc/crypto/evp_extra/p_pqdsa_asn1.c

undefined4 FUN_01b0a404(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_3c [8];
  undefined1 auStack_34 [8];
  undefined1 auStack_2c [8];
  int local_24;
  
  local_24 = DAT_01d53560;
  iVar1 = FUN_01afd684(param_3,&PTR_01d3b2b0,param_3,0);
  if (iVar1 == 0) {
    uVar4 = FUN_01b6befc(param_2);
    iVar1 = FUN_01b511a0(param_1,uVar4);
    if (iVar1 == 0) {
      uVar4 = 0x99;
    }
    else {
      iVar1 = FUN_01afdebc(param_4,0x80000000);
      if (iVar1 == 0) {
        iVar1 = FUN_01afdebc(param_4,4);
        if (iVar1 != 0) {
          iVar1 = FUN_01afddc0(param_4,auStack_2c,4);
          if (iVar1 == 0) {
            uVar3 = 0xb5;
            uVar4 = 0x66;
          }
          else {
            iVar1 = FUN_01afd684(auStack_2c);
            if (iVar1 == *(int *)(**(int **)(param_1 + 8) + 0x14)) {
              uVar3 = FUN_01b50ce0(*(int **)(param_1 + 8),auStack_2c);
              goto LAB_01b0a478;
            }
            uVar3 = 0xba;
            uVar4 = 0x89;
          }
          FUN_01b053d4(6,0,uVar4,"/aws-lc/crypto/evp_extra/p_pqdsa_asn1.c",uVar3);
          uVar3 = 0;
          goto LAB_01b0a478;
        }
        iVar1 = FUN_01afdebc(param_4,0x20000010);
        if (iVar1 != 0) {
          iVar1 = FUN_01afddc0(param_4,auStack_3c,0x20000010);
          if (((iVar1 == 0) || (iVar1 = FUN_01afddc0(auStack_3c,auStack_34,4), iVar1 == 0)) ||
             (iVar1 = FUN_01afddc0(auStack_3c,auStack_2c,4), iVar1 == 0)) {
            FUN_01b053d4(6,0,0x66,"/aws-lc/crypto/evp_extra/p_pqdsa_asn1.c",0xc5);
            uVar3 = 0;
          }
          else {
            uVar3 = FUN_01b50e24(*(undefined4 *)(param_1 + 8),auStack_34,auStack_2c);
          }
          goto LAB_01b0a478;
        }
        uVar4 = 0xcb;
      }
      else {
        iVar1 = FUN_01afddc0(param_4,auStack_2c,0x80000000);
        if (iVar1 != 0) {
          iVar1 = FUN_01afd684(auStack_2c);
          if (iVar1 == *(int *)(**(int **)(param_1 + 8) + 0x1c)) {
            uVar3 = FUN_01b50b28(*(int **)(param_1 + 8),auStack_2c);
            goto LAB_01b0a478;
          }
          uVar4 = 0xac;
          uVar2 = 0x89;
          goto LAB_01b0a46c;
        }
        uVar4 = 0xa7;
      }
    }
    uVar2 = 0x66;
  }
  else {
    uVar4 = 0x93;
    uVar2 = 0x66;
  }
LAB_01b0a46c:
  uVar3 = 0;
  FUN_01b053d4(6,0,uVar2,"/aws-lc/crypto/evp_extra/p_pqdsa_asn1.c",uVar4);
LAB_01b0a478:
  if (local_24 != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return uVar3;
}

