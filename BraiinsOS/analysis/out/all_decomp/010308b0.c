// FUN_010308b0 @ 010308b0 size=484 calls_out=5 calls_in=1
// strings: 

void FUN_010308b0(int *param_1,int *param_2,undefined4 *param_3)

{
  int *piVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_1b8 [128];
  undefined4 local_138;
  int *local_134;
  int local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  int local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  int local_108;
  int local_104;
  undefined1 local_100;
  undefined1 local_ff;
  undefined1 auStack_fe [54];
  char local_c8;
  undefined1 local_c7;
  undefined1 local_c6;
  undefined1 auStack_c5 [73];
  char local_7c;
  undefined1 local_7b;
  undefined1 local_7a;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  uVar2 = *(undefined1 *)((int)param_2 + 9);
  uVar3 = (undefined1)param_2[2];
  iVar4 = *param_2;
  iVar5 = param_2[1];
  FUN_016dd1aa(auStack_1b8,(int)param_2 + 10,0x7e);
  local_138 = *param_3;
  piVar1 = (int *)param_3[1];
  local_130 = param_3[2];
  local_12c = param_3[3];
  local_128 = param_3[4];
  local_124 = param_3[5];
  local_120 = param_3[6];
  local_11c = param_3[7];
  local_118 = param_3[8];
  uStack_114 = param_3[9];
  uStack_110 = param_3[10];
  local_134 = piVar1;
  if (iVar4 == 3 && iVar5 == 0) {
    if ((char)local_138 == '\x02') {
      (**(code **)(*piVar1 + 0x10))(piVar1 + 3,piVar1[1],piVar1[2]);
      thunk_FUN_016d3fb4(piVar1);
    }
    if (local_130 != 0) {
      (**(code **)(local_130 + 0x10))(&local_124,local_12c,local_128);
    }
    iVar5 = 0;
    iVar4 = 3;
    if (local_120 != 0) {
      (**(code **)(local_120 + 0x10))(&uStack_114,local_11c,local_118);
    }
  }
  else {
    FUN_016dd1aa(auStack_fe,(int)param_2 + 10,0x7e);
    local_50 = *param_3;
    uStack_4c = param_3[1];
    uStack_48 = param_3[2];
    uStack_44 = param_3[3];
    uStack_40 = param_3[4];
    local_3c = param_3[5];
    uStack_38 = param_3[6];
    uStack_34 = param_3[7];
    uStack_30 = param_3[8];
    uStack_2c = param_3[9];
    uStack_28 = param_3[10];
    local_108 = iVar4;
    local_104 = iVar5;
    local_100 = uVar3;
    local_ff = uVar2;
    FUN_010a2fe8(&local_7c);
    if (local_7c == '\x03') {
      FUN_0102fdcc(&local_108);
      iVar5 = 0;
      uVar3 = 3;
      iVar4 = 3;
      uVar2 = local_7b;
    }
    else {
      FUN_016dd1aa(&local_50,(uint)&local_7c | 3,0x29);
      FUN_0145d5e0(&local_c8);
      local_c6 = local_7a;
      local_c7 = local_7b;
      local_c8 = local_7c;
      FUN_016dd1aa(auStack_c5,&local_50,0x29);
      uVar2 = local_ff;
      uVar3 = local_100;
      iVar5 = local_104;
      iVar4 = local_108;
      FUN_016dd1aa(auStack_1b8,auStack_fe,0x7e);
    }
  }
  *(undefined1 *)((int)param_1 + 9) = uVar2;
  *(undefined1 *)(param_1 + 2) = uVar3;
  *param_1 = iVar4;
  param_1[1] = iVar5;
  FUN_016dd1aa((int)param_1 + 10,auStack_1b8,0x7e);
  return;
}

