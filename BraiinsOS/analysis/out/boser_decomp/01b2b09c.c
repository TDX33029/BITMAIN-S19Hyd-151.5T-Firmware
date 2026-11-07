// FUN_01b2b09c @ 01b2b09c size=72 calls_out=0 calls_in=7
// strings: 

bool FUN_01b2b09c(int *param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  for (; param_2 < (uint)param_1[1]; param_2 = param_2 + 1) {
    uVar1 = uVar1 | *(uint *)(*param_1 + param_2 * 4);
  }
  return uVar1 == 0;
}

