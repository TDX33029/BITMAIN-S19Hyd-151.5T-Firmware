// FUN_01527288 @ 01527288 size=192 calls_out=4 calls_in=1
// strings: additionalProperties

void FUN_01527288(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined8 uVar2;
  int local_2c;
  int local_28;
  int local_24;
  
  FUN_0155f304(&local_2c,param_3,param_2);
  if (local_2c == -0x80000000) {
    *param_1 = 0;
    param_1[1] = local_28;
  }
  else {
    uVar2 = FUN_015345a4(*(undefined4 *)(param_3 + 0x38),*(undefined4 *)(param_3 + 0x3c),
                         "additionalProperties",0x14);
    piVar1 = (int *)thunk_FUN_01be5118(0x14);
    if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,0x14);
    }
    *piVar1 = local_2c;
    piVar1[1] = local_28;
    piVar1[2] = local_24;
    *(undefined8 *)(piVar1 + 3) = uVar2;
    *param_1 = (int)piVar1;
    param_1[1] = (int)&DAT_01cfacb0;
  }
  return;
}

