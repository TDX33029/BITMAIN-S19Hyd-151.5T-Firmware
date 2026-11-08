// FUN_01b08a18 @ 01b08a18 size=336 calls_out=7 calls_in=1
// strings: /aws-lc/crypto/evp_extra/p_ed25519_asn1.c | /aws-lc/crypto/evp_extra/p_ed25519_asn1.c | /aws-lc/crypto/evp_extra/p_ed25519_asn1.c

void FUN_01b08a18(int param_1,undefined4 param_2,int param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined1 auStack_44 [32];
  uint local_24;
  
  local_24 = DAT_01d53560;
  if (param_3 == 0x20) {
    if (param_4 != 0 && param_5 != 0x20) {
      uVar5 = 0x1e;
      goto LAB_01b08a70;
    }
    uVar4 = FUN_01b6ad8c(0x41,&PTR_01d3b2b0,0x20,0);
    uVar5 = (undefined4)((ulonglong)uVar4 >> 0x20);
    iVar2 = (int)uVar4;
    if (iVar2 != 0) {
      FUN_01b697d8(auStack_44,iVar2,param_2);
      *(undefined1 *)(iVar2 + 0x40) = 1;
      if ((param_4 == 0 || param_5 == 0) ||
         (iVar3 = FUN_01bed842(auStack_44,param_4,param_5), iVar3 == 0)) {
        FUN_01b089dc(param_1);
        uVar1 = 1;
        *(int *)(param_1 + 8) = iVar2;
        uVar5 = extraout_r1_00;
        goto LAB_01b08a84;
      }
      FUN_01b6b1c4(iVar2);
      uVar5 = 0x30;
      goto LAB_01b08a70;
    }
  }
  else {
    uVar5 = 0x19;
LAB_01b08a70:
    FUN_01b053d4(6,0,0x66,"/aws-lc/crypto/evp_extra/p_ed25519_asn1.c",uVar5);
    uVar5 = extraout_r1;
  }
  uVar1 = 0;
LAB_01b08a84:
  if ((local_24 ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4(uVar1,uVar5,local_24 ^ DAT_01d53560,0);
  }
  return;
}

