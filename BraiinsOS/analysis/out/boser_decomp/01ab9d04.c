// FUN_01ab9d04 @ 01ab9d04 size=296 calls_out=5 calls_in=0
// strings: 

undefined4 FUN_01ab9d04(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  bool bVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int local_30;
  undefined4 uStack_2c;
  undefined1 *local_28;
  code *local_24;
  undefined4 uStack_20;
  undefined1 *local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  local_30 = param_3;
  uStack_2c = param_4;
  FUN_01ab440c(&local_18,param_1,param_3 + -1);
  if (local_18 == (undefined1 *)0x0) {
    if (((DAT_01d51b08 & 0x7fffffff) == 0) || (iVar4 = FUN_0197ac0c(), iVar4 != 0)) {
      local_24 = FUN_01ab9e64;
      local_28 = (undefined1 *)&local_30;
                    /* WARNING: Subroutine does not return */
      FUN_012fb100(&DAT_005816ed,&local_28,&DAT_01d2ee74);
    }
  }
  else {
    local_28 = local_18;
    local_24 = (code *)uStack_14;
    uStack_20 = uStack_10;
    DataMemoryBarrier(0xb);
    puVar2 = (uint *)(local_18 + 0x10);
    do {
      uVar5 = *puVar2;
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = uVar5 - 1;
    uVar3 = 0;
    if ((DAT_01d51b08 & 0x7fffffff) != 0) {
      uVar3 = FUN_0197ac0c();
      uVar3 = uVar3 ^ 1;
    }
    if (uVar5 == 0xffffffff && uVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01979f74(&DAT_00531736,0x19,&DAT_01d2ee84);
    }
    if (uVar5 < 2) {
      DataMemoryBarrier(0xb);
      FUN_01ab4580(&local_28);
      return 1;
    }
    FUN_01ab4580(&local_28);
  }
  return 0;
}

