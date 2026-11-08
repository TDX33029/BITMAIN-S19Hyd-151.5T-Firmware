// FUN_00029010 @ 00029010  size=36  callers=3
// program: cgminer


byte FUN_00029010(int param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0x290);
  if ((bVar1 != 0) && (*(char *)(param_1 + 0x291) != '\0')) {
    bVar1 = *(byte *)(param_1 + 0x293) ^ 1;
  }
  return bVar1;
}

