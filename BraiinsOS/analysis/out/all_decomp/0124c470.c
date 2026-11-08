// FUN_0124c470 @ 0124c470 size=500 calls_out=7 calls_in=0
// strings: 

int FUN_0124c470(undefined4 *param_1,char *param_2,undefined4 param_3,int param_4)

{
  code *pcVar1;
  bool bVar2;
  char *pcVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  char *pcVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
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
  iVar8 = 0;
  if (*param_2 == '\x04') {
    iVar8 = *(int *)(param_2 + 0xc) * 0x18;
    pcVar3 = *(char **)(param_2 + 8);
    iVar4 = 0;
    do {
      iVar11 = iVar4;
      pcVar7 = pcVar3;
      if (iVar8 == 0) {
        return 0;
      }
      if (*pcVar7 != '\x02') break;
      iVar8 = iVar8 + -0x18;
      pcVar3 = pcVar7 + 0x18;
      iVar4 = iVar11 + 1;
    } while (*(uint *)(pcVar7 + 0xc) == 0 &&
             (uint)(1 < *(uint *)(pcVar7 + 8)) <= *(uint *)(pcVar7 + 0xc));
    piVar9 = (int *)*param_1;
    do {
      iVar8 = *piVar9;
      bVar2 = (bool)hasExclusiveAccess(piVar9);
    } while (!bVar2);
    *piVar9 = iVar8 + 1;
    if (iVar8 < 0) {
LAB_0124c648:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x124c648);
      (*pcVar1)();
    }
    uVar12 = param_1[1];
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
        bVar2 = (bool)hasExclusiveAccess(piVar5);
      } while (!bVar2);
      *piVar5 = iVar8 + 1;
      if (iVar8 < 0) goto LAB_0124c648;
      local_c8 = *(undefined4 *)(param_4 + 0xc);
      local_c4 = *(undefined4 *)(param_4 + 0x10);
      uVar10 = (*(int **)(param_4 + 4))[1];
      uVar6 = 0;
      if (uVar10 <= uVar12) {
        iVar8 = thunk_FUN_016dd50a(**(int **)(param_4 + 4) + 8,piVar9 + 2,uVar10);
        uVar6 = uVar10;
        if (iVar8 != 0) {
          uVar6 = 0;
        }
      }
      uStack_90 = FUN_011e1508((int)(piVar9 + 2) + uVar6,uVar12 - uVar6);
      local_cc = 3;
      local_a8[0] = 2;
    }
    local_b8 = 0x80000001;
    local_b4 = iVar11;
    local_ac = param_3;
    local_38 = FUN_01238114(&local_b8);
    local_84 = 0x400;
    local_88 = &DAT_80000028;
    local_50 = 6;
    uStack_9c = local_cc;
    local_98 = local_c8;
    uStack_94 = local_c4;
    local_4c = pcVar7;
    local_30 = piVar9;
    local_2c = uVar12;
    iVar8 = thunk_FUN_016d4a50(0x80);
    if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(8,0x80);
    }
    FUN_016dd1aa(iVar8,local_a8,0x80);
  }
  return iVar8;
}

