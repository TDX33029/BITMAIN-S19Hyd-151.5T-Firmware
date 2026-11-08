// FUN_018cb870 @ 018cb870 size=288 calls_out=3 calls_in=2
// strings: CLIENT_EARLY_TRAFFIC_SECRET | c e traffic | c e traffic

void FUN_018cb870(undefined4 param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6,code *param_7,code *param_8,undefined4 param_9)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  uint uVar4;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  uVar4 = param_3 - 1U & 0xff;
  uVar2 = *(undefined4 *)(&DAT_005386bc + uVar4 * 4);
  puVar3 = (&PTR_s_CLIENT_EARLY_TRAFFIC_SECRET_01d33a9c)[uVar4];
  iVar1 = (*param_8)(param_6,puVar3,uVar2);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_2 + 0xa0);
  }
  else {
    iVar1 = *(int *)(param_2 + 0xa0);
    FUN_018cb710(&local_30,param_2,*(undefined4 *)(*(int *)(iVar1 + 0xc) + 0x48),
                 (&PTR_s_c_e_traffic_01d33acc)[uVar4],*(undefined4 *)(&DAT_005386ec + uVar4 * 4),
                 param_4,param_5);
    (*param_7)(param_6,puVar3,uVar2,param_9,0x20,local_2c,local_28);
    FUN_0134bd64(local_30,local_2c);
  }
  FUN_018cae5c(param_1,param_2,*(undefined4 *)(iVar1 + 0xc),(&PTR_s_c_e_traffic_01d33ab4)[uVar4]);
  return;
}

