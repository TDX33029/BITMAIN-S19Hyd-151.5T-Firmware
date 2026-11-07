// FUN_009cdc90 @ 009cdc90 size=288 calls_out=6 calls_in=2
// strings: 

void FUN_009cdc90(int *param_1,int param_2,int param_3)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined4 uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  uint *puVar17;
  undefined8 uVar18;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  
  uVar18 = thunk_FUN_016de0ee(param_1,0x1b0);
  iVar4 = (int)uVar18 + (int)((ulonglong)uVar18 >> 0x20);
  DataMemoryBarrier(0xb);
  if (param_1[1] == 0) {
    if ((*(char *)(iVar4 + 8) == '\x01') || (iVar4 = FUN_00a30258(iVar4,0), iVar4 != 0)) {
      uVar8 = *(uint *)(iVar4 + 4);
      piVar5 = *(int **)(*param_1 + (uVar8 & 0xff) * 4);
      DataMemoryBarrier(0xb);
      if (piVar5 != (int *)0x0) {
        uVar12 = uVar8;
        do {
          if (((uint)piVar5 & 1) == 0) {
            if (piVar5[3] == uVar8) {
              iVar15 = *piVar5;
              iVar4 = piVar5[2];
              iVar10 = piVar5[1];
              *piVar5 = 0;
              piVar5[1] = 4;
              piVar5[2] = 0;
              FUN_009a1ddc(iVar10,iVar4);
              if (iVar15 != 0) {
                thunk_FUN_016d3fb4(iVar10);
              }
            }
            break;
          }
          uVar9 = uVar12 & 0xffff;
          uVar12 = uVar12 >> 8;
          piVar5 = *(int **)(((uint)piVar5 & 0xfffffffe) + (uVar9 >> 8) * 4);
          DataMemoryBarrier(0xb);
        } while (piVar5 != (int *)0x0);
      }
                    /* WARNING: Could not recover jumptable at 0x009cdd7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&DAT_009cdd80 + *(int *)(&DAT_009cdd80 + param_2 * 4)))();
      return;
    }
  }
  else if ((*(char *)(iVar4 + 8) == '\x01') || (iVar4 = FUN_00a30258(iVar4,0), iVar4 != 0)) {
    piVar5 = (int *)FUN_009c032c(param_1,*(undefined4 *)(iVar4 + 4));
    iStack_28 = *piVar5;
    iStack_24 = piVar5[1];
    iVar4 = piVar5[2];
    *piVar5 = 0;
    piVar5[1] = 4;
    piVar5[2] = 0;
    if (iVar4 == iStack_28) {
      iStack_20 = iVar4;
      FUN_009b6a00(&iStack_28);
    }
    iStack_20 = iVar4 + 1;
    piVar7 = (int *)(iStack_24 + iVar4 * 8);
    *piVar7 = param_2;
    piVar7[1] = param_3;
    iVar15 = *piVar5;
    iVar10 = piVar5[1];
    iVar4 = piVar5[2];
    *piVar5 = iStack_28;
    piVar5[1] = iStack_24;
    piVar5[2] = iStack_20;
    FUN_009a1ddc(iVar10,iVar4);
    if (iVar15 == 0) {
      return;
    }
    if (iVar10 == 0) {
      return;
    }
    iVar4 = FUN_016d3bc8();
    uVar8 = *(byte *)(iVar10 + -3) & 0x1f;
    if (((*(byte *)(iVar4 + 0x14) & 0x1f) != 0) ||
       (uVar12 = *(uint *)(iVar4 + 0x14) & 0xfffff000, iVar15 = uVar12 - 0x10, uVar12 == 0)) {
      iVar15 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar4 + 0x14) & 0xfff) >> 6) * 2) <<
               4;
    }
    uVar12 = (uint)(*(byte *)(iVar10 + -3) >> 5);
    iVar16 = *(int *)(iVar4 + 8) + 0x10;
    iVar13 = iVar15 * uVar8 + iVar15 + -4;
    iVar15 = iVar16 + iVar13;
    if (4 < uVar12) {
      if (uVar12 != 5) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4018);
        (*pcVar1)();
      }
      uVar12 = *(uint *)(iVar15 + -4);
      if (uVar12 < 5) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4022);
        (*pcVar1)();
      }
      if (*(char *)(iVar15 + -5) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d402a);
        (*pcVar1)();
      }
    }
    if ((uint)(iVar15 - iVar10) < uVar12) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4032);
      (*pcVar1)();
    }
    if (*(char *)(iVar15 - uVar12) != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d403a);
      (*pcVar1)();
    }
    if (*(char *)(iVar16 + iVar13) != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4040);
      (*pcVar1)();
    }
    bVar2 = *(byte *)(iVar4 + 0x14);
    uVar12 = 1 << uVar8;
    *(undefined1 *)(iVar10 + -3) = 0xff;
    *(undefined2 *)(iVar10 + -2) = 0;
    do {
      uVar14 = *(uint *)(iVar4 + 0x10);
      uVar9 = *(uint *)(iVar4 + 0xc) | uVar14;
      if ((uVar12 & uVar9) != 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4074);
        (*pcVar1)();
      }
      if ((uVar14 == 0) || (uVar9 + uVar12 == (2 << (bVar2 & 0x1f)) + -1)) {
        if (DAT_018ddb0b != '\0') {
          FUN_016ddcc0(&DAT_018ddd48);
        }
        FUN_016d3ca8(&iStack_28,iVar4,uVar8);
        iVar4 = iStack_24;
        FUN_016dddc0(&DAT_018ddd48);
        if (iVar4 == 0) {
          return;
        }
        puVar6 = (undefined4 *)FUN_016d2bc8();
        uVar11 = *puVar6;
        FUN_016d6ac4(iStack_28,iVar4);
        *puVar6 = uVar11;
        return;
      }
      if (DAT_018ddb0b == '\0') {
        *(uint *)(iVar4 + 0x10) = uVar12 + uVar14;
        return;
      }
      puVar17 = (uint *)(iVar4 + 0x10);
      DataMemoryBarrier(0x1b);
      do {
        ExclusiveAccess(puVar17);
        uVar9 = *puVar17;
        if (uVar14 != uVar9) goto LAB_016d409c;
        bVar3 = (bool)hasExclusiveAccess(puVar17);
      } while (!bVar3);
      *puVar17 = uVar12 + uVar14;
LAB_016d409c:
      DataMemoryBarrier(0x1b);
      if (uVar14 == uVar9) {
        return;
      }
    } while( true );
  }
                    /* WARNING: Subroutine does not return */
  FUN_015f853c(&DAT_018ae900);
}

