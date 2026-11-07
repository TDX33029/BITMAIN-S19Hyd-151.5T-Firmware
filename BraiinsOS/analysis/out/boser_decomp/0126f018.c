// FUN_0126f018 @ 0126f018 size=228 calls_out=2 calls_in=1
// strings: stable | hidden | dangerous

void FUN_0126f018(undefined1 *param_1,int *param_2,int param_3)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_3 == 4) {
    if (*param_2 == 0x61746562) {
      uVar1 = 1;
LAB_0126f0bc:
      param_1[1] = uVar1;
      uVar1 = 0;
      goto LAB_0126f0c4;
    }
  }
  else if (param_3 == 9) {
    iVar2 = thunk_FUN_01bed842(param_2,"dangerous",9);
    if (iVar2 == 0) {
      uVar1 = 2;
      goto LAB_0126f0bc;
    }
  }
  else if (param_3 == 6) {
    iVar2 = thunk_FUN_01bed842(param_2,"stable",6);
    if (iVar2 == 0) {
      uVar1 = 0;
      param_1[1] = 0;
      goto LAB_0126f0c4;
    }
    iVar2 = thunk_FUN_01bed842(param_2,"hidden",6);
    if (iVar2 == 0) {
      uVar1 = 3;
      goto LAB_0126f0bc;
    }
  }
  uVar3 = FUN_01265080(param_2,param_3,&DAT_01c25404,4);
  *(undefined4 *)(param_1 + 4) = uVar3;
  uVar1 = 1;
LAB_0126f0c4:
  *param_1 = uVar1;
  return;
}

