// FUN_0118bf80 @ 0118bf80 size=236 calls_out=2 calls_in=0
// strings: headers

void FUN_0118bf80(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 *puStack_1c;
  undefined1 local_18;
  undefined1 local_17;
  undefined1 local_11;
  
  local_18 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0051dab7,7);
  local_17 = 0;
  puStack_1c = param_2;
  uVar1 = FUN_01302c38(&puStack_1c,&DAT_00530e7f,6,param_1 + 0x6c,&LAB_014128c8);
  uVar1 = FUN_01302c38(uVar1,"uri",3,param_1 + 0x40,&LAB_0141556c);
  local_11 = *(undefined1 *)(param_1 + 0x84);
  uVar1 = FUN_01302c38(uVar1,&DAT_00520eda,7,&local_11,&LAB_0141457c);
  uVar1 = FUN_01302c38(uVar1,"headers",7,param_1,FUN_014147b4);
  FUN_01302c38(uVar1,&DAT_0056cbc4,4,param_1 + 0x88,FUN_0118c098);
  FUN_01302e1c();
  return;
}

