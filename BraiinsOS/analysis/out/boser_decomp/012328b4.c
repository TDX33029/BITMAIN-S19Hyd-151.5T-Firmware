// FUN_012328b4 @ 012328b4 size=228 calls_out=2 calls_in=1
// strings: manual | immersion | hydro

void FUN_012328b4(undefined1 *param_1,int *param_2,undefined4 param_3)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  switch(param_3) {
  case 4:
    if (*param_2 == 0x6f747561) {
      uVar1 = 0;
      param_1[1] = 0;
      goto LAB_01232984;
    }
    break;
  case 5:
    iVar2 = thunk_FUN_01bed842(param_2,"hydro",5);
    if (iVar2 == 0) {
      uVar1 = 3;
LAB_0123297c:
      param_1[1] = uVar1;
      uVar1 = 0;
      goto LAB_01232984;
    }
    break;
  case 6:
    iVar2 = thunk_FUN_01bed842(param_2,"manual",6);
    if (iVar2 == 0) {
      uVar1 = 1;
      goto LAB_0123297c;
    }
    break;
  case 9:
    iVar2 = thunk_FUN_01bed842(param_2,"immersion",9);
    if (iVar2 == 0) {
      uVar1 = 2;
      goto LAB_0123297c;
    }
  }
  uVar3 = FUN_01265080(param_2,param_3,&DAT_01c24b34,4);
  *(undefined4 *)(param_1 + 4) = uVar3;
  uVar1 = 1;
LAB_01232984:
  *param_1 = uVar1;
  return;
}

