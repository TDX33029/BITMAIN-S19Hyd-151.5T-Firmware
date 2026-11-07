// FUN_00a86e98 @ 00a86e98 size=504 calls_out=10 calls_in=13
// strings: A Tokio 1.x context was found; but IO is disabled. Call `enable_io` on the runtime builder to enable IO. | failed to wake I/O driver

void FUN_00a86e98(int *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  int *piVar7;
  int iVar8;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  iVar8 = param_1[3];
  param_1[3] = -1;
  if (iVar8 == -1) {
    return;
  }
  iVar5 = 0x180;
  if (*param_1 != 0) {
    iVar5 = 0xb8;
  }
  iVar5 = param_1[1] + iVar5;
  if (*(int *)(iVar5 + 0x30) == -1) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8("A Tokio 1.x context was found, but IO is disabled. Call `enable_io` on the runtime builder to enable IO."
                 ,0x68,&DAT_018ad15c);
  }
  piVar7 = (int *)param_1[2];
  iVar3 = FUN_016d3742(*(int *)(iVar5 + 0x30),2,iVar8,0);
  if (iVar3 < 0) {
    FUN_016d2bc8();
    goto FUN_016dffb2;
  }
  pcVar6 = (char *)(iVar5 + 0x3c);
  if (*pcVar6 == '\0') {
    bVar2 = (bool)hasExclusiveAccess(pcVar6);
    if (!bVar2) goto LAB_00a86f38;
    *pcVar6 = '\x01';
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_00a86f38:
    FUN_01280da8(pcVar6);
  }
  FUN_0128236c(pcVar6);
  do {
    iVar3 = *piVar7;
    bVar2 = (bool)hasExclusiveAccess(piVar7);
  } while (!bVar2);
  *piVar7 = iVar3 + 1;
  if (iVar3 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0xa87090);
    (*pcVar1)();
  }
  iVar3 = *(int *)(iVar5 + 0x48);
  if (iVar3 == *(int *)(iVar5 + 0x40)) {
    FUN_016431c4(iVar5 + 0x40);
  }
  *(int **)(*(int *)(iVar5 + 0x44) + iVar3 * 4) = piVar7;
  iVar3 = iVar3 + 1;
  *(int *)(iVar5 + 0x48) = iVar3;
  DataMemoryBarrier(0xb);
  *(int *)(iVar5 + 0x38) = iVar3;
  FUN_01282570(pcVar6);
  if (*pcVar6 == '\x01') {
    DataMemoryBarrier(0xb);
    do {
      bVar2 = (bool)hasExclusiveAccess(pcVar6);
      if (bVar2) {
        *pcVar6 = '\0';
        bVar2 = true;
        goto joined_r0x00a87010;
      }
    } while (*pcVar6 == '\x01');
  }
  bVar2 = false;
  ClearExclusiveLocal();
joined_r0x00a87010:
  if (iVar3 == 0x10) {
    if (!bVar2) {
      FUN_01280a5c(pcVar6);
    }
    FUN_0126df90(&local_28,*(undefined4 *)(iVar5 + 0x34));
    if ((char)local_28 != '\x04') {
      local_1c = local_24;
      local_20 = local_28;
                    /* WARNING: Subroutine does not return */
      FUN_00fb74f8("failed to wake I/O driver",0x19,&local_20,&DAT_018ad2fc,&DAT_018ad384);
    }
  }
  else if (!bVar2) {
    FUN_01280a5c(pcVar6);
  }
FUN_016dffb2:
  uVar4 = FUN_016dac50(iVar8);
  iVar8 = thunk_FUN_016dde14(6,uVar4,0);
  if (iVar8 == -4) {
    iVar8 = 0;
  }
  FUN_016d3496(iVar8);
  return;
}

