// FUN_00d824a4 @ 00d824a4 size=376 calls_out=3 calls_in=8
// strings: internal error: entered unreachable code: invalid Once state

void FUN_00d824a4(undefined4 *param_1)

{
  code *pcVar1;
  byte bVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  int unaff_r4;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  int unaff_r6;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint *puVar15;
  bool bVar16;
  undefined4 uStack_28;
  int local_24;
  
  piVar3 = (int *)*param_1;
  DataMemoryBarrier(0xb);
  do {
    iVar6 = *piVar3;
    bVar16 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar16);
  *piVar3 = iVar6 + -1;
  if (iVar6 == 1) {
    DataMemoryBarrier(0xb);
    FUN_007846b4(*param_1,param_1[1]);
  }
  if (1 < param_1[2] - 2) {
    if (param_1[2] != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa478("internal error: entered unreachable code: invalid Once state",0x79,&DAT_018a9874
                  );
    }
    if (param_1[3] != 0) {
      thunk_FUN_016d3fb4(param_1[4]);
    }
  }
  iVar6 = param_1[0xb];
  iVar14 = param_1[10];
  local_24 = unaff_r4;
  if (iVar6 != 0) {
    iVar8 = 0;
    do {
      iVar6 = iVar6 + -1;
      bVar16 = *(int *)(iVar14 - iVar8) != 0;
      iVar4 = 0;
      if (bVar16) {
        unaff_r6 = iVar14 - iVar8;
        iVar4 = *(int *)(unaff_r6 + 4);
      }
      if (bVar16 && iVar4 != 0) {
        (**(code **)(iVar4 + 0xc))(*(undefined4 *)(unaff_r6 + 8));
      }
      iVar8 = iVar8 + -0xc;
    } while (iVar6 != 0);
  }
  if (param_1[9] != 0) {
    thunk_FUN_016d3fb4(iVar14);
  }
  iVar6 = param_1[0xe];
  if (iVar6 != -0x80000000) {
    iVar14 = param_1[0xf];
    iVar4 = param_1[0x10] + 1;
    iVar8 = 0;
    while (iVar4 = iVar4 + -1, iVar4 != 0) {
      piVar3 = (int *)(iVar14 + iVar8);
      iVar8 = iVar8 + 0x14;
      (**(code **)(*piVar3 + 0x10))(piVar3 + 3,piVar3[1],piVar3[2]);
    }
    if (iVar6 != 0) {
      if (iVar14 == 0) {
        return;
      }
      iVar6 = FUN_016d3bc8();
      uVar13 = *(byte *)(iVar14 + -3) & 0x1f;
      if (((*(byte *)(iVar6 + 0x14) & 0x1f) != 0) ||
         (uVar10 = *(uint *)(iVar6 + 0x14) & 0xfffff000, iVar8 = uVar10 - 0x10, uVar10 == 0)) {
        iVar8 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar6 + 0x14) & 0xfff) >> 6) * 2) <<
                4;
      }
      uVar10 = (uint)(*(byte *)(iVar14 + -3) >> 5);
      iVar12 = *(int *)(iVar6 + 8) + 0x10;
      iVar4 = iVar8 * uVar13 + iVar8 + -4;
      iVar8 = iVar12 + iVar4;
      if (4 < uVar10) {
        if (uVar10 != 5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar1)();
        }
        uVar10 = *(uint *)(iVar8 + -4);
        if (uVar10 < 5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4022);
          (*pcVar1)();
        }
        if (*(char *)(iVar8 + -5) != '\0') {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d402a);
          (*pcVar1)();
        }
      }
      if ((uint)(iVar8 - iVar14) < uVar10) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar1)();
      }
      if (*(char *)(iVar8 - uVar10) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar1)();
      }
      if (*(char *)(iVar12 + iVar4) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar1)();
      }
      bVar2 = *(byte *)(iVar6 + 0x14);
      uVar10 = 1 << uVar13;
      *(undefined1 *)(iVar14 + -3) = 0xff;
      *(undefined2 *)(iVar14 + -2) = 0;
      do {
        uVar11 = *(uint *)(iVar6 + 0x10);
        uVar7 = *(uint *)(iVar6 + 0xc) | uVar11;
        if ((uVar10 & uVar7) != 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar1)();
        }
        if ((uVar11 == 0) || (uVar7 + uVar10 == (2 << (bVar2 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&uStack_28,iVar6,uVar13);
          FUN_016dddc0(&DAT_018ddd48);
          if (local_24 == 0) {
            return;
          }
          puVar5 = (undefined4 *)FUN_016d2bc8();
          uVar9 = *puVar5;
          FUN_016d6ac4(uStack_28,local_24);
          *puVar5 = uVar9;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar6 + 0x10) = uVar10 + uVar11;
          return;
        }
        puVar15 = (uint *)(iVar6 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar15);
          uVar7 = *puVar15;
          if (uVar11 != uVar7) goto LAB_016d409c;
          bVar16 = (bool)hasExclusiveAccess(puVar15);
        } while (!bVar16);
        *puVar15 = uVar10 + uVar11;
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

