// FUN_014f3c28 @ 014f3c28 size=348 calls_out=2 calls_in=1
// strings: is_silentfield index 0 <= i < 1field index 0 <= i < 19field index 0 <= i < 5field index 0 <= i < 7field index 0 <= i < 2a sequence | release_date | bos_version | description | assets

void FUN_014f3c28(undefined1 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  switch(param_3) {
  case 6:
    iVar2 = thunk_FUN_01bed842(param_2,"assets",6);
    if (iVar2 == 0) {
      param_1[1] = 6;
LAB_014f3d4c:
      uVar1 = 0;
      goto LAB_014f3d50;
    }
    break;
  case 8:
    iVar2 = thunk_FUN_01bed842(param_2,&DAT_00570d28,8);
    if (iVar2 == 0) {
      uVar1 = 1;
LAB_014f3d48:
      param_1[1] = uVar1;
      goto LAB_014f3d4c;
    }
    break;
  case 9:
    iVar2 = thunk_FUN_01bed842(param_2,
                               "is_silentfield index 0 <= i < 1field index 0 <= i < 19field index 0 <= i < 5field index 0 <= i < 7field index 0 <= i < 2a sequence"
                               ,9);
    if (iVar2 == 0) {
      uVar1 = 2;
      goto LAB_014f3d48;
    }
    break;
  case 0xb:
    iVar2 = thunk_FUN_01bed842(param_2,"bos_version",0xb);
    if (iVar2 == 0) {
      uVar1 = 0;
      param_1[1] = 0;
      goto LAB_014f3d50;
    }
    iVar2 = thunk_FUN_01bed842(param_2,"description",0xb);
    if (iVar2 == 0) {
      uVar1 = 5;
      goto LAB_014f3d48;
    }
    break;
  case 0xc:
    iVar2 = thunk_FUN_01bed842(param_2,"release_date",0xc);
    if (iVar2 == 0) {
      uVar1 = 3;
      goto LAB_014f3d48;
    }
    break;
  case 0x10:
    iVar2 = thunk_FUN_01bed842(param_2,&DAT_00568498,0x10);
    if (iVar2 == 0) {
      uVar1 = 4;
      goto LAB_014f3d48;
    }
  }
  uVar3 = FUN_014dedb0(param_2,param_3,&DAT_01cfa44c,7);
  *(undefined4 *)(param_1 + 4) = uVar3;
  uVar1 = 1;
LAB_014f3d50:
  *param_1 = uVar1;
  return;
}

