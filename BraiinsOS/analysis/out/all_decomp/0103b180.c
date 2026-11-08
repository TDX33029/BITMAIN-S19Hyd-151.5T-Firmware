// FUN_0103b180 @ 0103b180 size=400 calls_out=4 calls_in=2
// strings: 

undefined4 FUN_0103b180(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  short local_b8 [2];
  int local_b4;
  undefined4 local_b0;
  short local_94;
  ushort local_92;
  int local_90;
  undefined4 local_8c;
  uint local_88;
  short local_74 [2];
  int local_70;
  undefined4 local_6c;
  short local_50;
  ushort local_4e;
  int local_4c;
  undefined4 local_48;
  uint local_44;
  undefined1 *local_30;
  undefined1 local_2c;
  undefined1 local_2b;
  short *local_28;
  undefined1 local_24;
  undefined1 local_23;
  undefined4 local_20;
  undefined4 local_1c;
  
  FUN_0103b340(local_b8,param_1);
  FUN_0103b340(local_74,param_2);
  if (local_94 == 1) {
    uVar2 = local_88;
  }
  else {
    uVar2 = (uint)local_92;
  }
  if (local_50 == 1) {
    uVar3 = local_44;
  }
  else {
    uVar3 = (uint)local_4e;
  }
  if (uVar2 == 0) {
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
    if ((uVar3 != 0) && (uVar2 <= uVar3)) {
      if (local_94 == 0) {
        local_2b = (undefined1)local_92;
      }
      else {
        local_2b = (undefined1)local_88;
      }
      if (local_50 == 0) {
        local_44 = (uint)local_4e;
      }
      local_1c = 0;
      local_20 = 0;
      local_23 = (undefined1)local_44;
      local_24 = 0;
      local_2c = 0;
      local_30 = (undefined1 *)local_b8;
      local_28 = local_74;
      while( true ) {
        uVar5 = FUN_0103a344(&local_30);
        iVar1 = (int)((ulonglong)uVar5 >> 0x20);
        uVar4 = 1;
        if ((int)uVar5 == 0) break;
        uVar6 = FUN_0103a344(&local_28);
        if ((((int)uVar6 == 0) || (uVar4 = 0, iVar1 != (int)((ulonglong)uVar6 >> 0x20))) ||
           (iVar1 = thunk_FUN_016dd50a((int)uVar5,(int)uVar6,iVar1), iVar1 != 0)) break;
      }
    }
  }
  iVar1 = 0;
  if (local_74[0] != 0) {
    iVar1 = local_70;
  }
  if (local_74[0] != 0 && iVar1 != 0) {
    thunk_FUN_016d3fb4(local_6c);
  }
  iVar1 = 0;
  if (local_50 != 0) {
    iVar1 = local_4c;
  }
  if (local_50 != 0 && iVar1 != 0) {
    thunk_FUN_016d3fb4(local_48);
  }
  iVar1 = 0;
  if (local_b8[0] != 0) {
    iVar1 = local_b4;
  }
  if (local_b8[0] != 0 && iVar1 != 0) {
    thunk_FUN_016d3fb4(local_b0);
  }
  iVar1 = 0;
  if (local_94 != 0) {
    iVar1 = local_90;
  }
  if (!(local_94 != 0 && iVar1 != 0)) {
    return uVar4;
  }
  thunk_FUN_016d3fb4(local_8c);
  return uVar4;
}

