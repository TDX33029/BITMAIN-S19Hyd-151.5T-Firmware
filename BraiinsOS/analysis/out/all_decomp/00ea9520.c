// FUN_00ea9520 @ 00ea9520 size=452 calls_out=6 calls_in=1
// strings: IP address

void FUN_00ea9520(undefined2 *param_1,uint *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 uVar8;
  uint local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  char *local_58;
  undefined4 local_54;
  undefined2 local_50;
  undefined2 uStack_4e;
  undefined2 local_4c;
  uint local_48;
  uint local_44;
  undefined4 uStack_38;
  char local_30;
  undefined1 uStack_2f;
  undefined2 uStack_2e;
  undefined1 uStack_2c;
  char cStack_2b;
  undefined2 uStack_2a;
  undefined1 uStack_28;
  undefined1 uStack_27;
  undefined2 local_26;
  undefined1 uStack_24;
  undefined4 local_23;
  
  if ((char)*param_2 == '\0') {
    *param_1 = 0x200;
    FUN_005c37bc(param_2);
    return;
  }
  local_70 = *param_2;
  uVar7 = param_2[1];
  uVar6 = param_2[2];
  local_64 = param_2[3];
  local_60 = param_2[4];
  local_5c = param_2[5];
  local_54 = 10;
  local_58 = "IP address";
  local_6c = uVar7;
  local_68 = uVar6;
  if ((local_70 & 0xff) == 3) {
    local_48 = uVar6;
    local_44 = local_64;
    FUN_00fb3af4(&local_30,&local_48);
    if (local_30 == '\0') {
      FUN_00fb3f68(&local_30,&local_48);
      if (local_30 == '\x01') {
        uVar5 = CONCAT13(uStack_2c,CONCAT21(uStack_2e,uStack_2f));
        uStack_38 = local_23;
        if (local_44 == 0) {
          uVar8 = 1;
          local_30 = cStack_2b;
          uStack_2f = (undefined1)uStack_2a;
          uStack_2e = (undefined2)(CONCAT13(uStack_28,CONCAT21(uStack_2a,cStack_2b)) >> 0x10);
          uStack_2c = uStack_27;
          cStack_2b = (char)local_26;
          uStack_2a = (undefined2)(CONCAT13(uStack_24,CONCAT21(local_26,uStack_27)) >> 0x10);
          uStack_28 = (undefined1)local_23;
          uStack_27 = (undefined1)((uint)local_23 >> 8);
          local_26 = (undefined2)((uint)local_23 >> 0x10);
          goto LAB_00ea9654;
        }
      }
    }
    else if (local_44 == 0) {
      uVar5 = CONCAT13(uStack_2c,CONCAT21(uStack_2e,uStack_2f));
      uVar8 = 0;
LAB_00ea9654:
      uVar4 = local_26;
      local_4c = CONCAT11(uStack_2f,local_30);
      local_50 = (undefined2)uVar5;
      uVar3 = local_50;
      uStack_4e = (undefined2)((uint)uVar5 >> 0x10);
      uVar5 = CONCAT22(local_4c,uStack_4e);
      uVar1 = CONCAT13(cStack_2b,CONCAT12(uStack_2c,uStack_2e));
      uVar2 = CONCAT13(uStack_27,CONCAT12(uStack_28,uStack_2a));
      if (uVar7 != 0) {
        thunk_FUN_016d3fb4(uVar6);
      }
      *(undefined4 *)(param_1 + 4) = uVar1;
      *(undefined1 *)((int)param_1 + 1) = uVar8;
      param_1[1] = uVar3;
      *(undefined4 *)(param_1 + 2) = uVar5;
      *(undefined4 *)(param_1 + 6) = uVar2;
      param_1[8] = uVar4;
      *(undefined1 *)param_1 = 0;
      return;
    }
    uVar5 = FUN_00ea0890(0);
    if (uVar7 != 0) {
      thunk_FUN_016d3fb4(uVar6);
    }
  }
  else {
    uVar5 = FUN_00f36124(&local_70,&local_58,&DAT_0187bea8);
    FUN_005c37bc(&local_70);
  }
  *(undefined4 *)(param_1 + 2) = uVar5;
  *(undefined1 *)param_1 = 1;
  return;
}

