// FUN_0001ffd4 @ 0001ffd4  size=56  callers=0
// program: bmminer


longlong FUN_0001ffd4(void *param_1,uint param_2)

{
  undefined4 extraout_r0;
  undefined4 extraout_r1;
  undefined4 unaff_r4;
  undefined4 unaff_lr;
  
  if ((param_1 != (void *)0x0) && (*(void **)((int)param_1 + 300) != (void *)0x0)) {
    free(*(void **)((int)param_1 + 300));
    free(param_1);
    return CONCAT44(extraout_r1,extraout_r0);
  }
  if (DAT_000be63c < 4) {
    return (ulonglong)param_2 << 0x20;
  }
  return CONCAT44(unaff_lr,unaff_r4);
}

