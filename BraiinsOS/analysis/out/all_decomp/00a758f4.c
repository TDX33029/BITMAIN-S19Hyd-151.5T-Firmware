// FUN_00a758f4 @ 00a758f4 size=268 calls_out=3 calls_in=1
// strings: 

void FUN_00a758f4(int *param_1)

{
  bool bVar1;
  code *pcVar2;
  byte bVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  undefined4 uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  uint *puVar16;
  undefined8 uVar17;
  undefined4 uStack_28;
  int iStack_24;
  
  piVar5 = param_1 + 1;
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar5;
    bVar1 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar1);
  *piVar5 = iVar4 + -1;
  DataMemoryBarrier(0xb);
  if (iVar4 == 1) {
    uVar17 = thunk_FUN_016de0ee(1,0x1b0);
    iVar4 = (int)uVar17 + (int)((ulonglong)uVar17 >> 0x20);
    if ((*(char *)(iVar4 + 8) != '\x01') && (iVar4 = FUN_00a30258(iVar4,0), iVar4 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_015f853c(&DAT_018ae900);
    }
    uVar7 = *(uint *)(iVar4 + 4);
    piVar5 = *(int **)(*param_1 + (uVar7 & 0xff) * 4);
    DataMemoryBarrier(0xb);
    if (piVar5 != (int *)0x0) {
      uVar11 = uVar7;
      do {
        if (((uint)piVar5 & 1) == 0) {
          if (piVar5[3] != uVar7) {
            return;
          }
          iVar4 = *piVar5;
          piVar9 = (int *)piVar5[1];
          iVar14 = piVar5[2];
          *piVar5 = 0;
          piVar5[1] = 4;
          piVar5[2] = 0;
          if (iVar14 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00a759d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)(&DAT_00a759dc + *(int *)(&DAT_00a759dc + *piVar9 * 4)))();
            return;
          }
          if (iVar4 == 0) {
            return;
          }
          if (piVar9 == (int *)0x0) {
            return;
          }
          iVar4 = FUN_016d3bc8();
          uVar7 = *(byte *)((int)piVar9 + -3) & 0x1f;
          if (((*(byte *)(iVar4 + 0x14) & 0x1f) != 0) ||
             (uVar11 = *(uint *)(iVar4 + 0x14) & 0xfffff000, iVar14 = uVar11 - 0x10, uVar11 == 0)) {
            iVar14 = (uint)*(ushort *)
                            (&DAT_0042567c + ((*(ushort *)(iVar4 + 0x14) & 0xfff) >> 6) * 2) << 4;
          }
          uVar11 = (uint)(*(byte *)((int)piVar9 + -3) >> 5);
          iVar15 = *(int *)(iVar4 + 8) + 0x10;
          iVar12 = iVar14 * uVar7 + iVar14 + -4;
          iVar14 = iVar15 + iVar12;
          if (4 < uVar11) {
            if (uVar11 != 5) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)software_udf(0xff,0x16d4018);
              (*pcVar2)();
            }
            uVar11 = *(uint *)(iVar14 + -4);
            if (uVar11 < 5) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)software_udf(0xff,0x16d4022);
              (*pcVar2)();
            }
            if (*(char *)(iVar14 + -5) != '\0') {
                    /* WARNING: Does not return */
              pcVar2 = (code *)software_udf(0xff,0x16d402a);
              (*pcVar2)();
            }
          }
          if ((uint)(iVar14 - (int)piVar9) < uVar11) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)software_udf(0xff,0x16d4032);
            (*pcVar2)();
          }
          if (*(char *)(iVar14 - uVar11) != '\0') {
                    /* WARNING: Does not return */
            pcVar2 = (code *)software_udf(0xff,0x16d403a);
            (*pcVar2)();
          }
          if (*(char *)(iVar15 + iVar12) != '\0') {
                    /* WARNING: Does not return */
            pcVar2 = (code *)software_udf(0xff,0x16d4040);
            (*pcVar2)();
          }
          bVar3 = *(byte *)(iVar4 + 0x14);
          uVar11 = 1 << uVar7;
          *(undefined1 *)((int)piVar9 + -3) = 0xff;
          *(undefined2 *)((int)piVar9 + -2) = 0;
          do {
            uVar13 = *(uint *)(iVar4 + 0x10);
            uVar8 = *(uint *)(iVar4 + 0xc) | uVar13;
            if ((uVar11 & uVar8) != 0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)software_udf(0xff,0x16d4074);
              (*pcVar2)();
            }
            if ((uVar13 == 0) || (uVar8 + uVar11 == (2 << (bVar3 & 0x1f)) + -1)) {
              if (DAT_018ddb0b != '\0') {
                FUN_016ddcc0(&DAT_018ddd48);
              }
              FUN_016d3ca8(&uStack_28,iVar4,uVar7);
              FUN_016dddc0(&DAT_018ddd48);
              if (iStack_24 == 0) {
                return;
              }
              puVar6 = (undefined4 *)FUN_016d2bc8();
              uVar10 = *puVar6;
              FUN_016d6ac4(uStack_28,iStack_24);
              *puVar6 = uVar10;
              return;
            }
            if (DAT_018ddb0b == '\0') {
              *(uint *)(iVar4 + 0x10) = uVar11 + uVar13;
              return;
            }
            puVar16 = (uint *)(iVar4 + 0x10);
            DataMemoryBarrier(0x1b);
            do {
              ExclusiveAccess(puVar16);
              uVar8 = *puVar16;
              if (uVar13 != uVar8) goto LAB_016d409c;
              bVar1 = (bool)hasExclusiveAccess(puVar16);
            } while (!bVar1);
            *puVar16 = uVar11 + uVar13;
LAB_016d409c:
            DataMemoryBarrier(0x1b);
            if (uVar13 == uVar8) {
              return;
            }
          } while( true );
        }
        uVar8 = uVar11 & 0xffff;
        uVar11 = uVar11 >> 8;
        piVar5 = *(int **)(((uint)piVar5 & 0xfffffffe) + (uVar8 >> 8) * 4);
        DataMemoryBarrier(0xb);
      } while (piVar5 != (int *)0x0);
    }
  }
  return;
}

