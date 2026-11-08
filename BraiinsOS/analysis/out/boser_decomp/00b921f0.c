// FUN_00b921f0 @ 00b921f0 size=272 calls_out=5 calls_in=0
// strings: RwLock

void FUN_00b921f0(undefined4 *param_1,undefined4 *param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  undefined4 *local_20;
  undefined1 local_1c;
  undefined1 local_1b;
  uint *local_18;
  undefined4 local_14;
  
  puVar4 = (uint *)*param_1;
  local_1c = (**(code **)(param_2[1] + 0xc))(*param_2,"RwLock",6);
  local_1b = 0;
  uVar2 = *puVar4;
  local_20 = param_2;
  if ((uVar2 < 0xfffffff0) && ((uVar2 & 8) == 0)) {
    if (*puVar4 != uVar2) {
      ClearExclusiveLocal();
      goto LAB_00b922b4;
    }
    bVar1 = (bool)hasExclusiveAccess(puVar4);
    if (!bVar1) goto LAB_00b922b4;
    *puVar4 = uVar2 + 0x10;
    DataMemoryBarrier(0xb);
  }
  else {
LAB_00b922b4:
    iVar3 = FUN_0164e6b8(puVar4);
    if (iVar3 == 0) {
      local_14 = 0x11;
      local_18 = (uint *)&DAT_00570310;
      FUN_01302c38(&local_20,&DAT_0056f5ec,4,&local_18,&LAB_01307e7c);
      goto LAB_00b922a0;
    }
  }
  FUN_0165098c(puVar4);
  FUN_0165098c((uint)puVar4 | 1);
  local_18 = puVar4 + 1;
  FUN_01302c38(&local_20,&DAT_0056f5ec,4,&local_18,&LAB_0164c854);
  FUN_00b92330(puVar4);
LAB_00b922a0:
  FUN_01302e1c(&local_20);
  return;
}

