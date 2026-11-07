// FUN_01a36648 @ 01a36648 size=220 calls_out=3 calls_in=5
// strings: 

void FUN_01a36648(undefined4 param_1,int *param_2)

{
  bool bVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  int local_18;
  uint *local_14;
  
  iVar4 = *param_2;
  puVar3 = (uint *)(iVar4 + 8);
  uVar2 = *(uint *)(iVar4 + 8);
  if (uVar2 < 0x3ffffffe) {
    if (*puVar3 == uVar2) {
      bVar1 = (bool)hasExclusiveAccess(puVar3);
      if (bVar1) {
        *puVar3 = uVar2 + 1;
        DataMemoryBarrier(0xb);
        goto LAB_01a36688;
      }
    }
    else {
      ClearExclusiveLocal();
    }
  }
  FUN_0197a5c8(puVar3);
LAB_01a36688:
  if (*(char *)(iVar4 + 0x10) != '\0') {
    local_18 = iVar4 + 0x14;
    local_14 = puVar3;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,&local_18,&DAT_01d2b708,&DAT_01d2b490);
  }
  (**(code **)(*(int *)(iVar4 + 0x18) + 0x34))(param_1,*(undefined4 *)(iVar4 + 0x14));
  DataMemoryBarrier(0xb);
  do {
    uVar2 = *puVar3;
    bVar1 = (bool)hasExclusiveAccess(puVar3);
  } while (!bVar1);
  *puVar3 = uVar2 - 1;
  if ((uVar2 - 1 & 0xbfffffff) == 0x80000000) {
    FUN_019a33c4(puVar3);
    return;
  }
  return;
}

