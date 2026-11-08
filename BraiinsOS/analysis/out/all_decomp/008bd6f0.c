// FUN_008bd6f0 @ 008bd6f0 size=372 calls_out=3 calls_in=0
// strings: internal error: entered unreachable code: invalid Once state | internal error: entered unreachable code: invalid Once state

void FUN_008bd6f0(int param_1,int *param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  int *piVar12;
  int iVar13;
  uint uVar14;
  uint *puVar15;
  undefined4 uStack_28;
  int iStack_24;
  
  if ((*param_2 != 0x50f052f7 || param_2[2] != -0x20684cdb) ||
      (param_2[1] != -0x66f64d5b || param_2[3] != -0x4aa34df2)) {
    piVar12 = *(int **)(param_1 + 0x28);
    if (*(int *)(param_1 + 4) == 2) {
      iVar4 = *(int *)(param_1 + 0x18);
      if (iVar4 != 0) {
        if (iVar4 == 2) goto LAB_008bd800;
        if (iVar4 != 3) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa478("internal error: entered unreachable code: invalid Once state",0x79,
                       &DAT_018a9874);
        }
      }
      uVar11 = *(undefined4 *)(param_1 + 0xc);
      FUN_008cfe04(uVar11,*(undefined4 *)(param_1 + 0x10));
      if (*(int *)(param_1 + 8) != 0) {
        thunk_FUN_016d3fb4(uVar11);
      }
    }
LAB_008bd800:
    if (*(int *)(param_1 + 0x1c) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x20));
    }
    thunk_FUN_016d3fb4(param_1);
                    /* WARNING: Could not recover jumptable at 0x008bd830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*piVar12 + 0x14))(piVar12,param_2);
    return;
  }
  if (*(int *)(param_1 + 4) == 2) {
    iVar4 = *(int *)(param_1 + 0x18);
    if (iVar4 != 0) {
      if (iVar4 == 2) goto LAB_008bd794;
      if (iVar4 != 3) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa478("internal error: entered unreachable code: invalid Once state",0x79,
                     &DAT_018a9874);
      }
    }
    uVar11 = *(undefined4 *)(param_1 + 0xc);
    FUN_008cfe04(uVar11,*(undefined4 *)(param_1 + 0x10));
    if (*(int *)(param_1 + 8) != 0) {
      thunk_FUN_016d3fb4(uVar11);
    }
  }
LAB_008bd794:
  (**(code **)**(undefined4 **)(param_1 + 0x28))();
  if (param_1 == 0) {
    return;
  }
  iVar4 = FUN_016d3bc8();
  uVar14 = *(byte *)(param_1 + -3) & 0x1f;
  if (((*(byte *)(iVar4 + 0x14) & 0x1f) != 0) ||
     (uVar8 = *(uint *)(iVar4 + 0x14) & 0xfffff000, iVar6 = uVar8 - 0x10, uVar8 == 0)) {
    iVar6 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar4 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar8 = (uint)(*(byte *)(param_1 + -3) >> 5);
  iVar13 = *(int *)(iVar4 + 8) + 0x10;
  iVar9 = iVar6 * uVar14 + iVar6 + -4;
  iVar6 = iVar13 + iVar9;
  if (4 < uVar8) {
    if (uVar8 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar8 = *(uint *)(iVar6 + -4);
    if (uVar8 < 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar1)();
    }
    if (*(char *)(iVar6 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar1)();
    }
  }
  if ((uint)(iVar6 - param_1) < uVar8) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar6 - uVar8) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar13 + iVar9) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar4 + 0x14);
  uVar8 = 1 << uVar14;
  *(undefined1 *)(param_1 + -3) = 0xff;
  *(undefined2 *)(param_1 + -2) = 0;
  do {
    uVar10 = *(uint *)(iVar4 + 0x10);
    uVar7 = *(uint *)(iVar4 + 0xc) | uVar10;
    if ((uVar8 & uVar7) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar10 == 0) || (uVar7 + uVar8 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar4,uVar14);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar5 = (undefined4 *)FUN_016d2bc8();
      uVar11 = *puVar5;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar5 = uVar11;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar4 + 0x10) = uVar8 + uVar10;
      return;
    }
    puVar15 = (uint *)(iVar4 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar15);
      uVar7 = *puVar15;
      if (uVar10 != uVar7) goto LAB_016d409c;
      bVar3 = (bool)hasExclusiveAccess(puVar15);
    } while (!bVar3);
    *puVar15 = uVar8 + uVar10;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar10 == uVar7) {
      return;
    }
  } while( true );
}

