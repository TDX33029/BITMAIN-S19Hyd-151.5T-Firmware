// FUN_01aa0048 @ 01aa0048 size=284 calls_out=4 calls_in=3
// strings: 

void FUN_01aa0048(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4,
                 undefined4 param_5,int param_6)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int local_34;
  undefined4 *local_30;
  undefined2 *local_2c;
  int *local_28;
  undefined1 *local_24;
  
  uStack_38 = param_5;
  uStack_44 = param_2;
  iStack_40 = param_3;
  uStack_3c = param_4;
  if (param_6 == 0) {
    local_30 = &uStack_3c;
    local_2c = &DAT_0132b6a0;
    FUN_00664898(param_1 + 1,&DAT_00580a90,&local_30);
    uVar4 = 1;
  }
  else {
    local_34 = param_6;
    if (param_3 == 0) {
      iVar2 = *(int *)(param_6 + 8);
      uVar3 = 0;
      if (iVar2 < 0) {
LAB_01aa00f8:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(uVar3,iVar2);
      }
      uVar5 = *(undefined4 *)(param_6 + 4);
      uVar4 = 0;
      if (iVar2 == 0) {
        iVar1 = 1;
        iVar6 = 0;
      }
      else {
        uVar3 = 1;
        iVar1 = FUN_01298504(iVar2,1);
        iVar6 = iVar2;
        if (iVar1 == 0) goto LAB_01aa00f8;
      }
      FUN_01bed4e2(iVar1,uVar5,iVar2);
      param_1[1] = iVar6;
      param_1[2] = iVar1;
      param_1[3] = iVar2;
    }
    else {
      local_28 = &local_34;
      local_24 = &LAB_0193a90c;
      local_2c = &DAT_0132b6a0;
      local_30 = &uStack_44;
      FUN_00664898(param_1 + 1,&DAT_005b64e9,&local_30);
      uVar4 = 0;
    }
  }
  *param_1 = uVar4;
  return;
}

