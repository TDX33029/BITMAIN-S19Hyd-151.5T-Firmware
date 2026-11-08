// FUN_0109e3dc @ 0109e3dc size=544 calls_out=7 calls_in=1
// strings: window | protected | probation

void FUN_0109e3dc(int param_1,int param_2)

{
  bool bVar1;
  char *pcVar2;
  uint uVar3;
  char *pcStack_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  uint local_30;
  char local_29;
  char **local_28;
  undefined4 *local_24;
  uint *local_20;
  code *local_1c;
  
  pcVar2 = (char *)(param_2 + 4);
  if (*pcVar2 == '\0') {
    bVar1 = (bool)hasExclusiveAccess(pcVar2);
    if (!bVar1) goto LAB_0109e5b4;
    *pcVar2 = '\x01';
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_0109e5b4:
    FUN_01280da8(pcVar2);
  }
  FUN_0128236c(pcVar2);
  uVar3 = *(uint *)(param_2 + 8);
  *(undefined4 *)(param_2 + 8) = 0;
  FUN_01282570(pcVar2);
  if (*pcVar2 == '\x01') {
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(pcVar2);
      if (bVar1) {
        *pcVar2 = '\0';
        goto LAB_0109e460;
      }
    } while (*pcVar2 == '\x01');
  }
  ClearExclusiveLocal();
  FUN_01280a5c(pcVar2);
LAB_0109e460:
  if (uVar3 != 0) {
    switch(uVar3 & 3) {
    case 0:
      pcStack_3c = "window";
      uStack_38 = 6;
      local_30 = uVar3 & 0xfffffffc;
      local_34 = 0;
      local_29 = *(char *)(param_1 + 0x14);
      if (local_29 != '\0') {
LAB_0109e5c0:
        local_30 = uVar3 & 0xfffffffc;
        local_20 = &local_30;
        local_1c = FUN_0108866c;
        local_24 = &DAT_0157d360;
        local_28 = &pcStack_3c;
                    /* WARNING: Subroutine does not return */
        FUN_01096ff4(&local_29,&local_34,&DAT_00570255,&local_28,&DAT_018842dc);
      }
      if ((*(int *)(local_30 + 8) != 0) || (*(uint *)(param_1 + 0xc) == local_30)) {
        FUN_0108984c(param_1);
        return;
      }
      break;
    case 1:
      pcStack_3c = "probation";
      uStack_38 = 9;
      local_30 = uVar3 & 0xfffffffc;
      local_34 = 1;
      local_29 = *(char *)(param_1 + 0x2c);
      if (local_29 != '\x01') goto LAB_0109e5c0;
      if ((*(int *)(local_30 + 8) != 0) || (*(uint *)(param_1 + 0x24) == local_30)) {
        FUN_0108984c(param_1 + 0x18);
        return;
      }
      break;
    case 2:
      pcStack_3c = "protected";
      uStack_38 = 9;
      local_30 = uVar3 & 0xfffffffc;
      local_34 = 2;
      local_29 = *(char *)(param_1 + 0x44);
      if (local_29 != '\x02') goto LAB_0109e5c0;
      if ((*(int *)(local_30 + 8) != 0) || (*(uint *)(param_1 + 0x3c) == local_30)) {
        FUN_0108984c(param_1 + 0x30);
        return;
      }
      break;
    case 3:
                    /* WARNING: Subroutine does not return */
      FUN_00faa464(&DAT_00419463,0x28,&DAT_018842ac);
    }
  }
  return;
}

