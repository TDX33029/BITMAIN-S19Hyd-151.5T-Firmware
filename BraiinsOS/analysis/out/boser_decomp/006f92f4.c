// FUN_006f92f4 @ 006f92f4 size=732 calls_out=11 calls_in=1
// strings: 

void FUN_006f92f4(undefined4 *param_1,int param_2)

{
  bool bVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  undefined8 *puVar9;
  undefined4 uVar10;
  int iVar11;
  int *piVar12;
  int *piVar13;
  int *piVar14;
  undefined4 uVar15;
  int *piVar16;
  undefined8 uVar17;
  int *local_d8;
  int *local_d4;
  int *local_d0;
  int *local_c8;
  int *local_c4;
  int *local_c0;
  int local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  int local_a8;
  undefined4 local_a4 [3];
  undefined4 local_98;
  int local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  int local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  int local_58;
  int *local_54;
  int *local_50;
  int *local_4c;
  int *local_48;
  int *local_44;
  int *local_40;
  int *local_3c;
  int local_38 [5];
  
  puVar9 = *(undefined8 **)(param_2 + 0x20);
  do {
    FUN_006fb748(&local_b8,param_2);
    iVar6 = local_a8;
    uVar5 = local_ac;
    uVar4 = local_b0;
    uVar3 = local_b4;
    iVar11 = local_b8;
    if (local_b8 == 0) {
LAB_006f9578:
      piVar12 = (int *)&DAT_80000000;
      goto LAB_006f9580;
    }
    uVar15 = *(undefined4 *)(param_2 + 0x1c);
    uVar17 = FUN_0070093c(uVar15,local_b8,local_a8);
    uVar10 = FUN_006fb3b4(iVar11,iVar6);
    FUN_006fb414(local_a4,iVar11,uVar3,uVar4,uVar5,iVar6 + 1,uVar10);
    FUN_006fb748(&local_70,local_a4);
    if (local_70 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01c064c0);
    }
    local_88 = local_70;
    uStack_84 = uStack_6c;
    uStack_80 = uStack_68;
    uStack_7c = uStack_64;
    uStack_78 = uStack_60;
    FUN_006fc9e8(&local_58,&local_88,uVar15);
    piVar8 = local_48;
    piVar7 = local_4c;
    local_c0 = local_50;
    local_c4 = local_54;
    uVar2 = CONCAT44(local_54,local_58);
    if (local_58 == 9) {
      FUN_006fa58c(local_38,local_a4,0x4a);
      piVar13 = (int *)&DAT_80000000;
      if (local_38[0] != 0) {
        FUN_006ff2fc(&local_58,local_38,uVar15);
        piVar16 = local_3c;
        piVar14 = local_4c;
        piVar12 = local_50;
        uVar2 = CONCAT44(local_54,local_58);
        if (local_58 != 10) {
          if (local_58 != 9) {
            local_d0 = local_50;
            local_d4 = local_4c;
            local_c8 = local_48;
            local_c0 = local_40;
            local_c4 = local_44;
            DataMemoryBarrier(0xb);
            do {
              iVar11 = *piVar7;
              bVar1 = (bool)hasExclusiveAccess(piVar7);
            } while (!bVar1);
            *piVar7 = iVar11 + -1;
            bVar1 = true;
            if (iVar11 == 1) {
              DataMemoryBarrier(0xb);
              FUN_0070451c(piVar7);
            }
            goto LAB_006f951c;
          }
          local_d0 = local_50;
          local_d4 = local_4c;
          piVar13 = local_54;
        }
      }
      bVar1 = false;
      local_c8 = (int *)0x0;
      piVar12 = (int *)0x0;
      if (piVar13 != (int *)&DAT_80000000) {
        local_c8 = local_d4;
        piVar12 = piVar13;
      }
      piVar14 = local_d0;
      if (piVar13 == (int *)&DAT_80000000) {
        piVar14 = (int *)&DAT_00000008;
      }
      local_d8 = piVar8;
      piVar16 = piVar7;
      uVar2 = uVar17;
    }
    else {
      bVar1 = true;
      local_c4 = local_44;
      local_c8 = local_48;
      local_c0 = local_40;
      piVar12 = local_50;
      piVar14 = local_4c;
      piVar16 = local_3c;
    }
LAB_006f951c:
    FUN_006f6e98(local_a4[0],local_98);
    if (bVar1) {
      FUN_006f6e10(puVar9);
      *(int **)(puVar9 + 2) = local_c8;
      *(int **)((int)puVar9 + 0x14) = local_c4;
      *puVar9 = uVar2;
      *(int **)(puVar9 + 1) = piVar12;
      *(int **)((int)puVar9 + 0xc) = piVar14;
      *(int **)(puVar9 + 3) = local_c0;
      *(int **)((int)puVar9 + 0x1c) = piVar16;
      goto LAB_006f9578;
    }
  } while ((int)piVar12 < -0x7ffffffe);
  param_1[4] = local_c8;
  param_1[5] = local_c4;
  param_1[6] = local_c0;
  *param_1 = (int)uVar2;
  param_1[3] = piVar14;
  param_1[7] = piVar16;
  param_1[8] = local_d8;
  param_1[1] = (int)((ulonglong)uVar2 >> 0x20);
LAB_006f9580:
  param_1[2] = piVar12;
  return;
}

