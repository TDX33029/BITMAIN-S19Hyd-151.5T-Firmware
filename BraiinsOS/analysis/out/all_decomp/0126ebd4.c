// FUN_0126ebd4 @ 0126ebd4 size=40 calls_out=1 calls_in=2
// strings: 

undefined4 FUN_0126ebd4(void)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)FUN_016d2bc8();
  uVar2 = 0;
  if (*piVar1 - 1U < 0x85) {
    uVar2 = *(undefined4 *)(&DAT_004214a0 + (*piVar1 - 1U) * 4);
  }
  return uVar2;
}

