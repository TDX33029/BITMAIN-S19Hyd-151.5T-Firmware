// FUN_0100f390 @ 0100f390 size=100 calls_out=2 calls_in=5
// strings: 

code * FUN_0100f390(void)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  code *pcVar4;
  
  iVar1 = FUN_016d37ea(1,0,0);
  pcVar4 = FUN_016d37ea + 1;
  if (iVar1 < 0) {
    piVar2 = (int *)FUN_016d2bc8();
    uVar3 = 0x10001;
    if (0 < *piVar2) {
      uVar3 = -*piVar2;
    }
    if ((0x7fffffff < uVar3) && (uVar3 == 0xffffffff || uVar3 == 0xffffffda)) {
      pcVar4 = (code *)0xffffffff;
    }
  }
  DataMemoryBarrier(0xb);
  DAT_018dd98c = pcVar4;
  return pcVar4;
}

