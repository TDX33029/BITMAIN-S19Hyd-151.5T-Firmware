// FUN_01899080 @ 01899080 size=96 calls_out=1 calls_in=7
// strings: 

char * FUN_01899080(undefined4 param_1)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar4 = FUN_01898838(param_1,2);
  iVar3 = (int)((ulonglong)uVar4 >> 0x20);
  pcVar1 = (char *)uVar4;
  pcVar2 = (char *)0x0;
  if (pcVar1 == (char *)0x0) {
    return (char *)0x0;
  }
  if (iVar3 != 0) {
    pcVar2 = pcVar1 + 1;
    if (*pcVar1 != 0) {
      return (char *)((uint)pcVar1 & ~((int)*pcVar1 >> 0x1f));
    }
    if (iVar3 == 1) {
      return pcVar1;
    }
    if ((uint)(int)*pcVar2 < 0x80000000) {
      pcVar2 = (char *)0x0;
    }
  }
  return pcVar2;
}

