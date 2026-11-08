// FUN_01654904 @ 01654904 size=300 calls_out=5 calls_in=1
// strings: 

void FUN_01654904(int param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  char *pcVar6;
  undefined4 uVar7;
  
  uVar5 = param_2[1];
  uVar3 = *(uint *)(*param_2 + 0x7c);
  if (uVar3 <= uVar5) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(uVar5,uVar3,&DAT_018acfac);
  }
  iVar2 = *(int *)(*param_2 + 0x78) + uVar5 * 0x80;
  uVar7 = *(undefined4 *)(param_1 + 0x14);
  do {
    bVar1 = (bool)hasExclusiveAccess((undefined4 *)(iVar2 + 0x10));
  } while (!bVar1);
  *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(iVar2 + 0x14) = uVar7;
  uVar7 = *(undefined4 *)(param_1 + 0x1c);
  do {
    bVar1 = (bool)hasExclusiveAccess((undefined4 *)(iVar2 + 0x18));
  } while (!bVar1);
  *(undefined4 *)(iVar2 + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(iVar2 + 0x1c) = uVar7;
  uVar7 = *(undefined4 *)(param_1 + 0x24);
  do {
    uVar4 = *(undefined4 *)(iVar2 + 0x24);
    bVar1 = (bool)hasExclusiveAccess((undefined4 *)(iVar2 + 0x20));
  } while (!bVar1);
  *(undefined4 *)(iVar2 + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(iVar2 + 0x24) = uVar7;
  if (*(char *)(param_1 + 0x66) != '\0') goto LAB_0165497c;
  iVar2 = *param_2;
  pcVar6 = (char *)(iVar2 + 0x9c);
  if (*pcVar6 == '\0') {
    bVar1 = (bool)hasExclusiveAccess(pcVar6);
    if (bVar1) {
      *pcVar6 = '\x01';
    }
    param_2 = (int *)(uint)!bVar1;
    if (param_2 != (int *)0x0) goto LAB_01654a10;
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_01654a10:
    FUN_01280da8(pcVar6,param_2,0,uVar4);
  }
  FUN_0128236c(pcVar6);
  *(undefined1 *)(param_1 + 0x66) = *(undefined1 *)(iVar2 + 0xb4);
  FUN_01282570(pcVar6);
  if (*pcVar6 == '\x01') {
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(pcVar6);
      if (bVar1) {
        *pcVar6 = '\0';
        goto LAB_0165497c;
      }
    } while (*pcVar6 == '\x01');
  }
  ClearExclusiveLocal();
  FUN_01280a5c(pcVar6);
LAB_0165497c:
  if (*(char *)(param_1 + 0x67) == '\0') {
    *(undefined1 *)(param_1 + 0x67) = 0;
  }
  return;
}

