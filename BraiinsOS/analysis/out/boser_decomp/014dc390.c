// FUN_014dc390 @ 014dc390 size=232 calls_out=2 calls_in=2
// strings: toolbox | bmcvariant index 0 <= i < 3struct Releasestruct IndexVariant

void FUN_014dc390(undefined1 *param_1,undefined4 param_2,int param_3)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_3 != 3) {
    if ((param_3 == 7) && (iVar2 = thunk_FUN_01bed842(param_2,"toolbox",7), iVar2 == 0)) {
      uVar1 = 0;
      param_1[1] = 0;
      goto LAB_014dc44c;
    }
LAB_014dc454:
    uVar3 = FUN_014dee68(param_2,param_3,&DAT_01cfa084,4);
    *(undefined4 *)(param_1 + 4) = uVar3;
    uVar1 = 1;
    goto LAB_014dc44c;
  }
  iVar2 = thunk_FUN_01bed842(param_2,"bos",3);
  if (iVar2 == 0) {
    uVar1 = 1;
LAB_014dc444:
    param_1[1] = uVar1;
  }
  else {
    iVar2 = thunk_FUN_01bed842(param_2,"bma",3);
    if (iVar2 == 0) {
      uVar1 = 2;
      goto LAB_014dc444;
    }
    iVar2 = thunk_FUN_01bed842(param_2,
                               "bmcvariant index 0 <= i < 3struct Releasestruct IndexVariant",3);
    if (iVar2 != 0) goto LAB_014dc454;
    param_1[1] = 3;
  }
  uVar1 = 0;
LAB_014dc44c:
  *param_1 = uVar1;
  return;
}

