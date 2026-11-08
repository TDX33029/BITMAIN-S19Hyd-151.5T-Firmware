// FUN_014f0a00 @ 014f0a00 size=144 calls_out=1 calls_in=1
// strings: 

void FUN_014f0a00(int param_1,undefined2 *param_2,int param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 local_28;
  int local_24;
  undefined1 *local_18;
  undefined1 *local_14;
  
  local_18 = (undefined1 *)&local_28;
  if (param_3 != 0x10) {
    local_14 = &LAB_01ae2350;
    local_28 = 2;
    local_24 = param_3;
    uVar4 = FUN_019676ac(&DAT_005b308a,&local_18);
    *(undefined4 *)(param_1 + 4) = uVar4;
  }
  else {
    uVar3 = *param_2;
    uVar4 = *(undefined4 *)((int)param_2 + 3);
    uVar1 = *(undefined1 *)((int)param_2 + 0xf);
    uVar5 = *(undefined4 *)((int)param_2 + 7);
    uVar2 = *(undefined1 *)(param_2 + 1);
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)((int)param_2 + 0xb);
    *(undefined4 *)(param_1 + 4) = uVar4;
    *(undefined1 *)(param_1 + 3) = uVar2;
    *(undefined2 *)(param_1 + 1) = uVar3;
    *(undefined4 *)(param_1 + 8) = uVar5;
    *(undefined1 *)(param_1 + 0x10) = uVar1;
  }
  *(bool *)param_1 = param_3 != 0x10;
  return;
}

