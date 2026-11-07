// FUN_019ebf00 @ 019ebf00 size=700 calls_out=12 calls_in=2
// strings: A Tokio 1.x context was found; but timers are disabled. Call `enable_time` on the runtime builder to enable timers. | assertion failed: !handle.is_shutdown()

void FUN_019ebf00(undefined4 param_1,int param_2,uint param_3,uint param_4,undefined1 *param_5)

{
  bool bVar1;
  longlong lVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  uint uVar9;
  uint uVar10;
  undefined8 uVar11;
  longlong lVar12;
  uint local_40 [2];
  uint local_38;
  uint local_34;
  
  lVar2 = CONCAT44(param_4,param_3);
  if (*(undefined1 **)(param_2 + 0x60) == &DAT_3b9aca00) {
                    /* WARNING: Subroutine does not return */
    FUN_0130739c("A Tokio 1.x context was found, but timers are disabled. Call `enable_time` on the runtime builder to enable timers."
                 ,0x73,&DAT_01d29494);
  }
  pcVar8 = (char *)(param_2 + 0x28);
  if (*pcVar8 == '\0') {
    bVar1 = (bool)hasExclusiveAccess(pcVar8);
    if (!bVar1) goto LAB_019ec180;
    *pcVar8 = '\x01';
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_019ec180:
    FUN_0164fba8(pcVar8);
  }
  FUN_0165098c(pcVar8);
  DataMemoryBarrier(0xb);
  if (*(char *)(param_2 + 0x50) != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("assertion failed: !handle.is_shutdown()",0x27,&DAT_01d294a4);
  }
  FUN_019e1c0c(local_40,param_2 + 0x38);
  uVar9 = 1;
  if (1 < local_38) {
    uVar9 = local_38;
  }
  if (local_34 != 0) {
    uVar9 = local_38;
  }
  if ((local_40[0] & 1) == 0) {
    uVar9 = 0;
    uVar6 = 0;
  }
  else {
    uVar6 = local_34;
  }
  *(uint *)(param_2 + 0x30) = uVar9;
  *(uint *)(param_2 + 0x34) = uVar6;
  FUN_01650a90(pcVar8);
  if (*pcVar8 == '\x01') {
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(pcVar8);
      if (bVar1) {
        *pcVar8 = '\0';
        goto LAB_019ec000;
      }
    } while (*pcVar8 == '\x01');
  }
  ClearExclusiveLocal();
  FUN_0164f86c(pcVar8);
LAB_019ec000:
  if ((local_40[0] & 1) == 0) {
    if (param_5 == &DAT_3b9aca00) {
      FUN_019e23ac(param_1,param_2);
      goto LAB_019ec158;
    }
  }
  else {
    uVar11 = FUN_019f5f88(*(undefined4 *)(param_2 + 0x58),*(undefined4 *)(param_2 + 0x5c),
                          *(undefined4 *)(param_2 + 0x60));
    uVar3 = (uint)((ulonglong)uVar11 >> 0x20);
    uVar6 = (uint)uVar11;
    uVar10 = local_38 - uVar6;
    uVar9 = local_34 - (uVar3 + (uVar6 > local_38));
    if (local_34 <= uVar3 && (uint)(uVar6 <= local_38) <= local_34 - uVar3) {
      uVar9 = 0;
      uVar10 = 0;
    }
    lVar12 = FUN_01bf0ff0(uVar10,uVar9,1000,0);
    uVar6 = (uint)((ulonglong)lVar12 >> 0x20);
    iVar7 = uVar10 + (uint)lVar12 * -1000;
    bVar1 = iVar7 != 0;
    if (uVar9 != 0 || uVar9 < (999 < uVar10)) {
      bVar1 = (uint)((uVar10 >> 3 | uVar9 << 0x1d) < 0x7d) <= -(uVar9 >> 3);
    }
    if (bVar1) {
      puVar4 = (undefined1 *)(iVar7 * 1000000);
      if (param_5 != &DAT_3b9aca00) {
        bVar1 = uVar6 <= param_4 && (uint)(param_3 <= (uint)lVar12) <= uVar6 - param_4;
        if (lVar12 == lVar2) {
          bVar1 = puVar4 < param_5;
        }
        if (!bVar1) {
          puVar4 = param_5;
          lVar12 = lVar2;
        }
      }
      param_5 = puVar4;
      lVar2 = lVar12;
    }
    else {
      param_5 = (undefined1 *)0x0;
      lVar2 = 0;
    }
  }
  FUN_019e2008(param_1,param_2,(int)lVar2,(int)((ulonglong)lVar2 >> 0x20),param_5);
LAB_019ec158:
  uVar11 = FUN_019f5f88(*(undefined4 *)(param_2 + 0x58),*(undefined4 *)(param_2 + 0x5c),
                        *(undefined4 *)(param_2 + 0x60));
  uVar5 = (undefined4)((ulonglong)uVar11 >> 0x20);
  FUN_019ed154(pcVar8,uVar5,(int)uVar11,uVar5);
  return;
}

