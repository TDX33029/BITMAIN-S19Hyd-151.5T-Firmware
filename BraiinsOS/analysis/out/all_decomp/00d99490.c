// FUN_00d99490 @ 00d99490 size=260 calls_out=2 calls_in=1
// strings: 

void FUN_00d99490(char *param_1)

{
  bool bVar1;
  byte bVar2;
  undefined4 *puVar3;
  int *piVar4;
  code *pcVar5;
  int iVar6;
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
  
  piVar4 = *(int **)(param_1 + 0x3c);
  if (piVar4 == (int *)0x0) {
    if (*param_1 == '\x03') {
      puVar3 = *(undefined4 **)(param_1 + 4);
      uVar12 = *puVar3;
      puVar14 = (undefined4 *)puVar3[1];
      pcVar5 = (code *)*puVar14;
      if (pcVar5 != (code *)0x0) {
        (*pcVar5)(uVar12);
      }
      if (puVar14[1] != 0) {
        thunk_FUN_016d3fb4(uVar12);
      }
LAB_014b47f4:
      if (puVar3 == (undefined4 *)0x0) {
        return;
      }
      iVar6 = FUN_016d3bc8();
      uVar15 = *(byte *)((int)puVar3 + -3) & 0x1f;
      if (((*(byte *)(iVar6 + 0x14) & 0x1f) != 0) ||
         (uVar9 = *(uint *)(iVar6 + 0x14) & 0xfffff000, iVar7 = uVar9 - 0x10, uVar9 == 0)) {
        iVar7 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar6 + 0x14) & 0xfff) >> 6) * 2) <<
                4;
      }
      uVar9 = (uint)(*(byte *)((int)puVar3 + -3) >> 5);
      iVar13 = *(int *)(iVar6 + 8) + 0x10;
      iVar10 = iVar7 * uVar15 + iVar7 + -4;
      iVar7 = iVar13 + iVar10;
      if (4 < uVar9) {
        if (uVar9 != 5) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar5)();
        }
        uVar9 = *(uint *)(iVar7 + -4);
        if (uVar9 < 5) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)software_udf(0xff,0x16d4022);
          (*pcVar5)();
        }
        if (*(char *)(iVar7 + -5) != '\0') {
                    /* WARNING: Does not return */
          pcVar5 = (code *)software_udf(0xff,0x16d402a);
          (*pcVar5)();
        }
      }
      if ((uint)(iVar7 - (int)puVar3) < uVar9) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar5)();
      }
      if (*(char *)(iVar7 - uVar9) != '\0') {
                    /* WARNING: Does not return */
        pcVar5 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar5)();
      }
      if (*(char *)(iVar13 + iVar10) != '\0') {
                    /* WARNING: Does not return */
        pcVar5 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar5)();
      }
      bVar2 = *(byte *)(iVar6 + 0x14);
      uVar9 = 1 << uVar15;
      *(undefined1 *)((int)puVar3 + -3) = 0xff;
      *(undefined2 *)((int)puVar3 + -2) = 0;
      do {
        uVar11 = *(uint *)(iVar6 + 0x10);
        uVar8 = *(uint *)(iVar6 + 0xc) | uVar11;
        if ((uVar9 & uVar8) != 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar5)();
        }
        if ((uVar11 == 0) || (uVar8 + uVar9 == (2 << (bVar2 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&uStack_28,iVar6,uVar15);
          FUN_016dddc0(&DAT_018ddd48);
          if (iStack_24 == 0) {
            return;
          }
          puVar3 = (undefined4 *)FUN_016d2bc8();
          uVar12 = *puVar3;
          FUN_016d6ac4(uStack_28,iStack_24);
          *puVar3 = uVar12;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar6 + 0x10) = uVar9 + uVar11;
          return;
        }
        puVar16 = (uint *)(iVar6 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar16);
          uVar8 = *puVar16;
          if (uVar11 != uVar8) goto LAB_016d409c;
          bVar1 = (bool)hasExclusiveAccess(puVar16);
        } while (!bVar1);
        *puVar16 = uVar9 + uVar11;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar11 == uVar8) {
          return;
        }
      } while( true );
    }
  }
  else {
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *piVar4;
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = iVar6 + -1;
    if (iVar6 == 1) {
      DataMemoryBarrier(0xb);
      FUN_016592f4(*(undefined4 *)(param_1 + 0x3c));
    }
    iVar6 = *(int *)(param_1 + 0x18);
    if (iVar6 != -0x80000000) {
      if (iVar6 == -0x7fffffff) {
        piVar4 = *(int **)(param_1 + 0x1c);
        if (*piVar4 != 0xcc) {
          ClearExclusiveLocal();
                    /* WARNING: Could not recover jumptable at 0x00d99590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(piVar4[2] + 0x10))();
          return;
        }
        DataMemoryBarrier(0xb);
        bVar1 = (bool)hasExclusiveAccess(piVar4);
        if (!bVar1) {
                    /* WARNING: Could not recover jumptable at 0x00d9951c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(piVar4[2] + 0x10))();
          return;
        }
        *piVar4 = 0x84;
      }
      else if (iVar6 != 0) {
        puVar3 = *(undefined4 **)(param_1 + 0x1c);
        goto LAB_014b47f4;
      }
    }
  }
  return;
}

