// FUN_00f680b0 @ 00f680b0 size=1440 calls_out=12 calls_in=1
// strings: localtime

void FUN_00f680b0(undefined4 *param_1,byte *param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  byte *pbVar7;
  byte *pbVar8;
  code *pcVar9;
  uint uVar10;
  byte *pbVar11;
  int iVar12;
  uint uVar13;
  int unaff_r4;
  undefined4 uVar14;
  byte *pbVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  byte *pbVar19;
  undefined4 *puVar20;
  uint *puVar21;
  uint local_d0;
  undefined4 *local_cc;
  uint local_c8;
  uint uStack_c4;
  uint uStack_c0;
  uint local_bc;
  uint uStack_b8;
  uint uStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  uint uStack_a8;
  undefined1 local_a4;
  uint local_a0;
  undefined4 *puStack_9c;
  uint uStack_98;
  uint uStack_94;
  uint local_90;
  uint local_8c;
  uint uStack_88;
  uint uStack_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  undefined1 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  uint *local_60;
  undefined4 local_5c;
  uint local_58;
  undefined4 *local_54;
  uint local_50;
  uint local_4c;
  uint uStack_48;
  uint local_44;
  uint uStack_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  undefined1 local_2c;
  char local_2b;
  undefined2 local_2a;
  undefined4 uStack_28;
  
  if (param_3 == 9) {
    iVar4 = thunk_FUN_016dd50a(param_2,"localtime",9);
    if (iVar4 == 0) {
      FUN_015ecd70(&local_58,&DAT_00387b70,0xe);
      if (local_58 == 0x80000000) {
        *param_1 = 1;
        param_1[2] = local_54;
        param_1[3] = local_50;
        param_1[4] = 0x3b9aca06;
        return;
      }
      FUN_00f62700(param_1,local_54);
      if (local_58 == 0) {
        return;
      }
      if (local_54 == (undefined4 *)0x0) {
        return;
      }
      iVar4 = FUN_016d3bc8();
      uVar5 = *(byte *)((int)local_54 + -3) & 0x1f;
      if (((*(byte *)(iVar4 + 0x14) & 0x1f) != 0) ||
         (uVar10 = *(uint *)(iVar4 + 0x14) & 0xfffff000, iVar12 = uVar10 - 0x10, uVar10 == 0)) {
        iVar12 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar4 + 0x14) & 0xfff) >> 6) * 2)
                 << 4;
      }
      uVar10 = (uint)(*(byte *)((int)local_54 + -3) >> 5);
      iVar18 = *(int *)(iVar4 + 8) + 0x10;
      iVar16 = iVar12 * uVar5 + iVar12 + -4;
      iVar12 = iVar18 + iVar16;
      if (4 < uVar10) {
        if (uVar10 != 5) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar9)();
        }
        uVar10 = *(uint *)(iVar12 + -4);
        if (uVar10 < 5) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)software_udf(0xff,0x16d4022);
          (*pcVar9)();
        }
        if (*(char *)(iVar12 + -5) != '\0') {
                    /* WARNING: Does not return */
          pcVar9 = (code *)software_udf(0xff,0x16d402a);
          (*pcVar9)();
        }
      }
      if ((uint)(iVar12 - (int)local_54) < uVar10) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar9)();
      }
      if (*(char *)(iVar12 - uVar10) != '\0') {
                    /* WARNING: Does not return */
        pcVar9 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar9)();
      }
      if (*(char *)(iVar18 + iVar16) != '\0') {
                    /* WARNING: Does not return */
        pcVar9 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar9)();
      }
      bVar1 = *(byte *)(iVar4 + 0x14);
      uVar10 = 1 << uVar5;
      *(undefined1 *)((int)local_54 + -3) = 0xff;
      *(undefined2 *)((int)local_54 + -2) = 0;
      do {
        uVar17 = *(uint *)(iVar4 + 0x10);
        uVar13 = *(uint *)(iVar4 + 0xc) | uVar17;
        if ((uVar10 & uVar13) != 0) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar9)();
        }
        if ((uVar17 == 0) || (uVar13 + uVar10 == (2 << (bVar1 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&uStack_28,iVar4,uVar5);
          FUN_016dddc0(&DAT_018ddd48);
          if (unaff_r4 == 0) {
            return;
          }
          puVar6 = (undefined4 *)FUN_016d2bc8();
          uVar14 = *puVar6;
          FUN_016d6ac4(uStack_28,unaff_r4);
          *puVar6 = uVar14;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar4 + 0x10) = uVar10 + uVar17;
          return;
        }
        puVar21 = (uint *)(iVar4 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar21);
          uVar13 = *puVar21;
          if (uVar17 != uVar13) goto LAB_016d409c;
          bVar3 = (bool)hasExclusiveAccess(puVar21);
        } while (!bVar3);
        *puVar21 = uVar10 + uVar17;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar17 == uVar13) {
          return;
        }
      } while( true );
    }
  }
  else if (param_3 == 0) {
    iVar4 = FUN_016d38c8(0x10,1);
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0x10);
    }
    *(undefined1 *)((int)param_1 + 0x55) = 3;
    param_1[8] = 8;
    param_1[9] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 8;
    param_1[3] = 0;
    param_1[4] = 1;
    param_1[5] = iVar4;
    param_1[6] = 1;
    param_1[7] = 0;
    return;
  }
  pbVar7 = param_2 + 1;
  uVar5 = (uint)*param_2;
  if (0x7fffffff < (uint)(int)(char)*param_2) {
    if (uVar5 < 0xe0) {
      uVar5 = param_2[1] & 0x3f | (uVar5 & 0x1f) << 6;
      pbVar7 = param_2 + 2;
    }
    else {
      uVar10 = param_2[2] & 0x3f | (param_2[1] & 0x3f) << 6;
      if (uVar5 < 0xf0) {
        uVar5 = uVar10 | (uVar5 & 0x1f) << 0xc;
        pbVar7 = param_2 + 3;
      }
      else {
        uVar5 = param_2[3] & 0x3f | uVar10 << 6 | (uVar5 & 7) << 0x12;
        pbVar7 = param_2 + 4;
      }
    }
  }
  pbVar15 = param_2 + param_3;
  if (uVar5 == 0x3a) {
    FUN_00f686b4(&local_58,pbVar7,(int)pbVar15 - (int)pbVar7);
    if (local_50 != 0x3b9aca10) {
      param_1[2] = local_58;
      param_1[3] = local_54;
      param_1[4] = local_50;
      param_1[5] = local_4c;
      *param_1 = 1;
      return;
    }
    local_d0 = local_58;
    FUN_00f68bdc(param_1,&local_d0);
LAB_00f6829c:
    FUN_016dffb2(local_58);
    return;
  }
  FUN_00f686b4(&local_58,param_2,param_3);
  puVar6 = local_54;
  if (local_50 == 0x3b9aca10) {
    local_d0 = local_58;
    FUN_00f68bdc(param_1,&local_d0);
    goto LAB_00f6829c;
  }
  uVar5 = local_50;
  if (local_50 == 0x3b9aca06) {
    uVar5 = local_58 & 0xff;
  }
  if (local_50 == 0x3b9aca06 && uVar5 == 3) {
    uVar14 = *local_54;
    puVar20 = (undefined4 *)local_54[1];
    pcVar9 = (code *)*puVar20;
    if (pcVar9 != (code *)0x0) {
      (*pcVar9)(uVar14);
    }
    if (puVar20[1] != 0) {
      thunk_FUN_016d3fb4(uVar14);
    }
    thunk_FUN_016d3fb4(puVar6);
    if (param_3 == 0) goto LAB_00f683e4;
LAB_00f682ec:
    pbVar7 = (byte *)0x0;
    pbVar11 = param_2;
    do {
      pbVar8 = pbVar11 + 1;
      uVar5 = (uint)*pbVar11;
      if (0x7fffffff < (uint)(int)(char)*pbVar11) {
        if (uVar5 < 0xe0) {
          uVar5 = pbVar11[1] & 0x3f | (uVar5 & 0x1f) << 6;
          pbVar8 = pbVar11 + 2;
        }
        else {
          uVar10 = pbVar11[2] & 0x3f | (pbVar11[1] & 0x3f) << 6;
          if (uVar5 < 0xf0) {
            uVar5 = uVar10 | (uVar5 & 0x1f) << 0xc;
            pbVar8 = pbVar11 + 3;
          }
          else {
            uVar5 = pbVar11[3] & 0x3f | uVar10 << 6 | (uVar5 & 7) << 0x12;
            pbVar8 = pbVar11 + 4;
          }
        }
      }
      pbVar11 = pbVar7 + ((int)pbVar8 - (int)pbVar11);
      if ((0x17 < uVar5 - 9) || ((1 << (uVar5 - 9 & 0xff) & 0x80001bU) == 0)) goto LAB_00f683f0;
      pbVar7 = pbVar11;
      pbVar11 = pbVar8;
    } while (pbVar8 != pbVar15);
    pbVar7 = (byte *)0x0;
    pbVar11 = (byte *)0x0;
  }
  else {
    if (param_3 != 0) goto LAB_00f682ec;
LAB_00f683e4:
    pbVar11 = (byte *)0x0;
    pbVar7 = (byte *)0x0;
    pbVar8 = param_2;
LAB_00f683f0:
    if (pbVar8 != pbVar15) {
      do {
        pbVar19 = pbVar15 + -1;
        uVar5 = (uint)(char)*pbVar19;
        if (0x7fffffff < uVar5) {
          pbVar19 = pbVar15 + -2;
          bVar1 = *pbVar19;
          if ((char)bVar1 < -0x40) {
            pbVar19 = pbVar15 + -3;
            bVar2 = *pbVar19;
            if ((char)bVar2 < -0x40) {
              pbVar19 = pbVar15 + -4;
              uVar10 = (int)(char)bVar2 & 0x3fU | (*pbVar19 & 7) << 6;
            }
            else {
              uVar10 = bVar2 & 0xf;
            }
            uVar10 = (int)(char)bVar1 & 0x3fU | uVar10 << 6;
          }
          else {
            uVar10 = bVar1 & 0x1f;
          }
          uVar5 = uVar5 & 0x3f | uVar10 << 6;
        }
        if ((0x17 < uVar5 - 9) || ((1 << (uVar5 - 9 & 0xff) & 0x80001bU) == 0)) {
          pbVar11 = pbVar15 + ((int)pbVar11 - (int)pbVar8);
          break;
        }
        pbVar15 = pbVar19;
      } while (pbVar8 != pbVar19);
    }
  }
  FUN_00f65be8(&local_58,param_2 + (int)pbVar7,(int)pbVar11 - (int)pbVar7,0);
  if (local_2b == '\x03') {
    param_1[2] = local_58;
    param_1[3] = local_54;
    param_1[4] = local_50;
    param_1[5] = local_4c;
    *param_1 = 1;
    return;
  }
  local_d0 = local_58;
  local_cc = local_54;
  local_c8 = local_50;
  uStack_c4 = local_4c;
  uStack_c0 = uStack_48;
  local_bc = local_44;
  uStack_b8 = uStack_40;
  uStack_b4 = uStack_3c;
  uStack_b0 = uStack_38;
  uStack_ac = uStack_34;
  uStack_a8 = uStack_30;
  local_a4 = local_2c;
  local_a0 = local_58;
  puStack_9c = local_54;
  uStack_98 = local_50;
  uStack_94 = local_4c;
  local_90 = uStack_48;
  local_8c = local_44;
  uStack_88 = uStack_40;
  uStack_84 = uStack_3c;
  local_80 = uStack_38;
  local_7c = uStack_34;
  local_78 = uStack_30;
  local_74 = local_2c;
  local_68 = 0;
  local_6c = 8;
  local_70 = 0;
  if (local_2b == '\x02') {
    uVar14 = 0x10;
    local_60 = (uint *)thunk_FUN_016d4a50(0x10);
    if (local_60 == (uint *)0x0) {
LAB_00f68644:
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,uVar14);
    }
    *local_60 = local_a0;
    local_60[1] = (uint)puStack_9c;
    local_60[2] = uStack_98;
    local_60[3] = uStack_94;
    local_64 = 1;
  }
  else {
    uVar14 = 0x20;
    local_60 = (uint *)thunk_FUN_016d4a50(0x20);
    if (local_60 == (uint *)0x0) goto LAB_00f68644;
    local_60[6] = local_78;
    *local_60 = local_90;
    local_60[1] = local_8c;
    local_60[2] = uStack_88;
    local_60[3] = uStack_84;
    local_64 = 2;
    local_60[4] = local_80;
    local_60[5] = local_7c;
    *(undefined1 *)(local_60 + 7) = local_74;
    *(undefined2 *)((int)local_60 + 0x1e) = local_2a;
    *(char *)((int)local_60 + 0x1d) = local_2b;
  }
  local_c8 = 0;
  local_d0 = 0;
  local_cc = (undefined4 *)0x8;
  local_58 = local_a0;
  local_54 = puStack_9c;
  local_50 = uStack_98;
  local_4c = uStack_94;
  uStack_48 = local_90;
  local_44 = local_8c;
  uStack_40 = uStack_88;
  uStack_3c = uStack_84;
  uStack_38 = local_80;
  uStack_34 = local_7c;
  uStack_30 = local_78;
  local_2c = local_74;
  local_5c = local_64;
  FUN_00f67b34(param_1,&local_70,&local_64,&local_d0,&local_58);
  return;
}

