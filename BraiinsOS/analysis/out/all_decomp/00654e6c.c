// FUN_00654e6c @ 00654e6c size=468 calls_out=3 calls_in=2
// strings: 

void FUN_00654e6c(int param_1)

{
  char cVar1;
  code *pcVar2;
  byte bVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint *puVar16;
  bool bVar17;
  undefined4 uStack_28;
  int iStack_24;
  
  iVar10 = 0xd0;
  switch(*(undefined1 *)(param_1 + 0x130)) {
  case 0:
    goto switchD_00654e8c_caseD_0;
  default:
    goto switchD_00654e8c_caseD_1;
  case 3:
    cVar1 = *(char *)(param_1 + 0x184);
    bVar17 = cVar1 != '\x03';
    if (!bVar17) {
      cVar1 = *(char *)(param_1 + 0x181);
    }
    if (bVar17 || cVar1 != '\x03') goto LAB_00654f90;
    if (*(char *)(param_1 + 0x174) == '\x03') {
      piVar4 = *(int **)(param_1 + 0x170);
      if (*piVar4 == 0xcc) {
        DataMemoryBarrier(0xb);
        bVar17 = (bool)hasExclusiveAccess(piVar4);
        if (bVar17) {
          *piVar4 = 0x84;
          goto LAB_0065503c;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      (**(code **)(piVar4[2] + 0x10))();
    }
    else if ((*(char *)(param_1 + 0x174) == '\0') && (*(int *)(param_1 + 0x154) != 0)) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x158));
    }
LAB_0065503c:
    *(undefined1 *)(param_1 + 0x180) = 0;
    iVar10 = 0x80;
    if (*(int *)(param_1 + 0x120) == 0) goto switchD_00654e8c_caseD_0;
    goto LAB_00654fa0;
  case 4:
    goto switchD_00654e8c_caseD_4;
  case 5:
    break;
  }
  FUN_006550a4(param_1 + 0x138);
switchD_00654e8c_caseD_4:
  piVar4 = *(int **)(param_1 + 0x7c);
  DataMemoryBarrier(0xb);
  do {
    iVar10 = *piVar4;
    bVar17 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar17);
  *piVar4 = iVar10 + -1;
  if (iVar10 == 1) {
    DataMemoryBarrier(0xb);
    FUN_016592f4(*(undefined4 *)(param_1 + 0x7c));
  }
  iVar10 = *(int *)(param_1 + 0x58);
  if (iVar10 == -0x80000000) {
LAB_00654f90:
    iVar5 = *(int *)(param_1 + 0x120);
  }
  else {
    if (iVar10 == -0x7fffffff) {
      piVar4 = *(int **)(param_1 + 0x5c);
      if (*piVar4 == 0xcc) {
        DataMemoryBarrier(0xb);
        bVar17 = (bool)hasExclusiveAccess(piVar4);
        if (bVar17) {
          *piVar4 = 0x84;
          goto LAB_00654f90;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      (**(code **)(piVar4[2] + 0x10))();
      goto LAB_00654f90;
    }
    if (iVar10 == 0) goto LAB_00654f90;
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x5c));
    iVar5 = *(int *)(param_1 + 0x120);
  }
  iVar10 = 0x80;
  if (iVar5 != 0) {
LAB_00654fa0:
    iVar10 = 0x80;
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x124));
  }
switchD_00654e8c_caseD_0:
  param_1 = param_1 + iVar10;
  if (*(int *)(param_1 + 0x20) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x24));
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x30));
  }
  if (*(int *)(param_1 + 0x38) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x3c));
  }
  if (*(int *)(param_1 + 0x44) != 0) {
    iVar10 = *(int *)(param_1 + 0x48);
    if (iVar10 == 0) {
      return;
    }
    iVar5 = FUN_016d3bc8();
    uVar15 = *(byte *)(iVar10 + -3) & 0x1f;
    if (((*(byte *)(iVar5 + 0x14) & 0x1f) != 0) ||
       (uVar11 = *(uint *)(iVar5 + 0x14) & 0xfffff000, iVar7 = uVar11 - 0x10, uVar11 == 0)) {
      iVar7 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar5 + 0x14) & 0xfff) >> 6) * 2) << 4
      ;
    }
    uVar11 = (uint)(*(byte *)(iVar10 + -3) >> 5);
    iVar14 = *(int *)(iVar5 + 8) + 0x10;
    iVar12 = iVar7 * uVar15 + iVar7 + -4;
    iVar7 = iVar14 + iVar12;
    if (4 < uVar11) {
      if (uVar11 != 5) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d4018);
        (*pcVar2)();
      }
      uVar11 = *(uint *)(iVar7 + -4);
      if (uVar11 < 5) {
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
    if ((uint)(iVar7 - iVar10) < uVar11) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4032);
      (*pcVar2)();
    }
    if (*(char *)(iVar7 - uVar11) != '\0') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d403a);
      (*pcVar2)();
    }
    if (*(char *)(iVar14 + iVar12) != '\0') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4040);
      (*pcVar2)();
    }
    bVar3 = *(byte *)(iVar5 + 0x14);
    uVar11 = 1 << uVar15;
    *(undefined1 *)(iVar10 + -3) = 0xff;
    *(undefined2 *)(iVar10 + -2) = 0;
    do {
      uVar13 = *(uint *)(iVar5 + 0x10);
      uVar8 = *(uint *)(iVar5 + 0xc) | uVar13;
      if ((uVar11 & uVar8) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d4074);
        (*pcVar2)();
      }
      if ((uVar13 == 0) || (uVar8 + uVar11 == (2 << (bVar3 & 0x1f)) + -1)) {
        if (DAT_018ddb0b != '\0') {
          FUN_016ddcc0(&DAT_018ddd48);
        }
        FUN_016d3ca8(&uStack_28,iVar5,uVar15);
        FUN_016dddc0(&DAT_018ddd48);
        if (iStack_24 == 0) {
          return;
        }
        puVar6 = (undefined4 *)FUN_016d2bc8();
        uVar9 = *puVar6;
        FUN_016d6ac4(uStack_28,iStack_24);
        *puVar6 = uVar9;
        return;
      }
      if (DAT_018ddb0b == '\0') {
        *(uint *)(iVar5 + 0x10) = uVar11 + uVar13;
        return;
      }
      puVar16 = (uint *)(iVar5 + 0x10);
      DataMemoryBarrier(0x1b);
      do {
        ExclusiveAccess(puVar16);
        uVar8 = *puVar16;
        if (uVar13 != uVar8) goto LAB_016d409c;
        bVar17 = (bool)hasExclusiveAccess(puVar16);
      } while (!bVar17);
      *puVar16 = uVar11 + uVar13;
LAB_016d409c:
      DataMemoryBarrier(0x1b);
      if (uVar13 == uVar8) {
        return;
      }
    } while( true );
  }
switchD_00654e8c_caseD_1:
  return;
}

