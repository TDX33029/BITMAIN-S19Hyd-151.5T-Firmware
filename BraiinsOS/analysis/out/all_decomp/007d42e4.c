// FUN_007d42e4 @ 007d42e4 size=388 calls_out=7 calls_in=9
// strings: 

void FUN_007d42e4(int param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  int iVar6;
  uint uVar7;
  char *pcVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  int iVar13;
  undefined4 *puVar14;
  uint uVar15;
  uint *puVar16;
  bool bVar17;
  undefined4 uStack_28;
  int iStack_24;
  
  switch(*(undefined1 *)(param_1 + 0x48)) {
  case 0:
    if (*(int *)(param_1 + 0x10) == 0) {
      return;
    }
    iVar3 = *(int *)(param_1 + 0x14);
    if (iVar3 == 0) {
      return;
    }
    iVar4 = FUN_016d3bc8();
    uVar15 = *(byte *)(iVar3 + -3) & 0x1f;
    if (((*(byte *)(iVar4 + 0x14) & 0x1f) != 0) ||
       (uVar9 = *(uint *)(iVar4 + 0x14) & 0xfffff000, iVar6 = uVar9 - 0x10, uVar9 == 0)) {
      iVar6 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar4 + 0x14) & 0xfff) >> 6) * 2) << 4
      ;
    }
    uVar9 = (uint)(*(byte *)(iVar3 + -3) >> 5);
    iVar13 = *(int *)(iVar4 + 8) + 0x10;
    iVar10 = iVar6 * uVar15 + iVar6 + -4;
    iVar6 = iVar13 + iVar10;
    if (4 < uVar9) {
      if (uVar9 != 5) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)software_udf(0xff,0x16d4018);
        (*pcVar5)();
      }
      uVar9 = *(uint *)(iVar6 + -4);
      if (uVar9 < 5) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)software_udf(0xff,0x16d4022);
        (*pcVar5)();
      }
      if (*(char *)(iVar6 + -5) != '\0') {
                    /* WARNING: Does not return */
        pcVar5 = (code *)software_udf(0xff,0x16d402a);
        (*pcVar5)();
      }
    }
    if ((uint)(iVar6 - iVar3) < uVar9) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)software_udf(0xff,0x16d4032);
      (*pcVar5)();
    }
    if (*(char *)(iVar6 - uVar9) != '\0') {
                    /* WARNING: Does not return */
      pcVar5 = (code *)software_udf(0xff,0x16d403a);
      (*pcVar5)();
    }
    if (*(char *)(iVar13 + iVar10) != '\0') {
                    /* WARNING: Does not return */
      pcVar5 = (code *)software_udf(0xff,0x16d4040);
      (*pcVar5)();
    }
    bVar2 = *(byte *)(iVar4 + 0x14);
    uVar9 = 1 << uVar15;
    *(undefined1 *)(iVar3 + -3) = 0xff;
    *(undefined2 *)(iVar3 + -2) = 0;
    do {
      uVar11 = *(uint *)(iVar4 + 0x10);
      uVar7 = *(uint *)(iVar4 + 0xc) | uVar11;
      if ((uVar9 & uVar7) != 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)software_udf(0xff,0x16d4074);
        (*pcVar5)();
      }
      if ((uVar11 == 0) || (uVar7 + uVar9 == (2 << (bVar2 & 0x1f)) + -1)) {
        if (DAT_018ddb0b != '\0') {
          FUN_016ddcc0(&DAT_018ddd48);
        }
        FUN_016d3ca8(&uStack_28,iVar4,uVar15);
        FUN_016dddc0(&DAT_018ddd48);
        if (iStack_24 == 0) {
          return;
        }
        puVar14 = (undefined4 *)FUN_016d2bc8();
        uVar12 = *puVar14;
        FUN_016d6ac4(uStack_28,iStack_24);
        *puVar14 = uVar12;
        return;
      }
      if (DAT_018ddb0b == '\0') {
        *(uint *)(iVar4 + 0x10) = uVar9 + uVar11;
        return;
      }
      puVar16 = (uint *)(iVar4 + 0x10);
      DataMemoryBarrier(0x1b);
      do {
        ExclusiveAccess(puVar16);
        uVar7 = *puVar16;
        if (uVar11 != uVar7) goto LAB_016d409c;
        bVar17 = (bool)hasExclusiveAccess(puVar16);
      } while (!bVar17);
      *puVar16 = uVar9 + uVar11;
LAB_016d409c:
      DataMemoryBarrier(0x1b);
      if (uVar11 == uVar7) {
        return;
      }
    } while( true );
  default:
    goto switchD_007d4300_caseD_1;
  case 3:
    if (*(char *)(param_1 + 0x88) == '\x03') {
      cVar1 = *(char *)(param_1 + 0x84);
      bVar17 = cVar1 == '\x03';
      if (bVar17) {
        cVar1 = *(char *)(param_1 + 0x60);
      }
      if (bVar17 && cVar1 == '\x04') {
        FUN_0163c790(param_1 + 100);
        if (*(int *)(param_1 + 0x68) != 0) {
          (**(code **)(*(int *)(param_1 + 0x68) + 0xc))(*(undefined4 *)(param_1 + 0x6c));
        }
      }
    }
    goto LAB_007d4418;
  case 4:
    FUN_007d6a38(param_1 + 0x60);
    break;
  case 5:
    FUN_00a07b4c(param_1 + 0x50);
    goto LAB_007d43d0;
  case 6:
    cVar1 = *(char *)(param_1 + 0x90);
    bVar17 = cVar1 == '\x03';
    if (bVar17) {
      cVar1 = *(char *)(param_1 + 0x8c);
    }
    if (!bVar17 || cVar1 != '\x03') goto LAB_007d43d0;
    uVar12 = *(undefined4 *)(param_1 + 0x84);
    puVar14 = *(undefined4 **)(param_1 + 0x88);
    pcVar5 = (code *)*puVar14;
    if (pcVar5 != (code *)0x0) {
      (*pcVar5)(uVar12);
    }
    if (puVar14[1] != 0) {
      thunk_FUN_016d3fb4(uVar12);
    }
    iVar3 = 0x74;
    if (*(int *)(param_1 + 0x70) == 0) goto LAB_007d43d0;
    goto LAB_007d4360;
  case 7:
    FUN_00a07b4c(param_1 + 0x60);
  }
  iVar3 = 0x54;
  if (*(int *)(param_1 + 0x50) != 0) {
LAB_007d4360:
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + iVar3));
  }
LAB_007d43d0:
  pcVar8 = *(char **)(param_1 + 0x44);
  if (*pcVar8 == '\0') {
    bVar17 = (bool)hasExclusiveAccess(pcVar8);
    if (!bVar17) goto LAB_007d43f8;
    *pcVar8 = '\x01';
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_007d43f8:
    FUN_01280da8(pcVar8);
  }
  FUN_0128236c(pcVar8);
  FUN_0163af68(pcVar8,1,pcVar8);
LAB_007d4418:
  bVar17 = *(char *)(param_1 + 0x49) != '\0';
  iVar3 = 0;
  if (bVar17) {
    iVar3 = *(int *)(param_1 + 0x8c);
  }
  if (bVar17 && iVar3 != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x90));
  }
  *(undefined1 *)(param_1 + 0x49) = 0;
switchD_007d4300_caseD_1:
  return;
}

