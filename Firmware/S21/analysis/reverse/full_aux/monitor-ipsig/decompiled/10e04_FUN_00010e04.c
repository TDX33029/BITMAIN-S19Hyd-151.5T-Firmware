// FUN_00010e04 @ 00010e04  size=24  callers=0
// program: monitor-ipsig


bool FUN_00010e04(char *param_1)

{
  int iVar1;
  
  iVar1 = access(param_1,0);
  return iVar1 == 0;
}

