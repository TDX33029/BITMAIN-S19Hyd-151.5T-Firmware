// FUN_016d8d64 @ 016d8d64 size=72 calls_out=2 calls_in=1
// strings: 

undefined8 FUN_016d8d64(void)

{
  int iVar1;
  int *piVar2;
  int local_18 [2];
  int local_10;
  
  iVar1 = FUN_016dfe04(1,local_18);
  if (iVar1 < 0) {
    piVar2 = (int *)FUN_016d2bc8();
    if (*piVar2 == 0x26) {
      FUN_016dfe04(0,local_18);
    }
  }
  return CONCAT44(local_10 * 0x431bde83,local_18[0] * 1000 + local_10 / 1000000);
}

