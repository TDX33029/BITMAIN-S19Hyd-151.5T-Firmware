// FUN_0001d93c @ 0001d93c  size=96  callers=4
// program: bmminer


int FUN_0001d93c(void)

{
  char acStack_808 [2048];
  
  DAT_000891f4 = FUN_0001d7c4();
  if (4 < DAT_00087bbc) {
    snprintf(acStack_808,0x800,"sale_hash_rate = %d\n",DAT_000891f4);
    FUN_00032218(4,acStack_808,0);
  }
  return DAT_000891f4;
}

