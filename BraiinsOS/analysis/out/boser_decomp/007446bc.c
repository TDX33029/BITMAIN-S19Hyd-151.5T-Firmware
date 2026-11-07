// FUN_007446bc @ 007446bc size=360 calls_out=5 calls_in=0
// strings: Mutex | Mutex

undefined4 FUN_007446bc(undefined4 *param_1,undefined4 *param_2)

{
  byte bVar1;
  bool bVar2;
  byte bVar3;
  undefined4 uVar4;
  bool bVar5;
  byte *pbVar6;
  byte *local_1c;
  undefined4 *local_18;
  undefined1 local_14;
  undefined1 local_13;
  
  pbVar6 = (byte *)*param_1;
  bVar3 = *pbVar6;
  do {
    local_18 = param_2;
    if ((bVar3 & 1) != 0) {
      local_14 = (**(code **)(param_2[1] + 0xc))(*param_2,"Mutex",5);
      local_13 = 0;
      FUN_01302c38(&local_18,&DAT_0056f5ec,4,1,&LAB_015a5f38);
      uVar4 = FUN_01302e1c();
      return uVar4;
    }
    bVar1 = *pbVar6;
    if (bVar1 == bVar3) {
      bVar2 = (bool)hasExclusiveAccess(pbVar6);
      if (bVar2) {
        *pbVar6 = bVar3 | 1;
      }
      bVar5 = false;
      if (bVar2) {
        DataMemoryBarrier(0xb);
        bVar5 = true;
      }
    }
    else {
      bVar5 = false;
      ClearExclusiveLocal();
    }
    bVar3 = bVar1;
  } while (!bVar5);
  FUN_0165098c(pbVar6);
  local_14 = (**(code **)(param_2[1] + 0xc))(*param_2,"Mutex",5);
  local_1c = pbVar6 + 4;
  local_13 = 0;
  FUN_01302c38(&local_18,&DAT_0056f5ec,4,&local_1c,FUN_00745128);
  uVar4 = FUN_01302e1c(&local_18);
  FUN_01650a90(pbVar6);
  if (*pbVar6 == 1) {
    DataMemoryBarrier(0xb);
    do {
      bVar5 = (bool)hasExclusiveAccess(pbVar6);
      if (bVar5) {
        *pbVar6 = 0;
        return uVar4;
      }
    } while (*pbVar6 == 1);
  }
  ClearExclusiveLocal();
  FUN_0164f86c(pbVar6);
  return uVar4;
}

