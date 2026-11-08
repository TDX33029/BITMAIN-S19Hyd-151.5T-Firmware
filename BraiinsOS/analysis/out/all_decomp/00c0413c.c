// FUN_00c0413c @ 00c0413c size=512 calls_out=7 calls_in=1
// strings: a Display implementation returned an error unexpectedly

void FUN_00c0413c(undefined4 param_1,int **param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int **ppiVar3;
  int *piVar4;
  int **local_58;
  int *local_54;
  int iStack_50;
  int **local_48;
  int *local_44;
  int *local_40;
  int **local_38;
  code *local_34;
  int **local_30;
  undefined1 *local_2c;
  
  if (param_3 == (int *)0x0) {
    param_3 = (int *)0x0;
    local_54 = (int *)&DAT_00000004;
    local_58 = (int **)0x0;
  }
  else {
    piVar1 = (int *)thunk_FUN_016d4a50((int)param_3 * 0xc);
    if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,(int)param_3 * 0xc);
    }
    piVar4 = (int *)0x0;
    local_58 = (int **)param_3;
    local_54 = piVar1;
    do {
      local_40 = (int *)0x0;
      local_44 = (int *)0x1;
      local_48 = (int **)0x0;
      local_2c = &LAB_00fac484;
      local_30 = param_2 + 8;
      local_34 = FUN_009b6e24;
      local_38 = param_2;
      iVar2 = FUN_00fa948c(&local_48,&DAT_01870f94,&DAT_005988a1,&local_38);
      if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74f8("a Display implementation returned an error unexpectedly",0x37,&local_38,
                     &DAT_01870fac,&DAT_018af130);
      }
      piVar4 = (int *)((int)piVar4 + 1);
      param_2 = param_2 + 9;
      *piVar1 = (int)local_48;
      piVar1[1] = (int)local_44;
      piVar1[2] = (int)local_40;
      piVar1 = piVar1 + 3;
      local_38 = local_48;
      local_34 = (code *)local_44;
      local_30 = (int **)local_40;
    } while (param_3 != piVar4);
  }
  piVar1 = local_54;
  local_48 = local_58;
  local_44 = local_54;
  local_40 = param_3;
  FUN_00c4406c(&local_38,local_54,param_3,&DAT_00410f51,1);
  local_58 = local_38;
  local_54 = (int *)local_34;
  iStack_50 = (int)local_30;
  local_34 = (code *)&DAT_006043a8;
  ppiVar3 = (int **)&local_58;
  local_2c = &LAB_00fac484;
  local_30 = (int **)&DAT_005679a8;
  local_38 = ppiVar3;
  FUN_00600d2c(param_1,&DAT_00574871,&local_38);
  piVar4 = (int *)0x0;
  if (local_58 != (int **)0x0) goto LAB_00c04360;
  do {
    ppiVar3 = (int **)(piVar1 + (int)piVar4 * 3 + -3);
    do {
      if (param_3 == piVar4) {
        if (local_48 != (int **)0x0) {
          thunk_FUN_016d3fb4(piVar1);
        }
        return;
      }
      ppiVar3 = ppiVar3 + 3;
      piVar4 = (int *)((int)piVar4 + 1);
    } while (*ppiVar3 == (int *)0x0);
LAB_00c04360:
    thunk_FUN_016d3fb4(ppiVar3[1]);
  } while( true );
}

