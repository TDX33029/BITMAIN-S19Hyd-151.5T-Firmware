// FUN_010cc53c @ 010cc53c size=152 calls_out=1 calls_in=0
// strings: 

void FUN_010cc53c(int *param_1,undefined4 *param_2)

{
  undefined *puVar1;
  char *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 *local_14;
  
  local_18 = (undefined1 *)&local_20;
  local_1c = *(int *)(*param_1 + 8);
  if (local_1c == 0) {
                    /* WARNING: Could not recover jumptable at 0x010cc594. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00418645,1);
    return;
  }
  local_20 = *(char **)(*param_1 + 4);
  if (*local_20 == '*' || *local_20 == '/') {
    puVar1 = &DAT_00590e71;
  }
  else {
    puVar1 = &DAT_0058542c;
  }
  local_14 = &DAT_0157d360;
  FUN_00fa948c(*param_2,param_2[1],puVar1,&local_18);
  return;
}

