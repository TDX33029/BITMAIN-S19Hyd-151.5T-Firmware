// FUN_01441788 @ 01441788 size=228 calls_out=5 calls_in=3
// strings: domain is valid Urievent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hyper-util-0.1.20/src/client/legacy/client.rs:743

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01441788(uint *param_1,undefined4 *param_2)

{
  undefined2 local_7c [22];
  undefined4 local_50;
  uint local_4c;
  uint local_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  
  local_4c = 0;
  local_50 = 3;
  local_38 = 0;
  local_48 = 0;
  FUN_01444d9c(local_7c,&local_50,*param_2,param_2[1]);
  FUN_01444e9c(&local_50,local_7c,param_2 + 2);
  FUN_01444c4c(local_7c,&local_50,&DAT_005327c4);
  FUN_0141240c(&local_50,local_7c);
  if ((local_50 & 0xff) == 3) {
    local_7c[0] = local_50._1_2_;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc("domain is valid Urievent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hyper-util-0.1.20/src/client/legacy/client.rs:743"
                 ,0x13,local_7c,&DAT_01d1f1f8);
  }
  *param_1 = local_50;
  param_1[1] = local_4c;
  param_1[2] = local_48;
  param_1[3] = uStack_44;
  param_1[4] = uStack_40;
  param_1[5] = uStack_3c;
  param_1[6] = local_38;
  param_1[7] = uStack_34;
  param_1[8] = uStack_30;
  param_1[9] = uStack_2c;
  param_1[10] = uStack_28;
  return;
}

