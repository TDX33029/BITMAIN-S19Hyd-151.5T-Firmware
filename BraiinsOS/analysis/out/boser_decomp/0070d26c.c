// FUN_0070d26c @ 0070d26c size=88 calls_out=1 calls_in=21
// strings: Paths must start with a `/` | Paths must start with a `/`. Use '/' for root routes

char * FUN_0070d26c(int param_1,char *param_2,int param_3)

{
  char *pcVar1;
  
  if (param_3 == 0) {
    return "Paths must start with a `/`. Use \"/\" for root routes";
  }
  pcVar1 = (char *)0x0;
  if (*param_2 != '/') {
    pcVar1 = "Paths must start with a `/`";
  }
  if ((param_1 != 0) && (*param_2 == '/')) {
    pcVar1 = (char *)FUN_0070d2cc(param_2,param_3);
  }
  return pcVar1;
}

