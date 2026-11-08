// FUN_011b67ec @ 011b67ec size=480 calls_out=8 calls_in=1
// strings: 

int FUN_011b67ec(undefined4 *param_1,char *param_2,undefined4 param_3,int param_4)

{
  code *pcVar1;
  bool bVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 extraout_s1;
  double dVar10;
  undefined8 uVar11;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0 [3];
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined8 uStack_98;
  undefined1 *local_90;
  undefined2 local_8c;
  undefined1 local_58;
  char *local_54;
  undefined8 local_40;
  int *local_38;
  uint local_34;
  
  uVar11 = CONCAT44(local_b4,local_b8);
  if (*param_2 == '\x02') {
    uVar6 = *(uint *)(param_2 + 8);
    uVar4 = *(uint *)(param_2 + 0xc);
    if (uVar4 == 0 && (1 < uVar6) <= uVar4) {
      return 0;
    }
    dVar10 = *(double *)(param_2 + 0x10);
    uVar9 = FUN_016d62a0(SUB84(dVar10,0),param_1,uVar4 - (1 >= uVar6),uVar6 - 2);
    if (dVar10 - (double)CONCAT44(extraout_s1,uVar9) == 0.0) {
      return 0;
    }
  }
  piVar7 = (int *)*param_1;
  do {
    iVar5 = *piVar7;
    bVar2 = (bool)hasExclusiveAccess(piVar7);
  } while (!bVar2);
  *piVar7 = iVar5 + 1;
  if (iVar5 < 0) {
LAB_011b69b0:
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x11b69b0);
    (*pcVar1)();
  }
  uVar4 = param_1[1];
  if (param_4 == 0) {
    local_b0[0] = 0;
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
    if (iVar5 < 0) goto LAB_011b69b0;
    local_c0 = *(undefined4 *)(param_4 + 0xc);
    local_bc = *(undefined4 *)(param_4 + 0x10);
    uVar6 = 0;
    uVar8 = (*(int **)(param_4 + 4))[1];
    if (uVar8 <= uVar4) {
      iVar5 = thunk_FUN_016dd50a(**(int **)(param_4 + 4) + 8,piVar7 + 2,uVar8);
      uVar6 = uVar8;
      if (iVar5 != 0) {
        uVar6 = 0;
      }
    }
    uVar11 = FUN_011e1508((int)(piVar7 + 2) + uVar6,uVar4 - uVar6);
    local_c4 = 3;
    local_b0[0] = 2;
  }
  local_40 = FUN_01238114(param_3);
  local_8c = 0x400;
  local_90 = &DAT_80000028;
  local_58 = 6;
  uStack_a4 = local_c4;
  local_a0 = local_c0;
  uStack_9c = local_bc;
  local_54 = param_2;
  local_38 = piVar7;
  local_34 = uVar4;
  uStack_98 = uVar11;
  iVar5 = thunk_FUN_016d4a50(0x80);
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x80);
  }
  FUN_016dd1aa(iVar5,local_b0,0x80);
  return iVar5;
}

