// FUN_00017bcc @ 00017bcc  size=232  callers=1
// program: bmminer


int FUN_00017bcc(int param_1)

{
  int iVar1;
  int param4;
  undefined2 local_2014 [2];
  char acStack_2010 [8192];
  
  iVar1 = FUN_00017a34();
  if (iVar1 < 1) {
    if (4 < DAT_000be63c) {
      snprintf(acStack_2010,0x2000,"open switch fail on chain %d",param_1);
      FUN_0004948c(4,acStack_2010,0);
      return iVar1;
    }
  }
  else {
    param4 = *(int *)(&DAT_000bfb18 + param_1 * 8);
    local_2014[0] = 0;
    if (4 < DAT_000be63c) {
      snprintf(acStack_2010,0x2000,"which_chain %d the fd of witch_state is %d\n",param_1,param4);
      FUN_0004948c(4,acStack_2010,0);
      param4 = *(int *)(&DAT_000bfb18 + param_1 * 8);
    }
    iVar1 = 0;
    FUN_0006295c(param4,local_2014,1);
  }
  return iVar1;
}

