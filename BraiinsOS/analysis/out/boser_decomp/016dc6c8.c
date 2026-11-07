// FUN_016dc6c8 @ 016dc6c8 size=232 calls_out=4 calls_in=1
// strings: 

void FUN_016dc6c8(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int local_24;
  int *local_20;
  code *local_1c;
  
  iVar1 = FUN_016d4a28(param_2);
  FUN_016d4f3c(&local_40,param_2);
  FUN_016d4fe8(param_2);
  if (iVar1 < 100) {
    if (iVar1 == 0x44) {
      uVar3 = 1;
LAB_016dc760:
      uVar2 = uVar3;
      uVar3 = 0;
      goto LAB_016dc764;
    }
    if (iVar1 == 0x53) {
      uVar3 = 1;
      uVar2 = 1;
      goto LAB_016dc764;
    }
    if (iVar1 != 0x57) {
LAB_016dc780:
      local_1c = FUN_012fbb84;
      local_20 = &local_24;
      local_24 = iVar1;
                    /* WARNING: Subroutine does not return */
      FUN_012fb100(&DAT_005820e2,&local_20,&DAT_01d09ef8);
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
    uVar3 = 0;
    if (iVar1 == 100) goto LAB_016dc760;
    if (iVar1 == 0x73) {
      uVar3 = 1;
      goto LAB_016dc764;
    }
    uVar2 = 0;
    if (iVar1 != 0x77) goto LAB_016dc780;
  }
  uVar3 = 2;
LAB_016dc764:
  *param_1 = local_40;
  param_1[1] = uStack_3c;
  param_1[2] = uStack_38;
  param_1[3] = uStack_34;
  param_1[4] = uStack_30;
  param_1[5] = uStack_2c;
  *(undefined1 *)((int)param_1 + 0x19) = uVar2;
  *(undefined1 *)(param_1 + 6) = uVar3;
  return;
}

