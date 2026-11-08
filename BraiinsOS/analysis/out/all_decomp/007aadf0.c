// FUN_007aadf0 @ 007aadf0 size=684 calls_out=8 calls_in=2
// strings: 

void FUN_007aadf0(int *param_1)

{
  bool bVar1;
  code *pcVar2;
  byte bVar3;
  int *piVar4;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint *puVar16;
  undefined4 uStack_28;
  int iStack_24;
  
  if (*param_1 == 3 && param_1[1] == 0) {
    return;
  }
  if (param_1[0x38] != 0) {
    (**(code **)(param_1[0x38] + 0x10))(param_1 + 0x3b,param_1[0x39],param_1[0x3a]);
  }
  FUN_005e6cdc(param_1 + 0x34);
  if (param_1[0x37] != -1) {
    FUN_016dffb2();
  }
  FUN_00a414e8(param_1 + 0x34);
  FUN_0064ce10(param_1 + 0x3c);
  piVar4 = (int *)param_1[0x7c];
  if (((uint)piVar4 & 1) == 0) {
    piVar6 = piVar4 + 4;
    DataMemoryBarrier(0xb);
    do {
      iVar13 = *piVar6;
      bVar1 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar1);
    *piVar6 = iVar13 + -1;
    if (iVar13 == 1) {
      DataMemoryBarrier(0xb);
      if (*piVar4 != 0) {
        thunk_FUN_016d3fb4(piVar4[1]);
      }
      goto LAB_007aaed0;
    }
  }
  else if (param_1[0x7b] + ((uint)piVar4 >> 5) != 0) {
    piVar4 = (int *)(param_1[0x79] - ((uint)piVar4 >> 5));
LAB_007aaed0:
    thunk_FUN_016d3fb4(piVar4);
  }
  FUN_0144c4f4(param_1 + 0x80);
  if (param_1[0x80] != 0) {
    thunk_FUN_016d3fb4(param_1[0x81]);
  }
  piVar4 = (int *)param_1[0x89];
  if (((uint)piVar4 & 1) == 0) {
    piVar6 = piVar4 + 4;
    DataMemoryBarrier(0xb);
    do {
      iVar13 = *piVar6;
      bVar1 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar1);
    *piVar6 = iVar13 + -1;
    if (iVar13 == 1) {
      DataMemoryBarrier(0xb);
      if (*piVar4 != 0) {
        thunk_FUN_016d3fb4(piVar4[1]);
      }
      goto LAB_007aaf6c;
    }
  }
  else if (param_1[0x88] + ((uint)piVar4 >> 5) != 0) {
    piVar4 = (int *)(param_1[0x86] - ((uint)piVar4 >> 5));
LAB_007aaf6c:
    thunk_FUN_016d3fb4(piVar4);
  }
  if (*param_1 != 2 || param_1[1] != 0) {
    if (param_1[9] != 0) {
      thunk_FUN_016d3fb4(param_1[8]);
    }
    FUN_0149814c(param_1[0xb],param_1[0xc]);
    if (param_1[10] != 0) {
      thunk_FUN_016d3fb4(param_1[0xb]);
    }
    iVar13 = param_1[0xf] + 1;
    piVar4 = (int *)(param_1[0xe] + 0x10);
    while (iVar13 = iVar13 + -1, iVar13 != 0) {
      (**(code **)(*piVar4 + 0x10))(piVar4 + 3,piVar4[1],piVar4[2]);
      piVar4 = piVar4 + 9;
    }
    if (param_1[0xd] != 0) {
      thunk_FUN_016d3fb4(param_1[0xe]);
    }
    FUN_01404298(param_1 + 0x12);
    piVar4 = (int *)param_1[0x31];
    if (((uint)piVar4 & 1) == 0) {
      piVar6 = piVar4 + 4;
      DataMemoryBarrier(0xb);
      do {
        iVar13 = *piVar6;
        bVar1 = (bool)hasExclusiveAccess(piVar6);
      } while (!bVar1);
      *piVar6 = iVar13 + -1;
      if (iVar13 == 1) {
        DataMemoryBarrier(0xb);
        if (*piVar4 != 0) {
          thunk_FUN_016d3fb4(piVar4[1]);
        }
        goto LAB_014b47f4;
      }
    }
    else if (param_1[0x30] + ((uint)piVar4 >> 5) != 0) {
      piVar4 = (int *)(param_1[0x2e] - ((uint)piVar4 >> 5));
LAB_014b47f4:
      if (piVar4 == (int *)0x0) {
        return;
      }
      iVar13 = FUN_016d3bc8();
      uVar15 = *(byte *)((int)piVar4 - 3) & 0x1f;
      if (((*(byte *)(iVar13 + 0x14) & 0x1f) != 0) ||
         (uVar10 = *(uint *)(iVar13 + 0x14) & 0xfffff000, iVar7 = uVar10 - 0x10, uVar10 == 0)) {
        iVar7 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar13 + 0x14) & 0xfff) >> 6) * 2)
                << 4;
      }
      uVar10 = (uint)(*(byte *)((int)piVar4 - 3) >> 5);
      iVar14 = *(int *)(iVar13 + 8) + 0x10;
      iVar11 = iVar7 * uVar15 + iVar7 + -4;
      iVar7 = iVar14 + iVar11;
      if (4 < uVar10) {
        if (uVar10 != 5) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar2)();
        }
        uVar10 = *(uint *)(iVar7 + -4);
        if (uVar10 < 5) {
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
      if ((uint)(iVar7 - (int)piVar4) < uVar10) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar2)();
      }
      if (*(char *)(iVar7 - uVar10) != '\0') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar2)();
      }
      if (*(char *)(iVar14 + iVar11) != '\0') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar2)();
      }
      bVar3 = *(byte *)(iVar13 + 0x14);
      uVar10 = 1 << uVar15;
      *(undefined1 *)((int)piVar4 - 3) = 0xff;
      *(undefined2 *)((int)piVar4 - 2) = 0;
      do {
        uVar12 = *(uint *)(iVar13 + 0x10);
        uVar8 = *(uint *)(iVar13 + 0xc) | uVar12;
        if ((uVar10 & uVar8) != 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar2)();
        }
        if ((uVar12 == 0) || (uVar8 + uVar10 == (2 << (bVar3 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&uStack_28,iVar13,uVar15);
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
          *(uint *)(iVar13 + 0x10) = uVar10 + uVar12;
          return;
        }
        puVar16 = (uint *)(iVar13 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar16);
          uVar8 = *puVar16;
          if (uVar12 != uVar8) goto LAB_016d409c;
          bVar1 = (bool)hasExclusiveAccess(puVar16);
        } while (!bVar1);
        *puVar16 = uVar10 + uVar12;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar12 == uVar8) {
          return;
        }
      } while( true );
    }
  }
  return;
}

