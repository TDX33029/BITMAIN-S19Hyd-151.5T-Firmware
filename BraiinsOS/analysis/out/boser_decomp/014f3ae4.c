// FUN_014f3ae4 @ 014f3ae4 size=272 calls_out=2 calls_in=1
// strings: bmc_version | description | release_date | assets

void FUN_014f3ae4(undefined1 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  switch(param_3) {
  case 6:
    iVar2 = thunk_FUN_01bed842(param_2,"assets",6);
    if (iVar2 == 0) {
      uVar1 = 4;
LAB_014f3bd0:
      param_1[1] = uVar1;
      uVar1 = 0;
      goto LAB_014f3bd8;
    }
    break;
  case 8:
    iVar2 = thunk_FUN_01bed842(param_2,&DAT_00570d28,8);
    if (iVar2 == 0) {
      uVar1 = 1;
      goto LAB_014f3bd0;
    }
    break;
  case 0xb:
    iVar2 = thunk_FUN_01bed842(param_2,"bmc_version",0xb);
    if (iVar2 == 0) {
      uVar1 = 0;
      param_1[1] = 0;
      goto LAB_014f3bd8;
    }
    iVar2 = thunk_FUN_01bed842(param_2,"description",0xb);
    if (iVar2 == 0) {
      uVar1 = 3;
      goto LAB_014f3bd0;
    }
    break;
  case 0xc:
    iVar2 = thunk_FUN_01bed842(param_2,"release_date",0xc);
    if (iVar2 == 0) {
      uVar1 = 2;
      goto LAB_014f3bd0;
    }
  }
  uVar3 = FUN_014dedb0(param_2,param_3,&DAT_01cfa38c,5);
  *(undefined4 *)(param_1 + 4) = uVar3;
  uVar1 = 1;
LAB_014f3bd8:
  *param_1 = uVar1;
  return;
}

