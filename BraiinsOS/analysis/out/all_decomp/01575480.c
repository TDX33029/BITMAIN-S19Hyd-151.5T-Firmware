// FUN_01575480 @ 01575480 size=324 calls_out=4 calls_in=3
// strings: 

void FUN_01575480(uint *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar3 = *(uint *)(param_2 + 8);
  if (0x7fffffff < uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_00600c10();
  }
  uVar4 = *(undefined4 *)(param_2 + 4);
  if (uVar3 == 0) {
    uVar1 = 1;
  }
  else {
    uVar1 = thunk_FUN_016d4a50(uVar3);
    if (uVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,uVar3);
    }
  }
  FUN_016dd1aa(uVar1,uVar4,uVar3);
  uVar6 = *(uint *)(param_2 + 0x14);
  uVar4 = 0;
  if ((int)uVar6 < 0) {
LAB_015754e8:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar4,uVar6);
  }
  uVar4 = *(undefined4 *)(param_2 + 0x10);
  if (uVar6 == 0) {
    uVar2 = 1;
  }
  else {
    uVar2 = thunk_FUN_016d4a50(uVar6);
    if (uVar2 == 0) {
      uVar4 = 1;
      goto LAB_015754e8;
    }
  }
  FUN_016dd1aa(uVar2,uVar4,uVar6);
  if (*(int *)(param_2 + 0x18) == -0x7fffffff) {
    uVar5 = 0x80000001;
  }
  else {
    uVar5 = *(uint *)(param_2 + 0x20);
    uVar4 = 0;
    if ((int)uVar5 < 0) {
LAB_0157554c:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(uVar4,uVar5);
    }
    uVar4 = *(undefined4 *)(param_2 + 0x1c);
    if (uVar5 == 0) {
      param_2 = 1;
    }
    else {
      param_2 = thunk_FUN_016d4a50(uVar5);
      if (param_2 == 0) {
        uVar4 = 1;
        goto LAB_0157554c;
      }
    }
    FUN_016dd1aa(param_2,uVar4,uVar5);
  }
  param_1[8] = uVar5;
  *param_1 = uVar3;
  param_1[1] = uVar1;
  param_1[2] = uVar3;
  param_1[3] = uVar6;
  param_1[4] = uVar2;
  param_1[5] = uVar6;
  param_1[6] = uVar5;
  param_1[7] = param_2;
  return;
}

