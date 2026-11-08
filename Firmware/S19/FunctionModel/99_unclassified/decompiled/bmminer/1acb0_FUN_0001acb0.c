// FUN_0001acb0 @ 0001acb0  size=132  callers=2
// program: bmminer


void FUN_0001acb0(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  if (DAT_00089088 == 0) {
    iVar3 = FUN_00019bc0();
    if (iVar3 != 0) {
      return;
    }
  }
  else if (*(char *)(DAT_00089088 + 0x1c) != '\0') {
    return;
  }
  iVar3 = 0;
  uVar4 = 0;
  FUN_00019dc8();
  do {
    iVar1 = FUN_000201d8(iVar3);
    if (iVar1 != 0) {
      uVar2 = FUN_0001a1cc(iVar3,DAT_00089088);
      uVar4 = uVar4 | uVar2;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 != 4);
  if (uVar4 == 0) {
    *(undefined1 *)(DAT_00089088 + 0x1c) = 1;
  }
  return;
}

