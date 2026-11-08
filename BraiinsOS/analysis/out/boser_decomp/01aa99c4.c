// FUN_01aa99c4 @ 01aa99c4 size=148 calls_out=3 calls_in=0
// strings: 

void FUN_01aa99c4(undefined4 param_1,undefined4 param_2,undefined *param_3,undefined4 param_4)

{
  int iVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *local_28;
  undefined4 uStack_24;
  undefined *local_20;
  undefined1 **local_1c;
  undefined1 *local_18;
  undefined1 *local_14;
  
  ppuVar2 = &local_28;
  local_28 = param_3;
  uStack_24 = param_4;
  uVar4 = FUN_01aa9a6c(param_2);
  if (((int)((ulonglong)uVar4 >> 0x20) == 7) &&
     (iVar1 = thunk_FUN_01bed842((int)uVar4,&DAT_005325f1,7), iVar1 == 0)) {
    local_1c = &local_18;
    ppuVar2 = &local_20;
    puVar3 = &DAT_01d2f140;
    local_14 = &LAB_018a13b8;
    local_20 = &DAT_00590e5f;
    local_18 = (undefined1 *)&local_28;
  }
  else {
    puVar3 = &DAT_01d2f130;
  }
  FUN_01aa9aa0(param_1,param_2,ppuVar2,puVar3);
  return;
}

