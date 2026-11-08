// FUN_01833e18 @ 01833e18 size=868 calls_out=9 calls_in=1
// strings: ell64 != NULL | rustsecp256k1_v0_9_2_ecmult_gen_context_is_built(&ctx->ecmult_gen_ctx) | seckey32 != NULL

uint FUN_01833e18(int *param_1,uint *param_2,int param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint local_14c;
  uint local_148;
  uint local_144;
  uint local_140;
  uint local_13c;
  uint local_138;
  uint local_134;
  uint local_130;
  uint local_12c;
  undefined1 auStack_124 [40];
  undefined1 auStack_fc [40];
  undefined1 auStack_d4 [44];
  undefined1 auStack_a8 [8];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_48;
  int local_2c;
  
  local_2c = DAT_018ddaf8;
  if (param_2 == (uint *)0x0) {
    (*(code *)param_1[0x28])("ell64 != NULL",param_1[0x29]);
  }
  else {
    FUN_016dd606(param_2,0,0x40,0);
    if (*param_1 == 0) {
      (*(code *)param_1[0x28])
                ("rustsecp256k1_v0_9_2_ecmult_gen_context_is_built(&ctx->ecmult_gen_ctx)",
                 param_1[0x29]);
    }
    else {
      if (param_3 != 0) {
        FUN_0182582c(&local_148,param_3,&local_14c);
        uVar2 = (uint)(local_14c == 0);
        if (((((((local_148 == 0 && local_144 == 0) && local_140 == 0) && local_13c == 0) &&
              local_138 == 0) && local_134 == 0) && local_130 == 0) && local_12c == 0) {
          uVar2 = 0;
        }
        uVar3 = uVar2 ^ 1;
        uVar1 = uVar3 - 1;
        local_144 = local_144 & uVar1;
        local_148 = local_148 & uVar1 | uVar3;
        local_140 = uVar1 & local_140;
        local_13c = uVar1 & local_13c;
        local_138 = uVar1 & local_138;
        local_134 = uVar1 & local_134;
        local_130 = uVar1 & local_130;
        local_12c = uVar1 & local_12c;
        local_14c = uVar3;
        FUN_0182b61c(param_1,auStack_a8,&local_148);
        FUN_0182ce5c(auStack_fc,auStack_a8);
        FUN_0181ea1c(auStack_fc);
        FUN_0181ea1c(auStack_d4);
        uStack_a0 = 0x94cb7d59b024773;
        uStack_98 = 0x3bc9786e59ed789;
        uStack_90 = 0x4e363b5368335b35;
        uStack_48 = 0x40;
        FUN_0182169c(auStack_a8,param_3,0x20);
        FUN_0182169c(auStack_a8,&DAT_005639e4,0x20);
        if (param_4 != 0) {
          FUN_0182169c(auStack_a8,param_4,0x20);
        }
        FUN_0182be58(param_2,auStack_124,auStack_fc,auStack_a8);
        FUN_0181ef6c(param_2 + 8,auStack_124);
        uVar1 = uVar3 - 1 & 0xff;
        uVar1 = uVar1 | uVar1 << 8 | uVar1 << 0x10 | (uVar3 - 1) * 0x1000000;
        *param_2 = *param_2 & uVar1;
        param_2[2] = param_2[2] & uVar1;
        param_2[1] = param_2[1] & uVar1;
        param_2[4] = param_2[4] & uVar1;
        param_2[6] = param_2[6] & uVar1;
        param_2[3] = param_2[3] & uVar1;
        param_2[8] = param_2[8] & uVar1;
        param_2[5] = param_2[5] & uVar1;
        param_2[10] = param_2[10] & uVar1;
        param_2[7] = param_2[7] & uVar1;
        param_2[9] = param_2[9] & uVar1;
        param_2[0xc] = param_2[0xc] & uVar1;
        param_2[0xb] = param_2[0xb] & uVar1;
        param_2[0xd] = param_2[0xd] & uVar1;
        param_2[0xe] = param_2[0xe] & uVar1;
        param_2[0xf] = uVar1 & param_2[0xf];
        goto LAB_018340e8;
      }
      (*(code *)param_1[0x28])("seckey32 != NULL",param_1[0x29]);
    }
  }
  uVar2 = 0;
LAB_018340e8:
  if (local_2c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return uVar2;
}

