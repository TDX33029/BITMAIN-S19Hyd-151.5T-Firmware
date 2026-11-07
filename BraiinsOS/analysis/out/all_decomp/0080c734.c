// FUN_0080c734 @ 0080c734 size=160 calls_out=1 calls_in=0
// strings: 

void FUN_0080c734(int param_1)

{
  char cVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  int iVar13;
  undefined4 *puVar14;
  uint uVar15;
  uint *puVar16;
  undefined4 uStack_28;
  int iStack_24;
  
  cVar1 = *(char *)(param_1 + 8);
  if (cVar1 == '\x03') {
    cVar1 = *(char *)(param_1 + 0x45);
    iVar5 = 0xc;
  }
  else {
    iVar5 = 0x10;
    if (cVar1 != '\x04') {
      if (cVar1 != '\x05') {
        return;
      }
      goto LAB_0080c77c;
    }
    cVar1 = *(char *)(param_1 + 0x44);
  }
  if (cVar1 != '\x03') {
    return;
  }
LAB_0080c77c:
  param_1 = param_1 + iVar5;
  if (*(char *)(param_1 + 0x30) == '\x03') {
    uVar12 = *(undefined4 *)(param_1 + 0x28);
    puVar14 = *(undefined4 **)(param_1 + 0x2c);
    pcVar6 = (code *)*puVar14;
    if (pcVar6 != (code *)0x0) {
      (*pcVar6)(uVar12);
    }
    if (puVar14[1] != 0) {
      thunk_FUN_016d3fb4(uVar12);
    }
    if (*(int *)(param_1 + 0x10) != 0) {
      iVar5 = *(int *)(param_1 + 0x14);
      if (iVar5 == 0) {
        return;
      }
      iVar4 = FUN_016d3bc8();
      uVar15 = *(byte *)(iVar5 + -3) & 0x1f;
      if (((*(byte *)(iVar4 + 0x14) & 0x1f) != 0) ||
         (uVar9 = *(uint *)(iVar4 + 0x14) & 0xfffff000, iVar7 = uVar9 - 0x10, uVar9 == 0)) {
        iVar7 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar4 + 0x14) & 0xfff) >> 6) * 2) <<
                4;
      }
      uVar9 = (uint)(*(byte *)(iVar5 + -3) >> 5);
      iVar13 = *(int *)(iVar4 + 8) + 0x10;
      iVar10 = iVar7 * uVar15 + iVar7 + -4;
      iVar7 = iVar13 + iVar10;
      if (4 < uVar9) {
        if (uVar9 != 5) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar6)();
        }
        uVar9 = *(uint *)(iVar7 + -4);
        if (uVar9 < 5) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)software_udf(0xff,0x16d4022);
          (*pcVar6)();
        }
        if (*(char *)(iVar7 + -5) != '\0') {
                    /* WARNING: Does not return */
          pcVar6 = (code *)software_udf(0xff,0x16d402a);
          (*pcVar6)();
        }
      }
      if ((uint)(iVar7 - iVar5) < uVar9) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar6)();
      }
      if (*(char *)(iVar7 - uVar9) != '\0') {
                    /* WARNING: Does not return */
        pcVar6 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar6)();
      }
      if (*(char *)(iVar13 + iVar10) != '\0') {
                    /* WARNING: Does not return */
        pcVar6 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar6)();
      }
      bVar2 = *(byte *)(iVar4 + 0x14);
      uVar9 = 1 << uVar15;
      *(undefined1 *)(iVar5 + -3) = 0xff;
      *(undefined2 *)(iVar5 + -2) = 0;
      do {
        uVar11 = *(uint *)(iVar4 + 0x10);
        uVar8 = *(uint *)(iVar4 + 0xc) | uVar11;
        if ((uVar9 & uVar8) != 0) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar6)();
        }
        if ((uVar11 == 0) || (uVar8 + uVar9 == (2 << (bVar2 & 0x1f)) + -1)) {
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
          uVar8 = *puVar16;
          if (uVar11 != uVar8) goto LAB_016d409c;
          bVar3 = (bool)hasExclusiveAccess(puVar16);
        } while (!bVar3);
        *puVar16 = uVar9 + uVar11;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar11 == uVar8) {
          return;
        }
      } while( true );
    }
  }
  return;
}

