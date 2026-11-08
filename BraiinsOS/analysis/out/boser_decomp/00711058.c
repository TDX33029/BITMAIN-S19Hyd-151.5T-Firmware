// FUN_00711058 @ 00711058 size=92 calls_out=3 calls_in=1
// strings: 

void FUN_00711058(int *param_1)

{
  undefined4 *puVar1;
  
  if (*param_1 == 1) {
    if ((char)param_1[1] != '\x03') goto LAB_007110a8;
    puVar1 = (undefined4 *)param_1[2];
    FUN_01443048(*puVar1,puVar1[1]);
  }
  else {
    if ((*param_1 != 0) || (param_1[2] == 0)) goto LAB_007110a8;
    puVar1 = (undefined4 *)param_1[1];
  }
  thunk_FUN_01be4678(puVar1);
LAB_007110a8:
  thunk_FUN_01be4678(param_1);
  return;
}

