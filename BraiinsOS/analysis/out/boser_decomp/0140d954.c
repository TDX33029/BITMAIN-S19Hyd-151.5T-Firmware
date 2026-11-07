// FUN_0140d954 @ 0140d954 size=124 calls_out=2 calls_in=1
// strings: 

void FUN_0140d954(undefined4 *param_1,undefined4 param_2,int param_3)

{
  char local_18;
  undefined1 local_17;
  int local_14;
  
  if (param_3 == 0) {
    local_17 = 9;
  }
  else {
    FUN_0140ce9c(&local_18);
    if (local_18 != '\x01') {
      if (local_14 == param_3) {
        FUN_012834b0(param_1,param_2,param_3);
        return;
      }
      local_17 = 0;
      *param_1 = 0;
      goto LAB_0140d998;
    }
  }
  *param_1 = 0;
LAB_0140d998:
  *(undefined1 *)(param_1 + 1) = local_17;
  return;
}

