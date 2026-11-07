// FUN_012323c8 @ 012323c8 size=216 calls_out=2 calls_in=1
// strings: speed | min_fan_rpm

void FUN_012323c8(undefined4 *param_1,undefined4 param_2,int param_3)

{
  undefined1 uVar1;
  int iVar2;
  
  if (param_3 == 5) {
    iVar2 = thunk_FUN_01bed842(param_2,"speed",5);
    if (iVar2 != 0) goto LAB_0123247c;
    *param_1 = 2;
    uVar1 = 0;
  }
  else if (param_3 == 8) {
    iVar2 = thunk_FUN_01bed842(param_2,&DAT_00570be0,8);
    if (iVar2 != 0) {
LAB_0123247c:
      FUN_0123bfbc(param_1,param_2,param_3,&DAT_01c24bb4,3);
      return;
    }
    *param_1 = 2;
    uVar1 = 1;
  }
  else {
    if ((param_3 != 0xb) || (iVar2 = thunk_FUN_01bed842(param_2,"min_fan_rpm",0xb), iVar2 != 0))
    goto LAB_0123247c;
    uVar1 = 2;
    *param_1 = 2;
  }
  *(undefined1 *)(param_1 + 1) = uVar1;
  return;
}

