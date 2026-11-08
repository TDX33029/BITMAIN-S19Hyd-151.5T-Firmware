// FUN_00ec9900 @ 00ec9900 size=132 calls_out=2 calls_in=1
// strings: 

undefined4 FUN_00ec9900(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = param_1[3];
  if (iVar2 != 2) {
    uVar3 = FUN_00ec9984(param_2);
    if (((int)((ulonglong)uVar3 >> 0x20) == param_1[5]) &&
       (iVar2 = thunk_FUN_01bed842((int)uVar3,param_1[4] + iVar2 * 8), iVar2 == 0)) {
      return 1;
    }
  }
  uVar3 = FUN_00ec9984(param_2);
  uVar1 = 1;
  if (((uint)param_1[2] <= (uint)((ulonglong)uVar3 >> 0x20)) &&
     (iVar2 = thunk_FUN_01bed842(param_1[1] + *param_1 * 8,(int)uVar3), uVar1 = 0, iVar2 != 0)) {
    uVar1 = 1;
  }
  return uVar1;
}

