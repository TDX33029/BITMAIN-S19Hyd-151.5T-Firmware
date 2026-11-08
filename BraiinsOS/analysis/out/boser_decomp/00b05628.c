// FUN_00b05628 @ 00b05628 size=92 calls_out=2 calls_in=1
// strings: 

void FUN_00b05628(undefined8 *param_1,char param_2)

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
  } while ((&DAT_01c10738)[iVar2] != param_2);
  uVar3 = FUN_006fc4cc(*(undefined4 *)((int)&DAT_01c10730 + iVar2),
                       *(undefined4 *)((int)&DAT_01c10734 + iVar2));
  *param_1 = uVar3;
  *(undefined1 **)(param_1 + 2) = &DAT_80000005;
  return;
}

