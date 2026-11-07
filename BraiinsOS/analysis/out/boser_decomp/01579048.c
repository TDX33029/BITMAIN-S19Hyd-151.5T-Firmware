// FUN_01579048 @ 01579048 size=496 calls_out=8 calls_in=2
// strings: 

int FUN_01579048(int param_1,char *param_2,undefined4 param_3,int param_4)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined4 local_d4;
  int *local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined1 auStack_c0 [24];
  undefined4 local_a8 [3];
  undefined4 uStack_9c;
  int *local_98;
  undefined4 uStack_94;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined1 local_80;
  undefined1 auStack_7f [47];
  undefined1 local_50;
  char *local_4c;
  undefined8 local_38;
  int *local_30;
  uint local_2c;
  
  uVar8 = CONCAT44(local_c4,local_c8);
  if ((*param_2 == '\x02') && (iVar3 = FUN_01578d28(param_2 + 8,param_1), iVar3 != 0)) {
    return 0;
  }
  piVar4 = *(int **)(param_1 + 0x10);
  do {
    iVar3 = *piVar4;
    bVar2 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar2);
  *piVar4 = iVar3 + 1;
  if (iVar3 < 0) {
LAB_01579224:
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x1579224);
    (*pcVar1)();
  }
  uVar6 = *(uint *)(param_1 + 0x14);
  if (param_4 == 0) {
    local_a8[0] = 0;
  }
  else {
    DataMemoryBarrier(0xb);
    if (*(int *)(param_4 + 0x14) != 0) {
      FUN_0154f894((undefined4 *)(param_4 + 0xc),param_4);
    }
    local_d0 = *(int **)(param_4 + 0xc);
    do {
      iVar3 = *local_d0;
      bVar2 = (bool)hasExclusiveAccess(local_d0);
    } while (!bVar2);
    *local_d0 = iVar3 + 1;
    if (iVar3 < 0) goto LAB_01579224;
    local_cc = *(undefined4 *)(param_4 + 0x10);
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
    uVar8 = FUN_016bc0ec(piVar5,uVar6 - uVar7);
    local_d4 = 3;
    local_a8[0] = 2;
  }
  uVar9 = FUN_01531840(param_3);
  FUN_01bed4e2((uint)auStack_c0 | 7,param_1,0x10);
  uStack_9c = local_d4;
  local_98 = local_d0;
  uStack_94 = local_cc;
  local_50 = 6;
  local_80 = 2;
  local_88 = 0x8000000e;
  local_4c = param_2;
  uStack_90 = uVar8;
  FUN_01bed4e2(auStack_7f,auStack_c0,0x17);
  local_30 = piVar4;
  local_2c = uVar6;
  local_38 = uVar9;
  iVar3 = thunk_FUN_01be5118(0x80);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x80);
  }
  FUN_01bed4e2(iVar3,local_a8,0x80);
  return iVar3;
}

