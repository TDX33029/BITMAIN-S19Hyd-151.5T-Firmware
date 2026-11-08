// FUN_0134ae28 @ 0134ae28 size=104 calls_out=2 calls_in=2
// strings: 

code * FUN_0134ae28(void)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  code *pcVar4;
  
  iVar1 = FUN_01be3ea0(1,0,0);
  pcVar4 = FUN_01be3ea0 + 1;
  if (iVar1 < 0) {
    piVar2 = (int *)FUN_01be3244();
    uVar3 = 0x10001;
    if (0 < *piVar2) {
      uVar3 = -*piVar2;
    }
    if ((0x80000000 < uVar3) && (uVar3 == 0xffffffff || uVar3 == 0xffffffda)) {
      pcVar4 = (code *)&DAT_ffffffff;
    }
  }
  DataMemoryBarrier(0xb);
  DAT_01d51ac4 = pcVar4;
  return pcVar4;
}

