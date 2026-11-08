// FUN_012b1340 @ 012b1340 size=576 calls_out=7 calls_in=1
// strings: 

void FUN_012b1340(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 *local_60;
  undefined4 *local_5c;
  int local_58;
  undefined4 *local_54;
  int local_50;
  undefined4 *local_4c;
  undefined4 local_48;
  undefined4 *local_44;
  undefined4 *local_40;
  undefined4 *local_3c;
  int local_38;
  int local_30;
  undefined4 *local_2c;
  int local_28;
  
  local_68 = 0;
  local_6c = 4;
  local_70 = 0;
  puVar3 = (undefined4 *)*param_2;
  puVar4 = (undefined4 *)param_2[1];
  local_58 = param_2[2];
  puVar11 = (undefined4 *)param_2[3];
  iVar14 = param_2[4];
  local_4c = (undefined4 *)param_2[5];
  local_48 = param_2[6];
  puVar5 = (undefined4 *)param_2[7];
  puVar7 = (undefined4 *)param_2[8];
  puVar12 = (undefined4 *)param_2[9];
  iVar15 = param_2[10];
  puVar8 = local_4c;
  iVar17 = local_58;
  local_60 = puVar3;
  local_5c = puVar4;
  local_54 = puVar11;
  local_50 = iVar14;
  local_44 = puVar5;
  local_40 = puVar7;
  local_3c = puVar12;
  local_38 = iVar15;
  do {
    puVar10 = puVar7;
    iVar16 = iVar17;
    puVar2 = puVar4;
    if (puVar3 == (undefined4 *)0x0) goto LAB_012b13f4;
    while (iVar16 = iVar17, puVar2 == puVar11) {
      FUN_0134aee0(iVar17,puVar3,4,8);
      local_60 = (undefined4 *)0x0;
      puVar11 = puVar2;
      puVar10 = puVar7;
      puVar4 = puVar2;
LAB_012b13f4:
      if (puVar10 == (undefined4 *)0x0) {
        puVar7 = (undefined4 *)0x0;
LAB_012b1474:
        if (iVar14 != 0) {
          if (puVar8 != puVar5) {
            puVar10 = puVar8 + 2;
            puVar3 = (undefined4 *)0x0;
            puVar2 = puVar8;
            local_4c = puVar10;
            goto LAB_012b14a0;
          }
          FUN_0134aee0(local_48,iVar14,4,8);
          local_50 = 0;
        }
        FUN_012b15b0(&local_60);
        *param_1 = local_70;
        param_1[1] = local_6c;
        param_1[2] = local_68;
        return;
      }
      puVar7 = puVar10;
      if (puVar10 == puVar12) goto LAB_012b1474;
      puVar7 = puVar10 + 2;
      iVar13 = *(int *)(iVar15 + 0x6c);
      uVar6 = *puVar10;
      iVar9 = puVar10[1];
      puVar3 = (undefined4 *)(iVar13 + 0x24);
      local_40 = puVar7;
      for (iVar17 = *(int *)(iVar15 + 0x70) * 0x30; iVar17 != 0; iVar17 = iVar17 + -0x30) {
        if ((*(int *)(iVar13 + 0x28) == iVar9) &&
           (iVar1 = thunk_FUN_01bed842(*puVar3,uVar6,iVar9), iVar1 == 0)) {
          FUN_012a7da0(&local_30,iVar15,puVar10);
          iVar17 = local_30;
          iVar9 = local_28;
          puVar3 = local_2c;
          if (local_30 == -0x80000000) goto LAB_012b1474;
          goto LAB_012b14e0;
        }
        iVar13 = iVar13 + 0x30;
        puVar3 = puVar3 + 0xc;
      }
      puVar3 = (undefined4 *)thunk_FUN_01be5118(8);
      if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(4,8);
      }
      *puVar3 = uVar6;
      puVar3[1] = iVar9;
      iVar9 = 1;
      iVar17 = 1;
LAB_012b14e0:
      puVar11 = puVar3 + iVar9 * 2;
      local_60 = puVar3;
      local_5c = puVar3;
      local_58 = iVar17;
      local_54 = puVar11;
      puVar2 = puVar3;
    }
    puVar4 = puVar2 + 2;
    puVar10 = puVar8;
    local_5c = puVar4;
LAB_012b14a0:
    FUN_012b12c0(&local_70,*puVar2,puVar2[1]);
    puVar8 = puVar10;
    iVar17 = iVar16;
  } while( true );
}

