// FUN_0003ebd8 @ 0003ebd8  size=152  callers=1
// program: bmminer


void FUN_0003ebd8(void)

{
  char local_808 [2048];
  
  if (4 < DAT_00087bbc) {
    builtin_strncpy(local_808,"[DEBUG] Clear stats.\n",0x16);
    FUN_00032218(4,local_808,0);
  }
  if ((DAT_0050748c == 0) || (*(int *)(DAT_0050748c + 4) == 0)) {
    if (3 < DAT_00087bbc) {
      FUN_0003db14();
      return;
    }
  }
  else {
    (**(code **)(*(int *)(DAT_0050748c + 4) + 0xc))();
  }
  return;
}

