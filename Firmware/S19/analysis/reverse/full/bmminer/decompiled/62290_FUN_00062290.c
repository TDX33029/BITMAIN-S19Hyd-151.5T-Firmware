// FUN_00062290 @ 00062290  size=288  callers=3
// program: bmminer


void FUN_00062290(void *param_1)

{
  int iVar1;
  int *piVar2;
  
  if (param_1 == (void *)0x0) {
    FUN_000658a8(2,"src/rule.c",0x3ae,"a_rule is null or 0");
    return;
  }
  if (*(int *)((int)param_1 + 0x1434) != 0) {
    FUN_00064e94();
    *(undefined4 *)((int)param_1 + 0x1434) = 0;
  }
  if ((*(int *)((int)param_1 + 0x1438) != 0) &&
     (iVar1 = close(*(int *)((int)param_1 + 0x1438)), iVar1 != 0)) {
    piVar2 = __errno_location();
    FUN_000658a8(2,"src/rule.c",0x3b5,"close fail, maybe cause by write, errno[%d]",*piVar2);
  }
  if ((*(FILE **)((int)param_1 + 0x1860) != (FILE *)0x0) &&
     (iVar1 = pclose(*(FILE **)((int)param_1 + 0x1860)), iVar1 == -1)) {
    piVar2 = __errno_location();
    FUN_000658a8(2,"src/rule.c",0x3ba,"pclose fail, errno[%d]",*piVar2);
  }
  if (*(int *)((int)param_1 + 0x185c) != 0) {
    FUN_00064e94();
    *(undefined4 *)((int)param_1 + 0x185c) = 0;
  }
  FUN_000658a8(0,"src/rule.c",0x3c1,"zlog_rule_del[%p]",param_1);
  free(param_1);
  return;
}

