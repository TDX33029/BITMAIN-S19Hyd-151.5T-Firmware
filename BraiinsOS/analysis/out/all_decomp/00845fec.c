// FUN_00845fec @ 00845fec size=660 calls_out=3 calls_in=3
// strings: 

void FUN_00845fec(uint *param_1)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  byte bVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  uint uVar8;
  char *pcVar9;
  int iVar10;
  undefined4 uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  uint *puVar17;
  undefined4 uStack_28;
  int iStack_24;
  
  cVar1 = (char)param_1[5];
  if (cVar1 != '\0') {
    if (cVar1 == '\x03') {
      if ((char)param_1[0x1b] == '\x03') {
        FUN_00845020(param_1 + 0x10);
      }
      else if ((char)param_1[0x1b] == '\0') {
        FUN_00845840(param_1 + 8);
      }
    }
    else {
      if (cVar1 != '\x04') {
        return;
      }
      uVar12 = param_1[6];
      DataMemoryBarrier(0xb);
      pcVar9 = (char *)(uVar12 + 0x1c);
      *(undefined1 *)(uVar12 + 0x2c) = 1;
      DataMemoryBarrier(0xb);
      do {
        cVar1 = *pcVar9;
        bVar2 = (bool)hasExclusiveAccess(pcVar9);
      } while (!bVar2);
      *pcVar9 = '\x01';
      DataMemoryBarrier(0xb);
      if (cVar1 == '\0') {
        iVar5 = *(int *)(uVar12 + 0x14);
        *(undefined4 *)(uVar12 + 0x14) = 0;
        DataMemoryBarrier(0xb);
        *(undefined1 *)(uVar12 + 0x1c) = 0;
        DataMemoryBarrier(0xb);
        if (iVar5 != 0) {
          (**(code **)(iVar5 + 0xc))(*(undefined4 *)(uVar12 + 0x18));
        }
      }
      pcVar9 = (char *)(uVar12 + 0x28);
      DataMemoryBarrier(0xb);
      do {
        cVar1 = *pcVar9;
        bVar2 = (bool)hasExclusiveAccess(pcVar9);
      } while (!bVar2);
      *pcVar9 = '\x01';
      DataMemoryBarrier(0xb);
      if (cVar1 == '\0') {
        iVar5 = *(int *)(uVar12 + 0x20);
        *(undefined4 *)(uVar12 + 0x20) = 0;
        if (iVar5 == 0) {
          DataMemoryBarrier(0xb);
          *(undefined1 *)(uVar12 + 0x28) = 0;
          DataMemoryBarrier(0xb);
        }
        else {
          DataMemoryBarrier(0xb);
          *pcVar9 = '\0';
          DataMemoryBarrier(0xb);
          (**(code **)(iVar5 + 4))(*(undefined4 *)(uVar12 + 0x24));
        }
      }
      piVar6 = (int *)param_1[6];
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar6;
        bVar2 = (bool)hasExclusiveAccess(piVar6);
      } while (!bVar2);
      *piVar6 = iVar5 + -1;
      if (iVar5 == 1) {
        DataMemoryBarrier(0xb);
        FUN_010fee9c(param_1[6]);
      }
    }
    if (*(char *)((int)param_1 + 0x15) != '\0') {
      uVar12 = param_1[6];
      DataMemoryBarrier(0xb);
      pcVar9 = (char *)(uVar12 + 0x1c);
      *(undefined1 *)(uVar12 + 0x2c) = 1;
      DataMemoryBarrier(0xb);
      do {
        cVar1 = *pcVar9;
        bVar2 = (bool)hasExclusiveAccess(pcVar9);
      } while (!bVar2);
      *pcVar9 = '\x01';
      DataMemoryBarrier(0xb);
      if (cVar1 == '\0') {
        iVar5 = *(int *)(uVar12 + 0x14);
        *(undefined4 *)(uVar12 + 0x14) = 0;
        DataMemoryBarrier(0xb);
        *(undefined1 *)(uVar12 + 0x1c) = 0;
        DataMemoryBarrier(0xb);
        if (iVar5 != 0) {
          (**(code **)(iVar5 + 0xc))(*(undefined4 *)(uVar12 + 0x18));
        }
      }
      pcVar9 = (char *)(uVar12 + 0x28);
      DataMemoryBarrier(0xb);
      do {
        cVar1 = *pcVar9;
        bVar2 = (bool)hasExclusiveAccess(pcVar9);
      } while (!bVar2);
      *pcVar9 = '\x01';
      DataMemoryBarrier(0xb);
      if (cVar1 == '\0') {
        iVar5 = *(int *)(uVar12 + 0x20);
        *(undefined4 *)(uVar12 + 0x20) = 0;
        if (iVar5 == 0) {
          DataMemoryBarrier(0xb);
          *(undefined1 *)(uVar12 + 0x28) = 0;
          DataMemoryBarrier(0xb);
        }
        else {
          DataMemoryBarrier(0xb);
          *pcVar9 = '\0';
          DataMemoryBarrier(0xb);
          (**(code **)(iVar5 + 4))(*(undefined4 *)(uVar12 + 0x24));
        }
      }
      piVar6 = (int *)param_1[6];
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar6;
        bVar2 = (bool)hasExclusiveAccess(piVar6);
      } while (!bVar2);
      *piVar6 = iVar5 + -1;
      if (iVar5 == 1) {
        DataMemoryBarrier(0xb);
        FUN_010fee9c(param_1[6]);
      }
    }
    *(undefined1 *)((int)param_1 + 0x17) = 0;
    *(undefined2 *)((int)param_1 + 0x15) = 0;
    return;
  }
  uVar12 = *param_1;
  uVar8 = 1;
  if ((int)uVar12 < 0) {
    uVar8 = uVar12 ^ 0x80000000;
  }
  if (uVar8 != 0) {
    if (uVar8 != 1) {
      param_1 = param_1 + 1;
      uVar12 = *param_1;
    }
    if (uVar12 != 0) {
      uVar12 = param_1[1];
      if (uVar12 == 0) {
        return;
      }
      iVar5 = FUN_016d3bc8();
      uVar8 = *(byte *)(uVar12 - 3) & 0x1f;
      if (((*(byte *)(iVar5 + 0x14) & 0x1f) != 0) ||
         (uVar13 = *(uint *)(iVar5 + 0x14) & 0xfffff000, iVar10 = uVar13 - 0x10, uVar13 == 0)) {
        iVar10 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar5 + 0x14) & 0xfff) >> 6) * 2)
                 << 4;
      }
      uVar13 = (uint)(*(byte *)(uVar12 - 3) >> 5);
      iVar16 = *(int *)(iVar5 + 8) + 0x10;
      iVar14 = iVar10 * uVar8 + iVar10 + -4;
      iVar10 = iVar16 + iVar14;
      if (4 < uVar13) {
        if (uVar13 != 5) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar3)();
        }
        uVar13 = *(uint *)(iVar10 + -4);
        if (uVar13 < 5) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)software_udf(0xff,0x16d4022);
          (*pcVar3)();
        }
        if (*(char *)(iVar10 + -5) != '\0') {
                    /* WARNING: Does not return */
          pcVar3 = (code *)software_udf(0xff,0x16d402a);
          (*pcVar3)();
        }
      }
      if (iVar10 - uVar12 < uVar13) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar3)();
      }
      if (*(char *)(iVar10 - uVar13) != '\0') {
                    /* WARNING: Does not return */
        pcVar3 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar3)();
      }
      if (*(char *)(iVar16 + iVar14) != '\0') {
                    /* WARNING: Does not return */
        pcVar3 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar3)();
      }
      bVar4 = *(byte *)(iVar5 + 0x14);
      uVar13 = 1 << uVar8;
      *(undefined1 *)(uVar12 - 3) = 0xff;
      *(undefined2 *)(uVar12 - 2) = 0;
      do {
        uVar15 = *(uint *)(iVar5 + 0x10);
        uVar12 = *(uint *)(iVar5 + 0xc) | uVar15;
        if ((uVar13 & uVar12) != 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar3)();
        }
        if ((uVar15 == 0) || (uVar12 + uVar13 == (2 << (bVar4 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&uStack_28,iVar5,uVar8);
          FUN_016dddc0(&DAT_018ddd48);
          if (iStack_24 == 0) {
            return;
          }
          puVar7 = (undefined4 *)FUN_016d2bc8();
          uVar11 = *puVar7;
          FUN_016d6ac4(uStack_28,iStack_24);
          *puVar7 = uVar11;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar5 + 0x10) = uVar13 + uVar15;
          return;
        }
        puVar17 = (uint *)(iVar5 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar17);
          uVar12 = *puVar17;
          if (uVar15 != uVar12) goto LAB_016d409c;
          bVar2 = (bool)hasExclusiveAccess(puVar17);
        } while (!bVar2);
        *puVar17 = uVar13 + uVar15;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar15 == uVar12) {
          return;
        }
      } while( true );
    }
  }
  return;
}

