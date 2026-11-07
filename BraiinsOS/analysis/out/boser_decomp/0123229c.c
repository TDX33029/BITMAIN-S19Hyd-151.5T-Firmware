// FUN_0123229c @ 0123229c size=240 calls_out=1 calls_in=2
// strings: cold_temp | target_temp | dangerous_temp

void FUN_0123229c(undefined4 *param_1,int *param_2,undefined4 param_3)

{
  undefined1 uVar1;
  int iVar2;
  
  switch(param_3) {
  case 4:
    if (*param_2 == 0x65646f6d) {
      uVar1 = 0;
      goto LAB_012323a0;
    }
    break;
  case 8:
    iVar2 = thunk_FUN_01bed842(param_2,&DAT_00570ea8,8);
    if (iVar2 == 0) {
      uVar1 = 2;
      goto LAB_012323a0;
    }
    break;
  case 9:
    iVar2 = thunk_FUN_01bed842(param_2,"cold_temp",9);
    if (iVar2 == 0) {
      uVar1 = 4;
      goto LAB_012323a0;
    }
    break;
  case 0xb:
    iVar2 = thunk_FUN_01bed842(param_2,"target_temp",0xb);
    if (iVar2 == 0) {
      uVar1 = 1;
      goto LAB_012323a0;
    }
    break;
  case 0xe:
    iVar2 = thunk_FUN_01bed842(param_2,"dangerous_temp",0xe);
    if (iVar2 == 0) {
      uVar1 = 3;
      goto LAB_012323a0;
    }
  }
  uVar1 = 5;
LAB_012323a0:
  *(undefined1 *)(param_1 + 1) = uVar1;
  *param_1 = 2;
  return;
}

