// FUN_00e60248 @ 00e60248 size=516 calls_out=7 calls_in=1
// strings: 

void FUN_00e60248(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int local_58;
  int iStack_54;
  int iStack_50;
  undefined4 ***local_4c;
  undefined1 *local_48;
  undefined4 ***local_40;
  undefined1 *local_3c;
  int *local_38;
  undefined1 *local_34;
  int local_30;
  int local_2c;
  int local_28;
  undefined1 uStack_21;
  
  if (*(int *)(param_2 + 0x2c) == -0x80000000) {
    iVar3 = -0x80000000;
    iVar2 = *(int *)(param_2 + 0x34);
    iVar6 = *(int *)(param_2 + 0x38);
  }
  else {
    iVar2 = *(int *)(param_2 + 0x40);
    uVar4 = *(undefined4 *)(param_2 + 0x30);
    iVar6 = *(int *)(param_2 + 0x34);
    if (iVar2 == 0) {
      if (iVar6 != 0) {
        FUN_00e604c4(&local_40,uVar4,iVar6,&uStack_21);
        local_48 = &LAB_00632348;
        local_4c = &local_40;
        FUN_00664898(&local_30,&DAT_005a5fb5,&local_4c);
        goto LAB_00e6037c;
      }
      iVar6 = 0x15;
      iVar2 = thunk_FUN_01be5118(0x15);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,0x15);
      }
      FUN_01bed4e2(iVar2,&DAT_003f09b8,0x15);
      iVar3 = 0x15;
    }
    else if (iVar6 == 0) {
      FUN_00e604c4(&local_40,*(undefined4 *)(param_2 + 0x3c),iVar2,&uStack_21);
      local_48 = &LAB_00632348;
      local_4c = &local_40;
      FUN_00664898(&local_30,&DAT_005b9d6e,&local_4c);
LAB_00e6037c:
      FUN_019bb7e0(local_40,local_3c);
      iVar3 = local_30;
      iVar2 = local_2c;
      iVar6 = local_28;
    }
    else {
      FUN_00e604c4(&local_4c,*(undefined4 *)(param_2 + 0x3c),iVar2,&uStack_21);
      FUN_00e604c4(&local_30,uVar4,iVar6,&uStack_21);
      local_34 = &LAB_00632348;
      local_3c = &LAB_00632348;
      local_40 = &local_4c;
      local_38 = &local_30;
      FUN_00664898(&local_58,&DAT_00594c6b,&local_40);
      FUN_019bb7e0(local_30,local_2c);
      FUN_019bb7e0(local_4c,local_48);
      iVar3 = local_58;
      iVar2 = iStack_54;
      iVar6 = iStack_50;
    }
  }
  if (iVar6 < 0) {
    uVar4 = 0;
LAB_00e603d0:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar4,iVar6);
  }
  if (iVar6 == 0) {
    iVar1 = 1;
    iVar5 = 0;
  }
  else {
    uVar4 = 1;
    iVar1 = FUN_01298504(iVar6,1);
    if (iVar1 == 0) goto LAB_00e603d0;
    iVar5 = iVar6;
  }
  FUN_01bed4e2(iVar1,iVar2,iVar6);
  *param_1 = iVar5;
  param_1[1] = iVar1;
  param_1[2] = iVar6;
  if (iVar3 != -0x80000000) {
    FUN_019bb7e0(iVar3,iVar2);
  }
  return;
}

