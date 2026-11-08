// FUN_014bde6c @ 014bde6c size=92 calls_out=1 calls_in=0
// strings: 

void FUN_014bde6c(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_18;
  undefined4 local_14;
  
  FUN_01642dd8(&local_18,*param_2,param_2[1],param_3,param_4);
  if ((char)local_18 == '\x05') {
    *(undefined2 *)param_1 = 0xd01;
    return;
  }
  *param_1 = local_18;
  param_1[1] = local_14;
  return;
}

