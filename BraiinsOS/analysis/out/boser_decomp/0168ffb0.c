// FUN_0168ffb0 @ 0168ffb0 size=1152 calls_out=4 calls_in=4
// strings: 

void FUN_0168ffb0(int param_1,byte param_2,int *param_3,int *param_4,int param_5)

{
  bool bVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  undefined4 *puVar5;
  uint *puVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int local_90;
  uint local_6c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint *local_3c;
  undefined1 *local_38;
  uint *local_34;
  undefined1 *local_30;
  uint *local_2c;
  code *local_28;
  
  uVar9 = param_4[4];
  uVar12 = param_4[5];
  param_3[0x1a] = 0;
  param_3[0x15] = 0;
  param_3[0xe] = 0;
  param_3[9] = 0;
  param_3[2] = 0;
  if (uVar12 < uVar9) {
    return;
  }
  if (param_4[3] == -1) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb100(&DAT_004ce269,0x5d,&DAT_01d0799c);
  }
  if (*param_4 == 0) {
    local_90 = *(int *)(param_1 + 0x128);
    bVar1 = local_90 == *(int *)(param_1 + 300);
  }
  else {
    if (*param_4 == 1) {
      local_90 = *(int *)(param_1 + 0x128);
    }
    else {
      if (*(uint *)(param_1 + 0x154) <= (uint)param_4[1]) {
        return;
      }
      local_90 = *(int *)(*(int *)(param_1 + 0x150) + param_4[1] * 4);
    }
    bVar1 = true;
  }
  iVar4 = *(int *)(param_5 + 8);
  iVar2 = param_4[6];
  local_6c = uVar9;
  do {
    if (param_3[9] == 0) {
      bVar3 = (bool)(bVar1 & uVar9 < local_6c);
      if (iVar4 == 0) {
        if (bVar3) {
          return;
        }
      }
      else if ((param_2 == 2 || (param_2 & 1) != 0) || bVar3) {
        return;
      }
LAB_01690134:
      iVar10 = param_3[2];
      if (iVar10 == *param_3) {
        FUN_018c4418(param_3);
      }
      puVar5 = (undefined4 *)(param_3[1] + iVar10 * 0xc);
      *puVar5 = 0;
      puVar5[1] = local_90;
      iVar8 = iVar10 + 1;
      param_3[2] = iVar8;
      if (iVar10 != -1) {
        do {
          puVar6 = (uint *)(param_3[1] + (iVar8 + -1) * 0xc);
          uVar7 = *puVar6;
          uVar11 = puVar6[1];
          param_3[2] = iVar8 + -1;
          if (uVar7 == 2) break;
          if ((uVar7 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb12c(uVar11,0,&DAT_01d0797c);
          }
          local_48 = uVar11;
          if ((uint)param_3[8] <= uVar11) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb12c(uVar11,param_3[8],&DAT_01d08af8);
          }
          local_40 = param_3[5];
          local_44 = param_3[9];
          uVar7 = *(uint *)(param_3[7] + uVar11 * 4);
          if (local_44 <= uVar7) {
LAB_016901ec:
            if (local_40 <= local_44) {
              local_2c = &local_48;
              local_34 = &local_40;
              local_3c = &local_44;
              local_28 = FUN_016cbc48;
              local_30 = &LAB_01a6a304;
              local_38 = &LAB_01a6a304;
                    /* WARNING: Subroutine does not return */
              FUN_012fb100(&DAT_0058fcf7,&local_3c,&DAT_01d08ae8);
            }
            *(uint *)(param_3[4] + local_44 * 4) = uVar11;
            if ((uint)param_3[8] <= uVar11) {
                    /* WARNING: Subroutine does not return */
              FUN_012fb12c(uVar11,param_3[8],&DAT_01d07c6c);
            }
            *(uint *)(param_3[7] + uVar11 * 4) = local_44;
            uVar9 = *(uint *)(param_1 + 0x148);
            param_3[9] = param_3[9] + 1;
            if (uVar9 <= uVar11) {
                    /* WARNING: Subroutine does not return */
              FUN_012fb12c(uVar11,uVar9,&DAT_01d08b38);
            }
                    /* WARNING: Could not recover jumptable at 0x01690240. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)(&LAB_01690244 +
                      *(int *)(&LAB_01690244 +
                              *(int *)(*(int *)(param_1 + 0x144) + uVar11 * 0x14) * 4)))();
            return;
          }
          if (local_40 <= uVar7) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb12c(uVar7,local_40,&DAT_01d08b08);
          }
          if (*(uint *)(param_3[4] + uVar7 * 4) != uVar11) goto LAB_016901ec;
          iVar8 = param_3[2];
        } while (iVar8 != 0);
      }
    }
    else if ((iVar4 != 0 & (param_2 == 2 | param_2)) == 0) goto LAB_01690134;
    uVar7 = param_3[9];
    if ((uint)param_3[5] < uVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(0,uVar7,param_3[5],&DAT_01d07c5c);
    }
    if (uVar7 != 0) {
      uVar9 = *(uint *)param_3[4];
      if (*(uint *)(param_1 + 0x148) <= uVar9) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar9,*(uint *)(param_1 + 0x148),&DAT_01d08b38);
      }
                    /* WARNING: Could not recover jumptable at 0x01690744. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&DAT_01690748 +
                *(int *)(&DAT_01690748 + *(int *)(*(int *)(param_1 + 0x144) + uVar9 * 0x14) * 4)))()
      ;
      return;
    }
    if (iVar4 == *(int *)(param_5 + 4)) {
      return;
    }
    if ((char)iVar2 != '\0') {
      return;
    }
    uVar7 = local_6c + (local_6c < uVar12);
    iVar10 = 0;
    do {
      iVar8 = iVar10 + 1;
      iVar13 = param_3[iVar10 + 0xf];
      param_3[iVar10 + 0xf] = param_3[iVar10 + 3];
      param_3[iVar10 + 3] = iVar13;
      iVar10 = iVar8;
    } while (iVar8 != 0xc);
    param_3[0x15] = 0;
    if (uVar12 <= local_6c) {
      return;
    }
    local_6c = uVar7;
    if (uVar12 < uVar7) {
      return;
    }
  } while( true );
}

