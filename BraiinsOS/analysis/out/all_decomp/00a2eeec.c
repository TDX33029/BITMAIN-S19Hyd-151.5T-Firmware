// FUN_00a2eeec @ 00a2eeec size=288 calls_out=3 calls_in=0
// strings: 

bool FUN_00a2eeec(void)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint local_28;
  byte *pbStack_24;
  int iStack_20;
  int local_1c [3];
  
  FUN_015e9334(&local_28,&DAT_00565a90,0x20);
  if (local_28 == 0x80000000) {
    return false;
  }
  FUN_00fab1e0(local_1c,pbStack_24,iStack_20);
  if (local_1c[0] != 0) {
    if ((local_28 & 0x7fffffff) == 0) {
      return false;
    }
    thunk_FUN_016d3fb4(pbStack_24);
    return false;
  }
  bVar1 = false;
  if (iStack_20 == 4) {
    uVar3 = (uint)*pbStack_24;
    if (uVar3 - 0x41 < 0x1a) {
      uVar3 = uVar3 | 0x20;
    }
    if (uVar3 != 0x74) goto LAB_00a2efec;
    uVar3 = (uint)pbStack_24[1];
    if (uVar3 - 0x41 < 0x1a) {
      uVar3 = uVar3 | 0x20;
    }
    if (uVar3 != 0x72) goto LAB_00a2efec;
    uVar3 = (uint)pbStack_24[2];
    if (uVar3 - 0x41 < 0x1a) {
      uVar3 = uVar3 | 0x20;
    }
    if (uVar3 != 0x75) goto LAB_00a2efec;
    uVar3 = (uint)pbStack_24[3];
    if (uVar3 - 0x41 < 0x1a) {
      uVar3 = uVar3 | 0x20;
    }
    iVar2 = uVar3 - 0x65;
  }
  else {
    if (iStack_20 != 1) goto LAB_00a2efec;
    iVar2 = *pbStack_24 - 0x31;
  }
  bVar1 = iVar2 == 0;
LAB_00a2efec:
  if (local_28 == 0) {
    return bVar1;
  }
  thunk_FUN_016d3fb4(pbStack_24);
  return bVar1;
}

