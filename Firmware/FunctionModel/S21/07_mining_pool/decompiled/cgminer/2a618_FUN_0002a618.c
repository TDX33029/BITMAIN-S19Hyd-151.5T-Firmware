// FUN_0002a618 @ 0002a618  size=60  callers=3
// program: cgminer


void FUN_0002a618(void *param_1)

{
  free(*(void **)((int)param_1 + 0x120));
  free(*(void **)((int)param_1 + 0x134));
  free(*(void **)((int)param_1 + 0x148));
  free(*(void **)((int)param_1 + 0x140));
  memset(param_1,0,0x1c0);
  return;
}

