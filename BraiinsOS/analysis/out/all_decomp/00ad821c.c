// FUN_00ad821c @ 00ad821c size=624 calls_out=8 calls_in=4
// strings: 

void FUN_00ad821c(int *param_1)

{
  byte bVar1;
  char cVar2;
  int *piVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  undefined4 *puVar13;
  int *piVar14;
  int iVar15;
  uint uVar16;
  uint *puVar17;
  bool bVar18;
  undefined4 uStack_28;
  int iStack_24;
  
  if (*param_1 == 0) {
    if ((char)param_1[0x2f] == '\x03') {
      if (*(char *)((int)param_1 + 0xb9) == '\x03') {
        cVar2 = (char)param_1[0x1a];
        bVar18 = cVar2 == '\x03';
        if (bVar18) {
          cVar2 = (char)param_1[0xb];
        }
        if (bVar18 && cVar2 == '\x03') {
          cVar2 = (char)param_1[0x19];
          bVar18 = cVar2 == '\x03';
          if (bVar18) {
            cVar2 = (char)param_1[0x18];
          }
          if (bVar18 && cVar2 == '\x03') {
            FUN_0163aa10(param_1 + 0x10);
            if (param_1[0x13] != 0) {
              (**(code **)(param_1[0x13] + 0xc))(param_1[0x14]);
            }
          }
        }
        FUN_0163bdc0(param_1 + 0x1c);
        if (param_1[0x20] != 0) {
          (**(code **)(param_1[0x20] + 0xc))(param_1[0x21]);
        }
        FUN_005e6cdc(param_1 + 0x24);
        if (param_1[0x27] != -1) {
          FUN_016dffb2();
        }
        FUN_00a414e8(param_1 + 0x24);
        piVar14 = param_1 + 0x2b;
        FUN_01663cc4(*piVar14);
        piVar3 = (int *)*piVar14;
        DataMemoryBarrier(0xb);
        do {
          iVar5 = *piVar3;
          bVar18 = (bool)hasExclusiveAccess(piVar3);
        } while (!bVar18);
        *piVar3 = iVar5 + -1;
        if (iVar5 == 1) {
          DataMemoryBarrier(0xb);
          FUN_01665328(piVar14);
        }
        piVar3 = (int *)param_1[0x2a];
        DataMemoryBarrier(0xb);
        do {
          iVar5 = *piVar3;
          bVar18 = (bool)hasExclusiveAccess(piVar3);
        } while (!bVar18);
        *piVar3 = iVar5 + -1;
        if (iVar5 == 1) {
          DataMemoryBarrier(0xb);
          FUN_00fa8e94(param_1[0x2a]);
          return;
        }
        return;
      }
      if (*(char *)((int)param_1 + 0xb9) != '\0') {
        return;
      }
      piVar3 = (int *)param_1[0x2c];
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar3;
        bVar18 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar18);
      *piVar3 = iVar5 + -1;
      if (iVar5 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00fa8e94(param_1[0x2c]);
      }
      param_1 = param_1 + 0x2d;
      FUN_01663cc4(*param_1);
      piVar3 = (int *)*param_1;
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar3;
        bVar18 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar18);
      *piVar3 = iVar5 + -1;
    }
    else {
      if ((char)param_1[0x2f] != '\0') {
        return;
      }
      piVar3 = (int *)param_1[2];
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar3;
        bVar18 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar18);
      *piVar3 = iVar5 + -1;
      if (iVar5 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00fa8e94(param_1[2]);
      }
      param_1 = param_1 + 3;
      FUN_01663cc4(*param_1);
      piVar3 = (int *)*param_1;
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar3;
        bVar18 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar18);
      *piVar3 = iVar5 + -1;
    }
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01665328(param_1);
      return;
    }
  }
  else if (*param_1 == 1) {
    puVar13 = (undefined4 *)param_1[4];
    if (param_1[2] == 0 && param_1[3] == 0) {
      if (puVar13 != (undefined4 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00ad8304. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)*puVar13)(puVar13);
        return;
      }
    }
    else if (puVar13 != (undefined4 *)0x0) {
      puVar8 = (undefined4 *)param_1[5];
      pcVar4 = (code *)*puVar8;
      if (pcVar4 != (code *)0x0) {
        (*pcVar4)(puVar13);
      }
      if (puVar8[1] != 0) {
        if (puVar13 == (undefined4 *)0x0) {
          return;
        }
        iVar5 = FUN_016d3bc8();
        uVar16 = *(byte *)((int)puVar13 + -3) & 0x1f;
        if (((*(byte *)(iVar5 + 0x14) & 0x1f) != 0) ||
           (uVar10 = *(uint *)(iVar5 + 0x14) & 0xfffff000, iVar6 = uVar10 - 0x10, uVar10 == 0)) {
          iVar6 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar5 + 0x14) & 0xfff) >> 6) * 2)
                  << 4;
        }
        uVar10 = (uint)(*(byte *)((int)puVar13 + -3) >> 5);
        iVar15 = *(int *)(iVar5 + 8) + 0x10;
        iVar11 = iVar6 * uVar16 + iVar6 + -4;
        iVar6 = iVar15 + iVar11;
        if (4 < uVar10) {
          if (uVar10 != 5) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)software_udf(0xff,0x16d4018);
            (*pcVar4)();
          }
          uVar10 = *(uint *)(iVar6 + -4);
          if (uVar10 < 5) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)software_udf(0xff,0x16d4022);
            (*pcVar4)();
          }
          if (*(char *)(iVar6 + -5) != '\0') {
                    /* WARNING: Does not return */
            pcVar4 = (code *)software_udf(0xff,0x16d402a);
            (*pcVar4)();
          }
        }
        if ((uint)(iVar6 - (int)puVar13) < uVar10) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)software_udf(0xff,0x16d4032);
          (*pcVar4)();
        }
        if (*(char *)(iVar6 - uVar10) != '\0') {
                    /* WARNING: Does not return */
          pcVar4 = (code *)software_udf(0xff,0x16d403a);
          (*pcVar4)();
        }
        if (*(char *)(iVar15 + iVar11) != '\0') {
                    /* WARNING: Does not return */
          pcVar4 = (code *)software_udf(0xff,0x16d4040);
          (*pcVar4)();
        }
        bVar1 = *(byte *)(iVar5 + 0x14);
        uVar10 = 1 << uVar16;
        *(undefined1 *)((int)puVar13 + -3) = 0xff;
        *(undefined2 *)((int)puVar13 + -2) = 0;
        do {
          uVar12 = *(uint *)(iVar5 + 0x10);
          uVar7 = *(uint *)(iVar5 + 0xc) | uVar12;
          if ((uVar10 & uVar7) != 0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)software_udf(0xff,0x16d4074);
            (*pcVar4)();
          }
          if ((uVar12 == 0) || (uVar7 + uVar10 == (2 << (bVar1 & 0x1f)) + -1)) {
            if (DAT_018ddb0b != '\0') {
              FUN_016ddcc0(&DAT_018ddd48);
            }
            FUN_016d3ca8(&uStack_28,iVar5,uVar16);
            FUN_016dddc0(&DAT_018ddd48);
            if (iStack_24 == 0) {
              return;
            }
            puVar13 = (undefined4 *)FUN_016d2bc8();
            uVar9 = *puVar13;
            FUN_016d6ac4(uStack_28,iStack_24);
            *puVar13 = uVar9;
            return;
          }
          if (DAT_018ddb0b == '\0') {
            *(uint *)(iVar5 + 0x10) = uVar10 + uVar12;
            return;
          }
          puVar17 = (uint *)(iVar5 + 0x10);
          DataMemoryBarrier(0x1b);
          do {
            ExclusiveAccess(puVar17);
            uVar7 = *puVar17;
            if (uVar12 != uVar7) goto LAB_016d409c;
            bVar18 = (bool)hasExclusiveAccess(puVar17);
          } while (!bVar18);
          *puVar17 = uVar10 + uVar12;
LAB_016d409c:
          DataMemoryBarrier(0x1b);
          if (uVar12 == uVar7) {
            return;
          }
        } while( true );
      }
    }
  }
  return;
}

