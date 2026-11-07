// FUN_0126d7dc @ 0126d7dc size=348 calls_out=2 calls_in=0
// strings: 

uint * FUN_0126d7dc(uint *param_1)

{
  bool bVar1;
  code *pcVar2;
  byte bVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint *puVar15;
  undefined4 in_cr0;
  undefined4 in_cr13;
  undefined4 uStack_28;
  int iStack_24;
  
  DataMemoryBarrier(0xb);
  do {
    uVar5 = *param_1;
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = uVar5 | 0x30000;
  if ((uVar5 & 0x10000) == 0) {
    uVar5 = param_1[5];
    DataMemoryBarrier(0xb);
    if (uVar5 != 0) {
      piVar8 = (int *)(uVar5 + 0x1c);
      param_1[4] = 0;
      DataMemoryBarrier(0xb);
      puVar6 = *(uint **)(uVar5 + 0x1c);
      while (puVar15 = puVar6, puVar15 != *(uint **)(uVar5 + 0x18)) {
        puVar6 = (uint *)*piVar8;
        if (puVar6 == puVar15) {
          DataMemoryBarrier(0xb);
          do {
            bVar1 = (bool)hasExclusiveAccess(piVar8);
            if (bVar1) {
              *piVar8 = (int)param_1;
              goto LAB_0126d82c;
            }
            puVar6 = (uint *)*piVar8;
          } while (puVar6 == puVar15);
        }
        ClearExclusiveLocal();
LAB_0126d82c:
        DataMemoryBarrier(0xb);
        if (puVar15 == puVar6) {
          DataMemoryBarrier(0xb);
          puVar15[4] = (uint)param_1;
          if (puVar15 != *(uint **)(uVar5 + 0x14)) {
            return *(uint **)(uVar5 + 0x14);
          }
          puVar6 = (uint *)FUN_016e034e(*(undefined4 *)(uVar5 + 0xc),&DAT_0041319b,1);
          if (puVar6 == (uint *)0xffffffff) {
            iVar7 = coprocessor_movefromRt(0xf,0,3,in_cr13,in_cr0);
            return (uint *)(iVar7 + -0x5c);
          }
          return puVar6;
        }
      }
      if (param_1 == *(uint **)(uVar5 + 0x10)) {
        return param_1;
      }
      puVar6 = param_1 + 6;
      DataMemoryBarrier(0xb);
      do {
        uVar5 = *puVar6;
        bVar1 = (bool)hasExclusiveAccess(puVar6);
      } while (!bVar1);
      *puVar6 = uVar5 - 1;
      DataMemoryBarrier(0xb);
      if (uVar5 != 1) {
        return param_1;
      }
      piVar8 = (int *)param_1[5];
      DataMemoryBarrier(0xb);
      if (piVar8 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar7 = *piVar8;
          bVar1 = (bool)hasExclusiveAccess(piVar8);
        } while (!bVar1);
        *piVar8 = iVar7 + -1;
        if (iVar7 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0126d9ac(piVar8);
        }
      }
      if (param_1 == (uint *)0x0) {
        return (uint *)0x0;
      }
      iVar7 = FUN_016d3bc8();
      uVar5 = *(byte *)((int)param_1 + -3) & 0x1f;
      if (((*(byte *)(iVar7 + 0x14) & 0x1f) != 0) ||
         (uVar11 = *(uint *)(iVar7 + 0x14) & 0xfffff000, iVar9 = uVar11 - 0x10, uVar11 == 0)) {
        iVar9 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar7 + 0x14) & 0xfff) >> 6) * 2) <<
                4;
      }
      uVar11 = (uint)(*(byte *)((int)param_1 + -3) >> 5);
      iVar14 = *(int *)(iVar7 + 8) + 0x10;
      iVar12 = iVar9 * uVar5 + iVar9 + -4;
      iVar9 = iVar14 + iVar12;
      if (4 < uVar11) {
        if (uVar11 != 5) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar2)();
        }
        uVar11 = *(uint *)(iVar9 + -4);
        if (uVar11 < 5) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4022);
          (*pcVar2)();
        }
        if (*(char *)(iVar9 + -5) != '\0') {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d402a);
          (*pcVar2)();
        }
      }
      if ((uint)(iVar9 - (int)param_1) < uVar11) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar2)();
      }
      if (*(char *)(iVar9 - uVar11) != '\0') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar2)();
      }
      if (*(char *)(iVar14 + iVar12) != '\0') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar2)();
      }
      bVar3 = *(byte *)(iVar7 + 0x14);
      puVar6 = (uint *)(1 << uVar5);
      *(undefined1 *)((int)param_1 + -3) = 0xff;
      *(undefined2 *)((int)param_1 + -2) = 0;
      do {
        uVar13 = *(uint *)(iVar7 + 0x10);
        uVar11 = *(uint *)(iVar7 + 0xc) | uVar13;
        if (((uint)puVar6 & uVar11) != 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar2)();
        }
        if ((uVar13 == 0) || (uVar11 + (int)puVar6 == (2 << (bVar3 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&uStack_28,iVar7,uVar5);
          puVar6 = (uint *)FUN_016dddc0(&DAT_018ddd48);
          if (iStack_24 == 0) {
            return puVar6;
          }
          puVar4 = (undefined4 *)FUN_016d2bc8();
          uVar10 = *puVar4;
          puVar6 = (uint *)FUN_016d6ac4(uStack_28,iStack_24);
          *puVar4 = uVar10;
          return puVar6;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar7 + 0x10) = (int)puVar6 + uVar13;
          return puVar6;
        }
        puVar15 = (uint *)(iVar7 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar15);
          uVar11 = *puVar15;
          if (uVar13 != uVar11) goto LAB_016d409c;
          bVar1 = (bool)hasExclusiveAccess(puVar15);
        } while (!bVar1);
        *puVar15 = (int)puVar6 + uVar13;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar13 == uVar11) {
          return puVar6;
        }
      } while( true );
    }
  }
  return param_1;
}

