// FUN_016ed618 @ 016ed618 size=344 calls_out=6 calls_in=1
// strings: /aws-lc/crypto/evp_extra/p_ed25519_asn1.c | /aws-lc/crypto/evp_extra/p_ed25519_asn1.c | /aws-lc/crypto/evp_extra/p_ed25519_asn1.c

void FUN_016ed618(int param_1,undefined4 param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined1 auStack_3c [32];
  uint local_1c;
  
  local_1c = DAT_018ddaf8;
  if (param_3 == 0x20) {
    if (param_4 != 0 && param_5 != 0x20) {
      uVar4 = 0x1e;
      goto LAB_016ed6ec;
    }
    uVar5 = FUN_0177a6c0(0x41);
    uVar4 = (undefined4)((ulonglong)uVar5 >> 0x20);
    iVar1 = (int)uVar5;
    if (iVar1 != 0) {
      FUN_01777d3c(auStack_3c,iVar1,param_2);
      *(undefined1 *)(iVar1 + 0x40) = 1;
      if ((param_4 == 0 || param_5 == 0) ||
         (iVar2 = FUN_016dd50a(auStack_3c,param_4,param_5), iVar2 == 0)) {
        FUN_0177aafc(*(undefined4 *)(param_1 + 8));
        uVar3 = 1;
        *(int *)(param_1 + 8) = iVar1;
        uVar4 = extraout_r1;
        goto LAB_016ed704;
      }
      FUN_0177aafc(iVar1);
      uVar4 = 0x30;
      goto LAB_016ed6ec;
    }
  }
  else {
    uVar4 = 0x19;
LAB_016ed6ec:
    FUN_016e9cd0(6,0,0x66,"/aws-lc/crypto/evp_extra/p_ed25519_asn1.c",uVar4);
    uVar4 = extraout_r1_00;
  }
  uVar3 = 0;
LAB_016ed704:
  if ((local_1c ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78(uVar3,uVar4,local_1c ^ DAT_018ddaf8,0);
  }
  return;
}

