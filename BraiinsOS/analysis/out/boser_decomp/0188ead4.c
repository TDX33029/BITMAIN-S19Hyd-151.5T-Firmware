// FUN_0188ead4 @ 0188ead4 size=288 calls_out=4 calls_in=1
// strings: 

void FUN_0188ead4(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int local_70;
  int *local_6c;
  int local_68;
  int local_60;
  int local_5c;
  int iStack_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int local_30;
  int local_2c;
  int iStack_28;
  
  FUN_0188e7a8(&local_60);
  if (local_60 == -0x80000000) {
    *param_1 = 0;
    param_1[1] = 4;
    param_1[2] = 0;
  }
  else {
    piVar2 = (int *)thunk_FUN_01be5118(0x30);
    if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(4,0x30);
    }
    *piVar2 = local_60;
    piVar2[1] = local_5c;
    piVar2[2] = iStack_58;
    local_70 = 4;
    local_68 = 1;
    iVar4 = 0xc;
    local_50 = *param_2;
    uStack_4c = param_2[1];
    uStack_48 = param_2[2];
    uStack_44 = param_2[3];
    local_40 = param_2[4];
    uStack_3c = param_2[5];
    uStack_38 = param_2[6];
    uStack_34 = param_2[7];
    local_6c = piVar2;
    while (iVar1 = local_68, FUN_0188e7a8(&local_30,&local_50), local_30 != -0x80000000) {
      if (iVar1 == local_70) {
        FUN_006520b4(&local_70,iVar1,1,4,0xc);
        piVar2 = local_6c;
      }
      piVar3 = (int *)((int)piVar2 + iVar4);
      local_68 = iVar1 + 1;
      iVar4 = iVar4 + 0xc;
      *piVar3 = local_30;
      piVar3[1] = local_2c;
      piVar3[2] = iStack_28;
    }
    *param_1 = local_70;
    param_1[1] = (int)local_6c;
    param_1[2] = local_68;
  }
  return;
}

