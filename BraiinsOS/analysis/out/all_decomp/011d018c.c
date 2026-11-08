// FUN_011d018c @ 011d018c size=640 calls_out=7 calls_in=41
// strings: 

int FUN_011d018c(int *param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 *puVar9;
  uint uVar10;
  uint uVar11;
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
  undefined4 local_4c;
  undefined8 local_38;
  int *local_30;
  int local_2c;
  
  uStack_90 = CONCAT44(local_ac,local_b0);
  iVar3 = *param_1;
  uVar5 = 1;
  if ((int)*(uint *)(iVar3 + 8) < 0) {
    uVar5 = *(uint *)(iVar3 + 8) ^ 0x80000000;
  }
  if (uVar5 == 0) {
    if (*(int *)(iVar3 + 0xc) != 0) {
      piVar8 = (int *)param_1[1];
      do {
        iVar3 = *piVar8;
        bVar2 = (bool)hasExclusiveAccess(piVar8);
      } while (!bVar2);
      *piVar8 = iVar3 + 1;
      if (iVar3 < 0) {
LAB_011d03f8:
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0x11d03f8);
        (*pcVar1)();
      }
      iVar3 = param_1[2];
      if (param_4 == 0) {
        local_a8[0] = 0;
      }
      else {
        DataMemoryBarrier(0xb);
        if (*(int *)(param_4 + 0x14) != 0) {
          FUN_011f6248((undefined4 *)(param_4 + 0xc),param_4);
        }
        piVar4 = *(int **)(param_4 + 0xc);
        do {
          iVar6 = *piVar4;
          bVar2 = (bool)hasExclusiveAccess(piVar4);
        } while (!bVar2);
        *piVar4 = iVar6 + 1;
        if (iVar6 < 0) goto LAB_011d03f8;
        uVar5 = 0;
        local_b4 = *(undefined4 *)(param_4 + 0x10);
        uVar11 = param_1[2];
        uVar10 = (*(int **)(param_4 + 4))[1];
        local_b8 = *(undefined4 *)(param_4 + 0xc);
        if (uVar10 <= uVar11) {
          iVar6 = thunk_FUN_016dd50a(**(int **)(param_4 + 4) + 8,piVar8 + 2,uVar10);
          uVar5 = uVar10;
          if (iVar6 != 0) {
            uVar5 = 0;
          }
        }
        uStack_90 = FUN_011e1508((int)(piVar8 + 2) + uVar5,uVar11 - uVar5);
        local_bc = 3;
        local_a8[0] = 2;
      }
      local_38 = FUN_01238114(param_3);
      local_88 = 0x80000016;
      local_50 = 6;
      uStack_9c = local_bc;
      local_98 = local_b8;
      uStack_94 = local_b4;
      local_4c = param_2;
      local_30 = piVar8;
      local_2c = iVar3;
      iVar3 = thunk_FUN_016d4a50(0x80);
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(8,0x80);
      }
      FUN_016dd1aa(iVar3,local_a8,0x80);
      return iVar3;
    }
  }
  else if (uVar5 == 1) {
    iVar6 = *(int *)(iVar3 + 0x10);
    puVar7 = *(undefined4 **)(iVar3 + 0xc);
    if (iVar6 == 1) {
                    /* WARNING: Could not recover jumptable at 0x011d01fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar3 = (**(code **)(puVar7[1] + 0x14))(*puVar7,param_2,param_3,param_4);
      return iVar3;
    }
    if (iVar6 != 0) {
      puVar9 = puVar7 + iVar6 * 8;
      do {
        iVar3 = (**(code **)(puVar7[1] + 0x14))(*puVar7,param_2,param_3,param_4,param_5);
        if (iVar3 != 0) {
          return iVar3;
        }
        puVar7 = puVar7 + 8;
      } while (puVar7 != puVar9);
    }
  }
  else if (*(int *)(iVar3 + 0x14) != 0) {
    puVar9 = *(undefined4 **)(iVar3 + 0x10);
    puVar7 = puVar9 + *(int *)(iVar3 + 0x14) * 8;
    do {
      iVar3 = (**(code **)(puVar9[1] + 0x14))(*puVar9,param_2,param_3,param_4,param_5);
      if (iVar3 != 0) {
        return iVar3;
      }
      puVar9 = puVar9 + 8;
    } while (puVar9 != puVar7);
  }
  return 0;
}

