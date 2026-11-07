// FUN_01044104 @ 01044104 size=516 calls_out=12 calls_in=3
// strings: failed to wake I/O driver | A Tokio 1.x context was found; but IO is disabled. Call `enable_io` on the runtime builder to enable IO.

void FUN_01044104(int *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int *piVar6;
  int iVar7;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  iVar7 = param_1[3];
  param_1[3] = -1;
  if (iVar7 == -1) goto LAB_010442c0;
  iVar4 = 0x180;
  if (*param_1 != 0) {
    iVar4 = 0xb8;
  }
  iVar4 = param_1[1] + iVar4;
  if (*(int *)(iVar4 + 0x30) == -1) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8("A Tokio 1.x context was found, but IO is disabled. Call `enable_io` on the runtime builder to enable IO."
                 ,0x68,&DAT_018ad15c);
  }
  iVar3 = FUN_016d3742(*(int *)(iVar4 + 0x30),2,iVar7,0);
  if (iVar3 < 0) {
    FUN_016d2bc8();
  }
  else {
    pcVar5 = (char *)(iVar4 + 0x3c);
    if (*pcVar5 == '\0') {
      bVar2 = (bool)hasExclusiveAccess(pcVar5);
      if (!bVar2) goto LAB_01044190;
      *pcVar5 = '\x01';
      DataMemoryBarrier(0xb);
    }
    else {
      ClearExclusiveLocal();
LAB_01044190:
      FUN_01280da8(pcVar5);
    }
    FUN_0128236c(pcVar5);
    piVar6 = (int *)param_1[2];
    do {
      iVar3 = *piVar6;
      bVar2 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar2);
    *piVar6 = iVar3 + 1;
    if (iVar3 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x10442f0);
      (*pcVar1)();
    }
    iVar3 = *(int *)(iVar4 + 0x48);
    if (iVar3 == *(int *)(iVar4 + 0x40)) {
      FUN_016431c4(iVar4 + 0x40);
    }
    *(int **)(*(int *)(iVar4 + 0x44) + iVar3 * 4) = piVar6;
    iVar3 = iVar3 + 1;
    *(int *)(iVar4 + 0x48) = iVar3;
    DataMemoryBarrier(0xb);
    *(int *)(iVar4 + 0x38) = iVar3;
    FUN_01282570(pcVar5);
    if (*pcVar5 == '\x01') {
      DataMemoryBarrier(0xb);
      do {
        bVar2 = (bool)hasExclusiveAccess(pcVar5);
        if (bVar2) {
          *pcVar5 = '\0';
          bVar2 = true;
          goto joined_r0x01044298;
        }
      } while (*pcVar5 == '\x01');
    }
    bVar2 = false;
    ClearExclusiveLocal();
joined_r0x01044298:
    if (iVar3 == 0x10) {
      if (!bVar2) {
        FUN_01280a5c(pcVar5);
      }
      FUN_0126df90(&local_30,*(undefined4 *)(iVar4 + 0x34));
      if ((char)local_30 != '\x04') {
        local_24 = local_2c;
        local_28 = local_30;
                    /* WARNING: Subroutine does not return */
        FUN_00fb74f8("failed to wake I/O driver",0x19,&local_28,&DAT_018ad2fc,&DAT_018ad384);
      }
    }
    else if (!bVar2) {
      FUN_01280a5c(pcVar5);
    }
    iVar4 = param_1[3];
    FUN_016dffb2(iVar7);
    iVar7 = iVar4;
    if (iVar4 == -1) goto LAB_010442c0;
  }
  FUN_016dffb2(iVar7);
LAB_010442c0:
  FUN_00a414e8(param_1);
  return;
}

