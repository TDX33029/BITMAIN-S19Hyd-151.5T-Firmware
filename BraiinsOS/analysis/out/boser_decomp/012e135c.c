// FUN_012e135c @ 012e135c size=460 calls_out=10 calls_in=1
// strings: mio: | mio: | A Tokio 1.x context was found; but IO is disabled. Call `enable_io` on the runtime builder to enable IO.

void FUN_012e135c(int *param_1)

{
  bool bVar1;
  code *pcVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined4 *puVar9;
  char local_40 [4];
  undefined4 *local_3c;
  char *local_34;
  undefined4 local_30;
  char *local_2c;
  undefined4 local_28;
  undefined *local_24;
  
  iVar5 = param_1[3];
  iVar6 = param_1[4];
  param_1[3] = 0;
  if (iVar5 == 0) {
    return;
  }
  iVar5 = 0x180;
  if (*param_1 != 0) {
    iVar5 = 0xb8;
  }
  piVar8 = (int *)(param_1[1] + iVar5);
  iVar5 = *piVar8;
  if (iVar5 == -1) {
                    /* WARNING: Subroutine does not return */
    FUN_0130739c("A Tokio 1.x context was found, but IO is disabled. Call `enable_io` on the runtime builder to enable IO."
                 ,0x68,&DAT_01d292f4);
  }
  iVar3 = param_1[2];
  if (4 < DAT_01d51b00) {
    local_28 = 9;
    local_30 = 9;
    local_24 = &DAT_01d297f0;
    local_2c = "mio:";
    local_34 = "mio:";
    FUN_0161d588("de",0x4d,5,&local_34);
    iVar5 = *piVar8;
  }
  FUN_01609548(local_40,iVar5,iVar6);
  if (local_40[0] != '\x04') {
    if (local_40[0] == '\x03') {
      uVar7 = *local_3c;
      puVar9 = (undefined4 *)local_3c[1];
      pcVar2 = (code *)*puVar9;
      if (pcVar2 != (code *)0x0) {
        (*pcVar2)(uVar7);
      }
      if (puVar9[1] != 0) {
        thunk_FUN_01be4678(uVar7);
      }
      thunk_FUN_01be4678(local_3c);
    }
    goto LAB_012e14f8;
  }
  piVar4 = piVar8 + 3;
  if ((char)*piVar4 == '\0') {
    bVar1 = (bool)hasExclusiveAccess(piVar4);
    if (!bVar1) goto LAB_012e1440;
    *(char *)piVar4 = '\x01';
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_012e1440:
    FUN_0164fba8(piVar4);
  }
  FUN_0165098c(piVar4);
  iVar5 = FUN_019f7ef0(piVar8 + 2,piVar8 + 4,iVar3);
  FUN_01650a90(piVar4);
  if ((char)*piVar4 == '\x01') {
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(piVar4);
      if (bVar1) {
        *(char *)piVar4 = '\0';
        goto LAB_012e14a4;
      }
    } while ((char)*piVar4 == '\x01');
  }
  ClearExclusiveLocal();
  FUN_0164f86c(piVar4);
LAB_012e14a4:
  if (iVar5 != 0) {
    FUN_019f8594(piVar8[1]);
  }
LAB_012e14f8:
  uVar7 = FUN_01beaf68(iVar6);
  iVar5 = thunk_FUN_01bee080(6,uVar7,0);
  if (iVar5 == -4) {
    iVar5 = 0;
  }
  FUN_01be3b5a(iVar5);
  return;
}

