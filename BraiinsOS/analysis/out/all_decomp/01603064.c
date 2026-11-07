// FUN_01603064 @ 01603064 size=252 calls_out=4 calls_in=2
// strings: 

void FUN_01603064(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  code *pcVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint *puVar15;
  undefined4 uStack_28;
  int iStack_24;
  
  if (((DAT_018dd988 & 0x7fffffff) != 0) && (iVar3 = FUN_015bf3f8(), iVar3 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_00410a8c,0x69,&DAT_018ab1d0);
  }
  if (DAT_018dd9c4 == 0) {
    bVar1 = (bool)hasExclusiveAccess(0x18dd9c4);
    if (bVar1) {
      DAT_018dd9c4 = 0x3fffffff;
      DataMemoryBarrier(0xb);
      goto LAB_016030b8;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  FUN_015f5ff4(&DAT_018dd9c4);
LAB_016030b8:
  puVar5 = DAT_018dd9d0;
  iVar3 = DAT_018dd9cc;
  DataMemoryBarrier(0xb);
  do {
    uVar6 = DAT_018dd9c4 + 0xc0000001;
    bVar1 = (bool)hasExclusiveAccess(0x18dd9c4);
  } while (!bVar1);
  DAT_018dd9c4 = uVar6;
  DAT_018dd9cc = param_1;
  DAT_018dd9d0 = (undefined4 *)param_2;
  if (0x3fffffff < uVar6) {
    FUN_015e9814(&DAT_018dd9c4);
  }
  if (iVar3 != 0) {
    pcVar7 = (code *)*puVar5;
    if (pcVar7 != (code *)0x0) {
      (*pcVar7)(iVar3);
    }
    if (puVar5[1] != 0) {
      if (iVar3 == 0) {
        return;
      }
      iVar4 = FUN_016d3bc8();
      uVar6 = *(byte *)(iVar3 + -3) & 0x1f;
      if (((*(byte *)(iVar4 + 0x14) & 0x1f) != 0) ||
         (uVar11 = *(uint *)(iVar4 + 0x14) & 0xfffff000, iVar8 = uVar11 - 0x10, uVar11 == 0)) {
        iVar8 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar4 + 0x14) & 0xfff) >> 6) * 2) <<
                4;
      }
      uVar11 = (uint)(*(byte *)(iVar3 + -3) >> 5);
      iVar14 = *(int *)(iVar4 + 8) + 0x10;
      iVar12 = iVar8 * uVar6 + iVar8 + -4;
      iVar8 = iVar14 + iVar12;
      if (4 < uVar11) {
        if (uVar11 != 5) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar7)();
        }
        uVar11 = *(uint *)(iVar8 + -4);
        if (uVar11 < 5) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)software_udf(0xff,0x16d4022);
          (*pcVar7)();
        }
        if (*(char *)(iVar8 + -5) != '\0') {
                    /* WARNING: Does not return */
          pcVar7 = (code *)software_udf(0xff,0x16d402a);
          (*pcVar7)();
        }
      }
      if ((uint)(iVar8 - iVar3) < uVar11) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar7)();
      }
      if (*(char *)(iVar8 - uVar11) != '\0') {
                    /* WARNING: Does not return */
        pcVar7 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar7)();
      }
      if (*(char *)(iVar14 + iVar12) != '\0') {
                    /* WARNING: Does not return */
        pcVar7 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar7)();
      }
      bVar2 = *(byte *)(iVar4 + 0x14);
      uVar11 = 1 << uVar6;
      *(undefined1 *)(iVar3 + -3) = 0xff;
      *(undefined2 *)(iVar3 + -2) = 0;
      do {
        uVar13 = *(uint *)(iVar4 + 0x10);
        uVar9 = *(uint *)(iVar4 + 0xc) | uVar13;
        if ((uVar11 & uVar9) != 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar7)();
        }
        if ((uVar13 == 0) || (uVar9 + uVar11 == (2 << (bVar2 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&uStack_28,iVar4,uVar6);
          FUN_016dddc0(&DAT_018ddd48);
          if (iStack_24 == 0) {
            return;
          }
          puVar5 = (undefined4 *)FUN_016d2bc8();
          uVar10 = *puVar5;
          FUN_016d6ac4(uStack_28,iStack_24);
          *puVar5 = uVar10;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar4 + 0x10) = uVar11 + uVar13;
          return;
        }
        puVar15 = (uint *)(iVar4 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar15);
          uVar9 = *puVar15;
          if (uVar13 != uVar9) goto LAB_016d409c;
          bVar1 = (bool)hasExclusiveAccess(puVar15);
        } while (!bVar1);
        *puVar15 = uVar11 + uVar13;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar13 == uVar9) {
          return;
        }
      } while( true );
    }
  }
  return;
}

