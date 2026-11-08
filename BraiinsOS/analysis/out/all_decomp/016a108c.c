// FUN_016a108c @ 016a108c size=156 calls_out=2 calls_in=3
// strings: 

void FUN_016a108c(int *param_1)

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
        goto LAB_016a10c8;
      }
    }
    else {
      ClearExclusiveLocal();
    }
  }
  FUN_015bebb8(puVar3);
LAB_016a10c8:
  iStack_18 = iVar4 + 0x20;
  if (*(char *)(iVar4 + 0x1c) != '\0') {
    puStack_14 = puVar3;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00414ceb,0xe,&iStack_18,&DAT_018ae518);
  }
  return;
}

