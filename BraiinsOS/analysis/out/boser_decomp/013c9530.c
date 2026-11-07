// FUN_013c9530 @ 013c9530 size=300 calls_out=4 calls_in=4
// strings: 

undefined4 FUN_013c9530(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_b8 [36];
  short local_94;
  ushort local_92;
  uint local_88;
  undefined1 auStack_74 [36];
  short local_50;
  ushort local_4e;
  uint local_44;
  undefined1 *local_30;
  int local_2c;
  undefined1 *local_28;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  FUN_013c9680(auStack_b8,param_1);
  FUN_013c9680(auStack_74,param_2);
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
        local_88 = (uint)local_92;
      }
      else {
        local_88 = local_88 & 0xff;
      }
      if (local_50 == 0) {
        local_44 = (uint)local_4e;
      }
      else {
        local_44 = local_44 & 0xff;
      }
      local_2c = (local_88 & 0xff) << 8;
      local_24 = (local_44 & 0xff) << 8;
      local_1c = 0;
      local_20 = 0;
      local_30 = auStack_b8;
      local_28 = auStack_74;
      while( true ) {
        uVar5 = FUN_013c884c(&local_30);
        iVar1 = (int)((ulonglong)uVar5 >> 0x20);
        uVar4 = 1;
        if ((int)uVar5 == 0) break;
        uVar6 = FUN_013c884c(&local_28);
        if ((((int)uVar6 == 0) || (uVar4 = 0, iVar1 != (int)((ulonglong)uVar6 >> 0x20))) ||
           (iVar1 = thunk_FUN_01bed842((int)uVar5,(int)uVar6,iVar1), iVar1 != 0)) break;
      }
    }
  }
  FUN_0079217c(auStack_74);
  FUN_0079217c(auStack_b8);
  return uVar4;
}

