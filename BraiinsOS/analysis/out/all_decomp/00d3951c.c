// FUN_00d3951c @ 00d3951c size=340 calls_out=4 calls_in=0
// strings: 

void FUN_00d3951c(int param_1)

{
  byte bVar1;
  bool bVar2;
  int *piVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  code *pcVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  undefined4 *puVar14;
  uint uVar15;
  uint *puVar16;
  undefined4 uStack_28;
  int iStack_24;
  
  piVar3 = *(int **)(param_1 + 0x18);
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar3;
    bVar2 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar2);
  *piVar3 = iVar5 + -1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01659344(*(undefined4 *)(param_1 + 0x18));
  }
  if (*(int *)(param_1 + 0x28) != 1) {
    if (*(int *)(param_1 + 0x28) == 0) {
      FUN_00d07f38(param_1 + 0x30);
    }
    goto LAB_00d39610;
  }
  iVar5 = *(int *)(param_1 + 0x30);
  if (iVar5 == 0) {
    bVar1 = *(byte *)(param_1 + 0x38);
    cVar4 = bVar1 - 4;
    if (bVar1 < 4) {
      cVar4 = '\x04';
    }
    iVar6 = 0xc;
    if ((cVar4 != '\x05') && (cVar4 != '\x04' || bVar1 != 3)) goto LAB_00d39610;
  }
  else {
    if (iVar5 == 8) {
      iVar5 = *(int *)(param_1 + 0x40);
      if (iVar5 != 0) {
        puVar14 = *(undefined4 **)(param_1 + 0x44);
        pcVar7 = (code *)*puVar14;
        if (pcVar7 != (code *)0x0) {
          (*pcVar7)(iVar5);
        }
        if (puVar14[1] != 0) {
          thunk_FUN_016d3fb4(iVar5);
        }
      }
      goto LAB_00d39610;
    }
    iVar6 = 4;
    if (iVar5 != 2) goto LAB_00d39610;
  }
  (**(code **)**(undefined4 **)(param_1 + 0x30 + iVar6))();
LAB_00d39610:
  if (*(int *)(param_1 + 0x160) != 0) {
    (**(code **)(*(int *)(param_1 + 0x160) + 0xc))(*(undefined4 *)(param_1 + 0x164));
  }
  piVar3 = *(int **)(param_1 + 0x168);
  if (piVar3 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_015614d8(*(undefined4 *)(param_1 + 0x168),*(undefined4 *)(param_1 + 0x16c));
    }
  }
  if (param_1 == 0) {
    return;
  }
  iVar5 = FUN_016d3bc8();
  uVar15 = *(byte *)(param_1 + -3) & 0x1f;
  if (((*(byte *)(iVar5 + 0x14) & 0x1f) != 0) ||
     (uVar10 = *(uint *)(iVar5 + 0x14) & 0xfffff000, iVar6 = uVar10 - 0x10, uVar10 == 0)) {
    iVar6 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar5 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar10 = (uint)(*(byte *)(param_1 + -3) >> 5);
  iVar13 = *(int *)(iVar5 + 8) + 0x10;
  iVar11 = iVar6 * uVar15 + iVar6 + -4;
  iVar6 = iVar13 + iVar11;
  if (4 < uVar10) {
    if (uVar10 != 5) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar7)();
    }
    uVar10 = *(uint *)(iVar6 + -4);
    if (uVar10 < 5) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar7)();
    }
    if (*(char *)(iVar6 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar7 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar7)();
    }
  }
  if ((uint)(iVar6 - param_1) < uVar10) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar7)();
  }
  if (*(char *)(iVar6 - uVar10) != '\0') {
                    /* WARNING: Does not return */
    pcVar7 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar7)();
  }
  if (*(char *)(iVar13 + iVar11) != '\0') {
                    /* WARNING: Does not return */
    pcVar7 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar7)();
  }
  bVar1 = *(byte *)(iVar5 + 0x14);
  uVar10 = 1 << uVar15;
  *(undefined1 *)(param_1 + -3) = 0xff;
  *(undefined2 *)(param_1 + -2) = 0;
  do {
    uVar12 = *(uint *)(iVar5 + 0x10);
    uVar8 = *(uint *)(iVar5 + 0xc) | uVar12;
    if ((uVar10 & uVar8) != 0) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar7)();
    }
    if ((uVar12 == 0) || (uVar8 + uVar10 == (2 << (bVar1 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar5,uVar15);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar14 = (undefined4 *)FUN_016d2bc8();
      uVar9 = *puVar14;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar14 = uVar9;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar5 + 0x10) = uVar10 + uVar12;
      return;
    }
    puVar16 = (uint *)(iVar5 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar16);
      uVar8 = *puVar16;
      if (uVar12 != uVar8) goto LAB_016d409c;
      bVar2 = (bool)hasExclusiveAccess(puVar16);
    } while (!bVar2);
    *puVar16 = uVar10 + uVar12;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar12 == uVar8) {
      return;
    }
  } while( true );
}

