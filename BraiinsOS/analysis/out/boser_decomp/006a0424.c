// FUN_006a0424 @ 006a0424 size=412 calls_out=5 calls_in=1
// strings: 

void FUN_006a0424(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined8 uVar5;
  int local_98;
  int *local_94;
  int local_90;
  int local_88;
  int local_84;
  int iStack_80;
  undefined4 local_78;
  undefined2 *local_74;
  undefined8 *local_70;
  undefined2 *local_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  int local_48;
  int local_44;
  int iStack_40;
  undefined8 local_3c;
  undefined8 local_34;
  undefined8 *local_2c;
  undefined2 *local_28;
  
  local_34 = FUN_0067d938(param_2);
  if ((int)local_34 != 0) {
    local_78 = param_2[10];
    local_70 = &local_34;
    local_6c = &DAT_0132b6a0;
    local_74 = &DAT_0132b6a0;
    FUN_00664898(&local_88,&DAT_005848bb,&local_78);
    if (local_88 != -0x80000000) {
      piVar2 = (int *)thunk_FUN_01be5118(0x30);
      if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(4,0x30);
      }
      *piVar2 = local_88;
      piVar2[1] = local_84;
      piVar2[2] = iStack_80;
      local_98 = 4;
      local_90 = 1;
      local_78 = *param_2;
      local_74 = (undefined2 *)param_2[1];
      local_70 = (undefined8 *)param_2[2];
      local_6c = (undefined2 *)param_2[3];
      uStack_68 = param_2[4];
      local_64 = param_2[5];
      uStack_60 = param_2[6];
      uStack_5c = param_2[7];
      uStack_58 = param_2[8];
      uStack_54 = param_2[9];
      local_50 = param_2[10];
      iVar4 = 0xc;
      local_94 = piVar2;
      while( true ) {
        iVar1 = local_90;
        uVar5 = FUN_0067d938(&local_78);
        if ((int)uVar5 == 0) break;
        local_2c = &local_3c;
        local_28 = &DAT_0132b6a0;
        local_34._4_4_ = &DAT_0132b6a0;
        local_34._0_4_ = local_50;
        local_3c = uVar5;
        FUN_00664898(&local_48,&DAT_005848bb,&local_34);
        if (local_48 == -0x80000000) break;
        if (iVar1 == local_98) {
          FUN_006520b4(&local_98,iVar1,1,4,0xc);
          piVar2 = local_94;
        }
        piVar3 = (int *)((int)piVar2 + iVar4);
        local_90 = iVar1 + 1;
        iVar4 = iVar4 + 0xc;
        *piVar3 = local_48;
        piVar3[1] = local_44;
        piVar3[2] = iStack_40;
      }
      *param_1 = local_98;
      param_1[1] = (int)local_94;
      param_1[2] = local_90;
      return;
    }
  }
  *param_1 = 0;
  param_1[1] = 4;
  param_1[2] = 0;
  return;
}

