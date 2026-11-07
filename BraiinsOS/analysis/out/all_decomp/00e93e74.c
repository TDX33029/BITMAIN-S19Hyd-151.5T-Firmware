// FUN_00e93e74 @ 00e93e74 size=376 calls_out=5 calls_in=1
// strings: Invalid ed25519-primitive bytes

void FUN_00e93e74(undefined1 *param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint local_78;
  undefined4 local_74;
  undefined4 uStack_70;
  uint local_68;
  char *local_64;
  int local_60;
  undefined *local_5c;
  uint local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_34;
  uint local_30;
  char *local_2c;
  int local_28;
  
  FUN_005e89cc(&local_78);
  if (local_78 != 0x80000000) {
    local_68 = local_78;
    local_64 = (char *)local_74;
    local_60 = uStack_70;
    local_58 = local_58 & 0xffffff00;
    local_5c = &DAT_0038a37e;
    FUN_0110ed6c(&local_34,&local_68);
    if (local_34 == 1) {
      local_34 = local_30 >> 8;
    }
    else {
      if ((local_28 == 0x40) && (bVar1 = local_2c[0x3f], bVar1 < 0x20)) {
        uVar2 = *(undefined4 *)(local_2c + 7);
        local_34 = CONCAT22(CONCAT11(local_34._3_1_,local_2c[2]),*(undefined2 *)local_2c);
        uVar3 = *(undefined4 *)(local_2c + 0xb);
        uVar4 = *(undefined4 *)(local_2c + 3);
        FUN_016dd1aa(&local_68,local_2c + 0xf,0x30);
        if (local_30 != 0) {
          thunk_FUN_016d3fb4(local_2c);
        }
        *(undefined2 *)(param_1 + 1) = (undefined2)local_34;
        *(undefined4 *)(param_1 + 4) = uVar4;
        *(undefined4 *)(param_1 + 8) = uVar2;
        param_1[3] = local_34._2_1_;
        *(undefined4 *)(param_1 + 0xc) = uVar3;
        *(uint *)(param_1 + 0x10) = local_68;
        *(char **)(param_1 + 0x14) = local_64;
        *(int *)(param_1 + 0x18) = local_60;
        *(undefined **)(param_1 + 0x1c) = local_5c;
        *(uint *)(param_1 + 0x20) = local_58;
        *(undefined4 *)(param_1 + 0x24) = uStack_54;
        *(undefined4 *)(param_1 + 0x28) = local_50;
        *(undefined4 *)(param_1 + 0x2c) = uStack_4c;
        *(undefined4 *)(param_1 + 0x30) = uStack_48;
        *(undefined4 *)(param_1 + 0x34) = uStack_44;
        *(undefined4 *)(param_1 + 0x38) = uStack_40;
        *(undefined4 *)(param_1 + 0x3c) = uStack_3c;
        param_1[0x40] = bVar1;
        *param_1 = 0;
        return;
      }
      if (local_30 != 0) {
        local_34 = thunk_FUN_016d3fb4(local_2c);
      }
      local_30 = 8;
      local_2c = "Invalid ed25519-primitive bytes";
      local_28 = 0x1f;
    }
    local_68 = local_30 & 0xff | local_34 << 8;
    local_64 = local_2c;
    local_60 = local_28;
    local_74 = FUN_00ea02c0(&local_68);
  }
  *(undefined4 *)(param_1 + 4) = local_74;
  *param_1 = 1;
  return;
}

