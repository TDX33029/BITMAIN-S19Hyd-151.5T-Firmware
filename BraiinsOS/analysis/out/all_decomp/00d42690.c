// FUN_00d42690 @ 00d42690 size=80 calls_out=1 calls_in=1
// strings: 

void FUN_00d42690(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (*(int *)*param_2 == 0) {
    *param_1 = 8;
    param_1[1] = 0;
    return;
  }
  uVar2 = FUN_00c7c180((int *)*param_2,*param_3);
  *(char *)(param_1 + 3) = (char)((ulonglong)uVar2 >> 0x20);
  param_1[2] = (int)uVar2;
  uVar1 = 5;
  if (((uint)((ulonglong)uVar2 >> 0x20) & 0xff) == 3) {
    uVar1 = 7;
  }
  *param_1 = uVar1;
  param_1[1] = 0;
  return;
}

