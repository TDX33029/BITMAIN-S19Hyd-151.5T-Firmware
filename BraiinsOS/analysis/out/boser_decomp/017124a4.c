// FUN_017124a4 @ 017124a4 size=444 calls_out=7 calls_in=2
// strings: 

void FUN_017124a4(int *param_1,undefined4 *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int local_8c;
  undefined4 local_88;
  int local_84;
  undefined4 uStack_80;
  undefined4 local_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  int *local_70;
  int local_6c;
  int *local_68;
  int local_64;
  int local_60;
  int local_5c;
  int iStack_58;
  undefined4 local_50;
  int local_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int *piStack_38;
  int local_30;
  int local_2c;
  int iStack_28;
  
  local_8c = 0;
  local_88 = *param_2;
  local_84 = param_2[1];
  uStack_80 = param_2[2];
  local_7c = param_2[3];
  uStack_78 = param_2[4];
  uStack_74 = param_2[5];
  local_70 = &local_8c;
  FUN_0171189c(&local_60,&local_88);
  if (local_60 == -0x80000000) {
    iVar3 = 0;
    if (local_84 != 0) {
      thunk_FUN_01be4678(local_88);
    }
    iVar4 = 0;
    piVar1 = (int *)&SUB_00000004;
  }
  else {
    piVar1 = (int *)FUN_01298504(0x30,4);
    if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(4,0x30);
    }
    *piVar1 = local_60;
    piVar1[1] = local_5c;
    piVar1[2] = iStack_58;
    local_6c = 4;
    iVar4 = 0xc;
    local_64 = 1;
    local_50 = local_88;
    local_4c = local_84;
    uStack_48 = uStack_80;
    local_44 = local_7c;
    uStack_40 = uStack_78;
    uStack_3c = uStack_74;
    piStack_38 = local_70;
    local_68 = piVar1;
    while (iVar3 = local_64, FUN_0171189c(&local_30,&local_50), local_30 != -0x80000000) {
      if (iVar3 == local_6c) {
        FUN_01af7b44(&local_6c,iVar3,1,4,0xc);
        piVar1 = local_68;
      }
      piVar2 = (int *)((int)piVar1 + iVar4);
      local_64 = iVar3 + 1;
      iVar4 = iVar4 + 0xc;
      *piVar2 = local_30;
      piVar2[1] = local_2c;
      piVar2[2] = iStack_28;
    }
    if (local_4c != 0) {
      thunk_FUN_01be4678(local_50);
    }
    iVar4 = local_6c;
    piVar1 = local_68;
  }
  if (local_8c == 0) {
    *param_1 = iVar4;
    param_1[1] = (int)piVar1;
    param_1[2] = iVar3;
  }
  else {
    piVar2 = piVar1 + 1;
    *param_1 = -0x80000000;
    param_1[1] = local_8c;
    for (; iVar3 != 0; iVar3 = iVar3 + -1) {
      FUN_0134bd64(piVar2[-1],*piVar2);
      piVar2 = piVar2 + 3;
    }
    FUN_0134aee0(iVar4,piVar1,4,0xc);
  }
  return;
}

