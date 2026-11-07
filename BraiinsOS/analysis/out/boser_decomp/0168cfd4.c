// FUN_0168cfd4 @ 0168cfd4 size=1424 calls_out=4 calls_in=2
// strings: 

/* WARNING: Removing unreachable block (ram,0x0168d15c) */
/* WARNING: Removing unreachable block (ram,0x0168eb5c) */
/* WARNING: Removing unreachable block (ram,0x0168ec3c) */

void FUN_0168cfd4(undefined4 *param_1,int *param_2,int *param_3,int *param_4,undefined4 param_5,
                 int param_6)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  char *pcVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  undefined4 local_a8;
  undefined4 local_a4;
  int *local_a0;
  int local_94;
  uint local_50;
  uint local_48;
  uint local_44;
  uint local_40;
  uint *local_3c;
  undefined1 *local_38;
  uint *local_34;
  undefined1 *local_30;
  uint *local_2c;
  code *local_28;
  
  uVar13 = param_4[4];
  uVar10 = param_4[5];
  param_3[0x1a] = param_6;
  param_3[0x15] = 0;
  param_3[0xe] = param_6;
  param_3[9] = 0;
  param_3[2] = 0;
  if (uVar10 < uVar13) {
    *param_1 = 0;
  }
  else {
    iVar9 = param_4[3];
    if (iVar9 == -1) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb100(&DAT_004ce269,0x5d,&DAT_01d0796c);
    }
    iVar2 = param_4[2];
    iVar16 = *param_2;
    if (*param_4 == 0) {
      local_94 = *(int *)(iVar16 + 0x128);
      if (local_94 == *(int *)(iVar16 + 300)) {
        bVar1 = true;
        local_a0 = (int *)0x0;
      }
      else {
        bVar1 = false;
        pcVar14 = "";
        if ((char)param_2[4] != '\x03') {
          pcVar14 = (char *)(param_2 + 1);
        }
        local_a0 = (int *)0x0;
        if ((char)*(int *)((int)pcVar14 + 0xc) != '\x02') {
          local_a0 = (int *)pcVar14;
        }
      }
    }
    else {
      if (*param_4 == 1) {
        local_94 = *(int *)(iVar16 + 0x128);
      }
      else {
        if (*(uint *)(iVar16 + 0x154) <= (uint)param_4[1]) {
          *param_1 = 0;
          return;
        }
        local_94 = *(int *)(*(int *)(iVar16 + 0x150) + param_4[1] * 4);
      }
      local_a0 = (int *)0x0;
      bVar1 = true;
    }
    local_50 = uVar13;
    do {
      if (param_3[9] == 0) {
        if ((bool)(uVar13 < local_50 & bVar1)) break;
        if (local_a0 != (int *)0x0) {
          (**(code **)(local_a0[1] + 0x10))
                    (&local_3c,*local_a0 + (*(int *)(local_a0[1] + 8) - 1U & 0xfffffff8) + 8,iVar2,
                     iVar9,local_50,uVar10);
          if (local_3c != (uint *)0x1) break;
          local_50 = (uint)local_38;
        }
      }
      if (local_50 == uVar13 || !bVar1) {
        uVar6 = param_3[0x18];
        uVar17 = param_3[0x1a];
        if (uVar6 < uVar17) {
                    /* WARNING: Subroutine does not return */
          FUN_012faff4(uVar6 - uVar17,uVar6,uVar6,&DAT_01d079dc);
        }
        iVar11 = param_3[2];
        iVar15 = param_3[0x17];
        if (iVar11 == *param_3) {
          FUN_018c4418(param_3);
        }
        puVar3 = (undefined4 *)(param_3[1] + iVar11 * 0xc);
        *puVar3 = 0;
        puVar3[1] = local_94;
        iVar4 = iVar11 + 1;
        param_3[2] = iVar4;
        if (iVar11 != -1) {
          do {
            puVar7 = (uint *)(param_3[1] + (iVar4 + -1) * 0xc);
            uVar5 = *puVar7;
            uVar12 = puVar7[1];
            uVar8 = puVar7[2];
            param_3[2] = iVar4 + -1;
            if (uVar5 == 2) break;
            if ((uVar5 & 1) == 0) {
              local_48 = uVar12;
              if ((uint)param_3[8] <= uVar12) {
                    /* WARNING: Subroutine does not return */
                FUN_012fb12c(uVar12,param_3[8],&DAT_01d08af8);
              }
              local_40 = param_3[5];
              local_44 = param_3[9];
              uVar5 = *(uint *)(param_3[7] + uVar12 * 4);
              if (local_44 <= uVar5) {
LAB_0168d27c:
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
                *(uint *)(param_3[4] + local_44 * 4) = uVar12;
                if ((uint)param_3[8] <= uVar12) {
                    /* WARNING: Subroutine does not return */
                  FUN_012fb12c(uVar12,param_3[8],&DAT_01d07c6c);
                }
                *(uint *)(param_3[7] + uVar12 * 4) = local_44;
                param_3[9] = param_3[9] + 1;
                if (*(uint *)(iVar16 + 0x148) <= uVar12) {
                    /* WARNING: Subroutine does not return */
                  FUN_012fb12c(uVar12,*(uint *)(iVar16 + 0x148),&DAT_01d08b38);
                }
                    /* WARNING: Could not recover jumptable at 0x0168d2d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*(code *)(&DAT_0168d2d4 +
                          *(int *)(&DAT_0168d2d4 +
                                  *(int *)(*(int *)(iVar16 + 0x144) + uVar12 * 0x14) * 4)))();
                return;
              }
              if (local_40 <= uVar5) {
                    /* WARNING: Subroutine does not return */
                FUN_012fb12c(uVar5,local_40,&DAT_01d08b08);
              }
              if (*(uint *)(param_3[4] + uVar5 * 4) != uVar12) goto LAB_0168d27c;
            }
            else {
              if (uVar17 <= uVar12) {
                    /* WARNING: Subroutine does not return */
                FUN_012fb12c(uVar12,uVar17,&DAT_01d0797c);
              }
              *(uint *)(iVar15 + (uVar6 - uVar17) * 4 + uVar12 * 4) = uVar8;
            }
            iVar4 = param_3[2];
          } while (iVar4 != 0);
        }
      }
      uVar6 = param_3[9];
      if ((uint)param_3[5] < uVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(0,uVar6,param_3[5],&DAT_01d07c5c);
      }
      if (uVar6 != 0) {
        uVar10 = *(uint *)param_3[4];
        if (*(uint *)(iVar16 + 0x148) <= uVar10) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(uVar10,*(uint *)(iVar16 + 0x148),&DAT_01d08b38);
        }
                    /* WARNING: Could not recover jumptable at 0x0168d83c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&DAT_0168d840 +
                  *(int *)(&DAT_0168d840 + *(int *)(*(int *)(iVar16 + 0x144) + uVar10 * 0x14) * 4)))
                  ();
        return;
      }
      iVar11 = 0;
      do {
        iVar15 = iVar11 + 1;
        iVar4 = param_3[iVar11 + 0xf];
        param_3[iVar11 + 0xf] = param_3[iVar11 + 3];
        param_3[iVar11 + 3] = iVar4;
        iVar11 = iVar15;
      } while (iVar15 != 0xc);
      local_50 = local_50 + 1;
      param_3[0x15] = 0;
    } while (local_50 <= uVar10);
    param_1[1] = local_a4;
    *param_1 = 0;
    param_1[2] = local_a8;
  }
  return;
}

