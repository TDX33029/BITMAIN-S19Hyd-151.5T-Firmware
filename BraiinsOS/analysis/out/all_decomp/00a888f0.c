// FUN_00a888f0 @ 00a888f0 size=296 calls_out=3 calls_in=0
// strings: 

void FUN_00a888f0(int param_1,undefined4 param_2,undefined4 param_3,char param_4,int param_5)

{
  int local_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  int local_40 [3];
  int *local_34;
  undefined4 *local_30;
  int *local_2c;
  undefined1 *local_28;
  
  local_40[1] = 0;
  local_28 = &LAB_00fac484;
  local_40[0] = 1;
  local_2c = local_40 + 2;
  local_30 = &DAT_0157d360;
  local_40[2] = param_3;
  local_34 = local_40;
  FUN_00600d2c(&local_60,&DAT_00570dec,&local_34);
  if (param_4 == '\x02') {
    local_40[0] = param_5 + 1;
    local_30 = &DAT_006043a8;
    local_28 = &LAB_00fac484;
    local_34 = &local_60;
    local_2c = local_40;
    FUN_00600d2c(&local_50,&DAT_0057a4eb,&local_34);
    FUN_016dd1aa(param_1,param_2,0x48);
    *(undefined1 *)(param_1 + 0x68) = 2;
    *(undefined4 *)(param_1 + 0x60) = param_3;
    *(int *)(param_1 + 100) = param_5;
    *(undefined4 *)(param_1 + 0x48) = local_50;
    *(undefined4 *)(param_1 + 0x4c) = uStack_4c;
    *(undefined4 *)(param_1 + 0x50) = uStack_48;
    *(undefined4 *)(param_1 + 0x54) = 0x80000000;
    if (local_60 != 0) {
      thunk_FUN_016d3fb4(local_5c);
      return;
    }
  }
  else {
    FUN_016dd1aa(param_1,param_2,0x48);
    *(char *)(param_1 + 0x68) = param_4;
    *(undefined4 *)(param_1 + 0x60) = param_3;
    *(int *)(param_1 + 100) = param_5;
    *(int *)(param_1 + 0x48) = local_60;
    *(undefined4 *)(param_1 + 0x4c) = local_5c;
    *(undefined4 *)(param_1 + 0x50) = uStack_58;
    *(undefined4 *)(param_1 + 0x54) = 0x80000000;
  }
  return;
}

