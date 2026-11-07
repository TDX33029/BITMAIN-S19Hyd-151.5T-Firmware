// FUN_0126ead8 @ 0126ead8 size=40 calls_out=1 calls_in=20
// strings: 

undefined4 FUN_0126ead8(void)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)FUN_016d2bc8();
  uVar2 = 0;
  if (*piVar1 - 1U < 0x85) {
    uVar2 = *(undefined4 *)(&DAT_00420a8c + (*piVar1 - 1U) * 4);
  }
  return uVar2;
}

