// FUN_00ea7974 @ 00ea7974 size=176 calls_out=2 calls_in=1
// strings: Light

void FUN_00ea7974(undefined1 *param_1,int *param_2,int param_3)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_3 == 5) {
    iVar2 = thunk_FUN_01bed842(param_2,"Light",5);
    if (iVar2 == 0) {
      uVar1 = 0;
      param_1[1] = 0;
      goto LAB_00ea79f8;
    }
  }
  else if (param_3 == 4) {
    if (*param_2 == 0x6b726144) {
      uVar1 = 1;
    }
    else {
      if (*param_2 != 0x6f747541) goto LAB_00ea7a00;
      uVar1 = 2;
    }
    param_1[1] = uVar1;
    uVar1 = 0;
    goto LAB_00ea79f8;
  }
LAB_00ea7a00:
  uVar3 = FUN_01265080(param_2,param_3,&DAT_01c17f54,3);
  *(undefined4 *)(param_1 + 4) = uVar3;
  uVar1 = 1;
LAB_00ea79f8:
  *param_1 = uVar1;
  return;
}

