// FUN_0106fc6c @ 0106fc6c size=344 calls_out=7 calls_in=10
// strings: 

int FUN_0106fc6c(undefined4 param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  int local_18;
  int local_14;
  
  uVar5 = thunk_FUN_016de0ee(param_1,0x150);
  piVar1 = (int *)((int)uVar5 + (int)((ulonglong)uVar5 >> 0x20));
  if (((char)piVar1[1] == '\x01') || (piVar1 = (int *)FUN_01075f18(), piVar1 != (int *)0x0)) {
    iVar4 = *piVar1;
    uVar2 = *(uint *)(iVar4 + 0x40c);
    local_18 = iVar4;
    if (0xfffffffe < uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_01884060);
    }
    *(uint *)(iVar4 + 0x40c) = uVar2 + 1;
    if (uVar2 == 0) {
      *(uint *)(iVar4 + 0x420) = *(uint *)(*(int *)(iVar4 + 4) + 0x60) | 1;
      DataMemoryBarrier(0xb);
      uVar2 = *(uint *)(iVar4 + 0x414);
      *(uint *)(iVar4 + 0x414) = uVar2 + 1;
      if ((uVar2 & 0x7f) == 0) {
        FUN_00fbaee4(*(int *)(iVar4 + 4) + 0x20,&local_18);
      }
    }
  }
  else {
    DataMemoryBarrier(0xb);
    if (DAT_018d8070 != 0) {
      FUN_00fbaa78();
    }
    iVar4 = FUN_00fbba58(DAT_018d8074);
    uVar2 = *(uint *)(iVar4 + 0x40c);
    local_14 = iVar4;
    if (0xfffffffe < uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_01884060);
    }
    *(uint *)(iVar4 + 0x40c) = uVar2 + 1;
    if (uVar2 == 0) {
      *(uint *)(iVar4 + 0x420) = *(uint *)(*(int *)(iVar4 + 4) + 0x60) | 1;
      DataMemoryBarrier(0xb);
      uVar2 = *(uint *)(iVar4 + 0x414);
      *(uint *)(iVar4 + 0x414) = uVar2 + 1;
      if ((uVar2 & 0x7f) == 0) {
        FUN_00fbaee4(*(int *)(iVar4 + 4) + 0x20,&local_14);
      }
    }
    iVar3 = *(int *)(iVar4 + 0x410);
    *(int *)(iVar4 + 0x410) = iVar3 + -1;
    if (*(int *)(iVar4 + 0x40c) == 0 && iVar3 == 1) {
      FUN_00fbb698(iVar4);
      return iVar4;
    }
  }
  return iVar4;
}

