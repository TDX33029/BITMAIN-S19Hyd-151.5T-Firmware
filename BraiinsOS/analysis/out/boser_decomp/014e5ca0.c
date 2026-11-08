// FUN_014e5ca0 @ 014e5ca0 size=200 calls_out=2 calls_in=1
// strings: toolbox_version | release_date | description

void FUN_014e5ca0(undefined1 *param_1,undefined4 param_2,int param_3)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_3 == 0xc) {
    iVar2 = thunk_FUN_01bed842(param_2,"release_date",0xc);
    if (iVar2 == 0) {
      uVar1 = 1;
LAB_014e5d34:
      param_1[1] = uVar1;
      uVar1 = 0;
      goto LAB_014e5d3c;
    }
  }
  else if (param_3 == 0xf) {
    iVar2 = thunk_FUN_01bed842(param_2,"toolbox_version",0xf);
    if (iVar2 == 0) {
      uVar1 = 0;
      param_1[1] = 0;
      goto LAB_014e5d3c;
    }
  }
  else if ((param_3 == 0xb) && (iVar2 = thunk_FUN_01bed842(param_2,"description",0xb), iVar2 == 0))
  {
    uVar1 = 2;
    goto LAB_014e5d34;
  }
  uVar3 = FUN_014dedb0(param_2,param_3,&DAT_01cfa19c,3);
  *(undefined4 *)(param_1 + 4) = uVar3;
  uVar1 = 1;
LAB_014e5d3c:
  *param_1 = uVar1;
  return;
}

