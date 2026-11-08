// FUN_01204528 @ 01204528 size=212 calls_out=4 calls_in=1
// strings: 

void FUN_01204528(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  
  local_14 = 0;
  local_20._0_4_ = param_2;
  local_20._4_4_ = param_3;
  local_18 = param_3;
  uVar2 = FUN_0165f33c(&local_20,3);
  if ((((int)uVar2 != 0) && ((int)((ulonglong)uVar2 >> 0x20) == 3)) &&
     (iVar1 = thunk_FUN_01bed842((int)uVar2,&DAT_004c19ea,3), iVar1 == 0)) {
    uVar3 = FUN_0165f3d8(&local_20,0x24);
    iVar1 = (int)uVar3;
    if (iVar1 != 0) {
      if (0x8ffffffff < uVar3) {
        local_14 = 0;
        local_18 = (int)(uVar3 >> 0x20);
        local_20 = uVar3;
        iVar1 = FUN_0165f33c(&local_20,8);
        if (iVar1 == 0) goto LAB_01204580;
      }
      FUN_0165dcb8(param_1,param_4,param_5,iVar1);
      return;
    }
  }
LAB_01204580:
  *param_1 = 1;
  param_1[1] = 0x80000003;
  return;
}

