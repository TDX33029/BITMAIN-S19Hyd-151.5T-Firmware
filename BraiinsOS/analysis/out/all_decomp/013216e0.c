// FUN_013216e0 @ 013216e0 size=116 calls_out=1 calls_in=0
// strings: 

void FUN_013216e0(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (*(char *)(param_1 + 0xc) == '\x01') {
    uVar1 = *(uint *)(param_1 + 8);
    iVar3 = 1;
    if (0x7f < uVar1) {
      iVar3 = 2;
      if (0x3fff < uVar1) {
        iVar3 = 3;
      }
      if ((0x1fffff < uVar1) && (iVar3 = 5, uVar1 < 0x10000000)) {
        iVar3 = 4;
      }
    }
    iVar3 = uVar1 + iVar3 + 1;
  }
  if (*(char *)(param_1 + 0x18) != '\x02') {
    iVar3 = iVar3 + 2;
  }
  iVar2 = FUN_01337c54(*(undefined4 *)(param_1 + 0x10));
  *(int *)(param_1 + 0x14) = iVar3 + iVar2;
  return;
}

