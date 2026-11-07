// FUN_0168b2d0 @ 0168b2d0 size=292 calls_out=2 calls_in=3
// strings: 

undefined4 FUN_0168b2d0(uint *param_1,undefined4 *param_2,uint param_3,uint param_4)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  uint local_60;
  uint uStack_5c;
  undefined1 *local_58;
  undefined4 *local_54;
  uint uStack_50;
  undefined4 local_4c;
  uint local_48;
  undefined4 local_44;
  undefined1 local_40;
  undefined4 local_3c;
  uint local_38;
  undefined2 local_34;
  undefined8 local_30;
  int *local_28;
  undefined4 *local_24;
  
  local_58 = (undefined1 *)&local_60;
  uVar4 = *param_1;
  local_60 = param_3;
  uStack_5c = param_4;
  if (uVar4 == 0x80000003) {
    local_54 = &DAT_0157d360;
    uVar1 = FUN_00fa948c(*param_2,param_2[1],&DAT_00590e71,&local_58);
    return uVar1;
  }
  uVar3 = 1;
  if ((int)uVar4 < 0) {
    uVar3 = uVar4 ^ 0x80000000;
  }
  if (uVar3 == 0) {
    local_54 = (undefined4 *)1;
    uStack_50 = 0;
  }
  else {
    local_54 = (undefined4 *)param_3;
    uStack_50 = param_4;
    if (uVar3 == 1) {
      local_54 = (undefined4 *)param_1[1];
      uStack_50 = param_1[2];
    }
  }
  local_34 = 1;
  local_40 = 1;
  local_3c = 0;
  local_4c = 0;
  local_44 = 0xd;
  local_58 = (undefined1 *)0xd;
  local_48 = uStack_50;
  local_38 = uStack_50;
  do {
    uVar5 = FUN_015bb1b4(&local_58);
    if ((int)uVar5 == 0) {
      return 0;
    }
    local_24 = &DAT_0157d360;
    local_28 = (int *)&local_30;
    local_30 = uVar5;
    iVar2 = FUN_00fa948c(*param_2,param_2[1],&DAT_00590e71,&local_28);
  } while (iVar2 == 0);
  return 1;
}

