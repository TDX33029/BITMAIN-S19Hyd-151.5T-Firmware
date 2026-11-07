// FUN_015796bc @ 015796bc size=580 calls_out=9 calls_in=2
// strings: 

int FUN_015796bc(int param_1,char *param_2,undefined4 param_3,int param_4)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined4 local_bc;
  int *local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8 [3];
  undefined4 uStack_9c;
  int *local_98;
  undefined4 uStack_94;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined1 local_80;
  int local_7c;
  int local_78;
  int local_74;
  undefined1 local_50;
  char *local_4c;
  undefined8 local_38;
  int *local_30;
  uint local_2c;
  
  uVar12 = CONCAT44(local_ac,local_b0);
  if (((*param_2 == '\x03') && (*(int *)(param_1 + 8) == *(int *)(param_2 + 0xc))) &&
     (iVar3 = thunk_FUN_01bed842(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_2 + 8)),
     iVar3 == 0)) {
    iVar3 = 0;
  }
  else {
    piVar6 = *(int **)(param_1 + 0xc);
    do {
      iVar3 = *piVar6;
      bVar2 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar2);
    *piVar6 = iVar3 + 1;
    if (iVar3 < 0) {
LAB_015798f0:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x15798f0);
      (*pcVar1)();
    }
    uVar10 = *(uint *)(param_1 + 0x10);
    if (param_4 == 0) {
      uVar4 = 0;
    }
    else {
      DataMemoryBarrier(0xb);
      if (*(int *)(param_4 + 0x14) != 0) {
        FUN_0154f894((undefined4 *)(param_4 + 0xc),param_4);
      }
      local_b8 = *(int **)(param_4 + 0xc);
      do {
        iVar3 = *local_b8;
        bVar2 = (bool)hasExclusiveAccess(local_b8);
      } while (!bVar2);
      *local_b8 = iVar3 + 1;
      if (iVar3 < 0) goto LAB_015798f0;
      local_b4 = *(undefined4 *)(param_4 + 0x10);
      piVar7 = piVar6 + 2;
      uVar9 = (*(int **)(param_4 + 4))[1];
      if (uVar10 < uVar9) {
        uVar9 = 0;
      }
      else {
        iVar3 = thunk_FUN_01bed842(**(int **)(param_4 + 4) + 8,piVar7,uVar9);
        if (iVar3 != 0) {
          uVar9 = 0;
        }
        piVar7 = (int *)((int)piVar7 + uVar9);
      }
      uVar12 = FUN_016bc0ec(piVar7,uVar10 - uVar9);
      local_bc = 3;
      uVar4 = 2;
    }
    uVar13 = FUN_01531840(param_3);
    local_74 = *(int *)(param_1 + 8);
    uVar8 = 0;
    if (local_74 < 0) {
LAB_01579800:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar8,local_74);
    }
    uVar11 = *(undefined4 *)(param_1 + 4);
    if (local_74 == 0) {
      iVar5 = 1;
      iVar3 = 0;
    }
    else {
      uVar8 = 1;
      iVar5 = FUN_01298504(local_74,1);
      iVar3 = local_74;
      if (iVar5 == 0) goto LAB_01579800;
    }
    FUN_01bed4e2(iVar5,uVar11,local_74);
    uStack_9c = local_bc;
    local_98 = local_b8;
    uStack_94 = local_b4;
    local_50 = 6;
    local_80 = 3;
    local_88 = 0x8000000e;
    local_a8[0] = uVar4;
    local_7c = iVar3;
    local_78 = iVar5;
    local_4c = param_2;
    local_30 = piVar6;
    local_2c = uVar10;
    uStack_90 = uVar12;
    local_38 = uVar13;
    iVar3 = thunk_FUN_01be5118(0x80);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(8,0x80);
    }
    FUN_01bed4e2(iVar3,local_a8,0x80);
  }
  return iVar3;
}

