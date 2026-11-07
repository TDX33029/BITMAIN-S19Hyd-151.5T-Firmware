// FUN_019ac798 @ 019ac798 size=208 calls_out=5 calls_in=8
// strings: 

void FUN_019ac798(undefined4 *param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined1 auStack_1a8 [388];
  int local_24;
  undefined4 local_20;
  
  if (2 < param_3 >> 7) {
    FUN_019a5758(param_1,param_2,param_3,1,FUN_019ac874);
    return;
  }
  FUN_01bed4e2(auStack_1a8,param_2,param_3);
  auStack_1a8[param_3] = 0;
  FUN_012fbc58(&local_24,auStack_1a8,param_3 + 1);
  if (local_24 == 1) {
    *param_1 = 2;
    param_1[1] = &DAT_01d27a70;
    return;
  }
  iVar1 = FUN_01bf0522(local_20);
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

