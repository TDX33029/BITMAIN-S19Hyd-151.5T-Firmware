// FUN_01604d38 @ 01604d38 size=356 calls_out=8 calls_in=2
// strings: 

void FUN_01604d38(undefined4 *param_1,undefined2 *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  uint local_44;
  undefined4 local_40;
  uint local_38;
  undefined4 local_34;
  undefined4 local_30;
  uint *local_28;
  undefined1 *local_24;
  
  uVar5 = 0;
  local_4c = 0;
  local_50 = 0;
  local_54 = 0;
  local_58 = 0;
  local_5c = 0;
  local_60 = 1;
  local_64 = 0;
  local_68 = 0;
  local_48 = 0;
  iVar1 = FUN_016d7134(param_3,0,&local_68,&local_48);
  if (iVar1 == -0xb) {
    puVar4 = (undefined4 *)FUN_016d2bc8();
    local_34 = *puVar4;
LAB_01604e80:
    param_1[1] = uVar5 & 0xff | (int)puVar4 << 8;
    param_1[2] = local_34;
    *param_1 = 1;
    return;
  }
  if (iVar1 != 0) {
    uVar2 = FUN_016d7100();
    uVar3 = FUN_016dd8a2();
    FUN_006008c8(&local_44,uVar2,uVar3);
    local_24 = &LAB_00600898;
    local_28 = &local_44;
    FUN_00600d2c(&local_38,&DAT_005788c2,&local_28);
    uVar2 = local_34;
    uVar5 = local_38;
    FUN_015e79d4(&local_38,0x29,local_34,local_30);
    if (uVar5 != 0) {
      thunk_FUN_016d3fb4(uVar2);
    }
    if ((local_44 & 0x7fffffff) != 0) {
      thunk_FUN_016d3fb4(local_40);
    }
    if ((local_38 & 0xff) != 4) {
      puVar4 = (undefined4 *)(local_38 >> 8);
      uVar5 = local_38;
      goto LAB_01604e80;
    }
  }
  param_1[1] = local_48;
  param_1[2] = local_48;
  *(undefined2 *)(param_1 + 3) = *param_2;
  *param_1 = 0;
  return;
}

