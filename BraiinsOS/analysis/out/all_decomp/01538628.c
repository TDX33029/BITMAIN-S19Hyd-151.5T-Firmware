// FUN_01538628 @ 01538628 size=216 calls_out=5 calls_in=2
// strings: client finished

void FUN_01538628(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined1 auStack_174 [68];
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined1 auStack_124 [108];
  undefined2 local_b8;
  undefined4 local_b0 [32];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  (**(code **)(*(int *)(param_2 + 0x18) + 0xc))(auStack_174,*(undefined4 *)(param_2 + 0x14));
  FUN_01555e08((uint)local_b0 | 4,param_1,auStack_174,"client finished");
  local_b0[0] = 0x80000012;
  local_28 = 0;
  local_2c = 1;
  local_30 = 0;
  FUN_0150e524(local_b0,&local_30,0x80000000);
  local_130 = local_30;
  uStack_12c = local_2c;
  uStack_128 = local_28;
  FUN_016dd1aa(auStack_124,local_b0,0x6c);
  local_b8 = 4;
  FUN_0151eddc(param_2,&local_130);
  FUN_016dd1aa(local_b0,&local_130,0x7c);
  FUN_01525ed4(param_3,local_b0,1);
  return;
}

