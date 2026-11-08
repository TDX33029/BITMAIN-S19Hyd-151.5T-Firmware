// FUN_016eaaa0 @ 016eaaa0 size=472 calls_out=7 calls_in=0
// strings: dh_paramgen_prime_len | dh_paramgen_generator | dh_pad | /aws-lc/crypto/evp_extra/p_dh.c | /aws-lc/crypto/evp_extra/p_dh.c | /aws-lc/crypto/evp_extra/p_dh.c

undefined4 FUN_016eaaa0(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  int local_20;
  int local_1c;
  
  local_1c = DAT_018ddaf8;
  iVar1 = FUN_016dd818(param_2,"dh_paramgen_prime_len",&PTR_018bc3f4,0);
  if (iVar1 == 0) {
    local_20 = iVar1;
    uVar2 = FUN_016dd162(param_3,&local_20,10);
    uVar4 = uVar2 >> 0x1f;
    if (local_20 == param_3) {
      uVar4 = 1;
    }
    if (uVar4 == 0) {
      uVar3 = FUN_016eaa00(param_1,uVar2);
      goto LAB_016eab74;
    }
    uVar5 = 0xb4;
  }
  else {
    iVar1 = FUN_016dd818(param_2,"dh_paramgen_generator");
    if (iVar1 == 0) {
      local_20 = iVar1;
      uVar2 = FUN_016dd162(param_3,&local_20,10);
      uVar4 = uVar2 >> 0x1f;
      if (local_20 == param_3) {
        uVar4 = 1;
      }
      if (uVar4 == 0) {
        uVar3 = FUN_016eaa50(param_1,uVar2);
        goto LAB_016eab74;
      }
      uVar5 = 0xbe;
    }
    else {
      iVar1 = FUN_016dd818(param_2,"dh_pad");
      if (iVar1 != 0) {
        uVar3 = 0xfffffffe;
        goto LAB_016eab74;
      }
      local_20 = iVar1;
      uVar2 = FUN_016dd162(param_3,&local_20,10);
      uVar4 = uVar2 >> 0x1f;
      if (local_20 == param_3) {
        uVar4 = 1;
      }
      if (uVar4 == 0) {
        uVar3 = FUN_016ea9b0(param_1,uVar2);
        goto LAB_016eab74;
      }
      uVar5 = 0xc9;
    }
  }
  uVar3 = 0;
  FUN_016e9cd0(6,0,0x72,"/aws-lc/crypto/evp_extra/p_dh.c",uVar5);
LAB_016eab74:
  if (local_1c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return uVar3;
}

