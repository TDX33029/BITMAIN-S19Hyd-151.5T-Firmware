// FUN_00065238 @ 00065238  size=232  callers=0
// program: bmminer


void FUN_00065238(int param_1,char param_2)

{
  char acStack_810 [2048];
  int local_10;
  int local_c;
  
  local_10 = FUN_0006518c(param_1);
  if (local_10 == 0x103) {
    snprintf(acStack_810,0x800,"gpio port %d is not a supported key\n",param_1);
    FUN_0004948c(1,acStack_810,0);
  }
  else {
    for (local_c = 0; local_c < 5; local_c = local_c + 1) {
      if (*(int *)(&DAT_00945060 + local_c * 4) != 0) {
        (**(code **)(&DAT_00945060 + local_c * 4))(local_10,param_2 != '\0');
      }
    }
  }
  return;
}

