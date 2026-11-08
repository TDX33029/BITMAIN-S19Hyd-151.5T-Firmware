// FUN_015f4c64 @ 015f4c64 size=84 calls_out=2 calls_in=0
// strings: 

void FUN_015f4c64(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  uVar3 = *(undefined4 *)*param_2;
  do {
    iVar1 = FUN_016da78a(param_3,uVar3);
    if (iVar1 != -1) {
      *(undefined1 *)param_1 = 4;
      return;
    }
    piVar2 = (int *)FUN_016d2bc8();
    iVar1 = *piVar2;
  } while (iVar1 == 4);
  *param_1 = 0;
  param_1[1] = iVar1;
  return;
}

