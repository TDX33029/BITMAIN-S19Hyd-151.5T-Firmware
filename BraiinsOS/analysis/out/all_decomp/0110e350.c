// FUN_0110e350 @ 0110e350 size=452 calls_out=7 calls_in=0
// strings: 

undefined4 FUN_0110e350(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  uint *local_68;
  undefined4 *local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint uStack_20;
  undefined4 local_1c;
  
  local_68 = (uint *)*param_1;
  local_64 = (undefined4 *)param_1[1];
  uStack_60 = param_1[2];
  uStack_5c = param_1[3];
  local_58 = param_1[4];
  uStack_54 = param_1[5];
  uStack_50 = param_1[6];
  uStack_4c = param_1[7];
  local_40 = 0;
  local_44 = 1;
  local_48 = 0;
  FUN_0110f130(&local_48,0,0x40);
  uVar3 = local_40;
  uVar2 = local_44;
  iVar4 = local_44 + local_40;
  FUN_016dd606(iVar4,0,0x3f);
  local_40 = uVar3 + 0x40;
  *(undefined1 *)(iVar4 + 0x3f) = 0;
  uVar5 = FUN_00f5cf5c(&local_68,0x20,uVar2,local_40,&DAT_0038a37e,0);
  uVar2 = (uint)(uVar5 >> 0x20);
  if ((uVar5 & 1) != 0) {
    if (local_48 != 0) {
      thunk_FUN_016d3fb4(local_44);
    }
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_2c,&DAT_01886f20,&DAT_01886f10);
  }
  uVar3 = local_40;
  if (uVar2 < local_40) {
    uVar3 = uVar2;
  }
  local_38 = local_48;
  local_34 = local_44;
  local_40 = uVar3;
  local_30 = uVar3;
  FUN_00fab1e0(&local_2c,local_44,uVar3);
  local_1c = local_24;
  uStack_20 = local_28;
  if (local_2c == 0) {
    local_2c = local_38;
    uVar2 = local_34;
  }
  else {
    local_2c = local_34;
    uVar2 = local_30;
    uVar3 = local_28;
    if (local_38 != 0x80000000) {
      local_28 = local_34;
      local_24 = local_30;
      local_2c = local_38;
                    /* WARNING: Subroutine does not return */
      FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_2c,&DAT_01886e60,&DAT_01886e70);
    }
  }
  local_64 = &DAT_006043a8;
  local_68 = &local_2c;
  local_28 = uVar2;
  local_24 = uVar3;
  uVar1 = FUN_00fa948c(*param_2,param_2[1],&DAT_00590e71,&local_68);
  if (local_2c != 0) {
    thunk_FUN_016d3fb4(local_28);
  }
  return uVar1;
}

