// FUN_012321f4 @ 012321f4 size=160 calls_out=2 calls_in=1
// strings: cooldown_fan_speed

void FUN_012321f4(undefined4 *param_1,int *param_2,int param_3)

{
  undefined1 uVar1;
  int iVar2;
  
  if (param_3 == 4) {
    if (*param_2 != 0x65646f6d) {
LAB_01232270:
      FUN_0123bfbc(param_1,param_2,param_3,&DAT_01c24ba4,2);
      return;
    }
    *param_1 = 2;
    uVar1 = 0;
  }
  else {
    if ((param_3 != 0x12) ||
       (iVar2 = thunk_FUN_01bed842(param_2,"cooldown_fan_speed",0x12), iVar2 != 0))
    goto LAB_01232270;
    *param_1 = 2;
    uVar1 = 1;
  }
  *(undefined1 *)(param_1 + 1) = uVar1;
  return;
}

