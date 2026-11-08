// FUN_01579a04 @ 01579a04 size=428 calls_out=7 calls_in=2
// strings: 

int FUN_01579a04(undefined4 *param_1,char *param_2,undefined4 param_3,int param_4)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
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
  undefined1 local_7f;
  undefined1 local_50;
  char *local_4c;
  undefined8 local_38;
  int *piStack_30;
  uint uStack_2c;
  
  uStack_90 = CONCAT44(local_ac,local_b0);
  if ((*param_2 != '\x01') || (iVar3 = 0, *(char *)(param_1 + 2) != param_2[1])) {
    piVar4 = (int *)*param_1;
    do {
      iVar3 = *piVar4;
      bVar2 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar2);
    *piVar4 = iVar3 + 1;
    if (iVar3 < 0) {
LAB_01579b9c:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x1579b9c);
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
      if (iVar3 < 0) goto LAB_01579b9c;
      local_b4 = *(undefined4 *)(param_4 + 0x10);
      piVar5 = piVar4 + 2;
      uVar7 = (*(int **)(param_4 + 4))[1];
      if (uVar6 < uVar7) {
        uVar7 = 0;
      }
      else {
        iVar3 = thunk_FUN_01bed842(**(int **)(param_4 + 4) + 8,piVar5,uVar7);
        if (iVar3 != 0) {
          uVar7 = 0;
        }
        piVar5 = (int *)((int)piVar5 + uVar7);
      }
      uStack_90 = FUN_016bc0ec(piVar5,uVar6 - uVar7);
      local_bc = 3;
      local_a8[0] = 2;
    }
    local_38 = FUN_01531840(param_3);
    local_7f = *(undefined1 *)(param_1 + 2);
    local_50 = 6;
    local_80 = 1;
    local_88 = 0x8000000e;
    uStack_9c = local_bc;
    local_98 = local_b8;
    uStack_94 = local_b4;
    local_4c = param_2;
    piStack_30 = piVar4;
    uStack_2c = uVar6;
    iVar3 = thunk_FUN_01be5118(0x80);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(8,0x80);
    }
    FUN_01bed4e2(iVar3,local_a8,0x80);
  }
  return iVar3;
}

