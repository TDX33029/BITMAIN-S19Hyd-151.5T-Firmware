// FUN_0007de30 @ 0007de30  size=116  callers=1
// program: bmminer


void FUN_0007de30(undefined4 *param_1)

{
  lconv *plVar1;
  char *pcVar2;
  char *pcVar3;
  
  plVar1 = localeconv();
  pcVar3 = plVar1->decimal_point;
  if (*pcVar3 != '.') {
    pcVar2 = strchr((char *)*param_1,0x2e);
    if (pcVar2 != (char *)0x0) {
      *pcVar2 = *pcVar3;
    }
  }
  return;
}

