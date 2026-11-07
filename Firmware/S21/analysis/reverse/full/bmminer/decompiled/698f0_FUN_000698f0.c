// FUN_000698f0 @ 000698f0  size=216  callers=1
// program: bmminer


undefined4 * FUN_000698f0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *local_18;
  undefined4 *local_c;
  
  if ((undefined4 *)param_2[1] == param_1 + 1) {
    puVar1 = (undefined4 *)FUN_0006985c(param_1,*param_1);
    if (param_2 == puVar1) {
      local_c = (undefined4 *)0x0;
    }
    else {
      local_18 = param_2;
      for (local_c = (undefined4 *)param_2[2];
          (local_c != param_1 + 1 && (local_18 == (undefined4 *)local_c[1]));
          local_c = (undefined4 *)local_c[2]) {
        local_18 = local_c;
      }
    }
  }
  else {
    local_c = (undefined4 *)FUN_0006980c(param_1,param_2[1]);
  }
  return local_c;
}

