// FUN_01267898 @ 01267898 size=388 calls_out=6 calls_in=2
// strings: 

undefined4 FUN_01267898(int param_1,int param_2)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  uint *puVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  
  uVar8 = *(uint *)(param_2 + 8);
  if ((*(char *)(param_1 + 0x318) == '\0') || (uVar8 < *(uint *)(param_1 + 0x314)))
  goto LAB_012679d0;
  if ((*(byte *)(param_2 + 0x3c) & 2) != 0) {
    uVar2 = *(uint *)(param_1 + 0x30);
    puVar6 = (uint *)(param_1 + 0x30);
    if (uVar2 < 0x3ffffffe) {
      if (*puVar6 != uVar2) {
        ClearExclusiveLocal();
        goto LAB_012679f8;
      }
      bVar1 = (bool)hasExclusiveAccess(puVar6);
      if (!bVar1) goto LAB_012679f8;
      *puVar6 = uVar2 + 1;
      DataMemoryBarrier(0xb);
    }
    else {
LAB_012679f8:
      FUN_0197a5c8(puVar6);
    }
    if (*(char *)(param_1 + 0x38) == '\0') {
      iVar5 = FUN_01ab9098(param_1 + 0x40,*(undefined4 *)(param_2 + 0x24),
                           *(undefined4 *)(param_2 + 0x28));
      DataMemoryBarrier(0xb);
      do {
        uVar2 = *puVar6;
        bVar1 = (bool)hasExclusiveAccess(puVar6);
      } while (!bVar1);
      *puVar6 = uVar2 - 1;
      if ((uVar2 - 1 & 0xbfffffff) == 0x80000000) {
        FUN_019a33c4(puVar6);
      }
      if (iVar5 != 0) {
        return 1;
      }
    }
    else {
      DataMemoryBarrier(0xb);
      do {
        uVar2 = *puVar6;
        bVar1 = (bool)hasExclusiveAccess(puVar6);
      } while (!bVar1);
      *puVar6 = uVar2 - 1;
      if ((uVar2 - 1 & 0xbfffffff) == 0x80000000) {
        FUN_019a33c4(puVar6);
      }
    }
  }
  puVar6 = (uint *)FUN_01ac25d8(param_1 + 0x60);
  uVar2 = *puVar6;
  if (0x7ffffffe < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_0130701c(&DAT_01c25364);
  }
  iVar5 = puVar6[3] << 2;
  *puVar6 = uVar2 + 1;
  puVar4 = (uint *)puVar6[2];
  while (iVar5 != 0) {
    uVar7 = *puVar4;
    iVar5 = iVar5 + -4;
    puVar4 = puVar4 + 1;
    if (uVar7 <= uVar8) {
      *puVar6 = uVar2;
      return 1;
    }
  }
  uVar8 = *(uint *)(param_2 + 8);
  *puVar6 = uVar2;
LAB_012679d0:
  if (uVar8 < *(uint *)(param_1 + 0x1c8)) {
    return 0;
  }
  uVar3 = FUN_01ab095c(param_1 + 0xe0,param_2);
  return uVar3;
}

