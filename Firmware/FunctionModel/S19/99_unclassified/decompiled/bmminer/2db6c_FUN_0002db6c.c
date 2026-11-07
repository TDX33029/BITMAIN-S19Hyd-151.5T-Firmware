// FUN_0002db6c @ 0002db6c  size=60  callers=1
// program: bmminer


void FUN_0002db6c(void *param_1)

{
  free(*(void **)((int)param_1 + 0x120));
  free(*(void **)((int)param_1 + 0x134));
  free(*(void **)((int)param_1 + 0x148));
  free(*(void **)((int)param_1 + 0x140));
  memset(param_1,0,0x1c0);
  return;
}

