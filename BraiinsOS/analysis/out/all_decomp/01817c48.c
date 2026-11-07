// FUN_01817c48 @ 01817c48 size=360 calls_out=0 calls_in=4
// strings: 

undefined4 FUN_01817c48(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  code *pcVar3;
  int *piVar4;
  
  if (param_1 == 0) {
    return 0xfffffffe;
  }
  if (*(int *)(param_1 + 0x20) == 0) {
    return 0xfffffffe;
  }
  pcVar3 = *(code **)(param_1 + 0x24);
  if (pcVar3 == (code *)0x0) {
    return 0xfffffffe;
  }
  piVar4 = *(int **)(param_1 + 0x1c);
  if (piVar4 == (int *)0x0) {
    return 0xfffffffe;
  }
  if (param_1 != *piVar4) {
    return 0xfffffffe;
  }
  iVar2 = piVar4[1];
  if (iVar2 != 0x2a && iVar2 != 0x39) {
    if (iVar2 < 0x72) {
      if (iVar2 < 0x5b) {
        if ((iVar2 - 0x45U & 0xfffffffb) != 0) {
          return 0xfffffffe;
        }
      }
      else if ((0x401001U >> (iVar2 - 0x5bU & 0xff) & 1) == 0) {
        return 0xfffffffe;
      }
    }
    else if (iVar2 != 0x29a) {
      return 0xfffffffe;
    }
  }
  if (piVar4[2] != 0) {
    (*pcVar3)(*(undefined4 *)(param_1 + 0x28));
    piVar4 = *(int **)(param_1 + 0x1c);
    pcVar3 = *(code **)(param_1 + 0x24);
  }
  if (piVar4[0x11] != 0) {
    (*pcVar3)(*(undefined4 *)(param_1 + 0x28));
    piVar4 = *(int **)(param_1 + 0x1c);
    pcVar3 = *(code **)(param_1 + 0x24);
  }
  if (piVar4[0x10] != 0) {
    (*pcVar3)(*(undefined4 *)(param_1 + 0x28));
    piVar4 = *(int **)(param_1 + 0x1c);
    pcVar3 = *(code **)(param_1 + 0x24);
  }
  if (piVar4[0xe] != 0) {
    (*pcVar3)(*(undefined4 *)(param_1 + 0x28));
    pcVar3 = *(code **)(param_1 + 0x24);
    piVar4 = *(int **)(param_1 + 0x1c);
  }
  (*pcVar3)(*(undefined4 *)(param_1 + 0x28),piVar4);
  *(undefined4 *)(param_1 + 0x1c) = 0;
  if (iVar2 == 0x71) {
    uVar1 = 0xfffffffd;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

