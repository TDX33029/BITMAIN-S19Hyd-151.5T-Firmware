// FUN_011d6790 @ 011d6790 size=396 calls_out=8 calls_in=2
// strings: 

int FUN_011d6790(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  undefined8 uVar10;
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
  uint local_2c;
  
  uVar10 = CONCAT44(local_ac,local_b0);
  iVar3 = FUN_011d6584();
  iVar4 = 0;
  if (iVar3 == 0) {
    piVar7 = (int *)*param_1;
    do {
      iVar3 = *piVar7;
      bVar2 = (bool)hasExclusiveAccess(piVar7);
    } while (!bVar2);
    *piVar7 = iVar3 + 1;
    if (iVar3 < 0) {
LAB_011d6908:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x11d6908);
      (*pcVar1)();
    }
    uVar9 = param_1[1];
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
        iVar3 = *piVar5;
        bVar2 = (bool)hasExclusiveAccess(piVar5);
      } while (!bVar2);
      *piVar5 = iVar3 + 1;
      if (iVar3 < 0) goto LAB_011d6908;
      uVar6 = 0;
      local_b8 = *(undefined4 *)(param_4 + 0xc);
      local_b4 = *(undefined4 *)(param_4 + 0x10);
      uVar8 = (*(int **)(param_4 + 4))[1];
      if (uVar8 <= uVar9) {
        iVar3 = thunk_FUN_016dd50a(**(int **)(param_4 + 4) + 8,piVar7 + 2,uVar8);
        uVar6 = uVar8;
        if (iVar3 != 0) {
          uVar6 = 0;
        }
      }
      uVar10 = FUN_011e1508((int)(piVar7 + 2) + uVar6,uVar9 - uVar6);
      local_bc = 3;
      local_a8[0] = 2;
    }
    local_38 = FUN_01238114(param_3);
    local_88 = 0x8000002b;
    local_50 = 6;
    uStack_9c = local_bc;
    local_98 = local_b8;
    uStack_94 = local_b4;
    local_4c = param_2;
    local_30 = piVar7;
    local_2c = uVar9;
    uStack_90 = uVar10;
    iVar4 = thunk_FUN_016d4a50(0x80);
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(8,0x80);
    }
    FUN_016dd1aa(iVar4,local_a8,0x80);
  }
  return iVar4;
}

