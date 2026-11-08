// FUN_005e7098 @ 005e7098 size=436 calls_out=6 calls_in=1
// strings: 

void FUN_005e7098(int *param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int local_80;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  int local_60;
  int *local_5c;
  int local_58;
  int local_50;
  int local_4c;
  int local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int local_30;
  int local_2c;
  int iStack_28;
  
  local_68 = 0;
  local_6c = 0;
  local_70 = param_2;
  FUN_00f2a124(&local_50,&local_70);
  if (local_50 == -0x80000000) {
    local_80 = 0;
    iVar4 = 0;
    piVar2 = (int *)&DAT_00000004;
  }
  else {
    piVar2 = (int *)thunk_FUN_016d4a50(0x30);
    if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,0x30);
    }
    *piVar2 = local_50;
    piVar2[1] = local_4c;
    piVar2[2] = local_48;
    local_60 = 4;
    iVar4 = 0xc;
    local_58 = 1;
    local_40 = local_70;
    uStack_3c = local_6c;
    uStack_38 = local_68;
    local_5c = piVar2;
    while (iVar1 = local_58, FUN_00f2a124(&local_30,&local_40), local_30 != -0x80000000) {
      if (iVar1 == local_60) {
        FUN_00edff4c(&local_60,iVar1,1,4,0xc);
        piVar2 = local_5c;
      }
      local_58 = iVar1 + 1;
      piVar3 = (int *)((int)piVar2 + iVar4);
      *piVar3 = local_30;
      iVar4 = iVar4 + 0xc;
      piVar3[1] = local_2c;
      piVar3[2] = iStack_28;
    }
    local_80 = local_60;
    iVar4 = local_58;
    piVar2 = local_5c;
  }
  FUN_00ebe2ac(&local_30,piVar2,iVar4,&DAT_0041950f);
  *param_1 = local_30;
  param_1[1] = local_2c;
  param_1[2] = iStack_28;
  piVar3 = piVar2 + 1;
  for (; iVar4 != 0; iVar4 = iVar4 + -1) {
    if (piVar3[-1] != 0) {
      thunk_FUN_016d3fb4(*piVar3);
    }
    piVar3 = piVar3 + 3;
  }
  if (local_80 != 0) {
    thunk_FUN_016d3fb4(piVar2);
  }
  return;
}

