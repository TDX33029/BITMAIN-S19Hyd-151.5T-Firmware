// FUN_0120fb58 @ 0120fb58 size=1404 calls_out=6 calls_in=0
// strings: 

/* WARNING: Type propagation algorithm not settling */

void FUN_0120fb58(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  char *pcVar1;
  undefined4 uVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 *puVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  uint *puVar14;
  uint uVar15;
  int iVar16;
  undefined4 *puVar17;
  int iVar18;
  uint *puVar19;
  bool bVar20;
  bool bVar21;
  uint *local_84;
  uint local_68;
  uint *local_64;
  uint local_60;
  uint uStack_5c;
  uint uStack_58;
  uint local_54;
  uint uStack_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  uint local_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  
  uVar8 = *(uint *)(param_2 + 8);
  piVar11 = *(int **)(param_2 + 4);
  uVar9 = 0;
  piVar13 = piVar11;
  do {
    while( true ) {
      if (piVar13 == piVar11 + uVar8 * 5) {
        uVar9 = uVar8 * 0x40;
        bVar21 = 0x3fffffe < uVar8;
        bVar20 = uVar8 == 0x3ffffff;
        if (uVar8 < 0x4000000) {
          bVar21 = 0x7ffffffb < uVar9;
          bVar20 = uVar9 == 0x7ffffffc;
        }
        if (!bVar21 || bVar20) {
          if (uVar9 == 0) {
            iVar4 = 4;
            uVar7 = 0;
          }
          else {
            iVar4 = thunk_FUN_016d4a50(uVar9);
            uVar7 = uVar8;
            if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600af4(4,uVar9);
            }
          }
          uVar15 = 0;
          if (uVar8 != 0) {
            uVar15 = 0;
            do {
              FUN_011c9534(&local_68,piVar11,param_3,param_4,param_5,param_6);
              puVar19 = (uint *)(iVar4 + uVar15 * 0x40);
              uVar15 = uVar15 + 1;
              *puVar19 = local_68;
              puVar19[1] = (uint)local_64;
              puVar19[2] = local_60;
              puVar19[3] = uStack_5c;
              puVar19[4] = uStack_58;
              puVar19[5] = local_54;
              puVar19[6] = uStack_50;
              puVar19[7] = uStack_4c;
              puVar19[8] = uStack_48;
              puVar19[9] = uStack_44;
              puVar19[10] = local_40;
              puVar19[0xb] = uStack_3c;
              puVar19[0xc] = uStack_38;
              puVar19[0xd] = uStack_34;
              puVar19[0xe] = uStack_30;
              puVar19[0xf] = uStack_2c;
              piVar11 = piVar11 + 5;
            } while (uVar8 != uVar15);
            uVar15 = uVar8;
          }
          iVar5 = iVar4;
          do {
            if (uVar9 == 0) {
              *param_1 = 0x80000000;
              param_1[1] = uVar7;
              param_1[2] = iVar4;
              param_1[3] = uVar15;
              param_1[4] = 0;
              return;
            }
            pcVar1 = (char *)(iVar5 + 0x3c);
            uVar9 = uVar9 - 0x40;
            iVar5 = iVar5 + 0x40;
          } while (*pcVar1 != '\0');
          *param_1 = 0;
          param_1[1] = 4;
          param_1[2] = 0;
          param_1[3] = uVar7;
          param_1[4] = iVar4;
          param_1[5] = uVar15;
          param_1[6] = 0;
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(0,uVar9);
      }
      piVar12 = piVar13 + 5;
      iVar4 = *piVar13;
      uVar7 = 1;
      if ((int)*(uint *)(iVar4 + 8) < 0) {
        uVar7 = *(uint *)(iVar4 + 8) ^ 0x80000000;
      }
      piVar13 = piVar12;
      if (uVar7 == 0) break;
      if (uVar7 == 1) {
        iVar5 = *(int *)(iVar4 + 0x10);
        puVar17 = *(undefined4 **)(iVar4 + 0xc);
        if (iVar5 == 1) {
          iVar4 = (**(code **)(puVar17[1] + 0x10))(*puVar17,param_3,param_6);
          if (iVar4 == 0) goto LAB_0120fbc0;
        }
        else if (iVar5 != 0) {
          puVar10 = puVar17 + iVar5 * 8;
          while (iVar4 = (**(code **)(puVar17[1] + 0x10))(*puVar17,param_3,param_6), iVar4 != 0) {
            puVar17 = puVar17 + 8;
            if (puVar17 == puVar10) goto LAB_0120fcb4;
          }
          goto LAB_0120fc64;
        }
        goto LAB_0120fcb4;
      }
      puVar17 = *(undefined4 **)(iVar4 + 0x10);
      iVar4 = *(int *)(iVar4 + 0x14) << 5;
      do {
        if (iVar4 == 0) goto LAB_0120fcb4;
        iVar5 = (**(code **)(puVar17[1] + 0x10))(*puVar17,param_3,param_6);
        iVar4 = iVar4 + -0x20;
        puVar17 = puVar17 + 8;
      } while (iVar5 != 0);
LAB_0120fc64:
      uVar9 = uVar9 + 1;
    }
    if (*(int *)(iVar4 + 0xc) == 0) {
LAB_0120fcb4:
      local_84 = (uint *)thunk_FUN_016d4a50(0x10);
      if (local_84 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(4,0x10);
      }
      local_60 = 1;
      *local_84 = uVar9;
      local_68 = 4;
      uVar7 = local_68;
      puVar19 = local_84;
      uVar15 = local_60;
      break;
    }
LAB_0120fbc0:
    uVar9 = uVar9 + 1;
  } while( true );
joined_r0x0120fcf8:
  local_68 = uVar7;
  local_64 = puVar19;
  if (piVar12 == piVar11 + uVar8 * 5) {
    uVar9 = uVar15 * 0x40;
    bVar21 = 0x3fffffe < uVar15;
    bVar20 = uVar15 == 0x3ffffff;
    uVar2 = 0;
    if (uVar15 < 0x4000000) {
      bVar21 = 0x7ffffffb < uVar9;
      bVar20 = uVar9 == 0x7ffffffc;
    }
    if (!bVar21 || bVar20) {
      iVar4 = thunk_FUN_016d4a50(uVar9);
      if (iVar4 != 0) {
        iVar18 = 0;
        iVar5 = 0x40;
        puVar3 = puVar19;
        do {
          iVar16 = iVar5;
          puVar14 = puVar3 + 1;
          uVar9 = *puVar3;
          if (uVar8 <= uVar9) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa4a4(uVar9,uVar8,&DAT_0188ace8);
          }
          FUN_011c9534(&local_68,piVar11 + uVar9 * 5,param_3,param_4,param_5,param_6);
          puVar3 = (uint *)(iVar4 + iVar18 * 0x40);
          iVar18 = iVar18 + 1;
          *puVar3 = local_68;
          puVar3[1] = (uint)local_64;
          puVar3[2] = local_60;
          puVar3[3] = uStack_5c;
          puVar3[4] = uStack_58;
          puVar3[5] = local_54;
          puVar3[6] = uStack_50;
          puVar3[7] = uStack_4c;
          puVar3[8] = uStack_48;
          puVar3[9] = uStack_44;
          puVar3[10] = local_40;
          puVar3[0xb] = uStack_3c;
          puVar3[0xc] = uStack_38;
          puVar3[0xd] = uStack_34;
          puVar3[0xe] = uStack_30;
          puVar3[0xf] = uStack_2c;
          iVar5 = iVar16 + 0x40;
          puVar3 = puVar14;
        } while (puVar14 != puVar19 + uVar15);
        if (uVar7 != 0) {
          thunk_FUN_016d3fb4(puVar19);
        }
        iVar5 = iVar4;
        do {
          if (iVar16 == 0) {
            *param_1 = 0x80000000;
            param_1[4] = 0;
            param_1[1] = uVar15;
            param_1[2] = iVar4;
            param_1[3] = iVar18;
            return;
          }
          pcVar1 = (char *)(iVar5 + 0x3c);
          iVar16 = iVar16 + -0x40;
          iVar5 = iVar5 + 0x40;
        } while (*pcVar1 != '\0');
        *param_1 = 0;
        param_1[1] = 4;
        param_1[2] = 0;
        param_1[3] = uVar15;
        param_1[4] = iVar4;
        param_1[5] = iVar18;
        param_1[6] = 0;
        return;
      }
      uVar2 = 4;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar2,uVar9);
  }
  uVar9 = uVar9 + 1;
  piVar13 = piVar12 + 5;
  iVar4 = *piVar12;
  uVar6 = 1;
  if ((int)*(uint *)(iVar4 + 8) < 0) {
    uVar6 = *(uint *)(iVar4 + 8) ^ 0x80000000;
  }
  piVar12 = piVar13;
  if (uVar6 == 0) goto LAB_0120fd00;
  if (uVar6 != 1) {
    puVar17 = *(undefined4 **)(iVar4 + 0x10);
    iVar4 = *(int *)(iVar4 + 0x14) << 5;
    do {
      if (iVar4 == 0) goto LAB_0120fdf4;
      iVar5 = (**(code **)(puVar17[1] + 0x10))(*puVar17,param_3,param_6);
      iVar4 = iVar4 + -0x20;
      puVar17 = puVar17 + 8;
      uVar7 = local_68;
      puVar19 = local_64;
    } while (iVar5 != 0);
    goto joined_r0x0120fcf8;
  }
  iVar5 = *(int *)(iVar4 + 0x10);
  puVar17 = *(undefined4 **)(iVar4 + 0xc);
  if (iVar5 != 1) {
    if (iVar5 != 0) {
      puVar10 = puVar17 + iVar5 * 8;
      do {
        iVar4 = (**(code **)(puVar17[1] + 0x10))(*puVar17,param_3,param_6);
        uVar7 = local_68;
        puVar19 = local_64;
        if (iVar4 == 0) goto joined_r0x0120fcf8;
        puVar17 = puVar17 + 8;
      } while (puVar17 != puVar10);
    }
    goto LAB_0120fdf4;
  }
  iVar4 = (**(code **)(puVar17[1] + 0x10))(*puVar17,param_3,param_6);
  uVar7 = local_68;
  puVar19 = local_64;
  if (iVar4 == 0) goto joined_r0x0120fcf8;
  goto LAB_0120fdf4;
LAB_0120fd00:
  if (*(int *)(iVar4 + 0xc) != 0) goto joined_r0x0120fcf8;
LAB_0120fdf4:
  if (uVar15 == local_68) {
    FUN_011cf828(&local_68,uVar15,1,4,4);
    local_84 = local_64;
  }
  local_84[uVar15] = uVar9;
  local_60 = uVar15 + 1;
  uVar7 = local_68;
  puVar19 = local_64;
  uVar15 = local_60;
  goto joined_r0x0120fcf8;
}

