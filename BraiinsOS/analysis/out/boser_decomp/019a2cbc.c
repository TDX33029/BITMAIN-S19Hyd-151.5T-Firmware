// FUN_019a2cbc @ 019a2cbc size=300 calls_out=6 calls_in=3
// strings: fatal runtime error: out of TLS keys; aborting  | fatal runtime error: assertion failed: key as usize != KEY_SENTVAL; aborting 

void FUN_019a2cbc(void)

{
  bool bVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  int local_20;
  undefined1 auStack_1c [11];
  undefined1 uStack_11;
  
  DataMemoryBarrier(0xb);
  iVar2 = DAT_01d50340;
  if (DAT_01d50340 != 0) goto LAB_019a2d98;
  local_20 = 0;
  iVar2 = FUN_01beee68(&local_20,DAT_01d50344);
  if (iVar2 != 0) {
LAB_019a2da8:
    uVar4 = 0x5f;
    pcVar3 = "fatal runtime error: out of TLS keys, aborting\n";
LAB_019a2dd4:
    FUN_0197a828(auStack_1c,&uStack_11,pcVar3,uVar4);
    FUN_019b6d48(auStack_1c);
                    /* WARNING: Subroutine does not return */
    FUN_0197a954();
  }
  iVar5 = local_20;
  if (local_20 == 0) {
    local_20 = 0;
    iVar2 = FUN_01beee68(&local_20,DAT_01d50344);
    iVar5 = local_20;
    if (iVar2 != 0) goto LAB_019a2da8;
    FUN_01beeef4(0);
    if (iVar5 == 0) {
      uVar4 = 0x9b;
      pcVar3 = "fatal runtime error: assertion failed: key as usize != KEY_SENTVAL, aborting\n";
      goto LAB_019a2dd4;
    }
  }
  iVar2 = DAT_01d50340;
  if (DAT_01d50340 == 0) {
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(0x1d50340);
    } while (!bVar1);
    iVar2 = iVar5;
    DAT_01d50340 = iVar5;
  }
  else {
    ClearExclusiveLocal();
    DataMemoryBarrier(0xb);
    FUN_01beeef4(iVar5);
  }
LAB_019a2d98:
  FUN_01bef9b8(iVar2,1);
  return;
}

