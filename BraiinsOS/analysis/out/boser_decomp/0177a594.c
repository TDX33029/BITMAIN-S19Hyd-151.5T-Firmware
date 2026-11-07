// FUN_0177a594 @ 0177a594 size=108 calls_out=0 calls_in=6
// strings: 

void FUN_0177a594(int *param_1)

{
  if (*param_1 == 0) {
    if ((char)param_1[9] != '\x02') {
      (**(code **)(param_1[5] + 0x10))(param_1 + 8,param_1[6],param_1[7]);
    }
  }
  else if ((char)param_1[9] != '\x02') {
    (**(code **)(param_1[5] + 0x10))(param_1 + 8,param_1[6],param_1[7]);
  }
                    /* WARNING: Could not recover jumptable at 0x0177a5fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1[1] + 0x10))(param_1 + 4,param_1[2],param_1[3]);
  return;
}

