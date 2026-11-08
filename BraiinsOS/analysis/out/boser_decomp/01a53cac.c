// FUN_01a53cac @ 01a53cac size=216 calls_out=2 calls_in=0
// strings: Decor | prefix | suffixempty

void FUN_01a53cac(int *param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined4 *local_18;
  undefined1 local_14;
  undefined1 local_13;
  
  local_14 = (**(code **)(param_2[1] + 0xc))(*param_2,"Decor",5);
  local_13 = 0;
  if (*param_1 == -0x7ffffffd) {
    puVar2 = &LAB_018a0040;
    piVar1 = (int *)&DAT_01d2c658;
  }
  else {
    puVar2 = &LAB_01a53da0;
    piVar1 = param_1;
  }
  local_18 = param_2;
  FUN_01302c38(&local_18,"prefix",6,piVar1,puVar2);
  param_1 = param_1 + 3;
  if (*param_1 == -0x7ffffffd) {
    puVar2 = &LAB_018a0040;
    param_1 = (int *)&DAT_01d2c658;
  }
  else {
    puVar2 = &LAB_01a53da0;
  }
  FUN_01302c38(&local_18,"suffixempty",6,param_1,puVar2);
  FUN_01302e1c(&local_18);
  return;
}

