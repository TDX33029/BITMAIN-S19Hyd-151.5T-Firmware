// FUN_000656c8 @ 000656c8  size=252  callers=1
// program: bmminer


void FUN_000656c8(int param_1,undefined4 param_2,int param_3)

{
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  void *local_18;
  int local_14;
  undefined4 *local_10;
  int local_c;
  
  if (param_3 != 0) {
    local_10 = (undefined4 *)FUN_00068714(param_3);
    local_c = (*(code *)*local_10)(local_10);
    while (local_c != 0) {
      local_14 = local_10[5];
      if (param_1 == *(int *)**(undefined4 **)(local_14 + 0x10)) {
        local_18 = (void *)(*(code *)local_10[2])(local_c);
        local_20 = 0;
        local_1c = 1;
        local_24 = param_2;
        (*(code *)local_10[1])(local_10,&local_24,0xc);
        free(local_18);
        break;
      }
      local_c = (*(code *)*local_10)(local_10);
    }
    FUN_00068798(local_10);
  }
  return;
}

