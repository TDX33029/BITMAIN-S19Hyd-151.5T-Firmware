// FUN_00aac624 @ 00aac624 size=220 calls_out=1 calls_in=8
// strings: 

void FUN_00aac624(int param_1,undefined4 *param_2,uint param_3)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  code *pcVar13;
  uint *puVar14;
  bool bVar15;
  undefined4 uStack_28;
  int iStack_24;
  
  uVar11 = param_2[2];
  pcVar13 = (code *)*param_2;
  uVar8 = uVar11;
  if (uVar11 < 5) {
    uVar8 = 4;
  }
  iVar2 = param_1 + (uVar8 - 1 & 0xfffffff8);
  bVar15 = *(int *)(iVar2 + 8) != 0;
  uVar5 = 0;
  if (bVar15) {
    uVar5 = *(uint *)(iVar2 + 0x14);
    param_3 = 0x7fffffff;
  }
  if (bVar15 && (uVar5 & param_3) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(iVar2 + 0x18));
  }
  if (pcVar13 != (code *)0x0) {
    (*pcVar13)(iVar2 + 8 + (uVar11 - 1 & 0xffffffe8) + 0x18);
  }
  if (param_1 != -1) {
    piVar3 = (int *)(param_1 + 4);
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar3;
      bVar15 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar15);
    *piVar3 = iVar2 + -1;
    if ((iVar2 == 1) &&
       (DataMemoryBarrier(0xb), (uVar8 + (uVar8 + param_2[1] + 0x17 & -uVar8) + 7 & -uVar8) != 0)) {
      if (param_1 == 0) {
        return;
      }
      iVar2 = FUN_016d3bc8();
      uVar8 = *(byte *)(param_1 + -3) & 0x1f;
      if (((*(byte *)(iVar2 + 0x14) & 0x1f) != 0) ||
         (uVar11 = *(uint *)(iVar2 + 0x14) & 0xfffff000, iVar6 = uVar11 - 0x10, uVar11 == 0)) {
        iVar6 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar2 + 0x14) & 0xfff) >> 6) * 2) <<
                4;
      }
      uVar11 = (uint)(*(byte *)(param_1 + -3) >> 5);
      iVar12 = *(int *)(iVar2 + 8) + 0x10;
      iVar9 = iVar6 * uVar8 + iVar6 + -4;
      iVar6 = iVar12 + iVar9;
      if (4 < uVar11) {
        if (uVar11 != 5) {
                    /* WARNING: Does not return */
          pcVar13 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar13)();
        }
        uVar11 = *(uint *)(iVar6 + -4);
        if (uVar11 < 5) {
                    /* WARNING: Does not return */
          pcVar13 = (code *)software_udf(0xff,0x16d4022);
          (*pcVar13)();
        }
        if (*(char *)(iVar6 + -5) != '\0') {
                    /* WARNING: Does not return */
          pcVar13 = (code *)software_udf(0xff,0x16d402a);
          (*pcVar13)();
        }
      }
      if ((uint)(iVar6 - param_1) < uVar11) {
                    /* WARNING: Does not return */
        pcVar13 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar13)();
      }
      if (*(char *)(iVar6 - uVar11) != '\0') {
                    /* WARNING: Does not return */
        pcVar13 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar13)();
      }
      if (*(char *)(iVar12 + iVar9) != '\0') {
                    /* WARNING: Does not return */
        pcVar13 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar13)();
      }
      bVar1 = *(byte *)(iVar2 + 0x14);
      uVar11 = 1 << uVar8;
      *(undefined1 *)(param_1 + -3) = 0xff;
      *(undefined2 *)(param_1 + -2) = 0;
      do {
        uVar10 = *(uint *)(iVar2 + 0x10);
        uVar5 = *(uint *)(iVar2 + 0xc) | uVar10;
        if ((uVar11 & uVar5) != 0) {
                    /* WARNING: Does not return */
          pcVar13 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar13)();
        }
        if ((uVar10 == 0) || (uVar5 + uVar11 == (2 << (bVar1 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&uStack_28,iVar2,uVar8);
          FUN_016dddc0(&DAT_018ddd48);
          if (iStack_24 == 0) {
            return;
          }
          puVar4 = (undefined4 *)FUN_016d2bc8();
          uVar7 = *puVar4;
          FUN_016d6ac4(uStack_28,iStack_24);
          *puVar4 = uVar7;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar2 + 0x10) = uVar11 + uVar10;
          return;
        }
        puVar14 = (uint *)(iVar2 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar14);
          uVar5 = *puVar14;
          if (uVar10 != uVar5) goto LAB_016d409c;
          bVar15 = (bool)hasExclusiveAccess(puVar14);
        } while (!bVar15);
        *puVar14 = uVar11 + uVar10;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar10 == uVar5) {
          return;
        }
      } while( true );
    }
  }
  return;
}

