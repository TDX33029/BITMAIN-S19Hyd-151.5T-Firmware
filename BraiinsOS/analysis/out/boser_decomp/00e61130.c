// FUN_00e61130 @ 00e61130 size=344 calls_out=6 calls_in=1
// strings: manual | immersion | hydro

void FUN_00e61130(undefined1 *param_1,int *param_2,int *param_3,int param_4)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  if (param_4 < 0) {
LAB_00e61144:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar4,param_4);
  }
  if (param_4 == 0) {
    iVar2 = 1;
    iVar3 = 0;
  }
  else {
    uVar4 = 1;
    iVar2 = FUN_01298504(param_4,1);
    iVar3 = param_4;
    if (iVar2 == 0) goto LAB_00e61144;
  }
  FUN_01bed4e2(iVar2,param_3,param_4);
  if (*param_2 != -0x80000000) {
    FUN_019bb7e0(*param_2,param_2[1]);
  }
  *param_2 = iVar3;
  param_2[1] = iVar2;
  param_2[2] = param_4;
  switch(param_4) {
  case 4:
    if (*param_3 == 0x6f747561) {
      uVar1 = 0;
      param_1[1] = 0;
      goto LAB_00e61274;
    }
    break;
  case 5:
    iVar3 = thunk_FUN_01bed842(param_3,"hydro",5);
    if (iVar3 == 0) {
      uVar1 = 3;
LAB_00e6126c:
      param_1[1] = uVar1;
      uVar1 = 0;
      goto LAB_00e61274;
    }
    break;
  case 6:
    iVar3 = thunk_FUN_01bed842(param_3,"manual",6);
    if (iVar3 == 0) {
      uVar1 = 1;
      goto LAB_00e6126c;
    }
    break;
  case 9:
    iVar3 = thunk_FUN_01bed842(param_3,"immersion",9);
    if (iVar3 == 0) {
      uVar1 = 2;
      goto LAB_00e6126c;
    }
  }
  uVar4 = FUN_01265080(param_3,param_4,&DAT_01c24b34,4);
  *(undefined4 *)(param_1 + 4) = uVar4;
  uVar1 = 1;
LAB_00e61274:
  *param_1 = uVar1;
  return;
}

