// FUN_01385768 @ 01385768 size=1244 calls_out=4 calls_in=4
// strings: byte slice lengths must be less than usize MAX

void FUN_01385768(int param_1,byte param_2,int *param_3,int *param_4,int param_5)

{
  bool bVar1;
  int iVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint *puVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  int local_88;
  uint local_48;
  uint local_44;
  uint local_40;
  uint *local_3c;
  code *local_38;
  uint *local_34;
  code *local_30;
  uint *local_2c;
  code *local_28;
  
  uVar11 = param_4[4];
  uVar16 = param_4[5];
  param_3[0x1a] = 0;
  param_3[0x15] = 0;
  param_3[0xe] = 0;
  param_3[9] = 0;
  param_3[2] = 0;
  if (uVar16 < uVar11) {
    return;
  }
  if (param_4[3] == -1) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478("byte slice lengths must be less than usize MAX",0x5d,&DAT_01892c40);
  }
  if (*param_4 == 0) {
    local_88 = *(int *)(param_1 + 0x128);
    bVar1 = local_88 == *(int *)(param_1 + 300);
  }
  else {
    if (*param_4 == 1) {
      local_88 = *(int *)(param_1 + 0x128);
    }
    else {
      if (*(uint *)(param_1 + 0x154) <= (uint)param_4[1]) {
        return;
      }
      local_88 = *(int *)(*(int *)(param_1 + 0x150) + param_4[1] * 4);
    }
    bVar1 = true;
  }
  bVar3 = param_2 != 2 & ~param_2 & 1;
  iVar8 = *(int *)(param_5 + 8);
  iVar2 = param_4[6];
  iVar5 = 0;
  uVar15 = uVar11;
  do {
    if (iVar5 == 0) {
      bVar4 = (bool)(bVar1 & uVar11 < uVar15);
      if (iVar8 == 0) {
        if (bVar4) {
          return;
        }
      }
      else if (bVar3 != 1 || bVar4) {
        return;
      }
LAB_013858e4:
      iVar5 = param_3[2];
      if (iVar5 == *param_3) {
        FUN_013c402c(param_3);
      }
      puVar6 = (undefined4 *)(param_3[1] + iVar5 * 0xc);
      *puVar6 = 0;
      puVar6[1] = local_88;
      iVar12 = iVar5 + 1;
      param_3[2] = iVar12;
      if (iVar5 != -1) {
        do {
          param_3[2] = iVar12 + -1;
          puVar10 = (uint *)(param_3[1] + (iVar12 + -1) * 0xc);
          uVar9 = puVar10[1];
          if ((*puVar10 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa4a4(uVar9,0,&DAT_01892c20);
          }
          local_48 = uVar9;
          if ((uint)param_3[8] <= uVar9) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa4a4(uVar9,param_3[8],&DAT_01894268);
          }
          local_40 = param_3[5];
          local_44 = param_3[9];
          uVar7 = *(uint *)(param_3[7] + uVar9 * 4);
          if (local_44 <= uVar7) {
LAB_01386fdc:
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
            *(uint *)(param_3[4] + local_44 * 4) = uVar9;
            if ((uint)param_3[8] <= uVar9) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa4a4(uVar9,param_3[8],&DAT_01894258);
            }
            *(uint *)(param_3[7] + uVar9 * 4) = local_44;
            uVar11 = *(uint *)(param_1 + 0x148);
            param_3[9] = param_3[9] + 1;
            if (uVar11 <= uVar9) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa4a4(uVar9,uVar11,&DAT_01894288);
            }
                    /* WARNING: Could not recover jumptable at 0x01387030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)(&DAT_01387034 +
                      *(int *)(&DAT_01387034 +
                              *(int *)(*(int *)(param_1 + 0x144) + uVar9 * 0x14) * 4)))();
            return;
          }
          if (local_40 <= uVar7) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa4a4(uVar7,local_40,&DAT_01894278);
          }
          if (*(uint *)(param_3[4] + uVar7 * 4) != uVar9) goto LAB_01386fdc;
          iVar12 = param_3[2];
        } while (iVar12 != 0);
      }
    }
    else if (bVar3 != 0 || iVar8 == 0) goto LAB_013858e4;
    uVar9 = param_3[9];
    if ((uint)param_3[5] < uVar9) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(0,uVar9,param_3[5],&DAT_01894298);
    }
    if (uVar9 != 0) {
      uVar11 = *(uint *)param_3[4];
      if (*(uint *)(param_1 + 0x148) <= uVar11) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar11,*(uint *)(param_1 + 0x148),&DAT_01894288);
      }
                    /* WARNING: Could not recover jumptable at 0x01385998. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&DAT_0138599c +
                *(int *)(&DAT_0138599c + *(int *)(*(int *)(param_1 + 0x144) + uVar11 * 0x14) * 4)))
                ();
      return;
    }
    if (iVar8 == *(int *)(param_5 + 4)) {
      return;
    }
    if ((char)iVar2 != '\0') {
      return;
    }
    iVar17 = param_3[0xf];
    iVar14 = param_3[0x10];
    iVar5 = param_3[6];
    param_3[0xf] = param_3[3];
    param_3[6] = param_3[0x12];
    iVar13 = param_3[0x11];
    param_3[0x10] = param_3[4];
    param_3[0x11] = param_3[5];
    param_3[0x12] = iVar5;
    iVar5 = param_3[8];
    param_3[8] = param_3[0x14];
    iVar12 = param_3[0x16];
    param_3[0x16] = param_3[10];
    param_3[10] = iVar12;
    iVar12 = param_3[0x17];
    param_3[0x17] = param_3[0xb];
    param_3[4] = iVar14;
    param_3[0xb] = iVar12;
    iVar12 = param_3[0x18];
    param_3[0x18] = param_3[0xc];
    param_3[3] = iVar17;
    iVar14 = param_3[7];
    param_3[7] = param_3[0x13];
    param_3[0x14] = iVar5;
    iVar5 = param_3[0x15];
    param_3[0xc] = iVar12;
    iVar12 = param_3[0x19];
    param_3[0x19] = param_3[0xd];
    param_3[0xd] = iVar12;
    iVar12 = param_3[0x1a];
    param_3[0x1a] = param_3[0xe];
    param_3[5] = iVar13;
    param_3[0x13] = iVar14;
    param_3[9] = iVar5;
    param_3[0xe] = iVar12;
    param_3[0x15] = 0;
    if (uVar16 <= uVar15) {
      return;
    }
    uVar15 = uVar15 + (uVar15 < uVar16);
    if (uVar16 < uVar15) {
      return;
    }
  } while( true );
}

