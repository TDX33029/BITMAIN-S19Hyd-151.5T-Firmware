// FUN_01086c40 @ 01086c40 size=528 calls_out=7 calls_in=1
// strings: 

void FUN_01086c40(int param_1,uint *param_2)

{
  bool bVar1;
  code *pcVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint *puVar14;
  undefined4 uStack_28;
  int iStack_24;
  
  if (param_1 == 0) {
    puVar14 = param_2 + 0x28;
    DataMemoryBarrier(0xb);
    do {
      uVar4 = *puVar14;
      bVar1 = (bool)hasExclusiveAccess(puVar14);
    } while (!bVar1);
    *puVar14 = uVar4 - 1;
    DataMemoryBarrier(0xb);
    if (uVar4 == 1) {
      puVar14 = param_2 + 8;
      DataMemoryBarrier(0xb);
      do {
        uVar4 = *puVar14;
        bVar1 = (bool)hasExclusiveAccess(puVar14);
      } while (!bVar1);
      *puVar14 = uVar4 | param_2[0x12];
      DataMemoryBarrier(0xb);
      if ((param_2[0x12] & uVar4) == 0) {
        FUN_0108b4fc(param_2 + 0x13);
        FUN_0108b4fc(param_2 + 0x1c);
      }
      puVar14 = param_2 + 0x2a;
      DataMemoryBarrier(0xb);
      do {
        uVar4 = *puVar14;
        bVar1 = (bool)hasExclusiveAccess(puVar14);
      } while (!bVar1);
      *(char *)puVar14 = '\x01';
      DataMemoryBarrier(0xb);
      if ((char)uVar4 != '\0') {
        FUN_01086a14(param_2);
        goto LAB_01086e40;
      }
    }
  }
  else if (param_1 == 1) {
    puVar14 = param_2 + 0x20;
    DataMemoryBarrier(0xb);
    do {
      uVar4 = *puVar14;
      bVar1 = (bool)hasExclusiveAccess(puVar14);
    } while (!bVar1);
    *puVar14 = uVar4 - 1;
    DataMemoryBarrier(0xb);
    if (uVar4 == 1) {
      puVar14 = param_2 + 8;
      DataMemoryBarrier(0xb);
      do {
        uVar4 = *puVar14;
        bVar1 = (bool)hasExclusiveAccess(puVar14);
      } while (!bVar1);
      *puVar14 = uVar4 | 1;
      DataMemoryBarrier(0xb);
      if ((uVar4 & 1) == 0) {
        FUN_010757c0(param_2 + 0x10);
      }
      puVar14 = param_2 + 0x22;
      DataMemoryBarrier(0xb);
      do {
        uVar4 = *puVar14;
        bVar1 = (bool)hasExclusiveAccess(puVar14);
      } while (!bVar1);
      *(char *)puVar14 = '\x01';
      DataMemoryBarrier(0xb);
      if ((char)uVar4 != '\0') {
        uVar8 = param_2[8];
        uVar4 = param_2[1];
        for (uVar13 = *param_2 & 0xfffffffe; uVar13 != (uVar8 & 0xfffffffe); uVar13 = uVar13 + 2) {
          uVar5 = (uVar13 & 0x3f) >> 1;
          if (uVar5 == 0x1f) {
            uVar5 = *(uint *)(uVar4 + 0x4d8);
            thunk_FUN_016d3fb4(uVar4);
          }
          else {
            FUN_01070c5c(uVar4 + uVar5 * 0x28);
            uVar5 = uVar4;
          }
          uVar4 = uVar5;
        }
        if (uVar4 != 0) {
          thunk_FUN_016d3fb4(uVar4);
        }
        FUN_006fffb0(param_2 + 0x12);
LAB_01086e40:
        if (param_2 == (uint *)0x0) {
          return;
        }
        iVar6 = FUN_016d3bc8();
        uVar4 = *(byte *)((int)param_2 + -3) & 0x1f;
        if (((*(byte *)(iVar6 + 0x14) & 0x1f) != 0) ||
           (uVar13 = *(uint *)(iVar6 + 0x14) & 0xfffff000, iVar9 = uVar13 - 0x10, uVar13 == 0)) {
          iVar9 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar6 + 0x14) & 0xfff) >> 6) * 2)
                  << 4;
        }
        uVar13 = (uint)(*(byte *)((int)param_2 + -3) >> 5);
        iVar12 = *(int *)(iVar6 + 8) + 0x10;
        iVar11 = iVar9 * uVar4 + iVar9 + -4;
        iVar9 = iVar12 + iVar11;
        if (4 < uVar13) {
          if (uVar13 != 5) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)software_udf(0xff,0x16d4018);
            (*pcVar2)();
          }
          uVar13 = *(uint *)(iVar9 + -4);
          if (uVar13 < 5) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)software_udf(0xff,0x16d4022);
            (*pcVar2)();
          }
          if (*(char *)(iVar9 + -5) != '\0') {
                    /* WARNING: Does not return */
            pcVar2 = (code *)software_udf(0xff,0x16d402a);
            (*pcVar2)();
          }
        }
        if ((uint)(iVar9 - (int)param_2) < uVar13) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4032);
          (*pcVar2)();
        }
        if (*(char *)(iVar9 - uVar13) != '\0') {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d403a);
          (*pcVar2)();
        }
        if (*(char *)(iVar12 + iVar11) != '\0') {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4040);
          (*pcVar2)();
        }
        bVar3 = *(byte *)(iVar6 + 0x14);
        uVar13 = 1 << uVar4;
        *(undefined1 *)((int)param_2 + -3) = 0xff;
        *(undefined2 *)((int)param_2 + -2) = 0;
        do {
          uVar5 = *(uint *)(iVar6 + 0x10);
          uVar8 = *(uint *)(iVar6 + 0xc) | uVar5;
          if ((uVar13 & uVar8) != 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)software_udf(0xff,0x16d4074);
            (*pcVar2)();
          }
          if ((uVar5 == 0) || (uVar8 + uVar13 == (2 << (bVar3 & 0x1f)) + -1)) {
            if (DAT_018ddb0b != '\0') {
              FUN_016ddcc0(&DAT_018ddd48);
            }
            FUN_016d3ca8(&uStack_28,iVar6,uVar4);
            FUN_016dddc0(&DAT_018ddd48);
            if (iStack_24 == 0) {
              return;
            }
            puVar7 = (undefined4 *)FUN_016d2bc8();
            uVar10 = *puVar7;
            FUN_016d6ac4(uStack_28,iStack_24);
            *puVar7 = uVar10;
            return;
          }
          if (DAT_018ddb0b == '\0') {
            *(uint *)(iVar6 + 0x10) = uVar13 + uVar5;
            return;
          }
          puVar14 = (uint *)(iVar6 + 0x10);
          DataMemoryBarrier(0x1b);
          do {
            ExclusiveAccess(puVar14);
            uVar8 = *puVar14;
            if (uVar5 != uVar8) goto LAB_016d409c;
            bVar1 = (bool)hasExclusiveAccess(puVar14);
          } while (!bVar1);
          *puVar14 = uVar13 + uVar5;
LAB_016d409c:
          DataMemoryBarrier(0x1b);
          if (uVar5 == uVar8) {
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
      puVar14 = param_2 + 0x11;
      DataMemoryBarrier(0xb);
      do {
        uVar4 = *puVar14;
        bVar1 = (bool)hasExclusiveAccess(puVar14);
      } while (!bVar1);
      *(char *)puVar14 = '\x01';
      DataMemoryBarrier(0xb);
      if ((char)uVar4 != '\0') {
        FUN_006fffb0(param_2 + 4);
        FUN_006fffb0(param_2 + 10);
        goto LAB_01086e40;
      }
    }
  }
  return;
}

