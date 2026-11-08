// FUN_00b931f8 @ 00b931f8 size=288 calls_out=4 calls_in=1
// strings: 

void FUN_00b931f8(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int local_78;
  int *local_74;
  int local_70;
  int local_68;
  int local_64;
  int iStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int local_30;
  int local_2c;
  int iStack_28;
  
  FUN_00b92b08(&local_68);
  if (local_68 == -0x80000000) {
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
    *piVar2 = local_68;
    piVar2[1] = local_64;
    piVar2[2] = iStack_60;
    local_78 = 4;
    local_70 = 1;
    local_58 = *param_2;
    uStack_54 = param_2[1];
    uStack_50 = param_2[2];
    uStack_4c = param_2[3];
    uStack_48 = param_2[4];
    local_44 = param_2[5];
    uStack_40 = param_2[6];
    uStack_3c = param_2[7];
    uStack_38 = param_2[8];
    uStack_34 = param_2[9];
    iVar4 = 0xc;
    local_74 = piVar2;
    while (iVar1 = local_70, FUN_00b92b08(&local_30,&local_58), local_30 != -0x80000000) {
      if (iVar1 == local_78) {
        FUN_006520b4(&local_78,iVar1,1,4,0xc);
        piVar2 = local_74;
      }
      piVar3 = (int *)((int)piVar2 + iVar4);
      local_70 = iVar1 + 1;
      iVar4 = iVar4 + 0xc;
      *piVar3 = local_30;
      piVar3[1] = local_2c;
      piVar3[2] = iStack_28;
    }
    *param_1 = local_78;
    param_1[1] = (int)local_74;
    param_1[2] = local_70;
  }
  return;
}

