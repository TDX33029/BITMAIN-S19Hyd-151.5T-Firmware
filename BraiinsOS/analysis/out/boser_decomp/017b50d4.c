// FUN_017b50d4 @ 017b50d4 size=740 calls_out=12 calls_in=3
// strings: Prioritize::queue_frameevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/prioritize.rs:538event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/prioritize.rs:528 | tracing::span::active | FieldSet corrupted (this is a bug) | FieldSet corrupted (this is a bug)

void FUN_017b50d4(undefined4 param_1,undefined4 param_2,undefined4 param_3,int *param_4,
                 undefined4 param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 ****local_80;
  undefined2 *puStack_7c;
  uint local_78;
  int local_74;
  int local_70;
  undefined4 uStack_6c;
  int local_68;
  undefined4 uStack_64;
  undefined4 ****local_60;
  undefined2 *local_5c;
  uint local_58;
  int iStack_54;
  int local_50;
  undefined4 uStack_4c;
  int local_48;
  undefined4 uStack_44;
  undefined4 ****local_40;
  undefined4 local_3c;
  int *local_38;
  undefined4 ****local_34;
  int *local_30;
  undefined *local_2c;
  int local_28;
  
  if ((DAT_01d50f88 == 0) &&
     (((DAT_01d4f430 - 1 < 2 ||
       ((DAT_01d4f430 != 0 && (cVar1 = FUN_01aaafa8(&DAT_01d4f428), cVar1 != '\0')))) &&
      (iVar2 = FUN_01aaa278(DAT_01d4f428), iVar3 = DAT_01d4f428, iVar2 != 0)))) {
    local_5c = *(undefined2 **)(DAT_01d4f428 + 0x20);
    if (local_5c == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d1bcb8);
    }
    local_58 = *(uint *)(DAT_01d4f428 + 0x24);
    iStack_54 = *(int *)(DAT_01d4f428 + 0x28);
    local_50 = 0;
    piVar4 = (int *)(DAT_01d4f428 + 0x1c);
    local_60 = (undefined4 ****)*piVar4;
    local_28 = FUN_0139f0d0(*(undefined4 *)(*param_4 + 0x34),*(undefined4 *)(*param_4 + 0x38),
                            param_4[1],param_4[2]);
    local_30 = &local_28;
    local_28 = local_28 + 0xcc;
    local_34 = &local_60;
    local_40 = &local_34;
    local_3c = 1;
    local_2c = &DAT_01d1bc88;
    local_38 = piVar4;
    FUN_01aaa548(&local_80,iVar3,&local_40);
  }
  else {
    local_48 = DAT_01d4f428;
    local_58 = 2;
    if (DAT_01d51ae9 == '\0') {
      piVar4 = (int *)(DAT_01d4f428 + 0x1c);
      local_80 = (undefined4 ****)*piVar4;
      puStack_7c = *(undefined2 **)(DAT_01d4f428 + 0x20);
      if (puStack_7c == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d1bcb8);
      }
      local_78 = *(undefined4 *)(DAT_01d4f428 + 0x24);
      local_74 = *(undefined4 *)(DAT_01d4f428 + 0x28);
      local_70 = 0;
      local_28 = FUN_0139f0d0(*(undefined4 *)(*param_4 + 0x34),*(undefined4 *)(*param_4 + 0x38),
                              param_4[1],param_4[2]);
      local_30 = &local_28;
      local_28 = local_28 + 0xcc;
      local_34 = &local_80;
      local_40 = &local_34;
      local_3c = 1;
      local_2c = &DAT_01d1bc88;
      local_38 = piVar4;
      FUN_01aaa3e0(&local_60,&local_40);
    }
    local_80 = local_60;
    puStack_7c = local_5c;
    local_78 = local_58;
    local_74 = iStack_54;
    local_70 = local_50;
    uStack_6c = uStack_4c;
    local_68 = local_48;
    uStack_64 = uStack_44;
  }
  if (local_78 != 2) {
    if ((local_78 & 1) == 0) {
      iVar3 = local_74;
    }
    else {
      iVar3 = local_74 + (*(int *)(local_70 + 8) - 1U & 0xfffffff8) + 8;
    }
    (**(code **)(local_70 + 0x30))(iVar3,&local_80);
  }
  if ((DAT_01d51ae9 == '\0') && (local_68 != 0)) {
    local_30 = *(int **)(local_68 + 0x10);
    local_34 = *(undefined4 *****)(local_68 + 0xc);
    local_60 = &local_34;
    local_5c = &DAT_0132b6a0;
    FUN_006404a8(&local_80,"tracing::span::active",0x15,&DAT_00594cdd,&local_60);
  }
  iVar3 = FUN_0139f148(*(undefined4 *)(*param_4 + 0x34),*(undefined4 *)(*param_4 + 0x38),param_4[1],
                       param_4[2]);
  FUN_017f130c(iVar3 + 100,param_3,param_2);
  FUN_013a388c(param_1,param_4,param_5);
  FUN_0134c39c(&local_80);
  FUN_01834abc(&local_80);
  return;
}

