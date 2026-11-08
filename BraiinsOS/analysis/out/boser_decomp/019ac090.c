// FUN_019ac090 @ 019ac090 size=88 calls_out=2 calls_in=3
// strings: 

void FUN_019ac090(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 local_14;
  
  local_14 = 1;
  iVar1 = FUN_01be67dc(param_2,0x5421,&local_14);
  if (iVar1 == -1) {
    puVar2 = (undefined4 *)FUN_01be3244();
    uVar3 = *puVar2;
    *param_1 = 0;
    param_1[1] = uVar3;
    return;
  }
  *(undefined1 *)param_1 = 4;
  return;
}

