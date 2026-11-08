// FUN_013a6f4c @ 013a6f4c size=880 calls_out=12 calls_in=2
// strings: assign_connection_capacityevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/prioritize.rs:94 | tracing::span::active | FieldSet corrupted (this is a bug) | FieldSet corrupted (this is a bug)

void FUN_013a6f4c(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 ****ppppuVar1;
  undefined2 *puVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  undefined1 *puVar6;
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
  int iStack_5c;
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
  undefined4 ****ppppuStack_30;
  undefined2 *puStack_2c;
  uint uStack_28;
  
  local_8c = param_2;
  if ((DAT_01d50f88 == 0) &&
     (((DAT_01d4dbc8 - 1 < 2 ||
       ((DAT_01d4dbc8 != 0 && (cVar4 = FUN_01aaafa8(&DAT_01d4dbc0), cVar4 != '\0')))) &&
      (iVar5 = FUN_01aaa278(DAT_01d4dbc0), iVar5 != 0)))) {
    local_64 = *(undefined2 **)(DAT_01d4dbc0 + 0x20);
    if (local_64 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01cee6b4);
    }
    local_38 = &local_8c;
    local_60 = *(uint *)(DAT_01d4dbc0 + 0x24);
    iStack_5c = *(int *)(DAT_01d4dbc0 + 0x28);
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
    local_7c = iStack_5c;
    local_78 = local_58;
    uStack_74 = uStack_54;
    local_70 = local_50;
    uStack_6c = uStack_4c;
  }
  if (local_80 != 2) {
    if ((local_80 & 1) == 0) {
      iVar5 = local_7c;
    }
    else {
      iVar5 = local_7c + (*(int *)(local_78 + 8) - 1U & 0xfffffff8) + 8;
    }
    (**(code **)(local_78 + 0x30))(iVar5,&local_88);
  }
  if ((DAT_01d51ae9 == '\0') && (local_70 != 0)) {
    local_38 = *(int **)(local_70 + 0x10);
    local_3c = *(undefined4 *****)(local_70 + 0xc);
    local_68 = &local_3c;
    local_64 = &DAT_0132b6a0;
    FUN_006404a8(&local_88,"tracing::span::active",0x15,&DAT_00594cdd,&local_68);
  }
  iVar5 = *(int *)(param_1 + 0x4c);
  if (!SCARRY4(iVar5,local_8c)) {
    *(int *)(param_1 + 0x4c) = iVar5 + local_8c;
    iVar5 = iVar5 + local_8c;
  }
  while ((0 < iVar5 &&
         (FUN_0139f948(&local_68,param_1 + 0x14,param_3), uVar3 = local_60, puVar2 = local_64,
         ppppuVar1 = local_68, local_68 != (undefined4 ****)0x0))) {
    ppppuStack_30 = local_68;
    puStack_2c = local_64;
    uStack_28 = local_60;
    iVar5 = FUN_0139f0d0(local_68[0xd],local_68[0xe],local_64,local_60);
    cVar4 = *(byte *)(iVar5 + 0x20) - 6;
    if (*(byte *)(iVar5 + 0x20) < 6) {
      cVar4 = '\x06';
    }
    if (((cVar4 == '\x05' || cVar4 == '\x03') && (*(char *)(iVar5 + 0x21) != '\0')) ||
       (iVar5 = FUN_0139f0d0(ppppuVar1[0xd],ppppuVar1[0xe],puVar2,uVar3),
       *(int *)(iVar5 + 0xd8) != 0)) {
      iVar5 = FUN_0139f0d0(ppppuStack_30[0xd],ppppuStack_30[0xe],puStack_2c,uStack_28);
      puVar6 = *(undefined1 **)(iVar5 + 0x18);
      FUN_013a4818(param_1,&ppppuStack_30);
      FUN_013b1740(param_4,&ppppuStack_30,puVar6 != &DAT_3b9aca00);
    }
    iVar5 = *(int *)(param_1 + 0x4c);
  }
  FUN_0134c39c(&local_88);
  FUN_01834abc(&local_88);
  return;
}

