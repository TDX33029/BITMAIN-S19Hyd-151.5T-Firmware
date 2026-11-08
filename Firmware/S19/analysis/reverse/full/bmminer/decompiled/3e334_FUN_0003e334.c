// FUN_0003e334 @ 0003e334  size=152  callers=0
// program: bmminer


void FUN_0003e334(void)

{
  char local_808 [2052];
  
  if ((DAT_0050748c == 0) || (*(int *)(DAT_0050748c + 4) == 0)) {
    if (3 < DAT_00087bbc) {
      builtin_strncpy(local_808,"Handle is NULL.\n",0x11);
      FUN_00032218(3,local_808,0);
      return;
    }
  }
  else if (*(int *)(DAT_0050748c + 0x40) != 0) {
    (**(code **)(*(int *)(DAT_0050748c + 4) + 0x14))();
  }
  return;
}

