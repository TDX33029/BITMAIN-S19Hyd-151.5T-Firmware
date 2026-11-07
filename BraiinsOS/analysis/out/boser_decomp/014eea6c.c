// FUN_014eea6c @ 014eea6c size=272 calls_out=2 calls_in=1
// strings: bma_version | description | assets | release_date

void FUN_014eea6c(undefined1 *param_1,undefined4 param_2,int param_3)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_3 == 6) {
    iVar2 = thunk_FUN_01bed842(param_2,&DAT_004ba595,6);
    if (iVar2 == 0) {
      uVar1 = 1;
    }
    else {
      iVar2 = thunk_FUN_01bed842(param_2,"assets",6);
      if (iVar2 != 0) goto LAB_014eeb58;
      uVar1 = 4;
    }
LAB_014eeb48:
    param_1[1] = uVar1;
    uVar1 = 0;
  }
  else {
    if (param_3 == 0xc) {
      iVar2 = thunk_FUN_01bed842(param_2,"release_date",0xc);
      if (iVar2 == 0) {
        uVar1 = 2;
        goto LAB_014eeb48;
      }
    }
    else if (param_3 == 0xb) {
      iVar2 = thunk_FUN_01bed842(param_2,"bma_version",0xb);
      if (iVar2 == 0) {
        uVar1 = 0;
        param_1[1] = 0;
        goto LAB_014eeb50;
      }
      iVar2 = thunk_FUN_01bed842(param_2,"description",0xb);
      if (iVar2 == 0) {
        uVar1 = 3;
        goto LAB_014eeb48;
      }
    }
LAB_014eeb58:
    uVar3 = FUN_014dedb0(param_2,param_3,&DAT_01cfa214,5);
    *(undefined4 *)(param_1 + 4) = uVar3;
    uVar1 = 1;
  }
LAB_014eeb50:
  *param_1 = uVar1;
  return;
}

