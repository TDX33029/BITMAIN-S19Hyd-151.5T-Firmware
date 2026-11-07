// FUN_013aa5a0 @ 013aa5a0 size=356 calls_out=3 calls_in=0
// strings: 

undefined4 FUN_013aa5a0(int param_1,undefined4 param_2,int *param_3,int *param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined4 local_20;
  undefined4 local_1c;
  
  uVar3 = param_3[4];
  uVar4 = param_3[5];
  if (uVar4 < uVar3) {
    return 0;
  }
  uVar2 = param_3[3];
  if (*param_3 - 1U < 2) {
    if (uVar2 < uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(uVar3,uVar4,uVar2,&DAT_01894428);
    }
    uVar2 = *(uint *)(param_1 + 0x40);
    if (uVar4 - uVar3 < uVar2) {
      return 0;
    }
    iVar1 = thunk_FUN_016dd50a(*(undefined4 *)(param_1 + 0x3c),param_3[2] + uVar3,uVar2);
    if (iVar1 != 0) {
      return 0;
    }
    iVar1 = uVar2 + uVar3;
    if (CARRY4(uVar2,uVar3)) {
LAB_013aa624:
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_003ceb44,0x25,&DAT_018935b8);
    }
  }
  else {
    if (uVar2 < uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(uVar3,uVar4,uVar2,&DAT_01894418);
    }
    uVar2 = *(uint *)(param_1 + 0x40);
    local_1c = 0;
    local_20 = 1;
    if (uVar4 - uVar3 < uVar2) {
      return 0;
    }
    uVar5 = (**(code **)(param_1 + 0x30))
                      (param_1,&local_20,param_3[2] + uVar3,uVar4 - uVar3,
                       *(undefined4 *)(param_1 + 0x3c),uVar2);
    if ((uVar5 & 1) == 0) {
      return 0;
    }
    uVar3 = (int)(uVar5 >> 0x20) + uVar3;
    iVar1 = uVar3 + uVar2;
    if (CARRY4(uVar3,uVar2)) goto LAB_013aa624;
  }
  if (param_5 == 0) {
    return 1;
  }
  if (param_5 != 1) {
    iVar1 = iVar1 + 1;
  }
  *param_4 = uVar3 + 1;
  if (param_5 != 1) {
    param_4[1] = iVar1;
  }
  return 1;
}

