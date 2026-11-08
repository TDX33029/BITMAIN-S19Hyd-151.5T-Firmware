// FUN_0007dea4 @ 0007dea4  size=112  callers=1
// program: bmminer


void FUN_0007dea4(char *param_1)

{
  lconv *plVar1;
  char *pcVar2;
  
  plVar1 = localeconv();
  if (*plVar1->decimal_point != 0x2e) {
    pcVar2 = strchr(param_1,(uint)(byte)*plVar1->decimal_point);
    if (pcVar2 != (char *)0x0) {
      *pcVar2 = '.';
    }
  }
  return;
}

