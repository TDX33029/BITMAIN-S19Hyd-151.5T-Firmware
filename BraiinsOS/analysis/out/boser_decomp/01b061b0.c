// FUN_01b061b0 @ 01b061b0 size=468 calls_out=7 calls_in=0
// strings: dh_paramgen_prime_len | /aws-lc/crypto/evp_extra/p_dh.c | dh_paramgen_generator | /aws-lc/crypto/evp_extra/p_dh.c | dh_pad | /aws-lc/crypto/evp_extra/p_dh.c

undefined4 FUN_01b061b0(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int local_20;
  int local_1c;
  
  local_1c = DAT_01d53560;
  iVar1 = FUN_01bedb50(param_2,"dh_paramgen_prime_len",&PTR_01d3b2b0,0);
  if (iVar1 == 0) {
    local_20 = iVar1;
    iVar1 = FUN_01bed49a(param_3,&local_20,10);
    if (local_20 != param_3 && -1 < iVar1) {
      uVar2 = FUN_01b06118(param_1,iVar1);
      goto LAB_01b06258;
    }
    uVar3 = 0xb4;
  }
  else {
    iVar1 = FUN_01bedb50(param_2,"dh_paramgen_generator");
    if (iVar1 == 0) {
      local_20 = iVar1;
      iVar1 = FUN_01bed49a(param_3,&local_20,10);
      if (local_20 != param_3 && -1 < iVar1) {
        uVar2 = FUN_01b06164(param_1,iVar1);
        goto LAB_01b06258;
      }
      uVar3 = 0xbe;
    }
    else {
      iVar1 = FUN_01bedb50(param_2,"dh_pad");
      if (iVar1 != 0) {
        uVar2 = 0xfffffffe;
        goto LAB_01b06258;
      }
      local_20 = iVar1;
      iVar1 = FUN_01bed49a(param_3,&local_20,10);
      if (local_20 != param_3 && -1 < iVar1) {
        uVar2 = FUN_01b060cc(param_1,iVar1);
        goto LAB_01b06258;
      }
      uVar3 = 0xc9;
    }
  }
  uVar2 = 0;
  FUN_01b053d4(6,0,0x72,"/aws-lc/crypto/evp_extra/p_dh.c",uVar3);
LAB_01b06258:
  if (local_1c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return uVar2;
}

