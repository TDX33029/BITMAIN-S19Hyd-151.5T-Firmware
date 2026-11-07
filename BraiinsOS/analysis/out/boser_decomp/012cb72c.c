// FUN_012cb72c @ 012cb72c size=332 calls_out=8 calls_in=2
// strings: unexpected empty broadcast channelevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/f2e45444cf1a7616fcedf64afbe898d8191f44f31eed23608ce2310d851ca320/tokio-cron-scheduler-0.19.0/src/simple/to_code.rs:59

int FUN_012cb72c(uint *param_1)

{
  int iVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  int local_30;
  int local_2c;
  undefined4 local_28;
  
  uVar3 = param_1[2];
  pcVar2 = (char *)(uVar3 + 0x10);
  if (*pcVar2 == '\0') {
    bVar6 = (bool)hasExclusiveAccess(pcVar2);
    if (bVar6) {
      *pcVar2 = '\x01';
      DataMemoryBarrier(0xb);
      goto LAB_012cb760;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  FUN_0164fba8(pcVar2);
LAB_012cb760:
  FUN_0165098c(pcVar2);
  uVar4 = *(uint *)(uVar3 + 0x18);
  uVar5 = *(uint *)(uVar3 + 0x1c);
  iVar1 = *(int *)(uVar3 + 0x28) + -1;
  *(int *)(uVar3 + 0x28) = iVar1;
  if (iVar1 == 0) {
    FUN_019e03e8(param_1[2] + 0x30);
    *(undefined1 *)(uVar3 + 0x2c) = 1;
  }
  FUN_01650a90(pcVar2);
  if (*pcVar2 == '\x01') {
    DataMemoryBarrier(0xb);
    do {
      bVar6 = (bool)hasExclusiveAccess(pcVar2);
      if (bVar6) {
        *pcVar2 = '\0';
        goto LAB_012cb7d0;
      }
    } while (*pcVar2 == '\x01');
  }
  ClearExclusiveLocal();
  FUN_0164f86c(pcVar2);
LAB_012cb7d0:
  uVar3 = param_1[1];
  iVar1 = uVar3 - (uVar5 + (uVar4 > *param_1));
  if (uVar3 <= uVar5 && (uint)(uVar4 <= *param_1) <= uVar3 - uVar5) {
    do {
      FUN_012cb134(&local_30,param_1,0);
      bVar6 = local_30 == 3 && local_2c == 0;
      if (local_30 != 3 || local_2c != 0) {
        bVar6 = local_30 == 2;
      }
      if (!bVar6) {
        if (local_30 != 1) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb100("unexpected empty broadcast channelevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/f2e45444cf1a7616fcedf64afbe898d8191f44f31eed23608ce2310d851ca320/tokio-cron-scheduler-0.19.0/src/simple/to_code.rs:59"
                       ,0x45,&DAT_01d2a570);
        }
        iVar1 = FUN_012cb8b4(1,local_2c,local_28);
        return iVar1;
      }
      FUN_012cb8b4(local_30,local_2c,local_28);
      uVar3 = param_1[1];
      iVar1 = uVar3 - (uVar5 + (uVar4 > *param_1));
    } while (uVar3 <= uVar5 && (uint)(uVar4 <= *param_1) <= uVar3 - uVar5);
  }
  return iVar1;
}

