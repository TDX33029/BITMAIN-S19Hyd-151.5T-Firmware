// FUN_01afe5b4 @ 01afe5b4 size=528 calls_out=5 calls_in=4
// strings: aws_lc_0_39_0_CRYPTO_chacha_20 | /aws-lc/crypto/chacha/chacha.c | !buffers_alias(out; in_len; in; in_len) || in == out

undefined8
FUN_01afe5b4(uint param_1,uint param_2,uint param_3,undefined4 *param_4,int param_5,int param_6)

{
  undefined4 *puVar1;
  uint uVar2;
  int local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  int local_2c;
  
  local_2c = DAT_01d53560;
  if (param_2 < param_3 + param_1) {
    uVar2 = param_2;
    if (param_1 != param_2) {
      uVar2 = param_3 + param_2;
    }
    if (param_1 < uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_01be3310("!buffers_alias(out, in_len, in, in_len) || in == out",
                   "/aws-lc/crypto/chacha/chacha.c",0x71,"aws_lc_0_39_0_CRYPTO_chacha_20");
    }
  }
  local_5c = param_6;
  local_58 = FUN_01afe51c(param_5);
  local_54 = FUN_01afe51c(param_5 + 4);
  local_50 = FUN_01afe51c(param_5 + 8);
  if (((uint)param_4 & 3) != 0) {
    local_4c = FUN_01afe51c(param_4);
    local_48 = FUN_01afe51c(param_4 + 1);
    local_44 = FUN_01afe51c(param_4 + 2);
    local_40 = FUN_01afe51c(param_4 + 3);
    local_3c = FUN_01afe51c(param_4 + 4);
    local_38 = FUN_01afe51c(param_4 + 5);
    local_34 = FUN_01afe51c(param_4 + 6);
    puVar1 = param_4 + 7;
    param_4 = &local_4c;
    local_30 = FUN_01afe51c(puVar1);
  }
  for (; param_3 != 0; param_3 = param_3 - uVar2) {
    uVar2 = local_5c * -0x40;
    if ((uint)((uint)(local_5c * -0x40) <= param_3) <=
        -((uint)(local_5c == 0) << 6 | (uint)-local_5c >> 0x1a)) {
      uVar2 = param_3;
    }
    if ((uVar2 < 0xc0) || ((DAT_01d532f0 & 1) == 0)) {
      FUN_01b71940(param_1,param_2,uVar2,param_4,&local_5c);
    }
    else {
      FUN_01b71d20(param_1,param_2,uVar2,param_4,&local_5c);
    }
    param_2 = param_2 + uVar2;
    param_1 = param_1 + uVar2;
    local_5c = 0;
  }
  if (local_2c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return 0;
}

