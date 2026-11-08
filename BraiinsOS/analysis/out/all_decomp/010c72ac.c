// FUN_010c72ac @ 010c72ac size=556 calls_out=4 calls_in=2
// strings: 

void FUN_010c72ac(uint *param_1,uint *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *local_88;
  uint local_80;
  uint *local_7c;
  uint local_78;
  uint local_74;
  uint uStack_70;
  uint local_6c;
  uint local_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  uint local_58;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint uStack_30;
  uint uStack_2c;
  
  uVar4 = (uint)(byte)param_2[6];
  if (uVar4 == 0) {
    uVar2 = 0;
  }
  else if (uVar4 == 1) {
    uVar2 = (uint)*(byte *)((int)param_2 + 0x19) << 8;
  }
  else {
    puVar1 = (undefined4 *)param_2[7];
    local_88 = (uint *)thunk_FUN_016d4a50(0x10);
    if (local_88 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0x10);
    }
    (**(code **)*puVar1)(&local_80,puVar1 + 3,puVar1[1],puVar1[2]);
    uVar2 = 0;
    local_88[3] = local_74;
    *local_88 = local_80;
    local_88[1] = (uint)local_7c;
    local_88[2] = local_78;
  }
  (**(code **)param_2[8])(&local_80,param_2 + 0xb,param_2[9],param_2[10]);
  local_38 = local_80;
  local_34 = (uint)local_7c;
  uStack_30 = local_78;
  uStack_2c = local_74;
  (**(code **)param_2[0xc])(&local_50,param_2 + 0xf,param_2[0xd],param_2[0xe]);
  local_68 = local_50;
  uStack_64 = local_4c;
  uStack_60 = local_48;
  uStack_5c = local_44;
  local_80 = uVar2 | uVar4;
  local_74 = local_34;
  uStack_70 = uStack_30;
  local_6c = uStack_2c;
  local_7c = local_88;
  local_58 = CONCAT22(local_58._2_2_,(short)param_2[0x10]);
  uVar4 = 2;
  if ((int)*param_2 < 0) {
    uVar4 = *param_2 ^ 0x80000000;
  }
  local_78 = local_38;
  if (uVar4 == 0) {
    local_50 = 0x80000000;
  }
  else if (uVar4 == 1) {
    (**(code **)param_2[1])((uint)&local_50 | 4,param_2 + 4,param_2[2],param_2[3]);
    local_50 = 0x80000001;
    local_3c = CONCAT31(local_3c._1_3_,(char)param_2[5]);
  }
  else {
    uVar3 = param_2[1];
    uVar5 = param_2[2];
    uVar2 = 1;
    uVar4 = 1;
    if ((uVar5 != 0) && (uVar4 = thunk_FUN_016d4a50(uVar5), uVar4 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,uVar5);
    }
    FUN_016dd1aa(uVar4,uVar3,uVar5);
    uVar3 = param_2[4];
    local_44 = param_2[5];
    if ((local_44 != 0) && (uVar2 = thunk_FUN_016d4a50(local_44), uVar2 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,local_44);
    }
    FUN_016dd1aa(uVar2,uVar3,local_44);
    local_50 = uVar5;
    local_4c = uVar4;
    local_48 = uVar5;
    local_40 = uVar2;
    local_3c = local_44;
  }
  param_1[6] = local_80;
  param_1[7] = (uint)local_7c;
  param_1[8] = local_78;
  param_1[9] = local_74;
  param_1[10] = uStack_70;
  param_1[0xb] = local_6c;
  param_1[0xc] = local_68;
  param_1[0xd] = uStack_64;
  param_1[0xe] = uStack_60;
  param_1[0xf] = uStack_5c;
  param_1[0x10] = local_58;
  *param_1 = local_50;
  param_1[1] = local_4c;
  param_1[2] = local_48;
  param_1[3] = local_44;
  param_1[4] = local_40;
  param_1[5] = local_3c;
  return;
}

