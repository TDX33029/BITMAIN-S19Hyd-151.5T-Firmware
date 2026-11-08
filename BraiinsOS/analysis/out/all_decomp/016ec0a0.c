// FUN_016ec0a0 @ 016ec0a0 size=496 calls_out=8 calls_in=0
// strings: dsa_paramgen_bits | dsa_paramgen_q_bits | dsa_paramgen_md | /aws-lc/crypto/evp_extra/p_dsa.c | /aws-lc/crypto/evp_extra/p_dsa.c | /aws-lc/crypto/evp_extra/p_dsa.c

undefined4 FUN_016ec0a0(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  int local_20;
  int local_1c;
  
  local_1c = DAT_018ddaf8;
  iVar1 = FUN_016dd818(param_2,"dsa_paramgen_bits",&PTR_018bc3f4,0);
  if (iVar1 == 0) {
    local_20 = iVar1;
    uVar3 = FUN_016dd162(param_3,&local_20,10);
    uVar4 = uVar3 >> 0x1f;
    if (local_20 == param_3) {
      uVar4 = 1;
    }
    if (uVar4 == 0) {
      uVar2 = FUN_016ebf8c(param_1,uVar3);
    }
    else {
      uVar5 = 0x126;
LAB_016ec1e0:
      uVar2 = 0;
      FUN_016e9cd0(6,0,0x72,"/aws-lc/crypto/evp_extra/p_dsa.c",uVar5);
    }
  }
  else {
    iVar1 = FUN_016dd818(param_2,"dsa_paramgen_q_bits");
    if (iVar1 == 0) {
      local_20 = iVar1;
      uVar3 = FUN_016dd162(param_3,&local_20,10);
      uVar4 = uVar3 >> 0x1f;
      if (local_20 == param_3) {
        uVar4 = 1;
      }
      if (uVar4 != 0) {
        uVar5 = 0x131;
        goto LAB_016ec1e0;
      }
      uVar2 = FUN_016ebfe8(param_1,uVar3);
    }
    else {
      iVar1 = FUN_016dd818(param_2,"dsa_paramgen_md");
      if (iVar1 == 0) {
        iVar1 = FUN_016e6420(param_3);
        if (iVar1 != 0) {
          if (local_1c == DAT_018ddaf8) {
            uVar2 = FUN_016ec044(param_1);
            return uVar2;
          }
          goto LAB_016ec28c;
        }
        FUN_016e9cd0(6,0,0x6f,"/aws-lc/crypto/evp_extra/p_dsa.c",0x13c);
        uVar2 = 0;
      }
      else {
        uVar2 = 0xfffffffe;
      }
    }
  }
  if (local_1c == DAT_018ddaf8) {
    return uVar2;
  }
LAB_016ec28c:
                    /* WARNING: Subroutine does not return */
  FUN_016d2b78();
}

