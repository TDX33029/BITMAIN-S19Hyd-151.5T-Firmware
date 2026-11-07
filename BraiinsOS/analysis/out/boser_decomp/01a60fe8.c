// FUN_01a60fe8 @ 01a60fe8 size=36 calls_out=1 calls_in=0
// strings: 

bool FUN_01a60fe8(void)

{
  bool bVar1;
  int *piVar2;
  
  piVar2 = (int *)FUN_01a4b4b0();
  if (piVar2 == (int *)0x0) {
    bVar1 = false;
  }
  else {
    bVar1 = *piVar2 == 1;
  }
  return bVar1;
}

