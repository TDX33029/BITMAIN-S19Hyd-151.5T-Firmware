// FUN_01535824 @ 01535824 size=1432 calls_out=16 calls_in=1
// strings: 

int FUN_01535824(int param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  uint uVar12;
  undefined4 *puVar13;
  undefined4 uVar14;
  undefined4 *puVar15;
  int iVar16;
  uint uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined4 *local_e0;
  undefined4 *puStack_dc;
  undefined4 *puStack_d8;
  undefined4 local_d4;
  int *local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 *local_c0;
  undefined4 *local_bc;
  undefined4 *local_b8;
  undefined4 *local_b4;
  undefined4 *local_b0;
  undefined4 *local_ac;
  undefined4 *local_a8;
  undefined4 *local_a4;
  int *local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 *local_8c;
  undefined4 *local_88;
  int local_84;
  undefined1 local_58;
  undefined4 local_54;
  undefined8 local_40;
  int *local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  puVar15 = *(undefined4 **)(param_1 + 8);
  iVar16 = *(int *)(param_1 + 4);
  puVar7 = (undefined4 *)0xffffffff;
  iVar11 = (int)puVar15 * 0x14;
  iVar9 = iVar16;
  do {
    local_c0 = puVar15;
    if (iVar11 == 0) {
      piVar6 = *(int **)(param_1 + 0xc);
      do {
        iVar11 = *piVar6;
        bVar2 = (bool)hasExclusiveAccess(piVar6);
      } while (!bVar2);
      *piVar6 = iVar11 + 1;
      if (-1 < iVar11) {
        uVar14 = *(undefined4 *)(param_1 + 0x10);
        if (param_4 == 0) {
          local_b0 = (undefined4 *)0x0;
        }
        else {
          DataMemoryBarrier(0xb);
          if (*(int *)(param_4 + 0x14) != 0) {
            FUN_0154f894((undefined4 *)(param_4 + 0xc),param_4);
          }
          piVar10 = *(int **)(param_4 + 0xc);
          do {
            iVar11 = *piVar10;
            bVar2 = (bool)hasExclusiveAccess(piVar10);
          } while (!bVar2);
          *piVar10 = iVar11 + 1;
          if (iVar11 < 0) goto LAB_01535dc0;
          uVar4 = *(undefined4 *)(param_4 + 0x10);
          uVar17 = *(uint *)(param_1 + 0x10);
          iVar11 = *(int *)(param_1 + 0xc) + 8;
          uVar12 = (*(int **)(param_4 + 4))[1];
          uVar5 = 0;
          if (uVar12 <= uVar17) {
            iVar9 = thunk_FUN_01bed842(**(int **)(param_4 + 4) + 8,iVar11,uVar12);
            uVar5 = uVar12;
            if (iVar9 != 0) {
              uVar5 = 0;
            }
          }
          local_98 = FUN_016bc0ec(iVar11 + uVar5,uVar17 - uVar5);
          local_a4 = (undefined4 *)0x3;
          local_b0 = (undefined4 *)0x2;
          local_a0 = piVar10;
          local_9c = uVar4;
        }
        uVar18 = FUN_01531840(param_3);
        if (puVar15 == (undefined4 *)0x0) {
          puVar15 = (undefined4 *)0x0;
          local_bc = (undefined4 *)&SUB_00000004;
          local_c0 = (undefined4 *)0x0;
        }
        else {
          local_bc = (undefined4 *)FUN_01298504((int)puVar15 * 0xc,4);
          if (local_bc == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00664620(4,(int)puVar15 * 0xc);
          }
          puVar8 = (undefined4 *)0x0;
          local_b8 = (undefined4 *)0x0;
          puVar7 = local_bc;
          do {
            uVar19 = FUN_01576990(iVar16,param_2,param_3,param_4,param_5);
            FUN_014ff278(&local_e0,(int)uVar19,(int)((ulonglong)uVar19 >> 0x20));
            puVar8 = (undefined4 *)((int)puVar8 + 1);
            iVar16 = iVar16 + 0x14;
            *puVar7 = local_e0;
            puVar7[1] = puStack_dc;
            puVar7[2] = puStack_d8;
            puVar7 = puVar7 + 3;
          } while (puVar15 != puVar8);
        }
        local_e0 = local_c0;
        puStack_dc = local_bc;
        puStack_d8 = puVar15;
        local_b8 = puVar15;
        iVar11 = FUN_01595244(piVar6,uVar14,&local_b0,(int)uVar18,(int)((ulonglong)uVar18 >> 0x20),
                              param_2,&local_e0);
        return iVar11;
      }
      goto LAB_01535dc0;
    }
    iVar3 = FUN_01577618(iVar9,param_2,param_5);
    puVar7 = (undefined4 *)((int)puVar7 + 1);
    iVar11 = iVar11 + -0x14;
    iVar9 = iVar9 + 0x14;
  } while (iVar3 == 0);
  iVar3 = 0;
  if (puVar7 < puVar15) {
    do {
      if (iVar11 == 0) {
        return 0;
      }
      iVar3 = FUN_01577618(iVar9,param_2,param_5);
      iVar9 = iVar9 + 0x14;
      iVar11 = iVar11 + -0x14;
    } while (iVar3 == 0);
    piVar6 = *(int **)(param_1 + 0xc);
    do {
      iVar11 = *piVar6;
      bVar2 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar2);
    *piVar6 = iVar11 + 1;
    if (iVar11 < 0) {
LAB_01535dc0:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x1535dc0);
      (*pcVar1)();
    }
    uVar14 = *(undefined4 *)(param_1 + 0x10);
    if (param_4 == 0) {
      local_e0 = (undefined4 *)0x0;
    }
    else {
      DataMemoryBarrier(0xb);
      if (*(int *)(param_4 + 0x14) != 0) {
        FUN_0154f894((undefined4 *)(param_4 + 0xc),param_4);
      }
      piVar10 = *(int **)(param_4 + 0xc);
      do {
        iVar11 = *piVar10;
        bVar2 = (bool)hasExclusiveAccess(piVar10);
      } while (!bVar2);
      *piVar10 = iVar11 + 1;
      if (iVar11 < 0) goto LAB_01535dc0;
      uVar17 = *(uint *)(param_1 + 0x10);
      iVar11 = *(int *)(param_1 + 0xc) + 8;
      uVar4 = *(undefined4 *)(param_4 + 0x10);
      uVar5 = 0;
      uVar12 = (*(int **)(param_4 + 4))[1];
      if (uVar12 <= uVar17) {
        iVar9 = thunk_FUN_01bed842(**(int **)(param_4 + 4) + 8,iVar11,uVar12);
        uVar5 = uVar12;
        if (iVar9 != 0) {
          uVar5 = 0;
        }
      }
      local_c8 = FUN_016bc0ec(iVar11 + uVar5,uVar17 - uVar5);
      local_d4 = 3;
      local_e0 = (undefined4 *)0x2;
      local_d0 = piVar10;
      local_cc = uVar4;
    }
    uVar18 = FUN_01531840(param_3);
    uVar5 = (int)puVar15 * 0xc;
    puVar7 = (undefined4 *)FUN_01298504(uVar5,4);
    if (puVar7 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(4,uVar5);
    }
    puVar13 = (undefined4 *)0x0;
    local_b8 = (undefined4 *)0x0;
    puVar8 = puVar7;
    local_bc = puVar7;
    do {
      uVar19 = FUN_01576990(iVar16,param_2,param_3,param_4,param_5);
      FUN_014ff278(&local_b0,(int)uVar19,(int)((ulonglong)uVar19 >> 0x20));
      puVar13 = (undefined4 *)((int)puVar13 + 1);
      iVar16 = iVar16 + 0x14;
      *puVar8 = local_b0;
      puVar8[1] = local_ac;
      puVar8[2] = local_a8;
      puVar8 = puVar8 + 3;
    } while (puVar15 != puVar13);
    uVar12 = 0;
    local_c0 = puVar7;
    local_bc = puVar7;
    local_b8 = puVar15;
    local_b4 = puVar7 + (int)puVar15 * 3;
    do {
      puVar8 = (undefined4 *)((int)puVar7 + uVar12);
      local_a8 = (undefined4 *)*puVar8;
      local_b0 = (undefined4 *)puVar8[1];
      local_a4 = local_b0 + puVar8[2];
      local_ac = local_b0;
      FUN_014fcbb0(&local_30,&local_b0);
      uVar12 = uVar12 + 0xc;
      *puVar8 = local_30;
      puVar8[1] = uStack_2c;
      puVar8[2] = uStack_28;
    } while (uVar5 != uVar12);
    iVar11 = (uVar12 >> 2) * -0x55555555;
    local_bc = puVar7 + (int)puVar15 * 3;
    local_b0 = puVar7;
    local_ac = (undefined4 *)iVar11;
    local_a8 = puVar15;
    FUN_0157674c(&local_c0);
    FUN_015779a4(&local_c0);
    local_b0 = local_e0;
    local_ac = puStack_dc;
    local_a8 = puStack_d8;
    local_a4 = (undefined4 *)local_d4;
    local_a0 = local_d0;
    local_9c = local_cc;
    local_58 = 6;
    local_90 = 0x80000023;
    local_8c = puVar15;
    local_88 = puVar7;
    local_84 = iVar11;
    local_54 = param_2;
    local_38 = piVar6;
    local_34 = uVar14;
    local_40 = uVar18;
    local_98 = local_c8;
    iVar3 = thunk_FUN_01be5118(0x80);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(8,0x80);
    }
    FUN_01bed4e2(iVar3,&local_b0,0x80);
  }
  return iVar3;
}

