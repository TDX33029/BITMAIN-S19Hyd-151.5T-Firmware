// FUN_01041fec @ 01041fec size=412 calls_out=3 calls_in=1
// strings: 

void FUN_01041fec(int *param_1)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  code *pcVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  undefined4 *puVar16;
  undefined4 uStack_28;
  int iStack_24;
  
  if ((char)param_1[6] != '\x02') {
    iVar3 = param_1[4];
    DataMemoryBarrier(0xb);
    piVar7 = (int *)(iVar3 + 0x20);
    do {
      iVar4 = *piVar7;
      bVar1 = (bool)hasExclusiveAccess(piVar7);
    } while (!bVar1);
    *piVar7 = iVar4 + -1;
    DataMemoryBarrier(0xb);
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      if (0x7fffffff < *(uint *)(iVar3 + 0x1c)) {
        puVar5 = (uint *)(iVar3 + 0x1c);
        DataMemoryBarrier(0xb);
        do {
          bVar1 = (bool)hasExclusiveAccess(puVar5);
        } while (!bVar1);
        *puVar5 = *puVar5 & 0x7fffffff;
        DataMemoryBarrier(0xb);
      }
      puVar5 = (uint *)(iVar3 + 0x2c);
      DataMemoryBarrier(0xb);
      do {
        uVar8 = *puVar5;
        bVar1 = (bool)hasExclusiveAccess(puVar5);
      } while (!bVar1);
      *puVar5 = uVar8 | 2;
      DataMemoryBarrier(0xb);
      if (uVar8 == 0) {
        iVar4 = *(int *)(iVar3 + 0x24);
        *(undefined4 *)(iVar3 + 0x24) = 0;
        DataMemoryBarrier(0xb);
        do {
          bVar1 = (bool)hasExclusiveAccess(puVar5);
        } while (!bVar1);
        *puVar5 = *puVar5 & 0xfffffffd;
        if (iVar4 != 0) {
          (**(code **)(iVar4 + 4))(*(undefined4 *)(iVar3 + 0x28));
        }
      }
    }
    piVar7 = (int *)param_1[4];
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar7;
      bVar1 = (bool)hasExclusiveAccess(piVar7);
    } while (!bVar1);
    *piVar7 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0105a2c8(param_1[4]);
    }
    piVar7 = (int *)param_1[5];
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar7;
      bVar1 = (bool)hasExclusiveAccess(piVar7);
    } while (!bVar1);
    *piVar7 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_010b4e7c(param_1[5]);
    }
  }
  iVar3 = param_1[2];
  puVar16 = (undefined4 *)param_1[3];
  pcVar6 = (code *)*puVar16;
  if (pcVar6 != (code *)0x0) {
    (*pcVar6)(iVar3);
  }
  if (puVar16[1] != 0) {
    thunk_FUN_016d3fb4(iVar3);
  }
  iVar3 = *param_1;
  if (iVar3 != 0) {
    puVar16 = (undefined4 *)param_1[1];
    pcVar6 = (code *)*puVar16;
    if (pcVar6 != (code *)0x0) {
      (*pcVar6)(iVar3);
    }
    if (puVar16[1] != 0) {
      if (iVar3 == 0) {
        return;
      }
      iVar4 = FUN_016d3bc8();
      uVar8 = *(byte *)(iVar3 + -3) & 0x1f;
      if (((*(byte *)(iVar4 + 0x14) & 0x1f) != 0) ||
         (uVar12 = *(uint *)(iVar4 + 0x14) & 0xfffff000, iVar9 = uVar12 - 0x10, uVar12 == 0)) {
        iVar9 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar4 + 0x14) & 0xfff) >> 6) * 2) <<
                4;
      }
      uVar12 = (uint)(*(byte *)(iVar3 + -3) >> 5);
      iVar15 = *(int *)(iVar4 + 8) + 0x10;
      iVar13 = iVar9 * uVar8 + iVar9 + -4;
      iVar9 = iVar15 + iVar13;
      if (4 < uVar12) {
        if (uVar12 != 5) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar6)();
        }
        uVar12 = *(uint *)(iVar9 + -4);
        if (uVar12 < 5) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)software_udf(0xff,0x16d4022);
          (*pcVar6)();
        }
        if (*(char *)(iVar9 + -5) != '\0') {
                    /* WARNING: Does not return */
          pcVar6 = (code *)software_udf(0xff,0x16d402a);
          (*pcVar6)();
        }
      }
      if ((uint)(iVar9 - iVar3) < uVar12) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar6)();
      }
      if (*(char *)(iVar9 - uVar12) != '\0') {
                    /* WARNING: Does not return */
        pcVar6 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar6)();
      }
      if (*(char *)(iVar15 + iVar13) != '\0') {
                    /* WARNING: Does not return */
        pcVar6 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar6)();
      }
      bVar2 = *(byte *)(iVar4 + 0x14);
      uVar12 = 1 << uVar8;
      *(undefined1 *)(iVar3 + -3) = 0xff;
      *(undefined2 *)(iVar3 + -2) = 0;
      do {
        uVar14 = *(uint *)(iVar4 + 0x10);
        uVar10 = *(uint *)(iVar4 + 0xc) | uVar14;
        if ((uVar12 & uVar10) != 0) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar6)();
        }
        if ((uVar14 == 0) || (uVar10 + uVar12 == (2 << (bVar2 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&uStack_28,iVar4,uVar8);
          FUN_016dddc0(&DAT_018ddd48);
          if (iStack_24 == 0) {
            return;
          }
          puVar16 = (undefined4 *)FUN_016d2bc8();
          uVar11 = *puVar16;
          FUN_016d6ac4(uStack_28,iStack_24);
          *puVar16 = uVar11;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar4 + 0x10) = uVar12 + uVar14;
          return;
        }
        puVar5 = (uint *)(iVar4 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar5);
          uVar10 = *puVar5;
          if (uVar14 != uVar10) goto LAB_016d409c;
          bVar1 = (bool)hasExclusiveAccess(puVar5);
        } while (!bVar1);
        *puVar5 = uVar12 + uVar14;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar14 == uVar10) {
          return;
        }
      } while( true );
    }
  }
  return;
}

