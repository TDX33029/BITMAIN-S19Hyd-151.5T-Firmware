// FUN_011d7198 @ 011d7198 size=548 calls_out=9 calls_in=2
// strings: 

int FUN_011d7198(int param_1,char *param_2,undefined4 param_3,int param_4)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  int local_a8;
  int local_a4;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined8 uStack_90;
  undefined4 local_88;
  int local_84;
  int local_80;
  int local_7c;
  undefined1 local_50;
  char *local_4c;
  undefined8 local_38;
  int *local_30;
  undefined4 local_2c;
  
  uVar12 = CONCAT44(local_ac,local_b0);
  iVar6 = 0;
  if (*param_2 == '\x03') {
    local_a8 = *(int *)(param_2 + 8);
    local_a4 = local_a8 + *(int *)(param_2 + 0xc);
    iVar3 = FUN_01164770(&local_a8);
    if (iVar3 != 0) {
      piVar7 = *(int **)(param_1 + 0xc);
      do {
        iVar6 = *piVar7;
        bVar2 = (bool)hasExclusiveAccess(piVar7);
      } while (!bVar2);
      *piVar7 = iVar6 + 1;
      if (iVar6 < 0) {
LAB_011d73bc:
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0x11d73bc);
        (*pcVar1)();
      }
      uVar10 = *(undefined4 *)(param_1 + 0x10);
      if (param_4 == 0) {
        iVar6 = 0;
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
        if (iVar6 < 0) goto LAB_011d73bc;
        local_b4 = *(undefined4 *)(param_4 + 0x10);
        local_b8 = *(undefined4 *)(param_4 + 0xc);
        uVar11 = *(uint *)(param_1 + 0x10);
        uVar8 = (*(int **)(param_4 + 4))[1];
        uVar5 = 0;
        if (uVar8 <= uVar11) {
          iVar6 = thunk_FUN_016dd50a(**(int **)(param_4 + 4) + 8,piVar7 + 2,uVar8);
          uVar5 = uVar8;
          if (iVar6 != 0) {
            uVar5 = 0;
          }
        }
        uVar12 = FUN_011e1508((int)(piVar7 + 2) + uVar5,uVar11 - uVar5);
        local_bc = 3;
        iVar6 = 2;
      }
      uVar13 = FUN_01238114(param_3);
      local_84 = *(int *)(param_1 + 8);
      uVar9 = *(undefined4 *)(param_1 + 4);
      if (local_84 == 0) {
        iVar3 = 1;
      }
      else {
        iVar3 = thunk_FUN_016d4a50(local_84);
        if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(1,local_84);
        }
      }
      FUN_016dd1aa(iVar3,uVar9,local_84);
      local_50 = 6;
      local_88 = 0x80000025;
      uStack_9c = local_bc;
      local_98 = local_b8;
      uStack_94 = local_b4;
      local_a8 = iVar6;
      local_80 = iVar3;
      local_7c = local_84;
      local_4c = param_2;
      local_30 = piVar7;
      local_2c = uVar10;
      uStack_90 = uVar12;
      local_38 = uVar13;
      iVar6 = thunk_FUN_016d4a50(0x80);
      if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(8,0x80);
      }
      FUN_016dd1aa(iVar6,&local_a8,0x80);
    }
  }
  return iVar6;
}

