// FUN_00eba594 @ 00eba594 size=868 calls_out=12 calls_in=3
// strings: response to CONNECT with nonempty body | axum::routing::route/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/axum-0.8.4/src/routing/route.rs | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | response to CONNECT with nonempty body | InvalidParamSegmentInvalidParamInvalidCatchAll

void FUN_00eba594(undefined4 *param_1,int param_2)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined1 auStack_f0 [68];
  ushort local_ac;
  undefined4 local_a8;
  undefined *local_a4;
  int local_a0;
  int local_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  int local_90;
  int local_8c;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  int **local_40;
  undefined4 local_3c;
  int *local_38;
  int *local_34;
  char **local_30;
  undefined1 *local_2c;
  char *local_28;
  undefined4 local_24;
  
  FUN_00712ff0(&local_a0);
  if (local_a0 == 3 && local_9c == 0) {
    *param_1 = 3;
    param_1[1] = 0;
    return;
  }
  FUN_01bed4e2(auStack_f0,&local_a0,0x50);
  if ((*(char *)(param_2 + 0xa8) == '\a') && (local_ac - 200 < 100)) {
    iVar3 = FUN_0070b374(auStack_f0,&DAT_0056aa58);
    if (((iVar3 == 0) && (iVar3 = FUN_0070b374(auStack_f0,&DAT_00569468), iVar3 == 0)) &&
       ((**(code **)(local_a4 + 0x14))(&local_a0,local_a8), local_90 == 0 && local_8c == 0))
    goto LAB_00eba79c;
    if ((DAT_01d50f88 < 5) &&
       (((DAT_01d50ce4 - 1 < 2 ||
         ((DAT_01d50ce4 != 0 && (cVar2 = FUN_01aaafa8(&DAT_01d50cdc), cVar2 != '\0')))) &&
        (iVar3 = FUN_01aaa278(DAT_01d50cdc), iVar3 != 0)))) {
      local_38 = (int *)(DAT_01d50cdc + 0x1c);
      local_a0 = *local_38;
      local_9c = *(int *)(DAT_01d50cdc + 0x20);
      if (local_9c == 0) {
LAB_00eba8e0:
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d2e05c);
      }
      local_30 = &local_28;
      uStack_98 = *(undefined4 *)(DAT_01d50cdc + 0x24);
      uStack_94 = *(undefined4 *)(DAT_01d50cdc + 0x28);
      local_40 = &local_34;
      local_90 = 0;
      local_3c = 1;
      local_2c = &DAT_01d2ea4c;
      local_24 = 0x4d;
      local_28 = "response to CONNECT with nonempty body";
      local_34 = &local_a0;
      FUN_01a8ceac(&local_40);
    }
    else {
      iVar3 = DAT_01d50cdc;
      if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
        local_48 = *(undefined4 *)(DAT_01d50cdc + 0x14);
        local_44 = *(undefined4 *)(DAT_01d50cdc + 0x18);
        local_4c = 1;
        DataMemoryBarrier(0xb);
        puVar5 = DAT_01d4edc8;
        pcVar1 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          puVar5 = &DAT_01cfc5e0;
          pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar4 = (*(code *)puVar5[3])(pcVar1,&local_4c);
        if (iVar4 != 0) {
          local_38 = (int *)(DAT_01d50cdc + 0x1c);
          local_a0 = *local_38;
          local_9c = *(int *)(DAT_01d50cdc + 0x20);
          if (local_9c == 0) goto LAB_00eba8e0;
          local_30 = &local_28;
          uStack_98 = *(undefined4 *)(DAT_01d50cdc + 0x24);
          uStack_94 = *(undefined4 *)(DAT_01d50cdc + 0x28);
          local_40 = &local_34;
          local_90 = 0;
          local_3c = 1;
          local_2c = &DAT_01d2ea4c;
          local_24 = 0x4d;
          local_28 = "response to CONNECT with nonempty body";
          local_34 = &local_a0;
          FUN_01aaa328(iVar3,pcVar1,puVar5[4],&local_4c,&local_40);
        }
      }
    }
    FUN_00b19860(local_a8,local_a4);
  }
  else {
    if (*(char *)(param_2 + 0xbc) == '\0') goto LAB_00eba79c;
    FUN_0070a404(auStack_f0,param_2 + 0x98);
    (**(code **)(local_a4 + 0x14))(&local_a0,local_a8);
    FUN_0070a550(&local_a0,auStack_f0);
    if (*(char *)(param_2 + 0xa8) != '\x05') goto LAB_00eba79c;
    FUN_00b19860(local_a8,local_a4);
  }
  local_a8 = 1;
  local_a4 = &DAT_01c07674;
LAB_00eba79c:
  FUN_01bed4e2(param_1,auStack_f0,0x50);
  return;
}

