// FUN_01086ea0 @ 01086ea0 size=544 calls_out=7 calls_in=1
// strings: 

void FUN_01086ea0(int param_1,uint *param_2)

{
  bool bVar1;
  code *pcVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  int iVar7;
  undefined4 *puVar8;
  uint uVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint *puVar15;
  undefined4 uStack_28;
  int iStack_24;
  
  if (param_1 == 0) {
    puVar15 = param_2 + 0x28;
    DataMemoryBarrier(0xb);
    do {
      uVar4 = *puVar15;
      bVar1 = (bool)hasExclusiveAccess(puVar15);
    } while (!bVar1);
    *puVar15 = uVar4 - 1;
    DataMemoryBarrier(0xb);
    if (uVar4 == 1) {
      puVar15 = param_2 + 8;
      DataMemoryBarrier(0xb);
      do {
        uVar4 = *puVar15;
        bVar1 = (bool)hasExclusiveAccess(puVar15);
      } while (!bVar1);
      *puVar15 = uVar4 | param_2[0x12];
      DataMemoryBarrier(0xb);
      if ((param_2[0x12] & uVar4) == 0) {
        FUN_0108b4fc(param_2 + 0x13);
        FUN_0108b4fc(param_2 + 0x1c);
      }
      puVar15 = param_2 + 0x2a;
      DataMemoryBarrier(0xb);
      do {
        uVar4 = *puVar15;
        bVar1 = (bool)hasExclusiveAccess(puVar15);
      } while (!bVar1);
      *(char *)puVar15 = '\x01';
      DataMemoryBarrier(0xb);
      if ((char)uVar4 != '\0') {
        FUN_01086b20(param_2);
        goto LAB_010870b0;
      }
    }
  }
  else if (param_1 == 1) {
    puVar15 = param_2 + 0x20;
    DataMemoryBarrier(0xb);
    do {
      uVar4 = *puVar15;
      bVar1 = (bool)hasExclusiveAccess(puVar15);
    } while (!bVar1);
    *puVar15 = uVar4 - 1;
    DataMemoryBarrier(0xb);
    if (uVar4 == 1) {
      puVar15 = param_2 + 8;
      DataMemoryBarrier(0xb);
      do {
        uVar4 = *puVar15;
        bVar1 = (bool)hasExclusiveAccess(puVar15);
      } while (!bVar1);
      *puVar15 = uVar4 | 1;
      DataMemoryBarrier(0xb);
      if ((uVar4 & 1) == 0) {
        FUN_010757c0(param_2 + 0x10);
      }
      puVar15 = param_2 + 0x22;
      DataMemoryBarrier(0xb);
      do {
        uVar4 = *puVar15;
        bVar1 = (bool)hasExclusiveAccess(puVar15);
      } while (!bVar1);
      *(char *)puVar15 = '\x01';
      DataMemoryBarrier(0xb);
      if ((char)uVar4 != '\0') {
        uVar9 = param_2[8];
        uVar4 = param_2[1];
        for (uVar14 = *param_2 & 0xfffffffe; uVar14 != (uVar9 & 0xfffffffe); uVar14 = uVar14 + 2) {
          uVar5 = (uVar14 & 0x3f) >> 1;
          if (uVar5 == 0x1f) {
            uVar5 = *(uint *)(uVar4 + 0x2e8);
            thunk_FUN_016d3fb4(uVar4);
          }
          else {
            pcVar6 = (char *)(uVar4 + uVar5 * 0x18);
            uVar5 = uVar4;
            if (*pcVar6 == '\0') {
              FUN_0109d7e0(*(undefined4 *)(pcVar6 + 4));
            }
          }
          uVar4 = uVar5;
        }
        if (uVar4 != 0) {
          thunk_FUN_016d3fb4(uVar4);
        }
        FUN_006fffb0(param_2 + 0x12);
LAB_010870b0:
        if (param_2 == (uint *)0x0) {
          return;
        }
        iVar7 = FUN_016d3bc8();
        uVar4 = *(byte *)((int)param_2 + -3) & 0x1f;
        if (((*(byte *)(iVar7 + 0x14) & 0x1f) != 0) ||
           (uVar14 = *(uint *)(iVar7 + 0x14) & 0xfffff000, iVar10 = uVar14 - 0x10, uVar14 == 0)) {
          iVar10 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar7 + 0x14) & 0xfff) >> 6) * 2)
                   << 4;
        }
        uVar14 = (uint)(*(byte *)((int)param_2 + -3) >> 5);
        iVar13 = *(int *)(iVar7 + 8) + 0x10;
        iVar12 = iVar10 * uVar4 + iVar10 + -4;
        iVar10 = iVar13 + iVar12;
        if (4 < uVar14) {
          if (uVar14 != 5) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)software_udf(0xff,0x16d4018);
            (*pcVar2)();
          }
          uVar14 = *(uint *)(iVar10 + -4);
          if (uVar14 < 5) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)software_udf(0xff,0x16d4022);
            (*pcVar2)();
          }
          if (*(char *)(iVar10 + -5) != '\0') {
                    /* WARNING: Does not return */
            pcVar2 = (code *)software_udf(0xff,0x16d402a);
            (*pcVar2)();
          }
        }
        if ((uint)(iVar10 - (int)param_2) < uVar14) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4032);
          (*pcVar2)();
        }
        if (*(char *)(iVar10 - uVar14) != '\0') {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d403a);
          (*pcVar2)();
        }
        if (*(char *)(iVar13 + iVar12) != '\0') {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4040);
          (*pcVar2)();
        }
        bVar3 = *(byte *)(iVar7 + 0x14);
        uVar14 = 1 << uVar4;
        *(undefined1 *)((int)param_2 + -3) = 0xff;
        *(undefined2 *)((int)param_2 + -2) = 0;
        do {
          uVar5 = *(uint *)(iVar7 + 0x10);
          uVar9 = *(uint *)(iVar7 + 0xc) | uVar5;
          if ((uVar14 & uVar9) != 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)software_udf(0xff,0x16d4074);
            (*pcVar2)();
          }
          if ((uVar5 == 0) || (uVar9 + uVar14 == (2 << (bVar3 & 0x1f)) + -1)) {
            if (DAT_018ddb0b != '\0') {
              FUN_016ddcc0(&DAT_018ddd48);
            }
            FUN_016d3ca8(&uStack_28,iVar7,uVar4);
            FUN_016dddc0(&DAT_018ddd48);
            if (iStack_24 == 0) {
              return;
            }
            puVar8 = (undefined4 *)FUN_016d2bc8();
            uVar11 = *puVar8;
            FUN_016d6ac4(uStack_28,iStack_24);
            *puVar8 = uVar11;
            return;
          }
          if (DAT_018ddb0b == '\0') {
            *(uint *)(iVar7 + 0x10) = uVar14 + uVar5;
            return;
          }
          puVar15 = (uint *)(iVar7 + 0x10);
          DataMemoryBarrier(0x1b);
          do {
            ExclusiveAccess(puVar15);
            uVar9 = *puVar15;
            if (uVar5 != uVar9) goto LAB_016d409c;
            bVar1 = (bool)hasExclusiveAccess(puVar15);
          } while (!bVar1);
          *puVar15 = uVar14 + uVar5;
LAB_016d409c:
          DataMemoryBarrier(0x1b);
          if (uVar5 == uVar9) {
            return;
          }
        } while( true );
      }
    }
  }
  else {
    DataMemoryBarrier(0xb);
    do {
      uVar4 = *param_2;
      bVar1 = (bool)hasExclusiveAccess(param_2);
    } while (!bVar1);
    *param_2 = uVar4 - 1;
    DataMemoryBarrier(0xb);
    if (uVar4 == 1) {
      FUN_0108b03c(param_2 + 2);
      puVar15 = param_2 + 0x11;
      DataMemoryBarrier(0xb);
      do {
        uVar4 = *puVar15;
        bVar1 = (bool)hasExclusiveAccess(puVar15);
      } while (!bVar1);
      *(char *)puVar15 = '\x01';
      DataMemoryBarrier(0xb);
      if ((char)uVar4 != '\0') {
        FUN_006fffb0(param_2 + 4);
        FUN_006fffb0(param_2 + 10);
        goto LAB_010870b0;
      }
    }
  }
  return;
}

