// FUN_00b564a0 @ 00b564a0 size=84 calls_out=2 calls_in=2
// strings: NORMAL | BOOSTALIVE

void FUN_00b564a0(undefined8 *param_1,uint param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  undefined8 uVar4;
  
  iVar3 = 0x18;
  pbVar1 = &DAT_01c12d18;
  do {
    pbVar2 = pbVar1;
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01c12d00);
    }
    iVar3 = iVar3 + -0xc;
    pbVar1 = pbVar2 + 0xc;
  } while (*pbVar2 != param_2);
  uVar4 = FUN_006fc4cc(*(undefined4 *)(pbVar2 + -8),*(undefined4 *)(pbVar2 + -4));
  *param_1 = uVar4;
  *(undefined1 **)(param_1 + 2) = &DAT_80000005;
  return;
}

