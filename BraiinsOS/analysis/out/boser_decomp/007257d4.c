// FUN_007257d4 @ 007257d4 size=236 calls_out=5 calls_in=3
// strings: 

void FUN_007257d4(uint *param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  char local_90 [4];
  undefined4 local_8c;
  int local_88;
  uint local_84;
  undefined4 local_80;
  undefined2 local_7c;
  uint local_50;
  int local_4c;
  
  local_84 = 0x1b6;
  local_80 = 1;
  local_88 = 0;
  local_7c = 0;
  FUN_019a581c(local_90,&local_88,param_2,param_3);
  if (local_90[0] != '\x04') {
    FUN_0069d8a4(local_90[0],local_8c);
    *param_1 = 0;
    return;
  }
  FUN_019a6040(&local_88,local_8c);
  if (local_88 == 1) {
    FUN_0069d8a4(local_84 & 0xff,local_80);
  }
  else if (local_4c == 0) {
    uVar1 = FUN_01be6c88(0,local_50,1,2,local_8c);
    if (uVar1 != 0xffffffff) {
      param_1[1] = uVar1;
      param_1[2] = local_50;
    }
    *param_1 = (uint)(uVar1 != 0xffffffff);
    goto LAB_007258b0;
  }
  *param_1 = 0;
LAB_007258b0:
  FUN_01bf01d6(local_8c);
  return;
}

