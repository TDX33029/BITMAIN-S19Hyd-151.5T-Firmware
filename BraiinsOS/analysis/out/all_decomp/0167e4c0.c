// FUN_0167e4c0 @ 0167e4c0 size=820 calls_out=10 calls_in=3
// strings: 

void FUN_0167e4c0(int *param_1,int param_2,int *param_3,int param_4,int param_5,undefined4 param_6,
                 undefined4 param_7)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  undefined4 *puVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int unaff_r4;
  int iVar14;
  undefined4 uVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  uint *puVar22;
  undefined4 local_e8;
  int local_e4;
  int iStack_e0;
  int iStack_dc;
  int local_98;
  int local_94;
  int local_90;
  int iStack_8c;
  int local_88;
  int local_84;
  undefined4 local_80;
  undefined4 uStack_28;
  
  FUN_0167d080(&local_98);
  if (local_98 == -0x7ffffffd) {
    uVar15 = 0x80000002;
    if (param_4 == param_5) {
      uVar15 = 0x80000000;
    }
    iVar11 = *(int *)(param_2 + 0xc4);
    iVar12 = *(int *)(param_2 + 200);
    iVar19 = -0x7ffffffe;
    if (iVar11 == iVar12) {
      iVar19 = -0x80000000;
    }
    iVar16 = param_3[2];
    if ((*(uint *)(param_2 + 0xc0) & 1) == 0) {
      iVar19 = -0x80000000;
    }
    iVar14 = iVar16 + -1;
    *(undefined4 *)(param_2 + 0xc0) = 0;
    if (iVar16 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(0,0xffffffff,0,&DAT_018adae0);
    }
    iVar20 = param_3[1];
    FUN_0167da58(&local_98,param_2,iVar20,iVar14,0);
    iVar6 = local_94;
    iVar4 = iVar20;
    iVar5 = local_98;
    iVar7 = local_88;
    iVar8 = local_84;
    if (local_98 == -0x7ffffffd) {
      FUN_01676758(&local_e8,iVar20 + iVar14 * 0x48);
      FUN_01681fc0(&local_98,iVar6 + 8,&local_e8);
      if (local_98 == -0x80000000) {
        local_e4 = local_94;
        iStack_e0 = local_90;
        iStack_dc = iStack_8c;
        local_e8 = 0x80000000;
      }
      else {
        FUN_016dd1aa(&local_e8,&local_98,0x50);
      }
      local_80 = 0;
      local_88 = 0;
      local_94 = 0;
      local_84 = 8;
      local_98 = 3;
      piVar9 = (int *)FUN_0168b748(&local_e8,&local_98);
      if (*piVar9 == 3) {
        iVar16 = *(int *)(param_2 + 0x98);
        *(int *)(param_2 + 0xd8) = *(int *)(param_2 + 0xd8) + 1;
        if ((iVar16 != -0x7ffffffd) && (0 < iVar16)) {
          thunk_FUN_016d3fb4(*(undefined4 *)(param_2 + 0x9c));
        }
        if ((*(int *)(param_2 + 0xa4) != -0x7ffffffd) && (0 < *(int *)(param_2 + 0xa4))) {
          thunk_FUN_016d3fb4(*(undefined4 *)(param_2 + 0xa8));
        }
        *(int *)(param_2 + 0x98) = iVar19;
        *(int *)(param_2 + 0x9c) = iVar11;
        *(int *)(param_2 + 0xa0) = iVar12;
        *(undefined4 *)(param_2 + 0xa4) = uVar15;
        *(int *)(param_2 + 0xa8) = param_4;
        *(int *)(param_2 + 0xac) = param_5;
        iVar11 = *(int *)(param_2 + 0xd0);
        iVar12 = *(int *)(param_2 + 0xd4);
        *(undefined2 *)(param_2 + 0xbc) = 0;
        *(undefined1 *)(param_2 + 0xdc) = 1;
        *(undefined4 *)(param_2 + 0xb0) = 1;
        *(undefined4 *)(param_2 + 0xb4) = param_6;
        *(undefined4 *)(param_2 + 0xb8) = param_7;
        *(undefined4 *)(param_2 + 0x60) = 1;
        *(undefined4 *)(param_2 + 100) = *(undefined4 *)(param_2 + 0xd8);
        for (; iVar12 != 0; iVar12 = iVar12 + -1) {
          FUN_01666b88(iVar11);
          iVar11 = iVar11 + 0x48;
        }
        if (*(int *)(param_2 + 0xcc) != 0) {
          thunk_FUN_016d3fb4(*(undefined4 *)(param_2 + 0xd0));
        }
        iVar11 = param_3[1];
        iVar12 = param_3[2];
        *(int *)(param_2 + 0xcc) = *param_3;
        *(int *)(param_2 + 0xd0) = iVar11;
        *(int *)(param_2 + 0xd4) = iVar12;
        *param_1 = -0x7ffffffd;
        return;
      }
      FUN_0168f8b0(&local_98,iVar20,iVar16,iVar14);
      iVar5 = local_98;
      iVar6 = local_94;
      iVar7 = local_88;
      iVar8 = local_84;
    }
    for (; iVar14 = local_84, iVar19 = local_88, iVar12 = local_94, iVar11 = local_98,
        local_98 = iVar5, local_94 = iVar6, local_88 = iVar7, local_84 = iVar8, iVar16 != 0;
        iVar16 = iVar16 + -1) {
      FUN_01666b88(iVar4);
      iVar4 = iVar4 + 0x48;
      iVar5 = local_98;
      iVar6 = local_94;
      iVar7 = local_88;
      iVar8 = local_84;
      local_84 = iVar14;
      local_88 = iVar19;
      local_94 = iVar12;
      local_98 = iVar11;
    }
    if (*param_3 != 0) {
      thunk_FUN_016d3fb4(iVar20);
    }
    if (iVar11 == -0x7ffffffd) {
      *param_1 = -0x7ffffffd;
      return;
    }
    *param_1 = iVar11;
    param_1[1] = iVar12;
    param_1[2] = local_90;
    param_1[3] = iStack_8c;
    param_1[4] = iVar19;
    param_1[5] = iVar14;
  }
  else {
    *param_1 = local_98;
    param_1[1] = local_94;
    param_1[2] = local_90;
    param_1[3] = iStack_8c;
    param_1[4] = local_88;
    param_1[5] = local_84;
    iVar19 = param_3[1];
    iVar11 = iVar19;
    for (iVar12 = param_3[2]; iVar12 != 0; iVar12 = iVar12 + -1) {
      FUN_01666b88(iVar11);
      iVar11 = iVar11 + 0x48;
    }
    if (*param_3 != 0) {
      if (iVar19 == 0) {
        return;
      }
      iVar11 = FUN_016d3bc8();
      uVar21 = *(byte *)(iVar19 + -3) & 0x1f;
      if (((*(byte *)(iVar11 + 0x14) & 0x1f) != 0) ||
         (uVar17 = *(uint *)(iVar11 + 0x14) & 0xfffff000, iVar12 = uVar17 - 0x10, uVar17 == 0)) {
        iVar12 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar11 + 0x14) & 0xfff) >> 6) * 2)
                 << 4;
      }
      uVar17 = (uint)(*(byte *)(iVar19 + -3) >> 5);
      iVar14 = *(int *)(iVar11 + 8) + 0x10;
      iVar16 = iVar12 * uVar21 + iVar12 + -4;
      iVar12 = iVar14 + iVar16;
      if (4 < uVar17) {
        if (uVar17 != 5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar1)();
        }
        uVar17 = *(uint *)(iVar12 + -4);
        if (uVar17 < 5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4022);
          (*pcVar1)();
        }
        if (*(char *)(iVar12 + -5) != '\0') {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d402a);
          (*pcVar1)();
        }
      }
      if ((uint)(iVar12 - iVar19) < uVar17) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar1)();
      }
      if (*(char *)(iVar12 - uVar17) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar1)();
      }
      if (*(char *)(iVar14 + iVar16) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar1)();
      }
      bVar2 = *(byte *)(iVar11 + 0x14);
      uVar17 = 1 << uVar21;
      *(undefined1 *)(iVar19 + -3) = 0xff;
      *(undefined2 *)(iVar19 + -2) = 0;
      do {
        uVar18 = *(uint *)(iVar11 + 0x10);
        uVar13 = *(uint *)(iVar11 + 0xc) | uVar18;
        if ((uVar17 & uVar13) != 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar1)();
        }
        if ((uVar18 == 0) || (uVar13 + uVar17 == (2 << (bVar2 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&uStack_28,iVar11,uVar21);
          FUN_016dddc0(&DAT_018ddd48);
          if (unaff_r4 == 0) {
            return;
          }
          puVar10 = (undefined4 *)FUN_016d2bc8();
          uVar15 = *puVar10;
          FUN_016d6ac4(uStack_28,unaff_r4);
          *puVar10 = uVar15;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar11 + 0x10) = uVar17 + uVar18;
          return;
        }
        puVar22 = (uint *)(iVar11 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar22);
          uVar13 = *puVar22;
          if (uVar18 != uVar13) goto LAB_016d409c;
          bVar3 = (bool)hasExclusiveAccess(puVar22);
        } while (!bVar3);
        *puVar22 = uVar17 + uVar18;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar18 == uVar13) {
          return;
        }
      } while( true );
    }
  }
  return;
}

