// FUN_00bea158 @ 00bea158 size=448 calls_out=4 calls_in=1
// strings: 

void FUN_00bea158(undefined4 *param_1,int *param_2,uint param_3,int param_4,uint param_5,
                 uint param_6)

{
  code *pcVar1;
  byte bVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint *puVar14;
  bool bVar15;
  bool bVar16;
  undefined4 uStack_28;
  int iStack_24;
  
  iVar13 = *(int *)(*(int *)(*param_2 + 8) + 0x3c4);
  uVar11 = *(uint *)(*(int *)(*param_2 + 8) + 0x3c8);
  if ((param_3 & 1) == 0) {
    uVar6 = uVar11 * 4;
    bVar16 = 0x3ffffffe < uVar11;
    bVar15 = uVar11 == 0x3fffffff;
    if (uVar11 < 0x40000000) {
      bVar16 = 0x7ffffffb < uVar6;
      bVar15 = uVar6 == 0x7ffffffc;
    }
    if (bVar16 && !bVar15) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(0);
    }
    if (uVar6 == 0) {
      piVar5 = (int *)&DAT_00000004;
      uVar4 = 0;
    }
    else {
      piVar5 = (int *)thunk_FUN_016d4a50(uVar6);
      uVar4 = uVar11;
      if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(4,uVar6);
      }
    }
    if (uVar11 == 0) {
      uVar11 = 0;
    }
    else {
      uVar6 = 0;
      do {
        piVar5[uVar6] = *(int *)(*(int *)(iVar13 + uVar6 * 4) + 0x38c);
        uVar6 = uVar6 + 1;
      } while (uVar11 != uVar6);
    }
  }
  else {
    puVar3 = (undefined4 *)(iVar13 + -4);
    iVar13 = uVar11 << 2;
    do {
      if (iVar13 == 0) {
        *param_1 = 6;
        param_1[1] = param_4;
        return;
      }
      puVar3 = puVar3 + 1;
      piVar5 = (int *)*puVar3;
      iVar13 = iVar13 + -4;
    } while (piVar5[0xe3] != param_4);
    do {
      iVar13 = *piVar5;
      bVar15 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar15);
    *piVar5 = iVar13 + 1;
    if (iVar13 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0xbea308);
      (*pcVar1)();
    }
    piVar5 = (int *)*puVar3;
    DataMemoryBarrier(0xb);
    do {
      iVar13 = *piVar5;
      bVar15 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar15);
    *piVar5 = iVar13 + -1;
    if (iVar13 == 1) {
      DataMemoryBarrier(0xb);
      FUN_008f31e8();
    }
    piVar5 = (int *)thunk_FUN_016d4a50(4);
    if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,4);
    }
    uVar11 = 1;
    uVar4 = 1;
    *piVar5 = param_4;
  }
  if ((param_5 & 1) == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = 1;
    if (*(uint *)(*(int *)(*(int *)(*param_2 + 0x10) + 0x20c) + 0xb8) < param_6) {
      *param_1 = 7;
      if (uVar4 == 0) {
        return;
      }
      if (piVar5 == (int *)0x0) {
        return;
      }
      iVar13 = FUN_016d3bc8();
      uVar11 = *(byte *)((int)piVar5 + -3) & 0x1f;
      if (((*(byte *)(iVar13 + 0x14) & 0x1f) != 0) ||
         (uVar6 = *(uint *)(iVar13 + 0x14) & 0xfffff000, iVar8 = uVar6 - 0x10, uVar6 == 0)) {
        iVar8 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar13 + 0x14) & 0xfff) >> 6) * 2)
                << 4;
      }
      uVar6 = (uint)(*(byte *)((int)piVar5 + -3) >> 5);
      iVar12 = *(int *)(iVar13 + 8) + 0x10;
      iVar9 = iVar8 * uVar11 + iVar8 + -4;
      iVar8 = iVar12 + iVar9;
      if (4 < uVar6) {
        if (uVar6 != 5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar1)();
        }
        uVar6 = *(uint *)(iVar8 + -4);
        if (uVar6 < 5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4022);
          (*pcVar1)();
        }
        if (*(char *)(iVar8 + -5) != '\0') {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d402a);
          (*pcVar1)();
        }
      }
      if ((uint)(iVar8 - (int)piVar5) < uVar6) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar1)();
      }
      if (*(char *)(iVar8 - uVar6) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar1)();
      }
      if (*(char *)(iVar12 + iVar9) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar1)();
      }
      bVar2 = *(byte *)(iVar13 + 0x14);
      uVar6 = 1 << uVar11;
      *(undefined1 *)((int)piVar5 + -3) = 0xff;
      *(undefined2 *)((int)piVar5 + -2) = 0;
      do {
        uVar10 = *(uint *)(iVar13 + 0x10);
        uVar4 = *(uint *)(iVar13 + 0xc) | uVar10;
        if ((uVar6 & uVar4) != 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar1)();
        }
        if ((uVar10 == 0) || (uVar4 + uVar6 == (2 << (bVar2 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&uStack_28,iVar13,uVar11);
          FUN_016dddc0(&DAT_018ddd48);
          if (iStack_24 == 0) {
            return;
          }
          puVar3 = (undefined4 *)FUN_016d2bc8();
          uVar7 = *puVar3;
          FUN_016d6ac4(uStack_28,iStack_24);
          *puVar3 = uVar7;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar13 + 0x10) = uVar6 + uVar10;
          return;
        }
        puVar14 = (uint *)(iVar13 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar14);
          uVar4 = *puVar14;
          if (uVar10 != uVar4) goto LAB_016d409c;
          bVar15 = (bool)hasExclusiveAccess(puVar14);
        } while (!bVar15);
        *puVar14 = uVar6 + uVar10;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar10 == uVar4) {
          return;
        }
      } while( true );
    }
  }
  param_1[1] = uVar7;
  param_1[2] = param_6;
  *param_1 = 0xd;
  param_1[3] = uVar4;
  param_1[4] = piVar5;
  param_1[5] = uVar11;
  return;
}

