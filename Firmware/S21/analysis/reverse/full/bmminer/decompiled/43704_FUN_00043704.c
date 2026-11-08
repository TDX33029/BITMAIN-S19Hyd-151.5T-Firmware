// FUN_00043704 @ 00043704  size=60  callers=1
// program: bmminer


void FUN_00043704(void *param_1)

{
  free(*(void **)((int)param_1 + 0x120));
  free(*(void **)((int)param_1 + 0x134));
  free(*(void **)((int)param_1 + 0x148));
  free(*(void **)((int)param_1 + 0x140));
  memset(param_1,0,0x1c0);
  return;
}

