// FUN_01b07580 @ 01b07580 size=484 calls_out=8 calls_in=0
// strings: dsa_paramgen_bits | /aws-lc/crypto/evp_extra/p_dsa.c | dsa_paramgen_q_bits | /aws-lc/crypto/evp_extra/p_dsa.c | dsa_paramgen_md | /aws-lc/crypto/evp_extra/p_dsa.c

ulonglong FUN_01b07580(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  int local_20;
  int local_1c;
  
  local_1c = DAT_01d53560;
  iVar1 = FUN_01bedb50(param_2,"dsa_paramgen_bits",&PTR_01d3b2b0,0);
  if (iVar1 == 0) {
    local_20 = iVar1;
    iVar1 = FUN_01bed49a(param_3,&local_20,10);
    if (local_20 == param_3 || iVar1 < 0) {
      uVar5 = 0x126;
LAB_01b07618:
      uVar3 = 0x72;
LAB_01b0761c:
      uVar2 = 0;
      FUN_01b053d4(6,0,uVar3,"/aws-lc/crypto/evp_extra/p_dsa.c",uVar5);
    }
    else {
      uVar2 = FUN_01b07474(param_1,iVar1);
    }
  }
  else {
    iVar1 = FUN_01bedb50(param_2,"dsa_paramgen_q_bits");
    if (iVar1 == 0) {
      local_20 = iVar1;
      iVar1 = FUN_01bed49a(param_3,&local_20,10);
      if (!(local_20 != param_3 && -1 < iVar1)) {
        uVar5 = 0x131;
        goto LAB_01b07618;
      }
      uVar2 = FUN_01b074cc(param_1,iVar1);
    }
    else {
      iVar1 = FUN_01bedb50(param_2,"dsa_paramgen_md");
      if (iVar1 == 0) {
        iVar1 = FUN_01b01d80(param_3);
        if (iVar1 != 0) {
          if (local_1c == DAT_01d53560) {
            uVar4 = FUN_01b07524(param_1,iVar1,0,0);
            return uVar4;
          }
          goto LAB_01b07748;
        }
        uVar5 = 0x13c;
        uVar3 = 0x6f;
        goto LAB_01b0761c;
      }
      uVar2 = 0xfffffffe;
    }
  }
  if (local_1c == DAT_01d53560) {
    return (ulonglong)uVar2;
  }
LAB_01b07748:
                    /* WARNING: Subroutine does not return */
  FUN_01be31f4();
}

