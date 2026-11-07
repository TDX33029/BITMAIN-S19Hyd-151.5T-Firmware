// FUN_0159c6c0 @ 0159c6c0 size=124 calls_out=2 calls_in=1
// strings: 

void FUN_0159c6c0(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = DAT_018d8aa0;
  FUN_0159c740();
  if (DAT_018d8aa8 <= (uint)(iVar3 - DAT_018d8aac)) {
    return;
  }
  uVar1 = iVar3 - DAT_018d8aa8;
  uVar2 = DAT_018d8aac - uVar1;
  if ((uVar2 < uVar1) && (uVar2 <= (uint)(DAT_018d8aa0 - iVar3))) {
    FUN_016dd1aa(DAT_018d8aa4 + iVar3 * 4,DAT_018d8aa4,uVar2 * 4);
    return;
  }
  iVar3 = DAT_018d8aa0 - uVar1;
  FUN_016dd52c(DAT_018d8aa4 + iVar3 * 4,DAT_018d8aa4 + DAT_018d8aa8 * 4,uVar1 * 4);
  DAT_018d8aa8 = iVar3;
  return;
}

