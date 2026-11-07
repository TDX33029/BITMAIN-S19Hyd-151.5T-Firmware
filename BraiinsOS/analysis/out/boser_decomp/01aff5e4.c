// FUN_01aff5e4 @ 01aff5e4 size=572 calls_out=6 calls_in=1
// strings: /aws-lc/crypto/cipher_extra/e_chacha20poly1305.c | /aws-lc/crypto/cipher_extra/e_chacha20poly1305.c | /aws-lc/crypto/cipher_extra/e_chacha20poly1305.c

void FUN_01aff5e4(undefined4 param_1,undefined4 param_2,int param_3,uint *param_4,uint param_5,
                 undefined4 param_6,int param_7,undefined4 param_8,uint param_9,int param_10,
                 uint param_11,undefined4 param_12,undefined4 param_13,uint param_14)

{
  byte *pbVar1;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  undefined4 uVar7;
  undefined1 auStack_b0 [68];
  byte abStack_6c [64];
  uint local_2c;
  
  local_2c = DAT_01d53560;
  if (CARRY4(param_11,param_14)) {
    uVar7 = 0x8d;
    uVar2 = 0x75;
  }
  else if (param_5 < param_11 + param_14) {
    uVar7 = 0x91;
    uVar2 = 0x67;
  }
  else {
    if (param_7 == 0xc) {
      if (param_11 != 0) {
        uVar3 = 0;
        uVar4 = param_9 & 0x3f;
        uVar5 = param_9 >> 6;
        do {
          uVar5 = uVar5 + 1;
          FUN_01bed93e(abStack_6c,0,0x40);
          FUN_01afe5b4(abStack_6c,abStack_6c,0x40,param_1,param_6,uVar5);
          while( true ) {
            bVar6 = 0x3f < uVar4;
            if (uVar4 != 0x40) {
              bVar6 = param_11 <= uVar3;
            }
            if (bVar6) break;
            pbVar1 = abStack_6c + uVar4;
            uVar4 = uVar4 + 1;
            *(byte *)(param_3 + uVar3) = *(byte *)(param_10 + uVar3) ^ *pbVar1;
            uVar3 = uVar3 + 1;
          }
          uVar4 = 0;
        } while (uVar3 < param_11);
      }
      FUN_01afe5b4(param_2,param_8,param_9,param_1,param_6,1);
      FUN_01aff200(auStack_b0,param_1,param_6,param_12,param_13,param_2,param_9,param_3,param_11);
      FUN_01aff580(param_3 + param_11,auStack_b0,param_14);
      uVar7 = 1;
      *param_4 = param_11 + param_14;
      uVar2 = extraout_r1_00;
      goto LAB_01aff6b0;
    }
    uVar7 = 0x95;
    uVar2 = 0x79;
  }
  FUN_01b053d4(0x1e,0,uVar2,"/aws-lc/crypto/cipher_extra/e_chacha20poly1305.c",uVar7);
  uVar7 = 0;
  uVar2 = extraout_r1;
LAB_01aff6b0:
  if ((local_2c ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4(uVar7,uVar2,local_2c ^ DAT_01d53560,0);
  }
  return;
}

