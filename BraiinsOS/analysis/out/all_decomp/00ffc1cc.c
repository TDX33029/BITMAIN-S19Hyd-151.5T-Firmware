// FUN_00ffc1cc @ 00ffc1cc size=232 calls_out=5 calls_in=1
// strings: 

void FUN_00ffc1cc(undefined4 *param_1,uint *param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  if ((*param_2 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8(&DAT_005664f0,0x20,&DAT_01881c88);
  }
  uVar2 = param_2[4];
  uVar3 = param_2[5];
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  FUN_00ff7708(&local_38,uVar2,uVar3,param_3);
  if (local_38 != 0x12) {
    *param_1 = 0x18;
    param_1[1] = local_38;
    param_1[2] = uStack_34;
    param_1[3] = uStack_30;
    param_1[4] = local_2c;
    param_1[5] = local_28;
    return;
  }
  if (uVar3 == 0) {
    iVar1 = 1;
  }
  else {
    iVar1 = thunk_FUN_016d4a50(uVar3);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,uVar3);
    }
  }
  FUN_016dd1aa(iVar1,uVar2,uVar3);
  param_1[8] = uStack_30;
  *param_1 = 0x15;
  param_1[1] = (uint)(uVar4 != uVar5);
  param_1[2] = uVar4;
  param_1[3] = uVar5;
  param_1[4] = uVar3;
  param_1[5] = iVar1;
  param_1[6] = uVar3;
  param_1[7] = uStack_34;
  return;
}

