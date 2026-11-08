// FUN_0130ff78 @ 0130ff78 size=420 calls_out=3 calls_in=9
// strings: 

/* WARNING: Type propagation algorithm not settling */

void FUN_0130ff78(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  if (*(char *)(param_1 + 0xc) == '\x01') {
    uVar2 = *(uint *)(param_1 + 8);
    iVar4 = 1;
    if (0x7f < uVar2) {
      iVar4 = 2;
      if (0x3fff < uVar2) {
        iVar4 = 3;
      }
      if ((0x1fffff < uVar2) && (iVar4 = 5, uVar2 < 0x10000000)) {
        iVar4 = 4;
      }
    }
    iVar4 = uVar2 + iVar4 + 1;
    cVar1 = *(char *)(param_1 + 0x1c);
  }
  else {
    cVar1 = *(char *)(param_1 + 0x1c);
  }
  if (cVar1 == '\x01') {
    uVar2 = *(uint *)(param_1 + 0x18);
    iVar3 = 1;
    if (0x7f < uVar2) {
      iVar3 = 2;
      if (0x3fff < uVar2) {
        iVar3 = 3;
      }
      if ((0x1fffff < uVar2) && (iVar3 = 5, uVar2 < 0x10000000)) {
        iVar3 = 4;
      }
    }
    iVar4 = uVar2 + iVar3 + iVar4 + 1;
    cVar1 = *(char *)(param_1 + 0x2c);
  }
  else {
    cVar1 = *(char *)(param_1 + 0x2c);
  }
  if (cVar1 == '\x01') {
    uVar2 = *(uint *)(param_1 + 0x28);
    iVar3 = 1;
    if (0x7f < uVar2) {
      iVar3 = 2;
      if (0x3fff < uVar2) {
        iVar3 = 3;
      }
      if ((0x1fffff < uVar2) && (iVar3 = 5, uVar2 < 0x10000000)) {
        iVar3 = 4;
      }
    }
    iVar4 = uVar2 + iVar3 + iVar4 + 1;
    cVar1 = *(char *)(param_1 + 0x34);
  }
  else {
    cVar1 = *(char *)(param_1 + 0x34);
  }
  if (cVar1 == '\x01') {
    if (*(int *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_01890768);
    }
    uVar2 = FUN_01302360();
    iVar3 = 1;
    if (0x7f < uVar2) {
      iVar3 = 2;
      if (0x3fff < uVar2) {
        iVar3 = 3;
      }
      if ((0x1fffff < uVar2) && (iVar3 = 5, uVar2 < 0x10000000)) {
        iVar3 = 4;
      }
    }
    iVar4 = iVar4 + uVar2 + iVar3 + 1;
  }
  if (*(char *)(param_1 + 0x40) != '\x02') {
    iVar4 = iVar4 + 2;
  }
  if (*(char *)(param_1 + 0x41) != '\x02') {
    iVar4 = iVar4 + 2;
  }
  iVar3 = FUN_01337c54(*(undefined4 *)(param_1 + 0x38));
  *(int *)(param_1 + 0x3c) = iVar4 + iVar3;
  return;
}

