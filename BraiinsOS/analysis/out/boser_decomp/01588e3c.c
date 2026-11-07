// FUN_01588e3c @ 01588e3c size=420 calls_out=7 calls_in=2
// strings: 

int FUN_01588e3c(undefined4 *param_1,char *param_2,undefined4 param_3,int param_4)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
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
  uint local_84;
  undefined1 local_50;
  char *local_4c;
  undefined8 local_38;
  int *local_30;
  uint local_2c;
  
  uStack_90 = CONCAT44(local_ac,local_b0);
  iVar3 = 0;
  if ((*param_2 == '\x04') && (uVar7 = param_1[2], uVar7 < *(uint *)(param_2 + 0xc))) {
    piVar4 = (int *)*param_1;
    do {
      iVar3 = *piVar4;
      bVar2 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar2);
    *piVar4 = iVar3 + 1;
    if (iVar3 < 0) {
LAB_01588fcc:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x1588fcc);
      (*pcVar1)();
    }
    uVar6 = param_1[1];
    if (param_4 == 0) {
      local_a8[0] = 0;
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
      if (iVar3 < 0) goto LAB_01588fcc;
      piVar8 = piVar4 + 2;
      local_b4 = *(undefined4 *)(param_4 + 0x10);
      uVar5 = (*(int **)(param_4 + 4))[1];
      if (uVar6 < uVar5) {
        uVar5 = 0;
      }
      else {
        iVar3 = thunk_FUN_01bed842(**(int **)(param_4 + 4) + 8,piVar8,uVar5);
        if (iVar3 != 0) {
          uVar5 = 0;
        }
        piVar8 = (int *)((int)piVar8 + uVar5);
      }
      uStack_90 = FUN_016bc0ec(piVar8,uVar6 - uVar5);
      local_bc = 3;
      local_a8[0] = 2;
    }
    local_38 = FUN_01531840(param_3);
    local_88 = 0x8000000a;
    local_50 = 6;
    uStack_9c = local_bc;
    local_98 = local_b8;
    uStack_94 = local_b4;
    local_84 = uVar7;
    local_4c = param_2;
    local_30 = piVar4;
    local_2c = uVar6;
    iVar3 = thunk_FUN_01be5118(0x80);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(8,0x80);
    }
    FUN_01bed4e2(iVar3,local_a8,0x80);
  }
  return iVar3;
}

