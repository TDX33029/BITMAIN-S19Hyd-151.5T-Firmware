// FUN_019ad254 @ 019ad254 size=248 calls_out=6 calls_in=2
// strings: 

void FUN_019ad254(undefined4 *param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_218 [388];
  int local_94;
  undefined4 local_90;
  undefined1 auStack_88 [104];
  
  if (2 < param_3 >> 7) {
    FUN_0199f70c(param_1,param_2,param_3,FUN_019a6850);
    return;
  }
  FUN_01bed4e2(auStack_218,param_2,param_3);
  auStack_218[param_3] = 0;
  FUN_012fbc58(&local_94,auStack_218,param_3 + 1);
  if (local_94 == 1) {
    uVar4 = 1;
    param_1[1] = 2;
    param_1[2] = &DAT_01d27a70;
  }
  else {
    uVar4 = 0;
    FUN_01bed93e(auStack_88,0,0x68);
    iVar1 = FUN_01bf05e6(local_90,auStack_88);
    if (iVar1 == -1) {
      puVar2 = (undefined4 *)FUN_01be3244();
      uVar3 = *puVar2;
      *(undefined1 *)(param_1 + 1) = 0;
      uVar4 = 1;
      param_1[2] = uVar3;
    }
    else {
      FUN_01bed4e2(param_1 + 2,auStack_88,0x68);
    }
  }
  *param_1 = uVar4;
  return;
}

