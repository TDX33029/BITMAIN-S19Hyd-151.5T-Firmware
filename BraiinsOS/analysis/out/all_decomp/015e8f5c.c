// FUN_015e8f5c @ 015e8f5c size=328 calls_out=6 calls_in=3
// strings: fatal runtime error: out of TLS keys; aborting  | fatal runtime error: assertion failed: key as usize != KEY_SENTVAL; aborting 

void FUN_015e8f5c(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  int local_20;
  undefined1 local_1c [4];
  undefined4 local_18;
  undefined1 uStack_11;
  
  DataMemoryBarrier(0xb);
  if (DAT_018d9090 != 0) {
    FUN_016df794(DAT_018d9090,1);
    return;
  }
  local_20 = 0;
  iVar2 = FUN_016debfc(&local_20,DAT_018d9094);
  if (iVar2 == 0) {
    iVar2 = local_20;
    if (local_20 != 0) {
LAB_015e8fe8:
      iVar3 = DAT_018d9090;
      if (DAT_018d9090 != 0) {
        ClearExclusiveLocal();
        DataMemoryBarrier(0xb);
        FUN_016dec88(iVar2);
        FUN_016df794(iVar3,1);
        return;
      }
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(0x18d9090);
      } while (!bVar1);
      DAT_018d9090 = iVar2;
      FUN_016df794(iVar2,1);
      return;
    }
    local_20 = 0;
    iVar3 = FUN_016debfc(&local_20,DAT_018d9094);
    iVar2 = local_20;
    if (iVar3 == 0) {
      FUN_016dec88(0);
      if (iVar2 != 0) goto LAB_015e8fe8;
      uVar5 = 0x9b;
      pcVar4 = "fatal runtime error: assertion failed: key as usize != KEY_SENTVAL, aborting\n";
      goto LAB_015e9090;
    }
  }
  uVar5 = 0x5f;
  pcVar4 = "fatal runtime error: out of TLS keys, aborting\n";
LAB_015e9090:
  FUN_015bee18(local_1c,&uStack_11,pcVar4,uVar5);
  FUN_015ff474(local_1c[0],local_18);
                    /* WARNING: Subroutine does not return */
  FUN_015bef44();
}

