// FUN_0005971c @ 0005971c  size=76  callers=1
// program: bmminer


undefined4 FUN_0005971c(undefined4 *param_1)

{
  byte bVar1;
  undefined4 uVar2;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = 0;
    *param_1 = 0;
    *(undefined1 *)(param_1 + 1) = 0;
    *(undefined1 *)((int)param_1 + 1) = 5;
    *(undefined1 *)param_1 = 0x53;
    bVar1 = FUN_0005983c(param_1,0x20);
    *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) & 0xe0 | bVar1 & 0x1f;
  }
  return uVar2;
}

