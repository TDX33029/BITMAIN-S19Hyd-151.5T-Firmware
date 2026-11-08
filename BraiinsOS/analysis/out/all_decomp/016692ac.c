// FUN_016692ac @ 016692ac size=92 calls_out=1 calls_in=4
// strings: 

void FUN_016692ac(int *param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  undefined4 *puVar12;
  int iVar13;
  uint uVar14;
  uint *puVar15;
  undefined4 uStack_28;
  int iStack_24;
  
  if (*param_1 != 0) {
    thunk_FUN_016d3fb4(param_1[1]);
  }
  iVar7 = param_1[3];
  if (iVar7 != 0) {
    puVar12 = (undefined4 *)param_1[4];
    pcVar4 = (code *)*puVar12;
    if (pcVar4 != (code *)0x0) {
      (*pcVar4)(iVar7);
    }
    if (puVar12[1] != 0) {
      if (iVar7 == 0) {
        return;
      }
      iVar3 = FUN_016d3bc8();
      uVar14 = *(byte *)(iVar7 + -3) & 0x1f;
      if (((*(byte *)(iVar3 + 0x14) & 0x1f) != 0) ||
         (uVar9 = *(uint *)(iVar3 + 0x14) & 0xfffff000, iVar5 = uVar9 - 0x10, uVar9 == 0)) {
        iVar5 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar3 + 0x14) & 0xfff) >> 6) * 2) <<
                4;
      }
      uVar9 = (uint)(*(byte *)(iVar7 + -3) >> 5);
      iVar13 = *(int *)(iVar3 + 8) + 0x10;
      iVar10 = iVar5 * uVar14 + iVar5 + -4;
      iVar5 = iVar13 + iVar10;
      if (4 < uVar9) {
        if (uVar9 != 5) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar4)();
        }
        uVar9 = *(uint *)(iVar5 + -4);
        if (uVar9 < 5) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)software_udf(0xff,0x16d4022);
          (*pcVar4)();
        }
        if (*(char *)(iVar5 + -5) != '\0') {
                    /* WARNING: Does not return */
          pcVar4 = (code *)software_udf(0xff,0x16d402a);
          (*pcVar4)();
        }
      }
      if ((uint)(iVar5 - iVar7) < uVar9) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar4)();
      }
      if (*(char *)(iVar5 - uVar9) != '\0') {
                    /* WARNING: Does not return */
        pcVar4 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar4)();
      }
      if (*(char *)(iVar13 + iVar10) != '\0') {
                    /* WARNING: Does not return */
        pcVar4 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar4)();
      }
      bVar1 = *(byte *)(iVar3 + 0x14);
      uVar9 = 1 << uVar14;
      *(undefined1 *)(iVar7 + -3) = 0xff;
      *(undefined2 *)(iVar7 + -2) = 0;
      do {
        uVar11 = *(uint *)(iVar3 + 0x10);
        uVar6 = *(uint *)(iVar3 + 0xc) | uVar11;
        if ((uVar9 & uVar6) != 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar4)();
        }
        if ((uVar11 == 0) || (uVar6 + uVar9 == (2 << (bVar1 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&uStack_28,iVar3,uVar14);
          FUN_016dddc0(&DAT_018ddd48);
          if (iStack_24 == 0) {
            return;
          }
          puVar12 = (undefined4 *)FUN_016d2bc8();
          uVar8 = *puVar12;
          FUN_016d6ac4(uStack_28,iStack_24);
          *puVar12 = uVar8;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar3 + 0x10) = uVar9 + uVar11;
          return;
        }
        puVar15 = (uint *)(iVar3 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar15);
          uVar6 = *puVar15;
          if (uVar11 != uVar6) goto LAB_016d409c;
          bVar2 = (bool)hasExclusiveAccess(puVar15);
        } while (!bVar2);
        *puVar15 = uVar9 + uVar11;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar11 == uVar6) {
          return;
        }
      } while( true );
    }
  }
  return;
}

