// FUN_011d4830 @ 011d4830 size=740 calls_out=7 calls_in=2
// strings: 

int FUN_011d4830(uint *param_1,char *param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  bool bVar15;
  undefined8 uVar16;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8 [3];
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined1 local_50;
  char *local_4c;
  undefined8 local_38;
  int *local_30;
  uint local_2c;
  
  uVar16 = CONCAT44(local_ac,local_b0);
  if (*param_2 == '\x04') {
    uVar2 = *param_1;
    uVar6 = param_1[1];
    if (*(int *)(param_2 + 0xc) != 0) {
      uVar12 = 0;
      uVar11 = 0;
      iVar8 = *(int *)(param_2 + 8);
      iVar13 = iVar8 + *(int *)(param_2 + 0xc) * 0x18;
      uVar14 = param_1[2];
      do {
        uVar3 = 1;
        if ((int)*(uint *)(uVar14 + 8) < 0) {
          uVar3 = *(uint *)(uVar14 + 8) ^ 0x80000000;
        }
        if (uVar3 == 0) {
          if ((*(int *)(uVar14 + 0xc) == 0) ||
             (iVar10 = (**(code **)(*(int *)(uVar14 + 0x10) + 0x10))
                                 (*(int *)(uVar14 + 0xc),iVar8,param_5), iVar10 != 0)) {
LAB_011d4894:
            bVar15 = 0xfffffffe < uVar12;
            uVar12 = uVar12 + 1;
            uVar11 = uVar11 + bVar15;
            if (uVar6 < uVar11 || uVar11 - uVar6 < (uint)(uVar2 <= uVar12)) {
              return 0;
            }
          }
        }
        else if (uVar3 == 1) {
          puVar7 = *(undefined4 **)(uVar14 + 0xc);
          iVar10 = *(int *)(uVar14 + 0x10) << 5;
          do {
            if (iVar10 == 0) goto LAB_011d4894;
            iVar4 = (**(code **)(puVar7[1] + 0x10))(*puVar7,iVar8,param_5);
            iVar10 = iVar10 + -0x20;
            puVar7 = puVar7 + 8;
          } while (iVar4 != 0);
        }
        else {
          puVar7 = *(undefined4 **)(uVar14 + 0x10);
          iVar10 = *(int *)(uVar14 + 0x14) << 5;
          do {
            if (iVar10 == 0) goto LAB_011d4894;
            iVar4 = (**(code **)(puVar7[1] + 0x10))(*puVar7,iVar8,param_5);
            iVar10 = iVar10 + -0x20;
            puVar7 = puVar7 + 8;
          } while (iVar4 != 0);
        }
        iVar8 = iVar8 + 0x18;
      } while (iVar8 != iVar13);
    }
    if (uVar2 != 0 || uVar6 != 0) {
      piVar9 = (int *)param_1[3];
      do {
        iVar8 = *piVar9;
        bVar15 = (bool)hasExclusiveAccess(piVar9);
      } while (!bVar15);
      *piVar9 = iVar8 + 1;
      if (iVar8 < 0) {
LAB_011d4b00:
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0x11d4b00);
        (*pcVar1)();
      }
      uVar2 = param_1[4];
      if (param_4 == 0) {
        local_a8[0] = 0;
      }
      else {
        DataMemoryBarrier(0xb);
        if (*(int *)(param_4 + 0x14) != 0) {
          FUN_011f6248((undefined4 *)(param_4 + 0xc),param_4);
        }
        piVar5 = *(int **)(param_4 + 0xc);
        do {
          iVar8 = *piVar5;
          bVar15 = (bool)hasExclusiveAccess(piVar5);
        } while (!bVar15);
        *piVar5 = iVar8 + 1;
        if (iVar8 < 0) goto LAB_011d4b00;
        local_b8 = *(undefined4 *)(param_4 + 0xc);
        local_b4 = *(undefined4 *)(param_4 + 0x10);
        uVar6 = 0;
        uVar12 = param_1[4];
        uVar11 = (*(int **)(param_4 + 4))[1];
        if (uVar11 <= uVar12) {
          iVar8 = thunk_FUN_016dd50a(**(int **)(param_4 + 4) + 8,piVar9 + 2,uVar11);
          uVar6 = uVar11;
          if (iVar8 != 0) {
            uVar6 = 0;
          }
        }
        uVar16 = FUN_011e1508((int)(piVar9 + 2) + uVar6,uVar12 - uVar6);
        local_bc = 3;
        local_a8[0] = 2;
      }
      local_38 = FUN_01238114(param_3);
      local_88 = 0x8000000f;
      local_50 = 6;
      uStack_9c = local_bc;
      local_98 = local_b8;
      uStack_94 = local_b4;
      local_4c = param_2;
      local_30 = piVar9;
      local_2c = uVar2;
      uStack_90 = uVar16;
      iVar8 = thunk_FUN_016d4a50(0x80);
      if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(8,0x80);
      }
      FUN_016dd1aa(iVar8,local_a8,0x80);
      return iVar8;
    }
  }
  return 0;
}

