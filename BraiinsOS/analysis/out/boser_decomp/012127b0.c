// FUN_012127b0 @ 012127b0 size=292 calls_out=3 calls_in=0
// strings: 

void FUN_012127b0(int param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  undefined8 uVar6;
  int local_40;
  undefined4 local_3c;
  uint local_38;
  uint local_34;
  int local_30;
  undefined1 *local_28;
  undefined4 *local_24;
  
  uVar6 = thunk_FUN_01bee35a(param_1,0x60);
  local_38 = *(uint *)(param_1 + 0x8f8);
  puVar5 = (uint *)((int)uVar6 + (int)((ulonglong)uVar6 >> 0x20));
  local_34 = *(uint *)(param_1 + 0x8fc);
  uVar4 = 0xffffffff;
  if ((*puVar5 & local_38) == 0 && (puVar5[1] & local_34) == 0) {
    local_24 = &local_3c;
    local_30 = param_1 + 0x900;
    local_40 = param_1 + 0x890;
    local_3c = param_2;
    local_28 = (undefined1 *)&local_40;
    FUN_01208308(&local_38);
    uVar1 = *puVar5;
    uVar2 = puVar5[1];
  }
  else {
    uVar2 = 0xffffffff;
    if (local_38 != 0xffffffff || local_34 != 0xffffffff) {
      uVar2 = ~local_34;
    }
    uVar2 = puVar5[1] & uVar2;
    uVar1 = 0xffffffff;
    if (local_38 != 0xffffffff || local_34 != 0xffffffff) {
      uVar1 = ~local_38;
    }
    uVar1 = *puVar5 & uVar1;
    *puVar5 = uVar1;
    puVar5[1] = uVar2;
  }
  local_38 = *(uint *)(param_1 + 0x478);
  local_34 = *(uint *)(param_1 + 0x47c);
  if ((uVar1 & local_38) == 0 && (uVar2 & local_34) == 0) {
    local_30 = param_1 + 0x480;
    local_40 = param_1 + 0x410;
    local_24 = &local_3c;
    local_3c = param_2;
    local_28 = (undefined1 *)&local_40;
    FUN_01206e14(&local_38);
  }
  else {
    uVar3 = 0xffffffff;
    if (local_38 != 0xffffffff || local_34 != 0xffffffff) {
      uVar4 = ~local_38;
      uVar3 = ~local_34;
    }
    *puVar5 = uVar1 & uVar4;
    puVar5[1] = uVar2 & uVar3;
  }
  return;
}

