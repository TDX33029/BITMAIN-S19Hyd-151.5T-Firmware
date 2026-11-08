// FUN_01623924 @ 01623924 size=292 calls_out=5 calls_in=1
// strings: 

void FUN_01623924(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  uint uVar1;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  char local_28;
  undefined2 local_27;
  char local_25;
  undefined4 local_24;
  undefined4 local_20;
  code *local_1c;
  undefined4 *local_18;
  undefined4 *local_14;
  
  local_18 = &uStack_3c;
  local_1c = FUN_00fac4cc;
  local_14 = &DAT_0157d360;
  uStack_3c = param_3;
  uStack_38 = param_4;
  local_20 = param_2;
  FUN_00600d2c(&local_34,&DAT_00584234,&local_20);
  uVar1 = (uint)local_14 >> 8;
  local_20 = 0;
  local_1c = (code *)0x1b6;
  local_18 = (undefined4 *)0x1000100;
  local_14 = (undefined4 *)CONCAT31((uint3)uVar1 & 0xffff00,1);
  FUN_015ec1bc(&local_28,&local_20,local_30,local_2c);
  if (local_28 == '\x04') {
    FUN_01623cf4(&local_20,local_24,param_5,param_6);
    if ((char)local_20 == '\x04') {
      *param_1 = '\x04';
    }
    else {
      *(undefined4 *)param_1 = local_20;
      *(code **)(param_1 + 4) = local_1c;
    }
    FUN_016dffb2(local_24);
  }
  else {
    param_1[3] = local_25;
    *(undefined2 *)(param_1 + 1) = local_27;
    *(undefined4 *)(param_1 + 4) = local_24;
    *param_1 = local_28;
  }
  if (local_34 != 0) {
    thunk_FUN_016d3fb4(local_30);
  }
  return;
}

