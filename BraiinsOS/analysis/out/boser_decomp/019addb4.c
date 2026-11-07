// FUN_019addb4 @ 019addb4 size=232 calls_out=5 calls_in=0
// strings: 

void FUN_019addb4(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined1 auStack_1b0 [388];
  int local_2c;
  undefined4 local_28;
  
  uVar4 = param_2[1];
  local_1b8 = param_3;
  local_1b4 = param_4;
  if (2 < uVar4 >> 7) {
    FUN_019a5758(param_1,*param_2,uVar4,&local_1b8,FUN_019add78);
    return;
  }
  FUN_01bed4e2(auStack_1b0,*param_2,uVar4);
  auStack_1b0[uVar4] = 0;
  FUN_012fbc58(&local_2c,auStack_1b0,uVar4 + 1);
  if (local_2c == 1) {
    *param_1 = 2;
    param_1[1] = &DAT_01d27a70;
    return;
  }
  iVar1 = FUN_01bf0514(param_3,local_28);
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

