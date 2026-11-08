// FUN_00059658 @ 00059658  size=84  callers=1
// program: bmminer


undefined4 FUN_00059658(undefined1 param_1,undefined4 *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = 0;
    *param_2 = 0;
    *(undefined1 *)(param_2 + 1) = 0;
    *(undefined1 *)((int)param_2 + 2) = param_1;
    *(undefined1 *)((int)param_2 + 1) = 5;
    *(undefined1 *)param_2 = 0x40;
    bVar1 = FUN_0005983c(param_2,0x20);
    *(byte *)(param_2 + 1) = *(byte *)(param_2 + 1) & 0xe0 | bVar1 & 0x1f;
  }
  return uVar2;
}

