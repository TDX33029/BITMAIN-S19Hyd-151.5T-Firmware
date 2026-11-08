// FUN_012b8dec @ 012b8dec size=752 calls_out=6 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_012b8dec(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  int iVar17;
  uint uVar18;
  int local_70;
  int local_60;
  int local_50;
  int local_4c;
  int local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  puVar15 = *(undefined4 **)(param_2 + 4);
  iVar6 = *(int *)(param_2 + 8);
  uVar13 = 0;
  local_48 = 0;
  local_4c = 4;
  local_50 = 0;
  for (iVar10 = iVar6 << 3; iVar10 != 0; iVar10 = iVar10 + -8) {
    if ((puVar15[uVar13 * 2 + 1] == param_5) &&
       (iVar1 = thunk_FUN_01bed842(puVar15[uVar13 * 2],param_4,param_5), iVar1 == 0)) {
      uVar18 = *(uint *)(param_2 + 0x14);
      if (uVar18 <= uVar13) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar13,uVar18,&DAT_01ce2514);
      }
      iVar1 = *(int *)(param_2 + 0x10);
      puVar2 = (undefined4 *)(iVar1 + uVar13 * 0xc);
      goto LAB_012b8ed4;
    }
    uVar13 = uVar13 + 1;
  }
  FUN_012b6a2c(&local_30,param_3,param_4,param_5);
  puVar2 = &local_40;
  local_40 = local_30;
  local_3c = uStack_2c;
  uStack_38 = uStack_28;
  iVar1 = *(int *)(param_2 + 0x10);
  uVar18 = *(uint *)(param_2 + 0x14);
LAB_012b8ed4:
  iVar3 = puVar2[1];
  iVar7 = puVar2[2];
  local_60 = 0;
  local_70 = 4;
  puVar2 = puVar15;
  iVar11 = iVar1;
LAB_012b8f10:
  iVar17 = iVar11;
  puVar16 = puVar2;
  if (puVar16 == puVar15 + iVar6 * 2) {
    *param_1 = local_50;
    param_1[1] = local_4c;
    param_1[2] = local_48;
    if (iVar10 == 0) {
      FUN_0134aee0(local_40,local_3c,4,8);
      return;
    }
    return;
  }
  if (iVar17 == iVar1 + uVar18 * 0xc) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0cc(&DAT_01ce24b4);
  }
  iVar8 = puVar16[1];
  if (param_5 == iVar8) goto code_r0x012b8f3c;
  goto LAB_012b8f5c;
code_r0x012b8f3c:
  iVar4 = thunk_FUN_01bed842(param_4,*puVar16,param_5);
  puVar2 = puVar16 + 2;
  iVar11 = iVar17 + 0xc;
  if (iVar4 != 0) {
LAB_012b8f5c:
    piVar9 = (int *)(iVar3 + 4);
    for (iVar11 = iVar7 << 3; iVar11 != 0; iVar11 = iVar11 + -8) {
      if (*piVar9 == iVar8) {
        uVar14 = *puVar16;
        iVar4 = thunk_FUN_01bed842(piVar9[-1],uVar14,iVar8);
        if (iVar4 == 0) {
          if (local_60 == local_50) {
            FUN_015f5ab8(&local_50);
            local_70 = local_4c;
          }
          puVar2 = (undefined4 *)(local_70 + local_60 * 8);
          *puVar2 = uVar14;
          local_60 = local_60 + 1;
          puVar2[1] = iVar8;
          local_48 = local_60;
          break;
        }
      }
      piVar9 = piVar9 + 2;
    }
    piVar9 = (int *)(*(int *)(iVar17 + 4) + 4);
    iVar8 = *(int *)(iVar17 + 8) << 3;
    while( true ) {
      puVar2 = puVar16 + 2;
      iVar11 = iVar17 + 0xc;
      if (iVar8 == 0) break;
      if ((*piVar9 == param_5) &&
         (iVar4 = thunk_FUN_01bed842(piVar9[-1],param_4,param_5), iVar4 == 0)) {
        uVar14 = *puVar16;
        uVar12 = puVar16[1];
        if (local_60 == local_50) {
          FUN_015f5ab8(&local_50);
        }
        local_70 = local_4c;
        puVar5 = (undefined4 *)(local_4c + local_60 * 8);
        *puVar5 = uVar14;
        local_60 = local_60 + 1;
        puVar5[1] = uVar12;
        local_48 = local_60;
        break;
      }
      piVar9 = piVar9 + 2;
      iVar8 = iVar8 + -8;
    }
  }
  goto LAB_012b8f10;
}

