// FUN_010c7754 @ 010c7754 size=1036 calls_out=4 calls_in=1
// strings: REQUEST_METHOD | ALL_PROXY | all_proxy | HTTP_PROXY | http_proxy | HTTPS_PROXY

void FUN_010c7754(undefined4 param_1)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 local_74;
  uint local_70;
  undefined4 local_6c;
  undefined4 local_68;
  uint local_64;
  undefined4 local_60;
  undefined4 local_5c;
  uint local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  uint uStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 local_40;
  uint local_3c;
  undefined4 local_38;
  uint local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  FUN_015e9334(&local_3c,"REQUEST_METHOD",0xe);
  FUN_015e9334(&local_30,"ALL_PROXY",9);
  uVar5 = local_28;
  uVar7 = local_2c;
  uVar3 = local_30;
  if (local_30 == 0x80000000) {
LAB_010c77d0:
    FUN_015e9334(&local_30,"all_proxy",9);
    uVar5 = local_28;
    uVar7 = local_2c;
    uVar3 = local_30;
    if (local_30 == 0x80000000) {
      uVar5 = 0;
      uVar3 = 0;
      uVar7 = 1;
    }
    else {
      FUN_00fab1e0(&local_70,local_2c,local_28);
      if (local_70 == 1) {
        uVar5 = 0;
        if ((uVar3 & 0x7fffffff) != 0) {
          thunk_FUN_016d3fb4(uVar7);
        }
        uVar3 = 0;
        uVar7 = 1;
      }
    }
  }
  else {
    FUN_00fab1e0(&local_70,local_2c,local_28);
    if (local_70 == 1) {
      if ((uVar3 & 0x7fffffff) != 0) {
        thunk_FUN_016d3fb4(uVar7);
      }
      goto LAB_010c77d0;
    }
  }
  FUN_015e9334(&local_30,"HTTP_PROXY",10);
  uVar1 = local_2c;
  uVar8 = local_30;
  if (local_30 == 0x80000000) {
LAB_010c78b0:
    FUN_015e9334(&local_30,"http_proxy",10);
    local_74 = local_28;
    uVar1 = local_2c;
    uVar8 = local_30;
    if (local_30 == 0x80000000) {
      local_74 = 0;
      uVar8 = 0;
      uVar1 = 1;
    }
    else {
      FUN_00fab1e0(&local_70,local_2c,local_28);
      if (local_70 == 1) {
        local_74 = 0;
        if ((uVar8 & 0x7fffffff) != 0) {
          thunk_FUN_016d3fb4(uVar1);
        }
        uVar8 = 0;
        uVar1 = 1;
      }
      else {
      }
    }
  }
  else {
    local_74 = local_28;
    FUN_00fab1e0(&local_70,local_2c);
    if (local_70 == 1) {
      if ((uVar8 & 0x7fffffff) != 0) {
        thunk_FUN_016d3fb4(uVar1);
      }
      goto LAB_010c78b0;
    }
  }
  FUN_015e9334(&local_30,"HTTPS_PROXY",0xb);
  uVar6 = local_28;
  uVar4 = local_2c;
  uVar2 = local_30;
  if (local_30 == 0x80000000) {
LAB_010c7994:
    FUN_015e9334(&local_30,"https_proxy",0xb);
    uVar6 = local_28;
    uVar4 = local_2c;
    uVar2 = local_30;
    if (local_30 == 0x80000000) {
      uVar6 = 0;
      uVar2 = 0;
      uVar4 = 1;
    }
    else {
      FUN_00fab1e0(&local_70,local_2c,local_28);
      if (local_70 == 1) {
        uVar6 = 0;
        if ((uVar2 & 0x7fffffff) != 0) {
          thunk_FUN_016d3fb4(uVar4);
        }
        uVar2 = 0;
        uVar4 = 1;
      }
    }
  }
  else {
    FUN_00fab1e0(&local_70,local_2c,local_28);
    if (local_70 == 1) {
      if ((uVar2 & 0x7fffffff) != 0) {
        thunk_FUN_016d3fb4(uVar4);
      }
      goto LAB_010c7994;
    }
  }
  FUN_015e9334(&local_30,&DAT_00569f30,8);
  local_44 = local_28;
  local_48 = local_2c;
  uStack_4c = local_30;
  if (local_30 != 0x80000000) {
    FUN_00fab1e0(&local_70,local_2c,local_28);
    if (local_70 != 1) goto LAB_010c7af0;
    if ((uStack_4c & 0x7fffffff) != 0) {
      thunk_FUN_016d3fb4(local_48);
    }
  }
  FUN_015e9334(&local_30,&DAT_00569d28,8);
  if (local_30 == 0x80000000) {
    local_44 = 0;
    local_48 = 1;
    uStack_4c = 0;
  }
  else {
    FUN_00fab1e0(&local_70,local_2c,local_28);
    if (local_70 == 1) {
      if ((local_30 & 0x7fffffff) != 0) {
        thunk_FUN_016d3fb4(local_2c);
      }
      local_30 = 0;
      local_28 = 0;
      local_2c = 1;
    }
    local_44 = local_28;
    local_48 = local_2c;
    uStack_4c = local_30;
  }
LAB_010c7af0:
  local_5c = local_74;
  local_40 = local_3c != 0x80000000;
  local_70 = uVar3;
  local_6c = uVar7;
  local_68 = uVar5;
  local_64 = uVar8;
  local_60 = uVar1;
  local_58 = uVar2;
  uStack_54 = uVar4;
  uStack_50 = uVar6;
  if ((local_3c & 0x7fffffff) != 0) {
    thunk_FUN_016d3fb4(local_38);
  }
  FUN_010c58d4(param_1,&local_70);
  return;
}

