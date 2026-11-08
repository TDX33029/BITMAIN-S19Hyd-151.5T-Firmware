// FUN_0155dbb4 @ 0155dbb4 size=480 calls_out=5 calls_in=2
// strings: 

void FUN_0155dbb4(undefined4 *param_1,int *param_2,int *param_3)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  undefined4 *puVar4;
  uint *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int unaff_r4;
  uint uVar10;
  undefined4 uVar11;
  uint uVar12;
  int iVar13;
  undefined4 uVar14;
  uint uVar15;
  int iVar16;
  undefined4 uVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  uint local_c0;
  uint local_bc;
  uint uStack_b8;
  uint local_b4;
  uint local_b0;
  uint uStack_ac;
  uint local_a8;
  uint local_a4;
  uint uStack_a0;
  uint local_98;
  uint uStack_94;
  uint uStack_90;
  uint uStack_8c;
  uint local_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  uint uStack_78;
  int local_70 [2];
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  iVar19 = param_3[1];
  FUN_016cfa90(local_70,iVar19,param_3[2]);
  if (local_70[0] == 1) {
    FUN_0152f154(&local_48,auStack_68);
    puVar4 = (undefined4 *)((uint)&local_98 | 4);
    *puVar4 = local_48;
    puVar4[1] = uStack_44;
    puVar4[2] = uStack_40;
    puVar4[3] = uStack_3c;
    puVar4[4] = local_38;
    puVar4[5] = uStack_34;
    puVar4[6] = uStack_30;
    puVar4[7] = uStack_2c;
    puVar6 = (undefined4 *)((uint)&local_c0 | 4);
    uVar11 = puVar4[1];
    uVar14 = puVar4[2];
    uVar17 = puVar4[3];
    *puVar6 = *puVar4;
    puVar6[1] = uVar11;
    puVar6[2] = uVar14;
    puVar6[3] = uVar17;
    uVar11 = puVar4[5];
    uVar14 = puVar4[6];
    uVar17 = puVar4[7];
    puVar6[4] = puVar4[4];
    puVar6[5] = uVar11;
    puVar6[6] = uVar14;
    puVar6[7] = uVar17;
    uVar11 = puVar6[1];
    uVar14 = puVar6[2];
    uVar17 = puVar6[3];
    *param_1 = *puVar6;
    param_1[1] = uVar11;
    param_1[2] = uVar14;
    param_1[3] = uVar17;
    uVar11 = puVar6[5];
    uVar14 = puVar6[6];
    uVar17 = puVar6[7];
    param_1[4] = puVar6[4];
    param_1[5] = uVar11;
    param_1[6] = uVar14;
    param_1[7] = uVar17;
    if (*param_3 != -0x80000000 && *param_3 != 0) goto LAB_014b47f4;
  }
  else {
    puVar5 = (uint *)((uint)local_70 | 4);
    uVar7 = *puVar5;
    uVar10 = puVar5[1];
    uStack_b8 = puVar5[2];
    uVar18 = puVar5[3];
    uVar8 = puVar5[4];
    uStack_ac = puVar5[5];
    uVar12 = puVar5[6];
    uVar15 = puVar5[7];
    uStack_a0 = puVar5[8];
    local_c0 = uVar7;
    local_bc = uVar10;
    local_b4 = uVar18;
    local_b0 = uVar8;
    local_a8 = uVar12;
    local_a4 = uVar15;
    local_98 = uVar7;
    uStack_94 = uVar10;
    uStack_90 = uStack_b8;
    uStack_8c = uVar18;
    local_88 = uVar8;
    uStack_84 = uStack_ac;
    uStack_80 = uVar12;
    uStack_7c = uVar15;
    uStack_78 = uStack_a0;
    FUN_01575480(&local_e8);
    iVar20 = param_2[2];
    if (iVar20 == *param_2) {
      FUN_0154e368(param_2);
    }
    puVar4 = (undefined4 *)(param_2[1] + iVar20 * 0x24);
    *puVar4 = local_e8;
    puVar4[1] = uStack_e4;
    puVar4[2] = uStack_e0;
    puVar4[3] = uStack_dc;
    puVar4[4] = local_d8;
    puVar4[5] = uStack_d4;
    puVar4[6] = uStack_d0;
    puVar4[7] = uStack_cc;
    puVar4[8] = uStack_c8;
    param_2[2] = iVar20 + 1;
    if ((uVar7 & 0x7fffffff) != 0) {
      thunk_FUN_016d3fb4(uVar10);
    }
    if ((uVar18 & 0x7fffffff) != 0) {
      thunk_FUN_016d3fb4(uVar8);
    }
    if ((-0x7fffffff < (int)uVar12) && (uVar12 != 0)) {
      thunk_FUN_016d3fb4(uVar15);
    }
    *param_1 = 0x80000029;
    if (*param_3 != -0x80000000 && *param_3 != 0) {
LAB_014b47f4:
      if (iVar19 == 0) {
        return;
      }
      iVar20 = FUN_016d3bc8();
      uVar7 = *(byte *)(iVar19 + -3) & 0x1f;
      if (((*(byte *)(iVar20 + 0x14) & 0x1f) != 0) ||
         (uVar8 = *(uint *)(iVar20 + 0x14) & 0xfffff000, iVar9 = uVar8 - 0x10, uVar8 == 0)) {
        iVar9 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar20 + 0x14) & 0xfff) >> 6) * 2)
                << 4;
      }
      uVar8 = (uint)(*(byte *)(iVar19 + -3) >> 5);
      iVar16 = *(int *)(iVar20 + 8) + 0x10;
      iVar13 = iVar9 * uVar7 + iVar9 + -4;
      iVar9 = iVar16 + iVar13;
      if (4 < uVar8) {
        if (uVar8 != 5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar1)();
        }
        uVar8 = *(uint *)(iVar9 + -4);
        if (uVar8 < 5) {
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
      if ((uint)(iVar9 - iVar19) < uVar8) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar1)();
      }
      if (*(char *)(iVar9 - uVar8) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar1)();
      }
      if (*(char *)(iVar16 + iVar13) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar1)();
      }
      bVar2 = *(byte *)(iVar20 + 0x14);
      uVar8 = 1 << uVar7;
      *(undefined1 *)(iVar19 + -3) = 0xff;
      *(undefined2 *)(iVar19 + -2) = 0;
      do {
        uVar12 = *(uint *)(iVar20 + 0x10);
        uVar10 = *(uint *)(iVar20 + 0xc) | uVar12;
        if ((uVar8 & uVar10) != 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar1)();
        }
        if ((uVar12 == 0) || (uVar10 + uVar8 == (2 << (bVar2 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&uStack_28,iVar20,uVar7);
          FUN_016dddc0(&DAT_018ddd48);
          if (unaff_r4 == 0) {
            return;
          }
          puVar4 = (undefined4 *)FUN_016d2bc8();
          uVar11 = *puVar4;
          FUN_016d6ac4(uStack_28,unaff_r4);
          *puVar4 = uVar11;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar20 + 0x10) = uVar8 + uVar12;
          return;
        }
        puVar5 = (uint *)(iVar20 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar5);
          uVar10 = *puVar5;
          if (uVar12 != uVar10) goto LAB_016d409c;
          bVar3 = (bool)hasExclusiveAccess(puVar5);
        } while (!bVar3);
        *puVar5 = uVar8 + uVar12;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar12 == uVar10) {
          return;
        }
      } while( true );
    }
  }
  return;
}

