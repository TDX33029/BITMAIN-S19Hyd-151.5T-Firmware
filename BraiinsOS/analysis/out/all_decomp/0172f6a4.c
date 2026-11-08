// FUN_0172f6a4 @ 0172f6a4 size=416 calls_out=3 calls_in=6
// strings: aws_lc_0_39_0_ec_felem_neg | /aws-lc/crypto/fipsmodule/ec/felem.c | borrow == 0

undefined8 FUN_0172f6a4(int param_1,uint *param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  
  uVar1 = FUN_0172f2c0(param_1,param_3);
  iVar2 = FUN_0171a550(param_2,*(undefined4 *)(param_1 + 0x118),param_3,
                       *(undefined4 *)(param_1 + 0x11c));
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2c94("borrow == 0","/aws-lc/crypto/fipsmodule/ec/felem.c",0x37,
                 "aws_lc_0_39_0_ec_felem_neg");
  }
  uVar6 = *(uint *)(param_1 + 0x11c);
  if (0 < (int)uVar6) {
    uVar3 = 0;
    if (uVar6 != 1) {
      uVar3 = uVar6 >> 1;
      *param_2 = *param_2 & uVar1;
      param_2[1] = param_2[1] & uVar1;
      if (uVar3 != 1) {
        param_2[2] = param_2[2] & uVar1;
        param_2[3] = param_2[3] & uVar1;
        if (uVar3 != 2) {
          param_2[4] = param_2[4] & uVar1;
          param_2[5] = param_2[5] & uVar1;
          if (uVar3 != 3) {
            param_2[6] = param_2[6] & uVar1;
            param_2[7] = param_2[7] & uVar1;
            if (uVar3 != 4) {
              param_2[8] = param_2[8] & uVar1;
              param_2[9] = param_2[9] & uVar1;
              if (uVar3 != 5) {
                param_2[10] = param_2[10] & uVar1;
                param_2[0xb] = param_2[0xb] & uVar1;
                if (uVar3 != 6) {
                  param_2[0xc] = param_2[0xc] & uVar1;
                  param_2[0xd] = param_2[0xd] & uVar1;
                  if (uVar3 != 7) {
                    param_2[0xe] = param_2[0xe] & uVar1;
                    param_2[0xf] = param_2[0xf] & uVar1;
                    if (uVar3 != 8) {
                      uVar5 = 8;
                      puVar4 = param_2 + 0x10;
                      do {
                        uVar5 = uVar5 + 1;
                        puVar4[1] = puVar4[1] & uVar1;
                        *puVar4 = *puVar4 & uVar1;
                        puVar4 = puVar4 + 2;
                      } while (uVar3 != uVar5);
                    }
                  }
                }
              }
            }
          }
        }
      }
      uVar3 = uVar6 & 0xfffffffe;
      if (uVar6 == uVar3) {
        return 0;
      }
    }
    param_2[uVar3] = param_2[uVar3] & uVar1;
  }
  return 0;
}

