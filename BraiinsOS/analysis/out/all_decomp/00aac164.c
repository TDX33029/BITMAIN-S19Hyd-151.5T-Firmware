// FUN_00aac164 @ 00aac164 size=256 calls_out=1 calls_in=5
// strings: 

void FUN_00aac164(int param_1,undefined4 *param_2)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  code *pcVar14;
  uint *puVar15;
  undefined4 uStack_28;
  int iStack_24;
  
  uVar12 = param_2[2];
  pcVar14 = (code *)*param_2;
  uVar9 = uVar12;
  if (uVar12 < 9) {
    uVar9 = 8;
  }
  iVar3 = param_1 + (uVar9 - 1 & 0xfffffff8);
  if ((((*(int *)(iVar3 + 8) != 0 || *(int *)(iVar3 + 0xc) != 0) &&
       (1 < *(int *)(iVar3 + 0x18) - 3U)) && (iVar6 = *(int *)(iVar3 + 0x44), iVar6 != 0)) &&
     (uVar7 = iVar6 * 0x11 & 0xfffffffc, uVar7 + iVar6 != -0x19)) {
    thunk_FUN_016d3fb4((*(int *)(iVar3 + 0x40) - uVar7) + -0x14);
  }
  if (pcVar14 != (code *)0x0) {
    (*pcVar14)(iVar3 + 8 + (uVar12 - 1 & 0xffffff98) + 0x68);
  }
  if (param_1 != -1) {
    piVar4 = (int *)(param_1 + 4);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar4;
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = iVar3 + -1;
    if ((iVar3 == 1) &&
       (DataMemoryBarrier(0xb), (uVar9 + (uVar9 + param_2[1] + 0x67 & -uVar9) + 7 & -uVar9) != 0)) {
      if (param_1 == 0) {
        return;
      }
      iVar3 = FUN_016d3bc8();
      uVar9 = *(byte *)(param_1 + -3) & 0x1f;
      if (((*(byte *)(iVar3 + 0x14) & 0x1f) != 0) ||
         (uVar12 = *(uint *)(iVar3 + 0x14) & 0xfffff000, iVar6 = uVar12 - 0x10, uVar12 == 0)) {
        iVar6 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar3 + 0x14) & 0xfff) >> 6) * 2) <<
                4;
      }
      uVar12 = (uint)(*(byte *)(param_1 + -3) >> 5);
      iVar13 = *(int *)(iVar3 + 8) + 0x10;
      iVar10 = iVar6 * uVar9 + iVar6 + -4;
      iVar6 = iVar13 + iVar10;
      if (4 < uVar12) {
        if (uVar12 != 5) {
                    /* WARNING: Does not return */
          pcVar14 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar14)();
        }
        uVar12 = *(uint *)(iVar6 + -4);
        if (uVar12 < 5) {
                    /* WARNING: Does not return */
          pcVar14 = (code *)software_udf(0xff,0x16d4022);
          (*pcVar14)();
        }
        if (*(char *)(iVar6 + -5) != '\0') {
                    /* WARNING: Does not return */
          pcVar14 = (code *)software_udf(0xff,0x16d402a);
          (*pcVar14)();
        }
      }
      if ((uint)(iVar6 - param_1) < uVar12) {
                    /* WARNING: Does not return */
        pcVar14 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar14)();
      }
      if (*(char *)(iVar6 - uVar12) != '\0') {
                    /* WARNING: Does not return */
        pcVar14 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar14)();
      }
      if (*(char *)(iVar13 + iVar10) != '\0') {
                    /* WARNING: Does not return */
        pcVar14 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar14)();
      }
      bVar2 = *(byte *)(iVar3 + 0x14);
      uVar12 = 1 << uVar9;
      *(undefined1 *)(param_1 + -3) = 0xff;
      *(undefined2 *)(param_1 + -2) = 0;
      do {
        uVar11 = *(uint *)(iVar3 + 0x10);
        uVar7 = *(uint *)(iVar3 + 0xc) | uVar11;
        if ((uVar12 & uVar7) != 0) {
                    /* WARNING: Does not return */
          pcVar14 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar14)();
        }
        if ((uVar11 == 0) || (uVar7 + uVar12 == (2 << (bVar2 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&uStack_28,iVar3,uVar9);
          FUN_016dddc0(&DAT_018ddd48);
          if (iStack_24 == 0) {
            return;
          }
          puVar5 = (undefined4 *)FUN_016d2bc8();
          uVar8 = *puVar5;
          FUN_016d6ac4(uStack_28,iStack_24);
          *puVar5 = uVar8;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar3 + 0x10) = uVar12 + uVar11;
          return;
        }
        puVar15 = (uint *)(iVar3 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar15);
          uVar7 = *puVar15;
          if (uVar11 != uVar7) goto LAB_016d409c;
          bVar1 = (bool)hasExclusiveAccess(puVar15);
        } while (!bVar1);
        *puVar15 = uVar12 + uVar11;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar11 == uVar7) {
          return;
        }
      } while( true );
    }
  }
  return;
}

