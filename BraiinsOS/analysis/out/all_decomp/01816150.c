// FUN_01816150 @ 01816150 size=396 calls_out=3 calls_in=1
// strings: 

undefined8 FUN_01816150(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  bool bVar5;
  
  if (((param_1 == 0) || (*(int *)(param_1 + 0x20) == 0)) || (*(int *)(param_1 + 0x24) == 0)) {
    return 0xfffffffe;
  }
  piVar4 = *(int **)(param_1 + 0x1c);
  if (piVar4 == (int *)0x0) {
    return 0xfffffffe;
  }
  if (param_1 != *piVar4) {
    return 0xfffffffe;
  }
  iVar3 = piVar4[1];
  if (iVar3 != 0x2a && iVar3 != 0x39) {
    if (iVar3 < 0x72) {
      if (iVar3 < 0x5b) {
        if ((iVar3 - 0x45U & 0xfffffffb) != 0) {
          return 0xfffffffe;
        }
      }
      else if ((0x401001U >> (iVar3 - 0x5bU & 0xff) & 1) == 0) {
        return 0xfffffffe;
      }
    }
    else if (iVar3 != 0x29a) {
      return 0xfffffffe;
    }
  }
  iVar3 = piVar4[6];
  iVar1 = piVar4[2];
  bVar5 = iVar3 < 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (bVar5) {
    iVar3 = -iVar3;
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 2;
  piVar4[5] = 0;
  if (bVar5) {
    piVar4[6] = iVar3;
  }
  piVar4[4] = iVar1;
  if (iVar3 == 2) {
    piVar4[1] = 0x39;
    uVar2 = FUN_01814534(0,0);
  }
  else {
    piVar4[1] = 0x2a;
    uVar2 = FUN_01814330(0,0);
  }
  *(undefined4 *)(param_1 + 0x30) = uVar2;
  piVar4[10] = -2;
  FUN_0181d6bc(piVar4);
  return 0;
}

