// FUN_015ea718 @ 015ea718 size=112 calls_out=1 calls_in=0
// strings: 

undefined8 FUN_015ea718(int *param_1)

{
  int local_20;
  int local_1c;
  int local_18;
  
  if (*param_1 == -0x80000000) {
    local_18 = 0;
    local_1c = 1;
    local_20 = 0;
    FUN_00fa948c(&local_20,&DAT_018ab164,**(undefined4 **)param_1[3],(*(undefined4 **)param_1[3])[1]
                );
    *param_1 = local_20;
    param_1[1] = local_1c;
    param_1[2] = local_18;
  }
  return CONCAT44(&UNK_018ab690,param_1);
}

