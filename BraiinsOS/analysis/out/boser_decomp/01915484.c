// FUN_01915484 @ 01915484 size=188 calls_out=4 calls_in=0
// strings: RootCertStore | rootsrevocation_check_depthunknown_revocation_policyrevocation_expiration_policysupported

undefined4 FUN_01915484(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 *local_34;
  undefined1 local_30;
  undefined1 local_2f;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 *local_20;
  undefined4 local_1c;
  undefined4 **local_18;
  undefined1 *local_14;
  
  local_30 = (**(code **)(param_2[1] + 0xc))(*param_2,"RootCertStore",0xd);
  local_1c = *(undefined4 *)(param_1 + 8);
  local_18 = &local_20;
  local_14 = &LAB_016cd65c;
  local_2f = 0;
  local_20 = &local_1c;
  local_34 = param_2;
  FUN_00664898(&local_2c,&DAT_005aad8c,&local_18);
  FUN_01302c38(&local_34,
               "rootsrevocation_check_depthunknown_revocation_policyrevocation_expiration_policysupported"
               ,5,&local_2c,&LAB_005fdc1c);
  uVar1 = FUN_01302e1c(&local_34);
  FUN_0134bd64(local_2c,local_28);
  return uVar1;
}

