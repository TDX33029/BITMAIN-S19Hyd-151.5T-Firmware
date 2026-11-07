// FUN_0143a124 @ 0143a124 size=272 calls_out=2 calls_in=0
// strings: State | reading | writing | keep_alive

void FUN_0143a124(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 *local_18;
  undefined1 local_14;
  undefined1 local_13;
  
  local_14 = (**(code **)(param_2[1] + 0xc))(*param_2,"State",5);
  local_13 = 0;
  local_18 = param_2;
  uVar1 = FUN_01302c38(&local_18,"reading",7,param_1 + 0x40,&LAB_0143a5a0);
  uVar1 = FUN_01302c38(uVar1,"writing",7,param_1 + 0x60,FUN_0143a2a0);
  FUN_01302c38(uVar1,"keep_alive",10,param_1 + 0xa4,FUN_0143a264);
  if (*(int *)(param_1 + 0x94) != 0) {
    FUN_01302c38(&local_18,&DAT_0053268a,5,(int *)(param_1 + 0x94),FUN_0143b210);
  }
  if (*(char *)(param_1 + 0x98) != '\0') {
    FUN_01302c38(&local_18,&DAT_00569c48,0x10,&DAT_00528c36,&LAB_01a705e0);
  }
  FUN_01302e1c(&local_18);
  return;
}

