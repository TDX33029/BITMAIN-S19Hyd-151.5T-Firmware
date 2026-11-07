// FUN_0159b18c @ 0159b18c size=512 calls_out=8 calls_in=2
// strings: 

int FUN_0159b18c(int param_1,char *param_2,undefined4 param_3,int param_4)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined4 local_cc;
  int *local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 local_a8 [3];
  undefined4 uStack_9c;
  int *local_98;
  undefined4 uStack_94;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 local_50;
  char *local_4c;
  undefined8 local_38;
  int *local_30;
  uint local_2c;
  
  uVar9 = CONCAT44(local_bc,local_c0);
  iVar5 = 0;
  if ((*param_2 == '\x03') &&
     (iVar3 = (**(code **)(*(int *)(param_1 + 0x1c) + 0xc))
                        (*(int *)(param_1 + 0x18) +
                         (*(int *)(*(int *)(param_1 + 0x1c) + 8) - 1U & 0xfffffff8) + 8,
                         *(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0xc)), iVar3 == 0))
  {
    piVar6 = *(int **)(param_1 + 0xc);
    do {
      iVar5 = *piVar6;
      bVar2 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar2);
    *piVar6 = iVar5 + 1;
    if (iVar5 < 0) {
LAB_0159b378:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x159b378);
      (*pcVar1)();
    }
    uVar4 = *(uint *)(param_1 + 0x10);
    if (param_4 == 0) {
      local_a8[0] = 0;
    }
    else {
      DataMemoryBarrier(0xb);
      if (*(int *)(param_4 + 0x14) != 0) {
        FUN_0154f894((undefined4 *)(param_4 + 0xc),param_4);
      }
      local_c8 = *(int **)(param_4 + 0xc);
      do {
        iVar5 = *local_c8;
        bVar2 = (bool)hasExclusiveAccess(local_c8);
      } while (!bVar2);
      *local_c8 = iVar5 + 1;
      if (iVar5 < 0) goto LAB_0159b378;
      local_c4 = *(undefined4 *)(param_4 + 0x10);
      piVar7 = piVar6 + 2;
      uVar8 = (*(int **)(param_4 + 4))[1];
      if (uVar4 < uVar8) {
        uVar8 = 0;
      }
      else {
        iVar5 = thunk_FUN_01bed842(**(int **)(param_4 + 4) + 8,piVar7,uVar8);
        if (iVar5 != 0) {
          uVar8 = 0;
        }
        piVar7 = (int *)((int)piVar7 + uVar8);
      }
      uVar9 = FUN_016bc0ec(piVar7,uVar4 - uVar8);
      local_cc = 3;
      local_a8[0] = 2;
    }
    uVar10 = FUN_01531840(param_3);
    FUN_006666fc(&local_b8,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
    uStack_9c = local_cc;
    local_98 = local_c8;
    uStack_94 = local_c4;
    local_50 = 6;
    local_88 = 0x80000017;
    local_84 = local_b8;
    uStack_80 = uStack_b4;
    uStack_7c = uStack_b0;
    local_4c = param_2;
    local_30 = piVar6;
    local_2c = uVar4;
    uStack_90 = uVar9;
    local_38 = uVar10;
    iVar5 = thunk_FUN_01be5118(0x80);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(8,0x80);
    }
    FUN_01bed4e2(iVar5,local_a8,0x80);
  }
  return iVar5;
}

