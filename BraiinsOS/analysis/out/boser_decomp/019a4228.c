// FUN_019a4228 @ 019a4228 size=112 calls_out=1 calls_in=0
// strings: 

undefined8 FUN_019a4228(int *param_1)

{
  int local_20;
  int local_1c;
  int local_18;
  
  if (*param_1 == -0x80000000) {
    local_18 = 0;
    local_1c = 1;
    local_20 = 0;
    FUN_012fa178(&local_20,&DAT_01d27d88,**(undefined4 **)param_1[3],(*(undefined4 **)param_1[3])[1]
                );
    *param_1 = local_20;
    param_1[1] = local_1c;
    param_1[2] = local_18;
  }
  return CONCAT44(&UNK_01d28264,param_1);
}

