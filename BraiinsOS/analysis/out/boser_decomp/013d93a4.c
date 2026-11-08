// FUN_013d93a4 @ 013d93a4 size=112 calls_out=2 calls_in=1
// strings: 

void FUN_013d93a4(int *param_1,undefined4 param_2,undefined2 param_3)

{
  int iVar1;
  int local_28;
  int local_24;
  int iStack_20;
  int iStack_1c;
  
  FUN_013cfab4(&local_28,param_2,param_3);
  if (local_28 == 1) {
    local_28 = local_24;
    local_24 = iStack_20;
    iStack_20 = iStack_1c;
    iVar1 = FUN_013e677c(&local_28);
    *param_1 = -0x80000000;
    param_1[1] = iVar1;
  }
  else {
    *param_1 = local_24;
    param_1[1] = iStack_20;
    param_1[2] = iStack_1c;
  }
  return;
}

