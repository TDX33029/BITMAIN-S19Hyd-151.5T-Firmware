// FUN_015f45d8 @ 015f45d8 size=56 calls_out=2 calls_in=0
// strings: 

void FUN_015f45d8(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_016e0340(param_3);
  if (iVar1 == -1) {
    puVar2 = (undefined4 *)FUN_016d2bc8();
    uVar3 = *puVar2;
    *param_1 = 0;
    param_1[1] = uVar3;
    return;
  }
  *(undefined1 *)param_1 = 4;
  return;
}

