// FUN_0154d23c @ 0154d23c size=268 calls_out=4 calls_in=1
// strings: 

void FUN_0154d23c(uint *param_1)

{
  bool bVar1;
  byte bVar2;
  int *piVar3;
  int iVar4;
  code *pcVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  undefined4 *puVar14;
  uint *puVar15;
  undefined4 uStack_28;
  int iStack_24;
  
  piVar3 = (int *)param_1[0xf];
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01561b24(param_1[0xf]);
  }
  if (((char)param_1[10] == '\0') && ((param_1[0xb] & 0x7fffffff) != 0)) {
    thunk_FUN_016d3fb4(param_1[0xc]);
    uVar12 = param_1[5];
    puVar14 = (undefined4 *)param_1[6];
    pcVar5 = (code *)*puVar14;
  }
  else {
    uVar12 = param_1[5];
    puVar14 = (undefined4 *)param_1[6];
    pcVar5 = (code *)*puVar14;
  }
  if (pcVar5 != (code *)0x0) {
    (*pcVar5)(uVar12);
  }
  if (puVar14[1] != 0) {
    thunk_FUN_016d3fb4(uVar12);
  }
  if ((*param_1 & 0x7fffffff) != 0) {
    thunk_FUN_016d3fb4(param_1[1]);
  }
  FUN_01547e60(param_1 + 0x11);
  if (param_1[7] != 0x80000000) {
    uVar12 = param_1[8];
    for (uVar8 = param_1[9]; uVar8 != 0; uVar8 = uVar8 - 1) {
      FUN_01496be4(uVar12);
      uVar12 = uVar12 + 0x3c;
    }
    if (param_1[7] != 0) {
      uVar12 = param_1[8];
      if (uVar12 == 0) {
        return;
      }
      iVar4 = FUN_016d3bc8();
      uVar8 = *(byte *)(uVar12 - 3) & 0x1f;
      if (((*(byte *)(iVar4 + 0x14) & 0x1f) != 0) ||
         (uVar9 = *(uint *)(iVar4 + 0x14) & 0xfffff000, iVar6 = uVar9 - 0x10, uVar9 == 0)) {
        iVar6 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar4 + 0x14) & 0xfff) >> 6) * 2) <<
                4;
      }
      uVar9 = (uint)(*(byte *)(uVar12 - 3) >> 5);
      iVar13 = *(int *)(iVar4 + 8) + 0x10;
      iVar10 = iVar6 * uVar8 + iVar6 + -4;
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
      if (iVar6 - uVar12 < uVar9) {
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
      uVar9 = 1 << uVar8;
      *(undefined1 *)(uVar12 - 3) = 0xff;
      *(undefined2 *)(uVar12 - 2) = 0;
      do {
        uVar11 = *(uint *)(iVar4 + 0x10);
        uVar12 = *(uint *)(iVar4 + 0xc) | uVar11;
        if ((uVar9 & uVar12) != 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar5)();
        }
        if ((uVar11 == 0) || (uVar12 + uVar9 == (2 << (bVar2 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&uStack_28,iVar4,uVar8);
          FUN_016dddc0(&DAT_018ddd48);
          if (iStack_24 == 0) {
            return;
          }
          puVar14 = (undefined4 *)FUN_016d2bc8();
          uVar7 = *puVar14;
          FUN_016d6ac4(uStack_28,iStack_24);
          *puVar14 = uVar7;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar4 + 0x10) = uVar9 + uVar11;
          return;
        }
        puVar15 = (uint *)(iVar4 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar15);
          uVar12 = *puVar15;
          if (uVar11 != uVar12) goto LAB_016d409c;
          bVar1 = (bool)hasExclusiveAccess(puVar15);
        } while (!bVar1);
        *puVar15 = uVar9 + uVar11;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar11 == uVar12) {
          return;
        }
      } while( true );
    }
  }
  return;
}

