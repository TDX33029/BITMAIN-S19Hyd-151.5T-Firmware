// FUN_0144c194 @ 0144c194 size=108 calls_out=2 calls_in=0
// strings: 

void FUN_0144c194(int *param_1,int *param_2)

{
  bool bVar1;
  code *pcVar2;
  byte bVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  undefined4 unaff_r4;
  undefined4 uVar8;
  undefined4 unaff_r5;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int *piVar12;
  int iVar13;
  uint uVar14;
  uint *puVar15;
  undefined4 uStack_28;
  int iStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  FUN_014477b8();
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *param_1;
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0102a7d0(param_1);
  }
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *param_2;
    bVar1 = (bool)hasExclusiveAccess(param_2);
  } while (!bVar1);
  *param_2 = iVar4 + -1;
  if (iVar4 != 1) {
    return;
  }
  DataMemoryBarrier(0xb);
  iVar4 = param_2[6];
  uStack_20 = unaff_r4;
  uStack_1c = unaff_r5;
  if (iVar4 != 0) {
    piVar12 = (int *)param_2[5];
    do {
      iVar4 = iVar4 + -1;
      if (*piVar12 != 2) {
        FUN_01419b20(piVar12);
      }
      piVar12 = piVar12 + 0x30;
    } while (iVar4 != 0);
  }
  if (param_2[4] != 0) {
    thunk_FUN_016d3fb4(param_2[5]);
  }
  if (param_2 != (int *)0xffffffff) {
    piVar12 = param_2 + 1;
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar12;
      bVar1 = (bool)hasExclusiveAccess(piVar12);
    } while (!bVar1);
    *piVar12 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      if (param_2 == (int *)0x0) {
        return;
      }
      uStack_18 = uStack_1c;
      uStack_1c = uStack_20;
      iVar4 = FUN_016d3bc8();
      uVar14 = *(byte *)((int)param_2 + -3) & 0x1f;
      if (((*(byte *)(iVar4 + 0x14) & 0x1f) != 0) ||
         (uVar9 = *(uint *)(iVar4 + 0x14) & 0xfffff000, iVar6 = uVar9 - 0x10, uVar9 == 0)) {
        iVar6 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar4 + 0x14) & 0xfff) >> 6) * 2) <<
                4;
      }
      uVar9 = (uint)(*(byte *)((int)param_2 + -3) >> 5);
      iVar13 = *(int *)(iVar4 + 8) + 0x10;
      iVar10 = iVar6 * uVar14 + iVar6 + -4;
      iVar6 = iVar13 + iVar10;
      if (4 < uVar9) {
        if (uVar9 != 5) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar2)();
        }
        uVar9 = *(uint *)(iVar6 + -4);
        if (uVar9 < 5) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4022);
          (*pcVar2)();
        }
        if (*(char *)(iVar6 + -5) != '\0') {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d402a);
          (*pcVar2)();
        }
      }
      if ((uint)(iVar6 - (int)param_2) < uVar9) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar2)();
      }
      if (*(char *)(iVar6 - uVar9) != '\0') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar2)();
      }
      if (*(char *)(iVar13 + iVar10) != '\0') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar2)();
      }
      bVar3 = *(byte *)(iVar4 + 0x14);
      uVar9 = 1 << uVar14;
      *(undefined1 *)((int)param_2 + -3) = 0xff;
      *(undefined2 *)((int)param_2 + -2) = 0;
      do {
        uVar11 = *(uint *)(iVar4 + 0x10);
        uVar7 = *(uint *)(iVar4 + 0xc) | uVar11;
        if ((uVar9 & uVar7) != 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar2)();
        }
        if ((uVar11 == 0) || (uVar7 + uVar9 == (2 << (bVar3 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&uStack_28,iVar4,uVar14);
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
          *(uint *)(iVar4 + 0x10) = uVar9 + uVar11;
          return;
        }
        puVar15 = (uint *)(iVar4 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar15);
          uVar7 = *puVar15;
          if (uVar11 != uVar7) goto LAB_016d409c;
          bVar1 = (bool)hasExclusiveAccess(puVar15);
        } while (!bVar1);
        *puVar15 = uVar9 + uVar11;
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

