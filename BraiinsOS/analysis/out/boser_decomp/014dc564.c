// FUN_014dc564 @ 014dc564 size=236 calls_out=2 calls_in=1
// strings: title | status

void FUN_014dc564(undefined1 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  switch(param_3) {
  case 5:
    iVar2 = thunk_FUN_01bed842(param_2,"title",5);
    if (iVar2 == 0) {
      uVar1 = 1;
LAB_014dc62c:
      param_1[1] = uVar1;
      uVar1 = 0;
      goto LAB_014dc634;
    }
    break;
  case 6:
    iVar2 = thunk_FUN_01bed842(param_2,"status",6);
    if (iVar2 == 0) {
      uVar1 = 0;
      param_1[1] = 0;
      goto LAB_014dc634;
    }
    break;
  case 7:
    iVar2 = thunk_FUN_01bed842(param_2,&DAT_00520eda,7);
    if (iVar2 == 0) {
      uVar1 = 2;
      goto LAB_014dc62c;
    }
    break;
  case 8:
    iVar2 = thunk_FUN_01bed842(param_2,&DAT_00570b18,8);
    if (iVar2 == 0) {
      uVar1 = 3;
      goto LAB_014dc62c;
    }
  }
  uVar3 = FUN_014dedb0(param_2,param_3,&DAT_01cfa064,4);
  *(undefined4 *)(param_1 + 4) = uVar3;
  uVar1 = 1;
LAB_014dc634:
  *param_1 = uVar1;
  return;
}

