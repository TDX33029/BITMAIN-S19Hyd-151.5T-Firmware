// FUN_01a18878 @ 01a18878 size=312 calls_out=8 calls_in=1
// strings: unexpected empty broadcast channelevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/f2e45444cf1a7616fcedf64afbe898d8191f44f31eed23608ce2310d851ca320/tokio-cron-scheduler-0.19.0/src/simple/to_code.rs:59

int FUN_01a18878(uint *param_1)

{
  bool bVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int local_28;
  int iStack_24;
  undefined4 local_20;
  
  uVar6 = param_1[2];
  pcVar3 = (char *)(uVar6 + 0x10);
  if (*pcVar3 == '\0') {
    bVar1 = (bool)hasExclusiveAccess(pcVar3);
    if (bVar1) {
      *pcVar3 = '\x01';
      DataMemoryBarrier(0xb);
      goto LAB_01a188ac;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  FUN_0164fba8(pcVar3);
LAB_01a188ac:
  FUN_0165098c(pcVar3);
  uVar4 = *(uint *)(uVar6 + 0x18);
  uVar5 = *(uint *)(uVar6 + 0x1c);
  iVar2 = *(int *)(uVar6 + 0x28) + -1;
  *(int *)(uVar6 + 0x28) = iVar2;
  if (iVar2 == 0) {
    FUN_019e03e8(param_1[2] + 0x30);
    *(undefined1 *)(uVar6 + 0x2c) = 1;
  }
  FUN_01650a90(pcVar3);
  if (*pcVar3 == '\x01') {
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(pcVar3);
      if (bVar1) {
        *pcVar3 = '\0';
        goto LAB_01a1891c;
      }
    } while (*pcVar3 == '\x01');
  }
  ClearExclusiveLocal();
  FUN_0164f86c(pcVar3);
LAB_01a1891c:
  uVar6 = param_1[1];
  iVar2 = uVar6 - (uVar5 + (uVar4 > *param_1));
  if (uVar6 <= uVar5 && (uint)(uVar4 <= *param_1) <= uVar6 - uVar5) {
    do {
      FUN_01a173e8(&local_28,param_1,0);
      if (local_28 == 3 && iStack_24 == 0) {
        FUN_01a189d0(local_20);
      }
      else if (local_28 != 2) {
        if (local_28 != 1) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb100("unexpected empty broadcast channelevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/f2e45444cf1a7616fcedf64afbe898d8191f44f31eed23608ce2310d851ca320/tokio-cron-scheduler-0.19.0/src/simple/to_code.rs:59"
                       ,0x45,&DAT_01d2a570);
        }
        return 1;
      }
      uVar6 = param_1[1];
      iVar2 = uVar6 - (uVar5 + (uVar4 > *param_1));
    } while (uVar6 <= uVar5 && (uint)(uVar4 <= *param_1) <= uVar6 - uVar5);
  }
  return iVar2;
}

