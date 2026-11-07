// FUN_00c043dc @ 00c043dc size=796 calls_out=10 calls_in=4
// strings: a Display implementation returned an error unexpectedly

void FUN_00c043dc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                 undefined4 *param_5)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 *puVar8;
  ulonglong uVar9;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 *local_70;
  int *local_6c;
  undefined4 *local_68;
  undefined4 *local_60;
  code *local_5c;
  undefined4 **local_58;
  undefined4 *local_54;
  undefined *local_50;
  undefined1 *local_4c;
  undefined4 **local_48;
  undefined4 *local_44;
  undefined4 *local_40;
  int *local_3c;
  int iStack_38;
  undefined4 *local_30;
  undefined2 *local_2c;
  int local_28;
  
  local_78 = param_2;
  local_74 = param_3;
  if (param_5 == (undefined4 *)0x0) {
    param_5 = (undefined4 *)0x0;
    local_3c = (int *)&DAT_00000004;
    local_40 = (undefined4 *)0x0;
  }
  else {
    piVar3 = (int *)thunk_FUN_016d4a50((int)param_5 * 0xc);
    if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,(int)param_5 * 0xc);
    }
    puVar8 = (undefined4 *)0x0;
    local_40 = param_5;
    local_3c = piVar3;
    do {
      local_28 = 0;
      local_2c = (undefined2 *)0x1;
      local_30 = (undefined4 *)0x0;
      local_54 = (undefined4 *)&LAB_00fac484;
      local_58 = (undefined4 **)(param_4 + 8);
      local_5c = FUN_009b6e24;
      local_60 = param_4;
      iVar4 = FUN_00fa948c(&local_30,&DAT_01870f94,&DAT_005988a1,&local_60);
      if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74f8("a Display implementation returned an error unexpectedly",0x37,&local_60,
                     &DAT_01870fac,&DAT_018af130);
      }
      puVar8 = (undefined4 *)((int)puVar8 + 1);
      param_4 = param_4 + 9;
      *piVar3 = (int)local_30;
      piVar3[1] = (int)local_2c;
      piVar3[2] = local_28;
      piVar3 = piVar3 + 3;
      local_60 = local_30;
      local_5c = (code *)local_2c;
      local_58 = (undefined4 **)local_28;
    } while (param_5 != puVar8);
  }
  local_70 = local_40;
  local_6c = local_3c;
  local_68 = param_5;
  FUN_00c4406c(&local_60,local_3c,param_5,&DAT_00410f51,1);
  local_40 = local_60;
  local_3c = (int *)local_5c;
  iStack_38 = (int)local_58;
  uVar9 = FUN_007143c8();
  piVar3 = (int *)uVar9;
  cVar1 = *(char *)((int)piVar3 + 0x59);
  if ((((uVar9 & 0x100000000) == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
     (iVar4 = FUN_015bf3f8(), iVar4 == 0)) {
    *(undefined1 *)(piVar3 + 1) = 1;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar3;
    bVar2 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar2);
  *piVar3 = 0;
  if (iVar4 == 2) {
    FUN_016d6968(0xf0,piVar3,0x81,1);
  }
  if (cVar1 == '\0') {
    puVar5 = (undefined2 *)&DAT_00000001;
    puVar8 = (undefined4 *)0x0;
    uVar6 = 0;
  }
  else {
    uVar6 = 3;
    puVar5 = (undefined2 *)thunk_FUN_016d4a50(3);
    puVar8 = (undefined4 *)0x3;
    if (puVar5 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,3);
    }
    *(undefined1 *)(puVar5 + 1) = 0x54;
    *puVar5 = 0x432d;
  }
  local_48 = &local_30;
  local_44 = &DAT_006043a8;
  local_50 = &DAT_005679a8;
  local_4c = &LAB_00fac484;
  local_58 = &local_40;
  local_60 = &local_78;
  local_54 = &DAT_006043a8;
  local_5c = (code *)&DAT_0157d360;
  local_30 = puVar8;
  local_2c = puVar5;
  local_28 = uVar6;
  FUN_00600d2c(param_1,&DAT_005774e6,&local_60);
  if (local_30 != (undefined4 *)0x0) {
    thunk_FUN_016d3fb4(local_2c);
  }
  if (local_40 != (undefined4 *)0x0) {
    thunk_FUN_016d3fb4(local_3c);
  }
  piVar3 = local_6c;
  piVar7 = local_6c + 1;
  for (puVar8 = local_68; puVar8 != (undefined4 *)0x0; puVar8 = (undefined4 *)((int)puVar8 + -1)) {
    if (piVar7[-1] != 0) {
      thunk_FUN_016d3fb4(*piVar7);
    }
    piVar7 = piVar7 + 3;
  }
  if (local_70 != (undefined4 *)0x0) {
    thunk_FUN_016d3fb4(piVar3);
  }
  return;
}

