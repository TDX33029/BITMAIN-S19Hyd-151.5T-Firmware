// FUN_00062ca8 @ 00062ca8  size=172  callers=0
// program: bmminer


void FUN_00062ca8(int param_1)

{
  char local_808 [2048];
  
  if (param_1 + -1 < 2) {
    *(undefined4 *)(&DAT_00944d28 + (param_1 + -1) * 8) = 0;
    (&DAT_00944d2c)[(param_1 + -1) * 8] = 0;
  }
  else {
    builtin_strncpy(local_808,"bad param\n",0xb);
    FUN_0004948c(0,local_808,0);
  }
  return;
}

