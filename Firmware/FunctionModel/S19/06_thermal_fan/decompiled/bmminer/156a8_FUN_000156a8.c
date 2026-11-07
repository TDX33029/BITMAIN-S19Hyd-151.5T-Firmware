// FUN_000156a8 @ 000156a8  size=180  callers=1
// program: bmminer


void FUN_000156a8(uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint param3;
  char acStack_820 [2052];
  
  uVar2 = 0;
  while( true ) {
    uVar1 = FUN_00020238();
    param3 = uVar2 & 0xff;
    if (uVar1 <= uVar2) break;
    uVar1 = FUN_000457b8(param3);
    if (-1 < (int)uVar1) {
      if (4 < DAT_00087bbc) {
        snprintf(acStack_820,0x800,"fan[%u] speed[%u]\n",param3,uVar1);
        FUN_00032218(4,acStack_820,0);
      }
      FUN_00020310(param3,uVar1);
      FUN_0002028c(param3,param_1 <= uVar1);
    }
    uVar2 = uVar2 + 1;
  }
  return;
}

