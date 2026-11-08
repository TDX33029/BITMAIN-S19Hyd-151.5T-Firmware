// FUN_00b5674c @ 00b5674c size=92 calls_out=2 calls_in=3
// strings: MANUAL

void FUN_00b5674c(undefined8 *param_1,char param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar1 = -0x30;
  do {
    iVar2 = iVar1;
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01c12d00);
    }
    iVar1 = iVar2 + 0xc;
  } while ((&DAT_01c12cc0)[iVar2] != param_2);
  uVar3 = FUN_006fc4cc(*(undefined4 *)((int)&DAT_01c12cb8 + iVar2),
                       *(undefined4 *)((int)&DAT_01c12cbc + iVar2));
  *param_1 = uVar3;
  *(undefined1 **)(param_1 + 2) = &DAT_80000005;
  return;
}

