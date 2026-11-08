// FUN_010cf278 @ 010cf278 size=188 calls_out=0 calls_in=3
// strings: 

void FUN_010cf278(int param_1,undefined4 *param_2)

{
  bool bVar1;
  code *pcVar2;
  byte bVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint *puVar15;
  undefined4 uStack_28;
  int iStack_24;
  
  uVar14 = param_2[2];
  uVar12 = uVar14;
  if (uVar14 < 5) {
    uVar12 = 4;
  }
  if ((code *)*param_2 != (code *)0x0) {
    (*(code *)*param_2)(param_1 + (uVar12 - 1 & 0xfffffff8) + (uVar14 - 1 & 0xfffffffb) + 0xd);
  }
  if (param_1 != -1) {
    piVar4 = (int *)(param_1 + 4);
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *piVar4;
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = iVar6 + -1;
    if ((iVar6 == 1) &&
       (DataMemoryBarrier(0xb),
       (uVar12 + (uVar12 + ((uVar14 + param_2[1]) - 1 & -uVar14) + 4 & -uVar12) + 7 & -uVar12) != 0)
       ) {
      if (param_1 == 0) {
        return;
      }
      iVar6 = FUN_016d3bc8();
      uVar12 = *(byte *)(param_1 + -3) & 0x1f;
      if (((*(byte *)(iVar6 + 0x14) & 0x1f) != 0) ||
         (uVar14 = *(uint *)(iVar6 + 0x14) & 0xfffff000, iVar7 = uVar14 - 0x10, uVar14 == 0)) {
        iVar7 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar6 + 0x14) & 0xfff) >> 6) * 2) <<
                4;
      }
      uVar14 = (uint)(*(byte *)(param_1 + -3) >> 5);
      iVar13 = *(int *)(iVar6 + 8) + 0x10;
      iVar10 = iVar7 * uVar12 + iVar7 + -4;
      iVar7 = iVar13 + iVar10;
      if (4 < uVar14) {
        if (uVar14 != 5) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar2)();
        }
        uVar14 = *(uint *)(iVar7 + -4);
        if (uVar14 < 5) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4022);
          (*pcVar2)();
        }
        if (*(char *)(iVar7 + -5) != '\0') {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d402a);
          (*pcVar2)();
        }
      }
      if ((uint)(iVar7 - param_1) < uVar14) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar2)();
      }
      if (*(char *)(iVar7 - uVar14) != '\0') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar2)();
      }
      if (*(char *)(iVar13 + iVar10) != '\0') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar2)();
      }
      bVar3 = *(byte *)(iVar6 + 0x14);
      uVar14 = 1 << uVar12;
      *(undefined1 *)(param_1 + -3) = 0xff;
      *(undefined2 *)(param_1 + -2) = 0;
      do {
        uVar11 = *(uint *)(iVar6 + 0x10);
        uVar8 = *(uint *)(iVar6 + 0xc) | uVar11;
        if ((uVar14 & uVar8) != 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar2)();
        }
        if ((uVar11 == 0) || (uVar8 + uVar14 == (2 << (bVar3 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&uStack_28,iVar6,uVar12);
          FUN_016dddc0(&DAT_018ddd48);
          if (iStack_24 == 0) {
            return;
          }
          puVar5 = (undefined4 *)FUN_016d2bc8();
          uVar9 = *puVar5;
          FUN_016d6ac4(uStack_28,iStack_24);
          *puVar5 = uVar9;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar6 + 0x10) = uVar14 + uVar11;
          return;
        }
        puVar15 = (uint *)(iVar6 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar15);
          uVar8 = *puVar15;
          if (uVar11 != uVar8) goto LAB_016d409c;
          bVar1 = (bool)hasExclusiveAccess(puVar15);
        } while (!bVar1);
        *puVar15 = uVar14 + uVar11;
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

