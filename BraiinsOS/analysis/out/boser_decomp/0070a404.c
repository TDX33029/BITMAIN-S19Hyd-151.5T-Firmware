// FUN_0070a404 @ 0070a404 size=280 calls_out=4 calls_in=2
// strings: invalid `Allow` headerevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/axum-0.8.4/src/routing/route.rs:160

void FUN_0070a404(undefined4 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int *piVar4;
  int local_80;
  int local_7c;
  int local_78;
  int iStack_74;
  int local_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  int local_50;
  int iStack_4c;
  int iStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int local_38;
  int iStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  
  piVar4 = &local_80;
  iVar2 = *param_2;
  local_7c = param_2[1];
  local_78 = param_2[2];
  iStack_74 = param_2[3];
  *param_2 = 0;
  if (iVar2 != 0) {
    local_38 = 0;
    iStack_34 = 0xe;
    iStack_30 = 0;
    uStack_2c = 0;
    local_80 = iVar2;
    iVar1 = FUN_0137f4c4(param_1);
    if (iVar1 == 0) {
      local_70 = local_80;
      iStack_6c = local_7c;
      iStack_68 = local_78;
      iStack_64 = iStack_74;
      local_60 = 0;
      uStack_5c = 0xe;
      uStack_58 = 0;
      uStack_54 = 0;
      FUN_01429274(&local_38);
      if ((char)local_28 == '\x02') {
                    /* WARNING: Subroutine does not return */
        FUN_013073dc("invalid `Allow` headerevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/axum-0.8.4/src/routing/route.rs:160"
                     ,0x16,&local_50,&DAT_01d210e8,&DAT_01c06dbc);
      }
      piVar4 = &local_38;
      local_50 = local_38;
      iStack_4c = iStack_34;
      iStack_48 = iStack_30;
      uStack_44 = uStack_2c;
      uStack_40 = local_28;
      FUN_00714c58(piVar4,param_1,&local_60);
      if ((char)local_28 == '\x02') {
        return;
      }
      pcVar3 = *(code **)(local_38 + 0x10);
      iVar2 = iStack_34;
      iVar1 = iStack_30;
    }
    else {
      pcVar3 = *(code **)(iVar2 + 0x10);
      iVar2 = local_7c;
      iVar1 = local_78;
    }
    (*pcVar3)(piVar4 + 3,iVar2,iVar1);
  }
  return;
}

