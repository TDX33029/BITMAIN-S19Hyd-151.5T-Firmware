// FUN_013b65b8 @ 013b65b8 size=1956 calls_out=7 calls_in=8
// strings: 

void FUN_013b65b8(int *param_1,undefined4 *param_2,int param_3,byte *param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  int extraout_r2;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined4 *puVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  bool bVar18;
  bool bVar19;
  ulonglong uVar20;
  byte *local_44;
  int local_40;
  byte *local_30;
  byte **local_2c;
  code *local_28;
  
  uVar20 = FUN_0136d230(param_2,param_3);
  local_30 = (byte *)(uVar20 >> 0x20);
  if ((uVar20 & 1) != 0) {
    if (1 < *local_30) {
      local_2c = &local_30;
      local_28 = FUN_013c828c;
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_005733f0,&local_2c,&DAT_01892790);
    }
    iVar9 = *(int *)(local_30 + 4);
    thunk_FUN_016d3fb4(local_30);
    *param_1 = 2;
    param_1[1] = 1;
    param_1[2] = iVar9;
    return;
  }
  pbVar16 = *(byte **)(param_3 + 0x10);
  if (pbVar16 != *(byte **)(param_3 + 0x14)) {
    iVar9 = *(int *)(param_3 + 8);
    pbVar4 = *(byte **)(param_3 + 0xc);
    uVar6 = param_2[0x57];
    uVar8 = uVar6 & 0x1f;
    iVar3 = param_2[0x59];
    uVar5 = param_2[0x5a];
    iVar7 = param_2[0x5e];
    pbVar2 = (byte *)param_2[0x16];
    pbVar15 = (byte *)param_2[3];
    pbVar1 = *(byte **)(param_3 + 0x14) + -1;
    uVar11 = param_2[0x5d];
    iVar12 = param_2[0x15];
    pbVar14 = (byte *)param_2[1];
    pbVar17 = (byte *)param_2[2];
    puVar13 = param_2 + 0x17;
    if (iVar7 == 1) {
      local_40 = 0;
      do {
        if (pbVar4 <= pbVar1) {
LAB_013b6cc0:
                    /* WARNING: Subroutine does not return */
          FUN_00faa4a4(pbVar1,pbVar4,&DAT_01893aa0);
        }
        local_30 = local_30 + *(byte *)((int)puVar13 + (uint)pbVar1[iVar9]);
        if (pbVar2 <= local_30) {
LAB_013b6cd0:
                    /* WARNING: Subroutine does not return */
          FUN_00faa4a4(local_30,pbVar2,&DAT_018936f0);
        }
        local_30 = *(byte **)(iVar12 + (int)local_30 * 4);
        if (local_30 <= (byte *)*param_2) {
          if (local_30 != (byte *)0x0) {
            bVar19 = local_30 <= pbVar17;
            bVar18 = pbVar17 == local_30;
            if (!bVar19 || bVar18) {
              bVar19 = pbVar15 <= local_30;
              bVar18 = local_30 == pbVar15;
            }
            if (!bVar19 || bVar18) {
              local_44 = pbVar1 + 1;
              local_40 = 1;
              goto joined_r0x013b6784;
            }
          }
          if (local_30 == (byte *)0x0) {
            uVar6 = 0;
LAB_013b6b7c:
            *param_1 = local_40;
            param_1[1] = uVar6;
            param_1[2] = (int)local_44;
            return;
          }
          if (pbVar14 == local_30) {
LAB_013b6ae8:
            *param_1 = 2;
            param_1[1] = 1;
            param_1[2] = (int)pbVar1;
            return;
          }
        }
joined_r0x013b6784:
        if (pbVar16 == pbVar1) {
          uVar6 = 0;
LAB_013b67b4:
          if (pbVar16 == (byte *)0x0) {
            local_30 = local_30 + *(byte *)((int)param_2 + 0x15b) + 1;
            if (pbVar2 <= local_30) goto LAB_013b6d38;
            pbVar1 = *(byte **)(iVar12 + (int)local_30 * 4);
            bVar18 = true;
            if (((pbVar1 == (byte *)0x0) || (bVar18 = pbVar17 <= pbVar1, !bVar18)) ||
               (bVar18 = pbVar15 <= pbVar1, pbVar15 < pbVar1)) goto LAB_013b6ac0;
            if (iVar7 == 1) {
              uVar6 = 0;
              local_40 = 1;
              local_44 = (byte *)0x0;
              goto LAB_013b6c48;
            }
            uVar6 = (uint)((int)pbVar1 - (int)pbVar17) >> uVar8;
            uVar8 = uVar6 << 1;
            if (uVar5 <= uVar6 * 2) goto LAB_013b6d44;
            uVar8 = uVar8 | 1;
            if (uVar5 <= uVar8) goto LAB_013b6d50;
            uVar5 = *(uint *)(iVar3 + uVar6 * 8);
            uVar6 = *(uint *)(iVar3 + uVar8 * 4);
            uVar8 = uVar6 + uVar5;
            if ((CARRY4(uVar6,uVar5)) || (uVar11 < uVar8)) goto LAB_013b6cb0;
            pbVar16 = (byte *)0x0;
LAB_013b6c30:
            if (uVar6 == 0) goto LAB_013b6ce4;
            uVar6 = *(uint *)(param_2[0x5c] + uVar5 * 4);
          }
          else {
            pbVar1 = (byte *)(uint)(pbVar16 + -1)[iVar9];
            local_30 = local_30 + *(byte *)((int)puVar13 + (int)pbVar1);
            if (pbVar2 <= local_30) goto LAB_013b6d1c;
            pbVar4 = *(byte **)(iVar12 + (int)local_30 * 4);
            if (((pbVar4 == (byte *)0x0) || (pbVar4 < pbVar17)) || (pbVar15 < pbVar4)) {
              bVar18 = true;
              if ((pbVar4 != (byte *)0x0) && (bVar18 = pbVar4 <= pbVar14, pbVar14 == pbVar4)) {
                FUN_013c7204(pbVar1,pbVar16 + -1);
                iVar9 = FUN_0136e76c();
                *param_1 = 2;
                param_1[1] = 1;
                param_1[2] = iVar9;
                return;
              }
LAB_013b6ac0:
              if (local_40 != 0) {
                bVar18 = pbVar16 <= local_44;
                pbVar1 = local_44;
              }
              if (bVar18 && (local_40 != 0 && pbVar1 != pbVar16)) {
                *param_1 = 2;
                param_1[1] = 0;
                return;
              }
              goto LAB_013b6c48;
            }
            if (iVar7 != 1) {
              uVar6 = (uint)((int)pbVar4 - (int)pbVar17) >> uVar8;
              uVar8 = uVar6 << 1;
              if (uVar5 <= uVar6 * 2) goto LAB_013b6d44;
              uVar8 = uVar8 | 1;
              if (uVar5 <= uVar8) goto LAB_013b6d50;
              uVar5 = *(uint *)(iVar3 + uVar6 * 8);
              uVar6 = *(uint *)(iVar3 + uVar8 * 4);
              uVar8 = uVar6 + uVar5;
              if ((CARRY4(uVar6,uVar5)) || (uVar11 < uVar8)) {
LAB_013b6cb0:
                    /* WARNING: Subroutine does not return */
                FUN_00faa36c(uVar5,uVar8,uVar11,&DAT_01894888);
              }
              goto LAB_013b6c30;
            }
            uVar6 = 0;
          }
          local_40 = 1;
          local_44 = pbVar16;
LAB_013b6c48:
          *param_1 = local_40;
          param_1[1] = uVar6;
          param_1[2] = (int)local_44;
          return;
        }
        pbVar1 = pbVar1 + -1;
      } while (param_4 <= pbVar1);
    }
    else {
      local_40 = 0;
      do {
        if (pbVar4 <= pbVar1) goto LAB_013b6cc0;
        local_30 = local_30 + *(byte *)((int)puVar13 + (uint)pbVar1[iVar9]);
        if (pbVar2 <= local_30) goto LAB_013b6cd0;
        local_30 = *(byte **)(iVar12 + (int)local_30 * 4);
        if (local_30 <= (byte *)*param_2) {
          if (((local_30 == (byte *)0x0) || (local_30 < pbVar17)) || (pbVar15 < local_30)) {
            if (local_30 == (byte *)0x0) goto LAB_013b6b7c;
            if (pbVar14 == local_30) goto LAB_013b6ae8;
          }
          else {
            uVar6 = (uint)((int)local_30 - (int)pbVar17) >> uVar8;
            if (uVar5 <= uVar6 * 2) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa4a4(uVar6 << 1,uVar5,&DAT_01894868);
            }
            uVar10 = uVar6 << 1 | 1;
            if (uVar5 <= uVar10) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa4a4(uVar10,uVar5,&DAT_01894878);
            }
            uVar6 = *(uint *)(iVar3 + uVar6 * 8);
            uVar10 = *(uint *)(iVar3 + uVar10 * 4);
            if ((CARRY4(uVar10,uVar6)) || (uVar11 < uVar10 + uVar6)) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa36c(uVar6,uVar10 + uVar6,uVar11,&DAT_01894888);
            }
            if (uVar10 == 0) goto LAB_013b6ce4;
            local_44 = pbVar1 + 1;
            local_40 = 1;
            uVar6 = *(uint *)(param_2[0x5c] + uVar6 * 4);
          }
        }
        if (pbVar16 == pbVar1) goto LAB_013b67b4;
        pbVar1 = pbVar1 + -1;
      } while (param_4 <= pbVar1);
    }
    *param_1 = 2;
    param_1[1] = 0;
    return;
  }
  if (pbVar16 == (byte *)0x0) {
    pbVar2 = (byte *)param_2[0x16];
    local_30 = local_30 + *(byte *)((int)param_2 + 0x15b) + 1;
    if (pbVar2 <= local_30) {
LAB_013b6d38:
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(local_30,pbVar2,&DAT_018ae9c4);
    }
    uVar8 = *(uint *)(param_2[0x15] + (int)local_30 * 4);
    iVar3 = 0;
    iVar9 = extraout_r2;
    if ((uVar8 == 0) || (uVar8 < (uint)param_2[2])) {
LAB_013b69d4:
      *param_1 = 0;
      param_1[1] = iVar9;
      param_1[2] = (int)pbVar16;
      return;
    }
    uVar6 = param_2[3];
    if (uVar8 <= uVar6) {
      if (param_2[0x5e] == 1) {
        *param_1 = 1;
        param_1[1] = 0;
        param_1[2] = 0;
        return;
      }
      uVar5 = param_2[0x5a];
      uVar6 = uVar8 - param_2[2] >> (param_2[0x57] & 0x1f);
      uVar8 = uVar6 << 1;
      if (uVar5 <= uVar6 * 2) goto LAB_013b6d44;
      uVar8 = uVar8 | 1;
      if (uVar5 <= uVar8) goto LAB_013b6d50;
      uVar5 = *(uint *)(param_2[0x59] + uVar6 * 8);
      uVar8 = *(uint *)(param_2[0x59] + uVar8 * 4);
      if ((!CARRY4(uVar8,uVar5)) && (uVar8 + uVar5 <= (uint)param_2[0x5d])) {
        pbVar16 = (byte *)0x0;
        goto LAB_013b6b58;
      }
      goto LAB_013b6ca4;
    }
  }
  else {
    pbVar1 = pbVar16 + -1;
    if (*(byte **)(param_3 + 0xc) <= pbVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(pbVar1,*(byte **)(param_3 + 0xc),&DAT_01893a80);
    }
    pbVar2 = (byte *)param_2[0x16];
    local_30 = local_30 + *(byte *)((int)param_2 + pbVar1[*(int *)(param_3 + 8)] + 0x5c);
    if (pbVar2 <= local_30) {
LAB_013b6d1c:
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(local_30,pbVar2,&DAT_018936f0);
    }
    uVar6 = *(uint *)(param_2[0x15] + (int)local_30 * 4);
    if (((uVar6 == 0) || (uVar6 < (uint)param_2[2])) || ((uint)param_2[3] < uVar6)) {
      iVar3 = 0;
      iVar9 = 0;
      if (uVar6 == 0) goto LAB_013b69d4;
      if (param_2[1] == uVar6) {
        *param_1 = 2;
        param_1[1] = 1;
        param_1[2] = (int)pbVar1;
        return;
      }
    }
    else {
      if (param_2[0x5e] != 1) {
        uVar5 = param_2[0x5a];
        uVar6 = uVar6 - param_2[2] >> (param_2[0x57] & 0x1f);
        uVar8 = uVar6 << 1;
        if (uVar5 <= uVar6 * 2) {
LAB_013b6d44:
                    /* WARNING: Subroutine does not return */
          FUN_00faa4a4(uVar8,uVar5,&DAT_01894868);
        }
        uVar8 = uVar8 | 1;
        if (uVar5 <= uVar8) {
LAB_013b6d50:
                    /* WARNING: Subroutine does not return */
          FUN_00faa4a4(uVar8,uVar5,&DAT_01894878);
        }
        uVar5 = *(uint *)(param_2[0x59] + uVar6 * 8);
        uVar8 = *(uint *)(param_2[0x59] + uVar8 * 4);
        if ((!CARRY4(uVar8,uVar5)) && (uVar8 + uVar5 <= (uint)param_2[0x5d])) {
LAB_013b6b58:
          if (uVar8 != 0) {
            iVar9 = *(int *)(param_2[0x5c] + uVar5 * 4);
            *param_1 = 1;
            param_1[1] = iVar9;
            param_1[2] = (int)pbVar16;
            return;
          }
LAB_013b6ce4:
                    /* WARNING: Subroutine does not return */
          FUN_00faa4a4(0,0,&DAT_01894818);
        }
LAB_013b6ca4:
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c();
      }
      iVar3 = 1;
      uVar6 = 0;
    }
  }
  *param_1 = iVar3;
  param_1[1] = uVar6;
  param_1[2] = (int)pbVar16;
  return;
}

