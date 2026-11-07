// FUN_0167dd60 @ 0167dd60 size=872 calls_out=10 calls_in=3
// strings: 

void FUN_0167dd60(int *param_1,int param_2,int *param_3,int param_4,int param_5,undefined4 param_6,
                 undefined4 param_7)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int unaff_r4;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  undefined4 uVar15;
  int iVar16;
  uint uVar17;
  uint *puVar18;
  int local_148;
  int iStack_144;
  int iStack_140;
  int iStack_13c;
  int local_120 [2];
  undefined1 auStack_118 [104];
  int local_b0;
  int local_ac;
  int local_a8;
  int iStack_a4;
  int iStack_a0;
  int iStack_9c;
  byte local_4c;
  byte local_4b;
  int local_40;
  int local_3c;
  int local_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  
  FUN_0167d080(&local_b0);
  if (local_b0 == -0x7ffffffd) {
    uVar15 = 0x80000002;
    iVar7 = *(int *)(param_2 + 0xc4);
    iVar8 = *(int *)(param_2 + 200);
    if (param_4 == param_5) {
      uVar15 = 0x80000000;
    }
    iVar11 = -0x7ffffffe;
    if (iVar7 == iVar8) {
      iVar11 = -0x80000000;
    }
    iVar10 = param_3[2];
    if ((*(uint *)(param_2 + 0xc0) & 1) == 0) {
      iVar11 = -0x80000000;
    }
    iVar12 = iVar10 + -1;
    *(undefined4 *)(param_2 + 0xc0) = 0;
    if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(0,0xffffffff,0,&DAT_018adaa0);
    }
    iVar16 = param_3[1];
    FUN_0167da58(&local_b0,param_2,iVar16,iVar12,0);
    iVar4 = iVar16;
    if (local_b0 == -0x7ffffffd) {
      iVar5 = iVar16 + iVar12 * 0x48;
      FUN_01682b90(local_120,local_ac + 8,*(undefined4 *)(iVar5 + 4),*(undefined4 *)(iVar5 + 8));
      if (local_120[0] == 4) {
LAB_0167de48:
        iVar10 = *(int *)(param_2 + 0x98);
        *(int *)(param_2 + 0xd8) = *(int *)(param_2 + 0xd8) + 1;
        if ((iVar10 != -0x7ffffffd) && (0 < iVar10)) {
          thunk_FUN_016d3fb4(*(undefined4 *)(param_2 + 0x9c));
        }
        if ((*(int *)(param_2 + 0xa4) != -0x7ffffffd) && (0 < *(int *)(param_2 + 0xa4))) {
          thunk_FUN_016d3fb4(*(undefined4 *)(param_2 + 0xa8));
        }
        *(int *)(param_2 + 0x98) = iVar11;
        *(int *)(param_2 + 0x9c) = iVar7;
        *(int *)(param_2 + 0xa0) = iVar8;
        *(undefined4 *)(param_2 + 0xa4) = uVar15;
        *(int *)(param_2 + 0xa8) = param_4;
        *(int *)(param_2 + 0xac) = param_5;
        iVar7 = *(int *)(param_2 + 0xd0);
        iVar8 = *(int *)(param_2 + 0xd4);
        *(undefined2 *)(param_2 + 0xbc) = 0;
        *(undefined1 *)(param_2 + 0xdc) = 0;
        *(undefined4 *)(param_2 + 0xb0) = 1;
        *(undefined4 *)(param_2 + 0xb4) = param_6;
        *(undefined4 *)(param_2 + 0xb8) = param_7;
        *(undefined4 *)(param_2 + 0x60) = 1;
        *(undefined4 *)(param_2 + 100) = *(undefined4 *)(param_2 + 0xd8);
        for (; iVar8 != 0; iVar8 = iVar8 + -1) {
          FUN_01666b88(iVar7);
          iVar7 = iVar7 + 0x48;
        }
        if (*(int *)(param_2 + 0xcc) != 0) {
          thunk_FUN_016d3fb4(*(undefined4 *)(param_2 + 0xd0));
        }
        iVar7 = param_3[1];
        iVar8 = param_3[2];
        *(int *)(param_2 + 0xcc) = *param_3;
        *(int *)(param_2 + 0xd0) = iVar7;
        *(int *)(param_2 + 0xd4) = iVar8;
        *param_1 = -0x7ffffffd;
        return;
      }
      FUN_016dd1aa(&local_b0,local_120,0x70);
      if (((local_b0 == 2) && ((local_4c & 1) != 0)) && ((local_4b & 1) == 0)) {
        FUN_0167d968(param_2 + 0x60);
        FUN_016dd1aa(param_2 + 0x60,auStack_118,0x60);
        if (local_b0 != 2) {
          FUN_0167e14c(&local_b0);
        }
        goto LAB_0167de48;
      }
      FUN_0168f8b0(&local_40,iVar16,iVar10,iVar12);
      local_148 = local_38;
      iStack_144 = iStack_34;
      iStack_140 = iStack_30;
      iStack_13c = iStack_2c;
      iVar7 = local_40;
      iVar8 = local_3c;
      if (local_b0 == 2) {
        FUN_0167d968(&local_a8);
      }
      else {
        FUN_0167e14c(&local_b0);
      }
    }
    else {
      local_148 = local_a8;
      iStack_144 = iStack_a4;
      iStack_140 = iStack_a0;
      iStack_13c = iStack_9c;
      iVar7 = local_b0;
      iVar8 = local_ac;
    }
    for (; iVar10 != 0; iVar10 = iVar10 + -1) {
      FUN_01666b88(iVar4);
      iVar4 = iVar4 + 0x48;
    }
    if (*param_3 != 0) {
      thunk_FUN_016d3fb4(iVar16);
    }
    if (iVar7 == -0x7ffffffd) {
      *param_1 = -0x7ffffffd;
      return;
    }
    *param_1 = iVar7;
    param_1[1] = iVar8;
    param_1[2] = local_148;
    param_1[3] = iStack_144;
    param_1[4] = iStack_140;
    param_1[5] = iStack_13c;
  }
  else {
    *param_1 = local_b0;
    param_1[1] = local_ac;
    param_1[2] = local_a8;
    param_1[3] = iStack_a4;
    param_1[4] = iStack_a0;
    param_1[5] = iStack_9c;
    iVar11 = param_3[1];
    iVar7 = iVar11;
    for (iVar8 = param_3[2]; iVar8 != 0; iVar8 = iVar8 + -1) {
      FUN_01666b88(iVar7);
      iVar7 = iVar7 + 0x48;
    }
    if (*param_3 != 0) {
      if (iVar11 == 0) {
        return;
      }
      iVar7 = FUN_016d3bc8();
      uVar17 = *(byte *)(iVar11 + -3) & 0x1f;
      if (((*(byte *)(iVar7 + 0x14) & 0x1f) != 0) ||
         (uVar13 = *(uint *)(iVar7 + 0x14) & 0xfffff000, iVar8 = uVar13 - 0x10, uVar13 == 0)) {
        iVar8 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar7 + 0x14) & 0xfff) >> 6) * 2) <<
                4;
      }
      uVar13 = (uint)(*(byte *)(iVar11 + -3) >> 5);
      iVar12 = *(int *)(iVar7 + 8) + 0x10;
      iVar10 = iVar8 * uVar17 + iVar8 + -4;
      iVar8 = iVar12 + iVar10;
      if (4 < uVar13) {
        if (uVar13 != 5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar1)();
        }
        uVar13 = *(uint *)(iVar8 + -4);
        if (uVar13 < 5) {
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
      if ((uint)(iVar8 - iVar11) < uVar13) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar1)();
      }
      if (*(char *)(iVar8 - uVar13) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar1)();
      }
      if (*(char *)(iVar12 + iVar10) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar1)();
      }
      bVar2 = *(byte *)(iVar7 + 0x14);
      uVar13 = 1 << uVar17;
      *(undefined1 *)(iVar11 + -3) = 0xff;
      *(undefined2 *)(iVar11 + -2) = 0;
      do {
        uVar14 = *(uint *)(iVar7 + 0x10);
        uVar9 = *(uint *)(iVar7 + 0xc) | uVar14;
        if ((uVar13 & uVar9) != 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar1)();
        }
        if ((uVar14 == 0) || (uVar9 + uVar13 == (2 << (bVar2 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&uStack_28,iVar7,uVar17);
          FUN_016dddc0(&DAT_018ddd48);
          if (unaff_r4 == 0) {
            return;
          }
          puVar6 = (undefined4 *)FUN_016d2bc8();
          uVar15 = *puVar6;
          FUN_016d6ac4(uStack_28,unaff_r4);
          *puVar6 = uVar15;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar7 + 0x10) = uVar13 + uVar14;
          return;
        }
        puVar18 = (uint *)(iVar7 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar18);
          uVar9 = *puVar18;
          if (uVar14 != uVar9) goto LAB_016d409c;
          bVar3 = (bool)hasExclusiveAccess(puVar18);
        } while (!bVar3);
        *puVar18 = uVar13 + uVar14;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar14 == uVar9) {
          return;
        }
      } while( true );
    }
  }
  return;
}

