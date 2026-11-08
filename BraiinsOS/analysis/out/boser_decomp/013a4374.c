// FUN_013a4374 @ 013a4374 size=1040 calls_out=14 calls_in=3
// strings: assign_connection_capacityevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/prioritize.rs:94 | tracing::span::active | assertion failed: N::next(&stream).is_none()event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/store.rs:285event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/store.rs:263event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/store.rs:275event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/store.rs:260 | FieldSet corrupted (this is a bug) | FieldSet corrupted (this is a bug)

void FUN_013a4374(int param_1,int param_2,int *param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  undefined1 *puVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  int local_8c;
  undefined4 ****local_88;
  undefined2 *puStack_84;
  uint local_80;
  int local_7c;
  int local_78;
  undefined4 uStack_74;
  int local_70;
  undefined4 uStack_6c;
  undefined4 ****local_68;
  undefined2 *local_64;
  uint local_60;
  int local_5c;
  int local_58;
  undefined4 uStack_54;
  int local_50;
  undefined4 uStack_4c;
  undefined4 ****local_48;
  undefined4 local_44;
  int *local_40;
  undefined4 ****local_3c;
  int *local_38;
  undefined4 *local_34;
  int local_30;
  int local_2c;
  int local_28;
  
  local_8c = param_2;
  if ((DAT_01d50f88 == 0) &&
     (((DAT_01d4dbc8 - 1 < 2 ||
       ((DAT_01d4dbc8 != 0 && (cVar1 = FUN_01aaafa8(&DAT_01d4dbc0), cVar1 != '\0')))) &&
      (iVar2 = FUN_01aaa278(DAT_01d4dbc0), iVar2 != 0)))) {
    local_64 = *(undefined2 **)(DAT_01d4dbc0 + 0x20);
    if (local_64 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01cee6b4);
    }
    local_38 = &local_8c;
    local_60 = *(uint *)(DAT_01d4dbc0 + 0x24);
    local_5c = *(int *)(DAT_01d4dbc0 + 0x28);
    local_40 = (int *)(DAT_01d4dbc0 + 0x1c);
    local_68 = (undefined4 ****)*local_40;
    local_3c = &local_68;
    local_48 = &local_3c;
    local_58 = 0;
    local_44 = 1;
    local_34 = &DAT_01d2ea5c;
    FUN_01aaa548(&local_88,DAT_01d4dbc0,&local_48);
  }
  else {
    local_50 = DAT_01d4dbc0;
    local_60 = 2;
    if (DAT_01d51ae9 == '\0') {
      local_40 = (int *)(DAT_01d4dbc0 + 0x1c);
      local_88 = (undefined4 ****)*local_40;
      puStack_84 = *(undefined2 **)(DAT_01d4dbc0 + 0x20);
      if (puStack_84 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01cee6b4);
      }
      local_38 = &local_8c;
      local_80 = *(undefined4 *)(DAT_01d4dbc0 + 0x24);
      local_7c = *(undefined4 *)(DAT_01d4dbc0 + 0x28);
      local_3c = &local_88;
      local_48 = &local_3c;
      local_78 = 0;
      local_44 = 1;
      local_34 = &DAT_01d2ea5c;
      FUN_01aaa3e0(&local_68,&local_48);
    }
    local_88 = local_68;
    puStack_84 = local_64;
    local_80 = local_60;
    local_7c = local_5c;
    local_78 = local_58;
    uStack_74 = uStack_54;
    local_70 = local_50;
    uStack_6c = uStack_4c;
  }
  if (local_80 != 2) {
    if ((local_80 & 1) == 0) {
      iVar2 = local_7c;
    }
    else {
      iVar2 = local_7c + (*(int *)(local_78 + 8) - 1U & 0xfffffff8) + 8;
    }
    (**(code **)(local_78 + 0x30))(iVar2,&local_88);
  }
  if ((DAT_01d51ae9 == '\0') && (local_70 != 0)) {
    local_38 = *(int **)(local_70 + 0x10);
    local_3c = *(undefined4 *****)(local_70 + 0xc);
    local_68 = &local_3c;
    local_64 = &DAT_0132b6a0;
    FUN_006404a8(&local_88,"tracing::span::active",0x15,&DAT_00594cdd,&local_68);
  }
  iVar2 = *(int *)(param_1 + 0x4c);
  iVar8 = *param_3;
  if (!SCARRY4(iVar2,local_8c)) {
    *(int *)(param_1 + 0x4c) = iVar2 + local_8c;
    iVar2 = iVar2 + local_8c;
  }
  while ((0 < iVar2 && (*(int *)(param_1 + 0x14) == 1))) {
    iVar9 = *(int *)(param_1 + 0x18);
    iVar2 = *(int *)(param_1 + 0x20);
    iVar6 = *(int *)(param_1 + 0x1c);
    bVar10 = iVar9 == iVar2;
    if (bVar10) {
      iVar2 = *(int *)(param_1 + 0x24);
    }
    if (bVar10 && iVar6 == iVar2) {
      iVar2 = FUN_0139f0d0(*(undefined4 *)(iVar8 + 0x34),*(undefined4 *)(iVar8 + 0x38),iVar9,iVar6);
      if (*(int *)(iVar2 + 0x70) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec("assertion failed: N::next(&stream).is_none()event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/store.rs:285event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/store.rs:263event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/store.rs:275event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/store.rs:260"
                     ,0x2c,&DAT_01cedcec);
      }
      *(undefined4 *)(param_1 + 0x14) = 0;
    }
    else {
      iVar2 = FUN_0139f148(*(undefined4 *)(iVar8 + 0x34),*(undefined4 *)(iVar8 + 0x38),iVar9,iVar6);
      uVar3 = *(undefined4 *)(iVar2 + 0x74);
      uVar4 = *(undefined4 *)(iVar2 + 0x78);
      uVar5 = *(uint *)(iVar2 + 0x70);
      *(undefined4 *)(iVar2 + 0x70) = 0;
      if ((uVar5 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01cedcdc);
      }
      *(undefined4 *)(param_1 + 0x14) = 1;
      *(undefined4 *)(param_1 + 0x18) = uVar3;
      *(undefined4 *)(param_1 + 0x1c) = uVar4;
    }
    iVar2 = FUN_0139f148(*(undefined4 *)(iVar8 + 0x34),*(undefined4 *)(iVar8 + 0x38),iVar9,iVar6);
    *(undefined1 *)(iVar2 + 0xe2) = 0;
    local_30 = iVar8;
    local_2c = iVar9;
    local_28 = iVar6;
    iVar2 = FUN_0139f0d0(*(undefined4 *)(iVar8 + 0x34),*(undefined4 *)(iVar8 + 0x38),iVar9,iVar6);
    cVar1 = *(byte *)(iVar2 + 0x20) - 6;
    if (*(byte *)(iVar2 + 0x20) < 6) {
      cVar1 = '\x06';
    }
    if (((cVar1 == '\x05' || cVar1 == '\x03') && (*(char *)(iVar2 + 0x21) != '\0')) ||
       (iVar2 = FUN_0139f0d0(*(undefined4 *)(iVar8 + 0x34),*(undefined4 *)(iVar8 + 0x38),iVar9,iVar6
                            ), *(int *)(iVar2 + 0xd8) != 0)) {
      iVar2 = FUN_0139f0d0(*(undefined4 *)(iVar8 + 0x34),*(undefined4 *)(iVar8 + 0x38),iVar9,iVar6);
      puVar7 = *(undefined1 **)(iVar2 + 0x18);
      FUN_013a4818(param_1,&local_30);
      FUN_013b1740(param_4,&local_30,puVar7 != &DAT_3b9aca00);
    }
    iVar2 = *(int *)(param_1 + 0x4c);
  }
  FUN_0134c39c(&local_88);
  FUN_01834abc(&local_88);
  return;
}

