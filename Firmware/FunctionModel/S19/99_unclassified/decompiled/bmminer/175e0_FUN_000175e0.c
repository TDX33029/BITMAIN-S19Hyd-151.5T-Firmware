// FUN_000175e0 @ 000175e0  size=308  callers=2
// program: bmminer


void FUN_000175e0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  *(undefined2 *)(param_1 + 0x2a0) = 0xff81;
  *(undefined2 *)(param_1 + 0x2a6) = 0xff;
  *(undefined2 *)(param_1 + 0x2a2) = 0xff81;
  *(undefined2 *)(param_1 + 0x2a8) = 0xff;
  *(undefined2 *)(param_1 + 0x2a4) = 0xff81;
  iVar4 = 0;
  *(undefined2 *)(param_1 + 0x2aa) = 0xff;
  *(undefined4 *)(param_1 + 0x2ac) = 0;
  *(undefined4 *)(param_1 + 0x2b0) = 0;
  *(undefined4 *)(param_1 + 0x2b4) = 0x1389;
  iVar1 = FUN_000201d8(0);
  while( true ) {
    if (iVar1 != 0) {
      iVar1 = param_1 + iVar4 * 0x18;
      iVar3 = 0;
      *(undefined2 *)(iVar1 + 0x240) = 0xff81;
      *(undefined2 *)(iVar1 + 0x246) = 0xff;
      *(undefined2 *)(iVar1 + 0x242) = 0xff81;
      *(undefined2 *)(iVar1 + 0x248) = 0xff;
      *(undefined2 *)(iVar1 + 0x244) = 0xff81;
      *(undefined2 *)(iVar1 + 0x24a) = 0xff;
      *(undefined4 *)(iVar1 + 0x24c) = 0;
      *(undefined4 *)(iVar1 + 0x250) = 0;
      *(undefined4 *)(iVar1 + 0x254) = 0x1389;
      while( true ) {
        iVar1 = FUN_00017028();
        iVar2 = iVar4 * 0x90 + iVar3 * 0x18;
        if (iVar1 <= iVar3) break;
        iVar3 = iVar3 + 1;
        iVar1 = param_1 + iVar2;
        *(undefined2 *)(param_1 + iVar2) = 0xff81;
        *(undefined2 *)(iVar1 + 6) = 0xff;
        *(undefined2 *)(iVar1 + 2) = 0xff81;
        *(undefined2 *)(iVar1 + 8) = 0xff;
        *(undefined2 *)(iVar1 + 4) = 0xff81;
        *(undefined2 *)(iVar1 + 10) = 0xff;
        *(undefined4 *)(iVar1 + 0xc) = 0;
        *(undefined4 *)(iVar1 + 0x10) = 0;
        *(undefined4 *)(iVar1 + 0x14) = 0x1389;
      }
    }
    iVar4 = iVar4 + 1;
    if (iVar4 == 4) break;
    iVar1 = FUN_000201d8(iVar4);
  }
  return;
}

