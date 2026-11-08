// FUN_01242eb0 @ 01242eb0 size=476 calls_out=7 calls_in=0
// strings: 

int FUN_01242eb0(undefined4 *param_1,char *param_2,undefined4 param_3,int param_4)

{
  code *pcVar1;
  bool bVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  char *pcVar8;
  int iVar9;
  uint uVar10;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  int local_b4;
  undefined4 local_ac;
  undefined4 local_a8 [3];
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined8 uStack_90;
  undefined1 *local_88;
  undefined2 local_84;
  undefined1 local_50;
  char *local_4c;
  undefined8 local_38;
  int *local_30;
  uint local_2c;
  
  uStack_90 = CONCAT44(local_bc,local_c0);
  iVar5 = 0;
  if (*param_2 == '\x04') {
    iVar9 = -1;
    pcVar8 = (char *)(*(int *)(param_2 + 8) + -0x18);
    iVar5 = *(int *)(param_2 + 0xc) * 0x18;
    do {
      if (iVar5 == 0) {
        return 0;
      }
      pcVar8 = pcVar8 + 0x18;
      iVar5 = iVar5 + -0x18;
      iVar9 = iVar9 + 1;
    } while (*pcVar8 == '\x02');
    piVar6 = (int *)*param_1;
    do {
      iVar5 = *piVar6;
      bVar2 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar2);
    *piVar6 = iVar5 + 1;
    if (iVar5 < 0) {
LAB_01243070:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x1243070);
      (*pcVar1)();
    }
    uVar10 = param_1[1];
    if (param_4 == 0) {
      local_a8[0] = 0;
    }
    else {
      DataMemoryBarrier(0xb);
      if (*(int *)(param_4 + 0x14) != 0) {
        FUN_011f6248((undefined4 *)(param_4 + 0xc),param_4);
      }
      piVar3 = *(int **)(param_4 + 0xc);
      do {
        iVar5 = *piVar3;
        bVar2 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar2);
      *piVar3 = iVar5 + 1;
      if (iVar5 < 0) goto LAB_01243070;
      local_c8 = *(undefined4 *)(param_4 + 0xc);
      local_c4 = *(undefined4 *)(param_4 + 0x10);
      uVar7 = (*(int **)(param_4 + 4))[1];
      uVar4 = 0;
      if (uVar7 <= uVar10) {
        iVar5 = thunk_FUN_016dd50a(**(int **)(param_4 + 4) + 8,piVar6 + 2,uVar7);
        uVar4 = uVar7;
        if (iVar5 != 0) {
          uVar4 = 0;
        }
      }
      uStack_90 = FUN_011e1508((int)(piVar6 + 2) + uVar4,uVar10 - uVar4);
      local_cc = 3;
      local_a8[0] = 2;
    }
    local_b8 = 0x80000001;
    local_b4 = iVar9;
    local_ac = param_3;
    local_38 = FUN_01238114(&local_b8);
    local_84 = 0x1000;
    local_88 = &DAT_80000028;
    local_50 = 6;
    uStack_9c = local_cc;
    local_98 = local_c8;
    uStack_94 = local_c4;
    local_4c = pcVar8;
    local_30 = piVar6;
    local_2c = uVar10;
    iVar5 = thunk_FUN_016d4a50(0x80);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(8,0x80);
    }
    FUN_016dd1aa(iVar5,local_a8,0x80);
  }
  return iVar5;
}

