// FUN_00657cd0 @ 00657cd0 size=196 calls_out=2 calls_in=0
// strings: invalid match span

void FUN_00657cd0(undefined4 *param_1,int param_2,int param_3,uint param_4,uint param_5,uint param_6
                 )

{
  undefined4 uVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined4 local_28;
  undefined4 local_24;
  
  if ((param_6 < param_5) || (param_4 < param_6)) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(param_5,param_6,param_4,&DAT_01c037f8);
  }
  uVar2 = *(uint *)(param_2 + 0x40);
  uVar1 = 0;
  local_24 = 0;
  local_28 = 1;
  if (uVar2 <= param_6 - param_5) {
    uVar3 = (**(code **)(param_2 + 0x30))
                      (param_2,&local_28,param_3 + param_5,param_6 - param_5,
                       *(undefined4 *)(param_2 + 0x3c),uVar2);
    if ((uVar3 & 1) != 0) {
      param_5 = (int)(uVar3 >> 0x20) + param_5;
      if (CARRY4(param_5,uVar2)) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb100("invalid match span",0x25,&DAT_01d08fa8);
      }
      uVar1 = 1;
      param_1[1] = param_5;
      param_1[2] = param_5 + uVar2;
      param_1[3] = 0;
    }
  }
  *param_1 = uVar1;
  return;
}

