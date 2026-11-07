// FUN_00de27ac @ 00de27ac size=208 calls_out=1 calls_in=2
// strings: 

void FUN_00de27ac(undefined4 *param_1)

{
  byte bVar1;
  bool bVar2;
  code *pcVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  undefined4 *puVar13;
  uint uVar14;
  uint *puVar15;
  undefined4 uStack_28;
  int iStack_24;
  
  if (*(char *)((int)param_1 + 0x27) == '\0') {
    if (param_1[3] != 0) {
      thunk_FUN_016d3fb4(param_1[2]);
    }
    if (param_1[5] != 0) {
      thunk_FUN_016d3fb4(param_1[4]);
    }
    iVar6 = param_1[7];
    if (iVar6 != 0) {
      iVar5 = param_1[6];
      iVar11 = 0;
      do {
        puVar13 = (undefined4 *)(iVar5 + iVar11 * 8);
        if (puVar13[1] != 0) {
          thunk_FUN_016d3fb4(*puVar13);
        }
        iVar11 = iVar11 + 1;
      } while (iVar6 != iVar11);
      if (iVar5 == 0) {
        return;
      }
      iVar6 = FUN_016d3bc8();
      uVar14 = *(byte *)(iVar5 + -3) & 0x1f;
      if (((*(byte *)(iVar6 + 0x14) & 0x1f) != 0) ||
         (uVar7 = *(uint *)(iVar6 + 0x14) & 0xfffff000, iVar11 = uVar7 - 0x10, uVar7 == 0)) {
        iVar11 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar6 + 0x14) & 0xfff) >> 6) * 2)
                 << 4;
      }
      uVar7 = (uint)(*(byte *)(iVar5 + -3) >> 5);
      iVar12 = *(int *)(iVar6 + 8) + 0x10;
      iVar8 = iVar11 * uVar14 + iVar11 + -4;
      iVar11 = iVar12 + iVar8;
      if (4 < uVar7) {
        if (uVar7 != 5) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar3)();
        }
        uVar7 = *(uint *)(iVar11 + -4);
        if (uVar7 < 5) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)software_udf(0xff,0x16d4022);
          (*pcVar3)();
        }
        if (*(char *)(iVar11 + -5) != '\0') {
                    /* WARNING: Does not return */
          pcVar3 = (code *)software_udf(0xff,0x16d402a);
          (*pcVar3)();
        }
      }
      if ((uint)(iVar11 - iVar5) < uVar7) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar3)();
      }
      if (*(char *)(iVar11 - uVar7) != '\0') {
                    /* WARNING: Does not return */
        pcVar3 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar3)();
      }
      if (*(char *)(iVar12 + iVar8) != '\0') {
                    /* WARNING: Does not return */
        pcVar3 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar3)();
      }
      bVar1 = *(byte *)(iVar6 + 0x14);
      uVar7 = 1 << uVar14;
      *(undefined1 *)(iVar5 + -3) = 0xff;
      *(undefined2 *)(iVar5 + -2) = 0;
      do {
        uVar9 = *(uint *)(iVar6 + 0x10);
        uVar4 = *(uint *)(iVar6 + 0xc) | uVar9;
        if ((uVar7 & uVar4) != 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar3)();
        }
        if ((uVar9 == 0) || (uVar4 + uVar7 == (2 << (bVar1 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&uStack_28,iVar6,uVar14);
          FUN_016dddc0(&DAT_018ddd48);
          if (iStack_24 == 0) {
            return;
          }
          puVar13 = (undefined4 *)FUN_016d2bc8();
          uVar10 = *puVar13;
          FUN_016d6ac4(uStack_28,iStack_24);
          *puVar13 = uVar10;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar6 + 0x10) = uVar7 + uVar9;
          return;
        }
        puVar15 = (uint *)(iVar6 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar15);
          uVar4 = *puVar15;
          if (uVar9 != uVar4) goto LAB_016d409c;
          bVar2 = (bool)hasExclusiveAccess(puVar15);
        } while (!bVar2);
        *puVar15 = uVar7 + uVar9;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar9 == uVar4) {
          return;
        }
      } while( true );
    }
  }
  else if (*(char *)((int)param_1 + 0x27) == '\x03') {
    uVar10 = *param_1;
    puVar13 = (undefined4 *)param_1[1];
    pcVar3 = (code *)*puVar13;
    if (pcVar3 != (code *)0x0) {
      (*pcVar3)(uVar10);
    }
    if (puVar13[1] != 0) {
      thunk_FUN_016d3fb4(uVar10);
    }
    *(undefined1 *)((int)param_1 + 0x26) = 0;
    *(undefined2 *)(param_1 + 9) = 0;
    return;
  }
  return;
}

