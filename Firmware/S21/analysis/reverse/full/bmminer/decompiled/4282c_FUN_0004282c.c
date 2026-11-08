// FUN_0004282c @ 0004282c  size=48  callers=0
// program: bmminer


void FUN_0004282c(char *param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = sscanf(param_1,"%d-%d",param_2,param_3);
  if (iVar1 == 1) {
    *param_3 = *param_2;
  }
  return;
}

