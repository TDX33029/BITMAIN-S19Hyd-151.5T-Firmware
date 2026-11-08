// FUN_01917d68 @ 01917d68 size=992 calls_out=5 calls_in=6
// strings: 

void FUN_01917d68(uint *param_1,uint *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  int extraout_r3;
  int extraout_r3_00;
  uint uVar8;
  int extraout_r3_01;
  uint uVar9;
  undefined4 *puVar10;
  uint uVar11;
  undefined4 *puVar12;
  uint uVar13;
  uint uVar14;
  undefined4 *puVar15;
  int *piVar16;
  undefined4 uVar17;
  bool bVar18;
  bool bVar19;
  uint local_64;
  undefined4 *local_58;
  undefined4 local_54;
  uint local_50;
  undefined4 *local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint local_30;
  int *local_2c;
  uint local_28;
  
  uVar6 = 4;
  if ((int)*param_2 < 0) {
    uVar6 = *param_2 ^ 0x80000000;
  }
  if (0x2c < uVar6) {
switchD_01917d9c_caseD_2:
    local_54 = 1;
    local_58 = (undefined4 *)0x1;
    local_50 = *param_2;
    local_4c = (undefined4 *)param_2[1];
    local_48 = param_2[2];
    local_44 = param_2[3];
    local_40 = param_2[4];
    uStack_3c = param_2[5];
    uStack_38 = param_2[6];
    uStack_34 = param_2[7];
    puVar3 = (undefined4 *)thunk_FUN_01be5118(0x28);
    if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(8,0x28);
    }
    *puVar3 = local_58;
    puVar3[1] = local_54;
    puVar3[2] = local_50;
    puVar3[3] = local_4c;
    puVar3[4] = local_48;
    puVar3[5] = local_44;
    puVar3[6] = local_40;
    puVar3[7] = uStack_3c;
    puVar3[8] = uStack_38;
    puVar3[9] = uStack_34;
    *param_1 = 0x80000012;
    param_1[1] = (uint)puVar3;
    param_1[2] = (uint)&DAT_01d25344;
    return;
  }
  switch(uVar6) {
  case 0:
  case 1:
  case 0x1d:
    puVar1 = (undefined1 *)0x80000000;
    break;
  default:
    goto switchD_01917d9c_caseD_2;
  case 3:
    puVar1 = (undefined1 *)0x80000002;
    goto LAB_01918064;
  case 4:
    uVar6 = param_2[3];
    uVar8 = param_2[4];
    uVar9 = param_2[5];
    uVar11 = param_2[6];
    uVar13 = param_2[7];
    uVar7 = param_2[1];
    uVar14 = param_2[2];
    *param_1 = *param_2;
    param_1[1] = uVar7;
    param_1[2] = uVar14;
    param_1[3] = uVar6;
    param_1[4] = uVar8;
    param_1[5] = uVar9;
    param_1[6] = uVar11;
    param_1[7] = uVar13;
    return;
  case 5:
    puVar1 = &DAT_80000004;
    goto LAB_01918064;
  case 6:
    puVar1 = &DAT_80000005;
    break;
  case 7:
    puVar1 = (undefined1 *)0x8000000a;
LAB_01918064:
    uVar8 = param_2[2];
    uVar7 = param_2[3];
    uVar6 = param_2[5];
    param_1[4] = param_2[4];
    *param_1 = (uint)puVar1;
    param_1[2] = uVar8;
    param_1[3] = uVar7;
    param_1[5] = uVar6;
    return;
  case 10:
    puVar1 = (undefined1 *)0x80000001;
    break;
  case 0xe:
    uVar6 = 0;
    goto LAB_019180c4;
  case 0xf:
    puVar1 = (undefined1 *)0x8000000b;
    break;
  case 0x10:
    uVar6 = 4;
    goto LAB_019180c4;
  case 0x1a:
    puVar1 = (undefined1 *)0x8000000f;
    break;
  case 0x1b:
    uVar6 = param_2[4];
    local_48 = CONCAT31(local_48._1_3_,1);
    puVar3 = (undefined4 *)param_2[5];
    piVar16 = (int *)param_2[6];
    local_50 = param_2[2];
    local_4c = (undefined4 *)param_2[3];
    local_58 = (undefined4 *)0x0;
    iVar2 = FUN_01af6a6c(&local_30,&local_58);
    bVar18 = local_28 == 9;
    if (bVar18) {
      iVar2 = *local_2c;
    }
    bVar19 = bVar18 && iVar2 == 1;
    if (bVar18 && iVar2 == 1) {
      bVar19 = local_2c[1] == 3;
    }
    if (bVar19) {
      iVar2 = local_2c[2];
      bVar18 = iVar2 == 6;
      if (bVar18) {
        iVar2 = local_2c[3];
      }
      if (bVar18 && iVar2 == 1) {
        iVar2 = local_2c[4];
        bVar18 = iVar2 == 5;
        if (bVar18) {
          iVar2 = local_2c[5];
        }
        if (bVar18 && iVar2 == 5) {
          iVar2 = local_2c[6];
          bVar18 = iVar2 == 7;
          if (bVar18) {
            iVar2 = local_2c[7];
          }
          if (bVar18 && iVar2 == 3) {
            if (local_2c[8] == 2) {
              local_64 = 0x80000000;
            }
            else {
              if (local_2c[8] != 1) goto LAB_01917ecc;
              local_64 = 0x80000001;
            }
            FUN_0134aee0(local_30,local_2c,4,4);
            iVar2 = extraout_r3_01;
            goto LAB_01917ed4;
          }
        }
      }
    }
LAB_01917ecc:
    local_64 = local_30;
    iVar2 = extraout_r3;
LAB_01917ed4:
    puVar10 = puVar3 + (int)piVar16 * 3;
    puVar4 = puVar3;
    puVar15 = puVar3;
    if (piVar16 != (int *)0x0) {
      uVar8 = uVar6;
      local_58 = puVar3;
      local_50 = uVar6;
      local_4c = puVar10;
      do {
        puVar15 = puVar4;
        piVar5 = (int *)puVar15[1];
        uVar7 = puVar15[2];
        if (uVar7 == 9) {
          iVar2 = *piVar5;
        }
        if ((uVar7 == 9 && iVar2 == 1) && (iVar2 = piVar5[1], iVar2 == 3)) {
          iVar2 = piVar5[2];
          bVar18 = iVar2 != 6;
          if (!bVar18) {
            iVar2 = piVar5[3];
          }
          if (bVar18 || iVar2 != 1) goto LAB_01917f1c;
          iVar2 = piVar5[4];
          bVar18 = iVar2 != 5;
          if (!bVar18) {
            iVar2 = piVar5[5];
          }
          if (bVar18 || iVar2 != 5) goto LAB_01917f1c;
          iVar2 = piVar5[6];
          bVar18 = iVar2 != 7;
          if (!bVar18) {
            iVar2 = piVar5[7];
          }
          if (bVar18 || iVar2 != 3) goto LAB_01917f1c;
          iVar2 = piVar5[8];
          if (iVar2 == 2) {
            uVar17 = 0x80000000;
          }
          else {
            if (iVar2 != 1) goto LAB_01917f1c;
            uVar17 = 0x80000001;
          }
          FUN_0134aee0(*puVar15,piVar5,4,4);
          iVar2 = extraout_r3_00;
        }
        else {
LAB_01917f1c:
          piVar16 = piVar5;
          uVar8 = uVar7;
          uVar17 = *puVar15;
        }
        *puVar15 = uVar17;
        puVar15[1] = piVar16;
        puVar15[2] = uVar8;
        puVar4 = puVar15 + 3;
      } while (puVar15 + 3 != puVar10);
      puVar15 = puVar15 + 3;
      puVar4 = puVar10;
    }
    puVar12 = puVar4 + 1;
    local_4c = (undefined4 *)0x4;
    local_54 = 4;
    local_58 = (undefined4 *)0x4;
    local_50 = 0;
    for (iVar2 = ((uint)((int)puVar10 - (int)puVar4) >> 2) * -0x55555555; iVar2 != 0;
        iVar2 = iVar2 + -1) {
      FUN_0134aee0(puVar12[-1],*puVar12,4,4);
      puVar12 = puVar12 + 3;
    }
    FUN_0192f358(&local_58);
    *param_1 = (uint)&DAT_80000010;
    param_1[1] = uVar6;
    param_1[2] = (uint)puVar3;
    param_1[3] = ((uint)((int)puVar15 - (int)puVar3) >> 2) * -0x55555555;
    param_1[4] = local_64;
    param_1[5] = (uint)local_2c;
    param_1[6] = local_28;
    return;
  case 0x1e:
    puVar1 = (undefined1 *)0x80000007;
    break;
  case 0x1f:
    puVar1 = &DAT_80000008;
    break;
  case 0x29:
  case 0x2b:
    uVar6 = 1;
LAB_019180c4:
    *param_1 = 0x8000001f;
    param_1[1] = uVar6;
    return;
  case 0x2a:
  case 0x2c:
    puVar1 = &DAT_8000000c;
  }
  *param_1 = (uint)puVar1;
  return;
}

