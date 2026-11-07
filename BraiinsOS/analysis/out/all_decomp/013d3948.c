// FUN_013d3948 @ 013d3948 size=904 calls_out=10 calls_in=1
// strings: 

void FUN_013d3948(undefined4 *param_1,int *param_2,int *param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  byte bVar5;
  char *pcVar6;
  byte bVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  int unaff_r4;
  int iVar12;
  uint uVar13;
  uint uVar14;
  undefined4 uVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  byte bVar19;
  int iVar20;
  uint *puVar21;
  int local_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined1 *local_f8;
  undefined4 local_f4;
  int local_f0;
  int local_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined1 *local_b0;
  undefined4 *local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  int iStack_9c;
  int iStack_98;
  int iStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  byte local_44;
  undefined4 uStack_28;
  
  local_12c = FUN_013d2518(param_2);
  if (local_12c != 0x28) {
    FUN_013ff7ac(&local_12c,&DAT_005695a4,&DAT_01894b18);
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x13d3cd0);
    (*pcVar1)();
  }
  FUN_013d9d58(&local_b0,param_2);
  local_128 = local_a0;
  uStack_124 = iStack_9c;
  uStack_120 = iStack_98;
  uStack_11c = iStack_94;
  uStack_118 = iStack_90;
  uStack_114 = uStack_8c;
  local_110 = local_88;
  uStack_10c = uStack_84;
  uStack_108 = uStack_80;
  uStack_104 = uStack_7c;
  uStack_100 = uStack_78;
  uStack_fc = uStack_74;
  if (local_b0 == &DAT_80000004) {
    param_1[3] = local_a0;
    param_1[4] = iStack_9c;
    param_1[5] = iStack_98;
    param_1[6] = iStack_94;
    param_1[7] = iStack_90;
    param_1[8] = uStack_8c;
    param_1[9] = local_88;
    param_1[10] = uStack_84;
    param_1[0xb] = uStack_80;
    param_1[0xc] = uStack_7c;
    param_1[0xd] = uStack_78;
    param_1[0xe] = uStack_74;
    param_1[0xf] = local_70;
    *param_1 = local_ac;
    param_1[1] = local_a8;
    iVar20 = param_3[1];
    iVar9 = param_3[2];
    param_1[2] = local_a4;
    iVar9 = iVar9 + 1;
    iVar12 = iVar20;
    while (iVar9 = iVar9 + -1, iVar9 != 0) {
      FUN_013e7690(iVar12);
      iVar12 = iVar12 + 8;
    }
    if (*param_3 != 0) {
      if (iVar20 == 0) {
        return;
      }
      iVar12 = FUN_016d3bc8();
      uVar18 = *(byte *)(iVar20 + -3) & 0x1f;
      if (((*(byte *)(iVar12 + 0x14) & 0x1f) != 0) ||
         (uVar13 = *(uint *)(iVar12 + 0x14) & 0xfffff000, iVar9 = uVar13 - 0x10, uVar13 == 0)) {
        iVar9 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar12 + 0x14) & 0xfff) >> 6) * 2)
                << 4;
      }
      uVar13 = (uint)(*(byte *)(iVar20 + -3) >> 5);
      iVar16 = *(int *)(iVar12 + 8) + 0x10;
      iVar17 = iVar9 * uVar18 + iVar9 + -4;
      iVar9 = iVar16 + iVar17;
      if (4 < uVar13) {
        if (uVar13 != 5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar1)();
        }
        uVar13 = *(uint *)(iVar9 + -4);
        if (uVar13 < 5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4022);
          (*pcVar1)();
        }
        if (*(char *)(iVar9 + -5) != '\0') {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d402a);
          (*pcVar1)();
        }
      }
      if ((uint)(iVar9 - iVar20) < uVar13) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar1)();
      }
      if (*(char *)(iVar9 - uVar13) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar1)();
      }
      if (*(char *)(iVar16 + iVar17) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar1)();
      }
      bVar5 = *(byte *)(iVar12 + 0x14);
      uVar13 = 1 << uVar18;
      *(undefined1 *)(iVar20 + -3) = 0xff;
      *(undefined2 *)(iVar20 + -2) = 0;
      do {
        uVar14 = *(uint *)(iVar12 + 0x10);
        uVar11 = *(uint *)(iVar12 + 0xc) | uVar14;
        if ((uVar13 & uVar11) != 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar1)();
        }
        if ((uVar14 == 0) || (uVar11 + uVar13 == (2 << (bVar5 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&uStack_28,iVar12,uVar18);
          FUN_016dddc0(&DAT_018ddd48);
          if (unaff_r4 == 0) {
            return;
          }
          puVar3 = (undefined4 *)FUN_016d2bc8();
          uVar8 = *puVar3;
          FUN_016d6ac4(uStack_28,unaff_r4);
          *puVar3 = uVar8;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar12 + 0x10) = uVar13 + uVar14;
          return;
        }
        puVar21 = (uint *)(iVar12 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar21);
          uVar11 = *puVar21;
          if (uVar14 != uVar11) goto LAB_016d409c;
          bVar2 = (bool)hasExclusiveAccess(puVar21);
        } while (!bVar2);
        *puVar21 = uVar13 + uVar14;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar14 == uVar11) {
          return;
        }
      } while( true );
    }
  }
  else {
    if (local_b0 == (undefined1 *)0x80000003) {
      if (local_a4 != 0) {
        bVar5 = 0;
        iVar12 = local_a4 * 0x1c;
        pcVar6 = (char *)(local_a8 + 0x18);
        do {
          if (*pcVar6 == '\a') {
            bVar5 = 1;
          }
          else if (*pcVar6 == '\x06') {
            *(byte *)(*param_2 + 100) = ~bVar5 & 1;
            break;
          }
          iVar12 = iVar12 + -0x1c;
          pcVar6 = pcVar6 + 0x1c;
        } while (iVar12 != 0);
      }
      puVar3 = (undefined4 *)thunk_FUN_016d4a50(0x3c);
      if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0x3c);
      }
      *puVar3 = local_ac;
      puVar3[1] = local_a8;
      puVar3[2] = local_a4;
      puVar3[3] = local_128;
      puVar3[4] = uStack_124;
      puVar3[5] = uStack_120;
      puVar3[6] = uStack_11c;
      puVar3[7] = uStack_118;
      puVar3[8] = uStack_114;
      puVar3[9] = local_110;
      puVar3[10] = uStack_10c;
      puVar3[0xb] = uStack_108;
      puVar3[0xc] = uStack_104;
      puVar3[0xd] = uStack_100;
      puVar3[0xe] = uStack_fc;
      local_b0 = (undefined1 *)0x1;
      iVar12 = param_3[2];
      if (iVar12 == *param_3) {
        local_ac = puVar3;
        FUN_01401514(param_3);
      }
      param_3[2] = iVar12 + 1;
      puVar4 = (undefined4 *)(param_3[1] + iVar12 * 8);
      *puVar4 = 1;
      puVar4[1] = puVar3;
      iVar12 = param_3[1];
      iVar9 = param_3[2];
      iVar20 = param_3[3];
      param_1[1] = *param_3;
      param_1[2] = iVar12;
      param_1[3] = iVar9;
      param_1[4] = iVar20;
      iVar12 = param_3[5];
      iVar9 = param_3[6];
      iVar20 = param_3[7];
      iVar17 = param_3[8];
      param_1[5] = param_3[4];
      param_1[6] = iVar12;
      param_1[7] = iVar9;
      param_1[8] = iVar20;
      param_1[9] = iVar17;
      *param_1 = 0x22;
      return;
    }
    local_ec = local_a4;
    local_f0 = local_a8;
    local_f4 = local_ac;
    local_f8 = local_b0;
    local_e8 = local_a0;
    uStack_e4 = iStack_9c;
    uStack_e0 = iStack_98;
    uStack_dc = iStack_94;
    uStack_d8 = iStack_90;
    uStack_d4 = uStack_8c;
    local_d0 = local_88;
    uStack_cc = uStack_84;
    uStack_c8 = uStack_80;
    uStack_c4 = uStack_7c;
    uStack_c0 = uStack_78;
    uStack_bc = uStack_74;
    local_b4 = local_6c;
    iVar12 = *param_2;
    local_b8 = local_70;
    bVar5 = *(byte *)(iVar12 + 100);
    bVar19 = bVar5;
    if ((local_b0 == (undefined1 *)0x80000002) && (local_a4 != 0)) {
      bVar7 = 0;
      local_a4 = local_a4 * 0x1c;
      pcVar6 = (char *)(local_a8 + 0x18);
      do {
        if (*pcVar6 == '\a') {
          bVar7 = 1;
        }
        else if (*pcVar6 == '\x06') {
          bVar19 = bVar7 ^ 1;
          break;
        }
        local_a4 = local_a4 + -0x1c;
        pcVar6 = pcVar6 + 0x1c;
      } while (local_a4 != 0);
    }
    if (*(int *)(iVar12 + 0x10) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb715c(&DAT_01894b08);
    }
    *(undefined4 *)(iVar12 + 0x10) = 0xffffffff;
    local_b0 = (undefined1 *)*param_3;
    local_ac = (undefined4 *)param_3[1];
    local_a8 = param_3[2];
    local_a4 = param_3[3];
    local_a0 = param_3[4];
    iStack_9c = param_3[5];
    iStack_98 = param_3[6];
    iStack_94 = param_3[7];
    iStack_90 = param_3[8];
    FUN_016dd1aa(&uStack_8c,&local_f8,0x48);
    iVar9 = *(int *)(iVar12 + 0x1c);
    local_44 = bVar5;
    if (iVar9 == *(int *)(iVar12 + 0x14)) {
      FUN_01401394();
    }
    FUN_016dd1aa(*(int *)(iVar12 + 0x18) + iVar9 * 0x70,&local_b0,0x70);
    *(int *)(iVar12 + 0x1c) = iVar9 + 1;
    iVar9 = *(int *)(iVar12 + 0x10);
    *(byte *)(iVar12 + 100) = bVar19 & 1;
    uVar8 = *(undefined4 *)(iVar12 + 0x50);
    uVar10 = *(undefined4 *)(iVar12 + 0x54);
    uVar15 = *(undefined4 *)(iVar12 + 0x58);
    param_1[3] = 0;
    param_1[1] = 0;
    param_1[2] = 4;
    *(int *)(iVar12 + 0x10) = iVar9 + 1;
    param_1[4] = uVar8;
    param_1[5] = uVar10;
    param_1[6] = uVar15;
    param_1[7] = uVar8;
    param_1[8] = uVar10;
    param_1[9] = uVar15;
    *param_1 = 0x22;
  }
  return;
}

