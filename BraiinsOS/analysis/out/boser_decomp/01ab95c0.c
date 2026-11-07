// FUN_01ab95c0 @ 01ab95c0 size=152 calls_out=2 calls_in=2
// strings: 

void FUN_01ab95c0(int *param_1)

{
  bool bVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  int iStack_18;
  uint *puStack_14;
  
  iVar4 = *param_1;
  puVar3 = (uint *)(iVar4 + 0x14);
  uVar2 = *(uint *)(iVar4 + 0x14);
  if (uVar2 < 0x3ffffffe) {
    if (*puVar3 == uVar2) {
      bVar1 = (bool)hasExclusiveAccess(puVar3);
      if (bVar1) {
        *puVar3 = uVar2 + 1;
        DataMemoryBarrier(0xb);
        goto LAB_01ab95fc;
      }
    }
    else {
      ClearExclusiveLocal();
    }
  }
  FUN_0197a5c8(puVar3);
LAB_01ab95fc:
  iStack_18 = iVar4 + 0x20;
  if (*(char *)(iVar4 + 0x1c) != '\0') {
    puStack_14 = puVar3;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00531687,0xe,&iStack_18,&DAT_01d2eef0);
  }
  return;
}

