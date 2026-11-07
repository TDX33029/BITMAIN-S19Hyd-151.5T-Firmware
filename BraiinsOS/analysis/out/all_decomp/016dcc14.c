// FUN_016dcc14 @ 016dcc14 size=72 calls_out=2 calls_in=2
// strings: 

void FUN_016dcc14(undefined1 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  undefined1 auStack_b8 [4];
  undefined1 auStack_b4 [4];
  undefined1 *local_b0;
  int iStack_ac;
  undefined1 auStack_a8 [36];
  undefined4 local_84;
  undefined1 *local_7c;
  undefined4 local_5c;
  undefined4 local_58;
  undefined1 **local_54;
  
  puVar1 = auStack_b4;
  if (param_2 != 0) {
    param_2 = param_2 + -1;
    puVar1 = param_1;
  }
  local_b0 = puVar1;
  iStack_ac = param_2;
  FUN_016dd606(auStack_a8,0,0x90);
  local_84 = 0x16dcbb1;
  local_5c = 0xffffffff;
  local_58 = 0xffffffff;
  local_54 = &local_b0;
  local_7c = auStack_b8;
  *puVar1 = 0;
  FUN_016dcaac(auStack_a8,param_3,param_4);
  return;
}

