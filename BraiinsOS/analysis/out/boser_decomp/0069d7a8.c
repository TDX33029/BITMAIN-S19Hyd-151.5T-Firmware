// FUN_0069d7a8 @ 0069d7a8 size=244 calls_out=3 calls_in=1
// strings: `DateTime + TimeDelta` overflowed

void FUN_0069d7a8(int param_1)

{
  undefined1 *puVar1;
  undefined *puVar2;
  uint uVar3;
  undefined1 auStack_30 [12];
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  puVar1 = *(undefined1 **)(param_1 + 0x20);
  if (puVar1 == &DAT_3b9aca00) {
    return;
  }
  uVar3 = *(uint *)(param_1 + 0x18);
  puVar2 = *(undefined **)(param_1 + 0x1c);
  FUN_0128e808(auStack_30);
  if (puVar2 < &UNK_0020c49b ||
      (uint)((int)&UNK_0020c49b - (int)puVar2) < (uint)(uVar3 < 0xa5e353f8)) {
    if ((uVar3 != 0xa5e353f7 || puVar2 != &UNK_0020c49b) || (undefined1 *)0x3019d7c0 >= puVar1) {
      if ((uVar3 == 0xa5e353f7 && puVar2 == &UNK_0020c49b) && (undefined1 *)0x3019d7c0 < puVar1) {
        puVar1 = (undefined1 *)0x0;
      }
      goto LAB_0069d84c;
    }
  }
  uVar3 = 0;
  puVar2 = (undefined *)0x0;
  puVar1 = (undefined1 *)0x0;
LAB_0069d84c:
  FUN_0128f70c(&local_24,auStack_30,uVar3,puVar2,puVar1);
  if (local_24 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0130739c("`DateTime + TimeDelta` overflowed",0x21,&DAT_01c05414);
  }
  *(int *)(param_1 + 0x88) = local_24;
  *(undefined4 *)(param_1 + 0x8c) = local_20;
  *(undefined4 *)(param_1 + 0x90) = local_1c;
  return;
}

