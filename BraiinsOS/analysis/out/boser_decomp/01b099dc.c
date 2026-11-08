// FUN_01b099dc @ 01b099dc size=556 calls_out=10 calls_in=0
// strings: /aws-lc/crypto/evp_extra/p_kem_asn1.c | /aws-lc/crypto/evp_extra/p_kem_asn1.c | /aws-lc/crypto/evp_extra/p_kem_asn1.c | /aws-lc/crypto/evp_extra/p_kem_asn1.c | /aws-lc/crypto/evp_extra/p_kem_asn1.c

undefined4 FUN_01b099dc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined1 auStack_24 [8];
  int local_1c;
  
  local_1c = DAT_01d53560;
  iVar1 = FUN_01afd684(param_3,&PTR_01d3b2b0,param_3,0);
  if (iVar1 == 0) {
    uVar5 = FUN_01b6befc(param_2);
    iVar1 = FUN_01b4c338(param_1,uVar5);
    if (iVar1 == 0) {
      uVar5 = 0xb1;
    }
    else {
      iVar1 = FUN_01afdebc(param_4,0x80000000);
      if (iVar1 == 0) {
        iVar1 = FUN_01afdebc(param_4,4);
        if (iVar1 != 0) {
          iVar1 = FUN_01afddc0(param_4,auStack_24,4);
          if (iVar1 == 0) {
            uVar3 = 0xcd;
            uVar5 = 0x66;
          }
          else {
            iVar1 = FUN_01afd684(auStack_24);
            piVar4 = *(int **)(param_1 + 8);
            if (iVar1 == *(int *)(*piVar4 + 0x14)) {
              uVar5 = FUN_01afd674(auStack_24);
              uVar3 = FUN_01b4d014(piVar4,uVar5);
              goto LAB_01b09a50;
            }
            uVar3 = 0xd2;
            uVar5 = 0x89;
          }
          FUN_01b053d4(6,0,uVar5,"/aws-lc/crypto/evp_extra/p_kem_asn1.c",uVar3);
          uVar3 = 0;
          goto LAB_01b09a50;
        }
        uVar5 = 0xd9;
      }
      else {
        iVar1 = FUN_01afddc0(param_4,auStack_24,0x80000000);
        if (iVar1 != 0) {
          iVar1 = FUN_01afd684(auStack_24);
          if (iVar1 == *(int *)(**(int **)(param_1 + 8) + 0x20)) {
            uVar3 = FUN_01b4d068(*(int **)(param_1 + 8),auStack_24);
            goto LAB_01b09a50;
          }
          uVar5 = 0xc4;
          uVar2 = 0x89;
          goto LAB_01b09a44;
        }
        uVar5 = 0xbf;
      }
    }
    uVar2 = 0x66;
  }
  else {
    uVar5 = 0xab;
    uVar2 = 0x66;
  }
LAB_01b09a44:
  uVar3 = 0;
  FUN_01b053d4(6,0,uVar2,"/aws-lc/crypto/evp_extra/p_kem_asn1.c",uVar5);
LAB_01b09a50:
  if (local_1c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return uVar3;
}

