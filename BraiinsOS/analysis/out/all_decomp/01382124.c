// FUN_01382124 @ 01382124 size=1544 calls_out=4 calls_in=2
// strings: byte slice lengths must be less than usize MAX

/* WARNING: Removing unreachable block (ram,0x01383840) */
/* WARNING: Removing unreachable block (ram,0x0138386c) */

void FUN_01382124(int *param_1,int *param_2,int *param_3,int *param_4,undefined4 param_5,int param_6
                 )

{
  byte bVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  char *pcVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  code *pcVar16;
  uint uVar17;
  uint *puVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int *local_90;
  int local_8c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint *local_3c;
  code *local_38;
  uint *local_34;
  code *local_30;
  uint *local_2c;
  code *local_28;
  
  uVar17 = param_4[4];
  uVar14 = param_4[5];
  param_3[0x1a] = param_6;
  param_3[0x15] = 0;
  param_3[0xe] = param_6;
  param_3[9] = 0;
  param_3[2] = 0;
  if (uVar14 < uVar17) {
    *param_1 = 0;
    return;
  }
  iVar21 = param_4[3];
  if (iVar21 == -1) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478("byte slice lengths must be less than usize MAX",0x5d,&DAT_01892c10);
  }
  iVar19 = *param_2;
  if (*param_4 == 0) {
    local_8c = *(int *)(iVar19 + 0x128);
    local_90 = (int *)0x0;
    if (local_8c == *(int *)(iVar19 + 300)) {
      bVar1 = 1;
    }
    else {
      pcVar10 = "";
      if ((char)param_2[4] != '\x03') {
        pcVar10 = (char *)(param_2 + 1);
      }
      local_90 = (int *)0x0;
      if ((char)*(int *)((int)pcVar10 + 0xc) != '\x02') {
        local_90 = (int *)pcVar10;
      }
      bVar1 = 0;
    }
  }
  else {
    if (*param_4 == 1) {
      local_8c = *(int *)(iVar19 + 0x128);
    }
    else {
      if (*(uint *)(iVar19 + 0x154) <= (uint)param_4[1]) {
        *param_1 = 0;
        return;
      }
      local_8c = *(int *)(*(int *)(iVar19 + 0x150) + param_4[1] * 4);
    }
    local_90 = (int *)0x0;
    bVar1 = 1;
  }
  bVar6 = *(byte *)(param_2 + 5) != 2 & ~*(byte *)(param_2 + 5) & 1;
  iVar2 = param_4[6];
  iVar20 = 0;
  iVar7 = param_4[2];
  param_6 = param_6 << 2;
  iVar8 = 0;
  *param_1 = 0;
  pcVar16 = (code *)uVar17;
  do {
    if (iVar8 == 0) {
      if ((bool)(bVar1 & uVar17 < pcVar16)) {
        return;
      }
      if (bVar6 == 0 && iVar20 != 0) {
        return;
      }
      if (local_90 == (int *)0x0) goto LAB_01382288;
      (**(code **)(local_90[1] + 0x10))
                (&local_3c,*local_90 + (*(int *)(local_90[1] + 8) - 1U & 0xfffffff8) + 8,iVar7,
                 iVar21,pcVar16,uVar14,param_6);
      if (local_3c == (uint *)0x0) {
        return;
      }
      pcVar16 = local_38;
    }
    else {
LAB_01382288:
    }
    if ((!(bool)(bVar1 & pcVar16 != (code *)uVar17)) && (bVar6 != 0 || iVar20 == 0)) {
      uVar9 = param_3[0x18];
      uVar15 = param_3[0x1a];
      if (uVar9 < uVar15) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(uVar9 - uVar15,uVar9,uVar9,&DAT_01892c80);
      }
      iVar8 = param_3[2];
      iVar20 = param_3[0x17];
      if (iVar8 == *param_3) {
        FUN_013c402c(param_3);
      }
      puVar3 = (undefined4 *)(param_3[1] + iVar8 * 0xc);
      *puVar3 = 0;
      puVar3[1] = local_8c;
      iVar4 = iVar8 + 1;
      param_3[2] = iVar4;
      if (iVar8 != -1) {
        do {
          param_3[2] = iVar4 + -1;
          puVar18 = (uint *)(param_3[1] + (iVar4 + -1) * 0xc);
          uVar11 = puVar18[1];
          if ((*puVar18 & 1) == 0) {
            local_48 = uVar11;
            if ((uint)param_3[8] <= uVar11) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa4a4(uVar11,param_3[8],&DAT_01894268);
            }
            local_40 = param_3[5];
            local_44 = param_3[9];
            uVar5 = *(uint *)(param_3[7] + uVar11 * 4);
            if (local_44 <= uVar5) {
LAB_0138395c:
              if (local_40 <= local_44) {
                local_2c = &local_48;
                local_34 = &local_40;
                local_3c = &local_44;
                local_28 = FUN_013bc8e0;
                local_30 = FUN_007883b8;
                local_38 = FUN_007883b8;
                    /* WARNING: Subroutine does not return */
                FUN_00faa478(&DAT_0058f9b7,&local_3c,&DAT_01894248);
              }
              *(uint *)(param_3[4] + local_44 * 4) = uVar11;
              if ((uint)param_3[8] <= uVar11) {
                    /* WARNING: Subroutine does not return */
                FUN_00faa4a4(uVar11,param_3[8],&DAT_01894258);
              }
              *(uint *)(param_3[7] + uVar11 * 4) = local_44;
              param_3[9] = param_3[9] + 1;
              if (*(uint *)(iVar19 + 0x148) <= uVar11) {
                    /* WARNING: Subroutine does not return */
                FUN_00faa4a4(uVar11,*(uint *)(iVar19 + 0x148),&DAT_01894288);
              }
                    /* WARNING: Could not recover jumptable at 0x013839b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)(&DAT_013839b8 +
                        *(int *)(&DAT_013839b8 +
                                *(int *)(*(int *)(iVar19 + 0x144) + uVar11 * 0x14) * 4)))();
              return;
            }
            if (local_40 <= uVar5) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa4a4(uVar5,local_40,&DAT_01894278);
            }
            if (*(uint *)(param_3[4] + uVar5 * 4) != uVar11) goto LAB_0138395c;
          }
          else {
            if (uVar15 <= uVar11) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa4a4(uVar11,uVar15,&DAT_01892c20);
            }
            *(uint *)(iVar20 + (uVar9 - uVar15) * 4 + uVar11 * 4) = puVar18[2];
          }
          iVar4 = param_3[2];
        } while (iVar4 != 0);
      }
    }
    uVar9 = param_3[9];
    if ((uint)param_3[5] < uVar9) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(0,uVar9,param_3[5],&DAT_01894298);
    }
    puVar18 = (uint *)param_3[4];
    pcVar16 = (code *)((int)pcVar16 + 1);
    if (puVar18 != puVar18 + uVar9) {
      uVar14 = *puVar18;
      if (*(uint *)(iVar19 + 0x148) <= uVar14) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar14,*(uint *)(iVar19 + 0x148),&DAT_01894288);
      }
                    /* WARNING: Could not recover jumptable at 0x013823ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&DAT_013823f0 +
                *(int *)(&DAT_013823f0 + *(int *)(*(int *)(iVar19 + 0x144) + uVar14 * 0x14) * 4)))()
      ;
      return;
    }
    iVar20 = *param_1;
    if (((char)iVar2 != '\0') && (iVar20 != 0)) {
      return;
    }
    iVar13 = param_3[0xf];
    iVar4 = param_3[5];
    param_3[5] = param_3[0x11];
    iVar12 = param_3[0x10];
    param_3[0xf] = param_3[3];
    iVar8 = param_3[0x12];
    param_3[0x10] = param_3[4];
    param_3[0x11] = iVar4;
    param_3[0x12] = param_3[6];
    param_3[6] = iVar8;
    iVar8 = param_3[0x14];
    param_3[0x14] = param_3[8];
    iVar4 = param_3[0x16];
    param_3[0x16] = param_3[10];
    param_3[10] = iVar4;
    iVar4 = param_3[0x17];
    param_3[0x17] = param_3[0xb];
    param_3[0xb] = iVar4;
    iVar4 = param_3[0x18];
    param_3[0x18] = param_3[0xc];
    param_3[8] = iVar8;
    iVar8 = param_3[0x15];
    param_3[0xc] = iVar4;
    iVar4 = param_3[0x19];
    param_3[0x19] = param_3[0xd];
    param_3[0xd] = iVar4;
    iVar4 = param_3[0x1a];
    param_3[0x1a] = param_3[0xe];
    param_3[3] = iVar13;
    param_3[4] = iVar12;
    iVar12 = param_3[7];
    param_3[7] = param_3[0x13];
    param_3[0x13] = iVar12;
    param_3[9] = iVar8;
    param_3[0xe] = iVar4;
    param_3[0x15] = 0;
    if (uVar14 < pcVar16) {
      return;
    }
  } while( true );
}

