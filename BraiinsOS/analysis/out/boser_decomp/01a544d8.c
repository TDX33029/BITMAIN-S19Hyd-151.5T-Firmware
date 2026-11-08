// FUN_01a544d8 @ 01a544d8 size=216 calls_out=2 calls_in=0
// strings: Decor | prefix | suffixempty

void FUN_01a544d8(undefined4 *param_1,undefined4 *param_2)

{
  int *piVar1;
  int *piVar2;
  undefined1 *puVar3;
  undefined4 *local_18;
  undefined1 local_14;
  undefined1 local_13;
  
  piVar2 = (int *)*param_1;
  local_14 = (**(code **)(param_2[1] + 0xc))(*param_2,"Decor",5);
  local_13 = 0;
  if (*piVar2 == -0x7ffffffd) {
    puVar3 = &LAB_018a0040;
    piVar1 = (int *)&DAT_01d2c658;
  }
  else {
    puVar3 = &LAB_01a53da0;
    piVar1 = piVar2;
  }
  local_18 = param_2;
  FUN_01302c38(&local_18,"prefix",6,piVar1,puVar3);
  piVar2 = piVar2 + 3;
  if (*piVar2 == -0x7ffffffd) {
    puVar3 = &LAB_018a0040;
    piVar2 = (int *)&DAT_01d2c658;
  }
  else {
    puVar3 = &LAB_01a53da0;
  }
  FUN_01302c38(&local_18,"suffixempty",6,piVar2,puVar3);
  FUN_01302e1c(&local_18);
  return;
}

