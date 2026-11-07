// FUN_016cf22c @ 016cf22c size=1380 calls_out=10 calls_in=2
// strings: 

void FUN_016cf22c(int *param_1,int param_2,uint param_3,int param_4,undefined4 param_5,
                 undefined4 param_6)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  int *piVar7;
  undefined *puVar8;
  int iVar9;
  undefined4 *puVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  undefined4 unaff_r10;
  uint uVar16;
  undefined8 uVar17;
  int local_78;
  uint local_74;
  int local_70;
  int local_6c;
  int iStack_68;
  int iStack_64;
  int local_60;
  int local_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int local_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  undefined4 local_38;
  uint local_34;
  uint local_30;
  undefined4 local_2c;
  
  cVar3 = '\0';
  if (*(char *)(param_2 + 0xd) != '\x03') {
    cVar3 = *(char *)(param_2 + 0xd);
  }
  if ((cVar3 != '\0') && (cVar3 != '\x01' || param_3 != 0)) {
    FUN_016cfa44(param_1,param_2);
    return;
  }
  if (param_4 == 0) {
    piVar7 = (int *)0x0;
  }
  else {
    uVar17 = FUN_016bc0ec(param_4,param_5);
    unaff_r10 = (undefined4)((ulonglong)uVar17 >> 0x20);
    piVar7 = (int *)uVar17;
  }
  if (*(int *)(param_2 + 0x20) != 0) {
    FUN_01306fc8(&DAT_01d09bf8);
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x16cf794);
    (*pcVar1)();
  }
  piVar5 = (int *)(param_2 + 0x24);
  *(undefined4 *)(param_2 + 0x20) = 0xffffffff;
  if (*piVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0130739c(&DAT_004ce2b9,0x1f,&DAT_01d07a4c);
  }
  if (param_3 < 0x7fffffff) {
    uVar4 = *(uint *)(param_2 + 0x28);
    uVar15 = *(uint *)(param_2 + 0x54);
    if (uVar15 <= uVar4) {
      uVar6 = uVar4 - uVar15;
      uVar16 = 0;
      iVar9 = uVar15 * 0xc;
      do {
        local_30 = 0;
        local_38 = 0;
        local_34 = 4;
        if (uVar15 == *(uint *)(param_2 + 0x4c)) {
          FUN_018c4418();
        }
        uVar15 = uVar15 + 1;
        puVar10 = (undefined4 *)(*(int *)(param_2 + 0x50) + iVar9);
        *puVar10 = local_38;
        puVar10[1] = local_34;
        puVar10[2] = local_30;
        *(uint *)(param_2 + 0x54) = uVar15;
        if (uVar6 <= uVar16) break;
        uVar16 = uVar16 + (uVar16 < uVar6);
        iVar9 = iVar9 + 0xc;
      } while (uVar16 <= uVar6);
    }
    if (uVar15 <= uVar4) {
      puVar8 = &DAT_01d07a2c;
LAB_016cf780:
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar4,uVar15,puVar8);
    }
    uVar6 = *(uint *)(*(int *)(param_2 + 0x50) + uVar4 * 0xc + 8);
    if (param_3 < uVar6) {
      local_2c = 0;
      local_38 = 4;
      local_34 = uVar4;
      local_30 = param_3;
      FUN_01691d3c(&local_78,piVar5,&local_38);
      if (piVar7 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar9 = *piVar7;
          bVar2 = (bool)hasExclusiveAccess(piVar7);
        } while (!bVar2);
        *piVar7 = iVar9 + -1;
        goto LAB_016cf428;
      }
    }
    else {
      if (param_3 != uVar6) {
        iVar9 = param_3 - uVar6;
        piVar12 = (int *)(*(int *)(param_2 + 0x50) + uVar4 * 0xc);
        do {
          iVar11 = piVar12[2];
          if (iVar11 == *piVar12) {
            FUN_015f5ab8(piVar12);
          }
          iVar9 = iVar9 + -1;
          *(undefined4 *)(piVar12[1] + iVar11 * 8) = 0;
          piVar12[2] = iVar11 + 1;
        } while (iVar9 != 0);
        uVar15 = *(uint *)(param_2 + 0x54);
      }
      if (uVar15 <= uVar4) {
        puVar8 = &DAT_01d07a3c;
        goto LAB_016cf780;
      }
      piVar12 = (int *)(*(int *)(param_2 + 0x50) + uVar4 * 0xc);
      iVar9 = piVar12[2];
      if (iVar9 == *piVar12) {
        FUN_015f5ab8(piVar12);
      }
      puVar10 = (undefined4 *)(piVar12[1] + iVar9 * 8);
      *puVar10 = piVar7;
      puVar10[1] = unaff_r10;
      piVar12[2] = iVar9 + 1;
      local_2c = 0;
      local_38 = 4;
      local_34 = uVar4;
      local_30 = param_3;
      FUN_01691d3c(&local_78,piVar5,&local_38);
    }
  }
  else {
    iVar9 = 0x28;
    local_78 = 0x28;
    local_74 = param_3;
    if (piVar7 == (int *)0x0) {
      *(int *)(param_2 + 0x20) = *(int *)(param_2 + 0x20) + 1;
      goto LAB_016cf5c4;
    }
    DataMemoryBarrier(0xb);
    do {
      iVar9 = *piVar7;
      bVar2 = (bool)hasExclusiveAccess(piVar7);
    } while (!bVar2);
    *piVar7 = iVar9 + -1;
LAB_016cf428:
    if (iVar9 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0070451c(piVar7,unaff_r10);
    }
  }
  uVar4 = local_74;
  *(int *)(param_2 + 0x20) = *(int *)(param_2 + 0x20) + 1;
  iVar9 = local_78;
  if (local_78 == 0x2a) {
    FUN_016cfa44(&local_78,param_2,param_6);
    iVar9 = local_70;
    uVar15 = local_74;
    if (local_78 != 0x2a) {
      param_1[3] = local_6c;
      param_1[4] = iStack_68;
      param_1[5] = iStack_64;
      param_1[6] = local_60;
      param_1[7] = local_5c;
      param_1[8] = iStack_58;
      param_1[9] = iStack_54;
      param_1[10] = iStack_50;
      param_1[0xb] = local_4c;
      param_1[0xc] = iStack_48;
      param_1[0xd] = iStack_44;
      param_1[0xe] = iStack_40;
      param_1[0xf] = iStack_3c;
      *param_1 = local_78;
      param_1[1] = local_74;
      param_1[2] = local_70;
      return;
    }
    if (*(int *)(param_2 + 0x20) == 0) {
      *(undefined4 *)(param_2 + 0x20) = 0xffffffff;
      if (*(int *)(param_2 + 0x24) != 0) {
        if (param_3 < 0x7fffffff) {
          local_34 = *(undefined4 *)(param_2 + 0x28);
          local_2c = 0;
          local_38 = 5;
          local_30 = param_3;
          FUN_01691d3c(&local_78,piVar5,&local_38);
          uVar6 = local_74;
          *(int *)(param_2 + 0x20) = *(int *)(param_2 + 0x20) + 1;
          if (local_78 == 0x2a) {
            FUN_016ced90(&local_78,param_2,uVar4,uVar15);
            if (local_78 == 0x2a) {
              FUN_016ced90(&local_78,param_2,iVar9,uVar6);
              if (local_78 == 0x2a) {
                param_1[2] = uVar6;
                *param_1 = 0x2a;
                param_1[1] = uVar4;
                return;
              }
              piVar7 = (int *)((uint)&local_78 | 4);
              iVar9 = piVar7[1];
              iVar11 = piVar7[2];
              iVar13 = piVar7[3];
              iVar14 = piVar7[4];
              param_1[1] = *piVar7;
              param_1[2] = iVar9;
              param_1[3] = iVar11;
              param_1[4] = iVar13;
              param_1[5] = iVar14;
              iVar9 = piVar7[6];
              iVar11 = piVar7[7];
              iVar13 = piVar7[8];
              iVar14 = piVar7[9];
              param_1[6] = piVar7[5];
              param_1[7] = iVar9;
              param_1[8] = iVar11;
              param_1[9] = iVar13;
              param_1[10] = iVar14;
              iVar9 = piVar7[0xb];
              iVar11 = piVar7[0xc];
              iVar13 = piVar7[0xd];
              iVar14 = piVar7[0xe];
              param_1[0xb] = piVar7[10];
              param_1[0xc] = iVar9;
              param_1[0xd] = iVar11;
              param_1[0xe] = iVar13;
              param_1[0xf] = iVar14;
            }
            else {
              piVar7 = (int *)((uint)&local_78 | 4);
              iVar9 = piVar7[1];
              iVar11 = piVar7[2];
              iVar13 = piVar7[3];
              iVar14 = piVar7[4];
              param_1[1] = *piVar7;
              param_1[2] = iVar9;
              param_1[3] = iVar11;
              param_1[4] = iVar13;
              param_1[5] = iVar14;
              iVar9 = piVar7[6];
              iVar11 = piVar7[7];
              iVar13 = piVar7[8];
              iVar14 = piVar7[9];
              param_1[6] = piVar7[5];
              param_1[7] = iVar9;
              param_1[8] = iVar11;
              param_1[9] = iVar13;
              param_1[10] = iVar14;
              iVar9 = piVar7[0xb];
              iVar11 = piVar7[0xc];
              iVar13 = piVar7[0xd];
              iVar14 = piVar7[0xe];
              param_1[0xb] = piVar7[10];
              param_1[0xc] = iVar9;
              param_1[0xd] = iVar11;
              param_1[0xe] = iVar13;
              param_1[0xf] = iVar14;
            }
            *param_1 = local_78;
            return;
          }
          param_3 = local_74;
        }
        else {
          *(undefined4 *)(param_2 + 0x20) = 0;
          local_78 = 0x28;
        }
        param_1[2] = local_70;
        param_1[3] = local_6c;
        param_1[4] = iStack_68;
        param_1[5] = iStack_64;
        param_1[6] = local_60;
        param_1[7] = local_5c;
        param_1[8] = iStack_58;
        param_1[9] = iStack_54;
        param_1[10] = iStack_50;
        param_1[0xb] = local_4c;
        param_1[0xc] = iStack_48;
        param_1[0xd] = iStack_44;
        param_1[0xe] = iStack_40;
        param_1[0xf] = iStack_3c;
        *param_1 = local_78;
        param_1[1] = param_3;
        return;
      }
    }
    else {
      FUN_01306fc8(&DAT_01d09b78);
    }
                    /* WARNING: Subroutine does not return */
    FUN_0130739c(&DAT_004ce2b9,0x1f,&DAT_01d07a4c);
  }
LAB_016cf5c4:
  param_1[2] = local_70;
  param_1[3] = local_6c;
  param_1[4] = iStack_68;
  param_1[5] = iStack_64;
  param_1[6] = local_60;
  param_1[7] = local_5c;
  param_1[8] = iStack_58;
  param_1[9] = iStack_54;
  param_1[10] = iStack_50;
  param_1[0xb] = local_4c;
  param_1[0xc] = iStack_48;
  param_1[0xd] = iStack_44;
  param_1[0xe] = iStack_40;
  param_1[0xf] = iStack_3c;
  *param_1 = iVar9;
  param_1[1] = local_74;
  return;
}

