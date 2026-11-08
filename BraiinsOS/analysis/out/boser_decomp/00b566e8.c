// FUN_00b566e8 @ 00b566e8 size=92 calls_out=2 calls_in=2
// strings: MANUAL

void FUN_00b566e8(undefined8 *param_1,char param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar1 = -0x24;
  do {
    iVar2 = iVar1;
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01c12d00);
    }
    iVar1 = iVar2 + 0xc;
  } while ((&DAT_01c12c24)[iVar2] != param_2);
  uVar3 = FUN_006fc4cc(*(undefined4 *)((int)&DAT_01c12c1c + iVar2),
                       *(undefined4 *)((int)&DAT_01c12c20 + iVar2));
  *param_1 = uVar3;
  *(undefined1 **)(param_1 + 2) = &DAT_80000005;
  return;
}

