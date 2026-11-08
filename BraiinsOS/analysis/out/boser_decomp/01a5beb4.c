// FUN_01a5beb4 @ 01a5beb4 size=256 calls_out=1 calls_in=1
// strings: 

void FUN_01a5beb4(int param_1,undefined4 *param_2,int param_3)

{
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined1 auStack_128 [84];
  undefined4 local_d4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_64;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  int local_44;
  undefined4 *local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int local_2c;
  undefined4 *local_28;
  
  local_38 = param_2[6];
  uStack_34 = param_2[7];
  uStack_30 = param_2[8];
  local_138 = *(undefined4 *)(param_3 + 8);
  local_134 = *(undefined4 *)(param_3 + 0xc);
  local_a8 = 0;
  local_ac = 0;
  local_b4 = 0;
  local_b0 = 4;
  local_b8 = 1;
  local_64 = 8;
  local_50 = *param_2;
  uStack_4c = param_2[1];
  uStack_48 = param_2[2];
  local_40 = &local_c0;
  local_130 = local_138;
  local_12c = local_134;
  local_c0 = local_138;
  local_bc = local_134;
  local_44 = param_3;
  FUN_01a5cbd0(auStack_128,&local_b8,&local_50);
  local_d4 = 8;
  local_50 = param_2[3];
  uStack_4c = param_2[4];
  uStack_48 = param_2[5];
  local_40 = &local_130;
  local_44 = param_3;
  FUN_01a5cbd0(&local_b8,auStack_128,&local_50);
  local_28 = &local_138;
  local_64 = 8;
  local_2c = param_3;
  FUN_01a5cbd0(param_1,&local_b8,&local_38);
  *(undefined4 *)(param_1 + 0x54) = 8;
  return;
}

