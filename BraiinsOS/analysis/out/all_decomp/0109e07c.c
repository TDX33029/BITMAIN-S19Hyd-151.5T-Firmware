// FUN_0109e07c @ 0109e07c size=480 calls_out=6 calls_in=2
// strings: 

void FUN_0109e07c(undefined4 param_1,undefined4 param_2,uint *param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  uint uVar4;
  bool bVar5;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  uint local_34;
  uint local_30;
  byte local_29;
  undefined4 *local_28;
  undefined4 *local_24;
  uint *local_20;
  code *local_1c;
  
  pcVar3 = (char *)(param_4 + 4);
  uStack_3c = param_1;
  uStack_38 = param_2;
  if (*pcVar3 == '\0') {
    bVar5 = (bool)hasExclusiveAccess(pcVar3);
    if (bVar5) {
      *pcVar3 = '\x01';
      DataMemoryBarrier(0xb);
      goto LAB_0109e0b4;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  FUN_01280da8(pcVar3);
LAB_0109e0b4:
  FUN_0128236c(pcVar3);
  uVar4 = *(uint *)(param_4 + 8);
  FUN_01282570(pcVar3);
  if (*pcVar3 == '\x01') {
    DataMemoryBarrier(0xb);
    do {
      bVar5 = (bool)hasExclusiveAccess(pcVar3);
      if (bVar5) {
        *pcVar3 = '\0';
        goto LAB_0109e100;
      }
    } while (*pcVar3 == '\x01');
  }
  ClearExclusiveLocal();
  FUN_01280a5c(pcVar3);
LAB_0109e100:
  if (uVar4 != 0) {
    local_29 = (byte)param_3[5];
    local_30 = uVar4 & 0xfffffffc;
    local_34 = uVar4 & 3;
    if (local_34 != local_29) {
      local_20 = &local_30;
      local_1c = FUN_0108866c;
      local_24 = &DAT_0157d360;
      local_28 = &uStack_3c;
                    /* WARNING: Subroutine does not return */
      FUN_01096ff4(&local_29,&local_34,&DAT_00583f85,&local_28,&DAT_018842cc);
    }
    iVar1 = *(int *)(local_30 + 8);
    if (((iVar1 != 0) || (param_3[3] == local_30)) && (uVar4 = param_3[4], uVar4 != local_30)) {
      uVar2 = *param_3;
      bVar5 = uVar2 == 1;
      if (bVar5) {
        uVar2 = param_3[1];
      }
      if (bVar5 && uVar2 == local_30) {
        uVar2 = *(uint *)(uVar2 + 4);
        *param_3 = 1;
        param_3[1] = uVar2;
        uVar2 = *(uint *)(local_30 + 4);
      }
      else {
        uVar2 = *(uint *)(local_30 + 4);
      }
      if (iVar1 == 0) {
        param_3[3] = uVar2;
        *(undefined4 *)(local_30 + 4) = 0;
      }
      else {
        if (uVar2 == 0) {
          return;
        }
        *(uint *)(iVar1 + 4) = uVar2;
        uVar2 = *(uint *)(local_30 + 4);
        *(undefined4 *)(local_30 + 4) = 0;
      }
      if (uVar2 != 0) {
        *(undefined4 *)(uVar2 + 8) = *(undefined4 *)(local_30 + 8);
        if (uVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa464(&DAT_00419463,0x28,&DAT_01883dc0);
        }
        *(uint *)(local_30 + 8) = uVar4;
        param_3[4] = local_30;
        *(uint *)(uVar4 + 4) = local_30;
        return;
      }
    }
  }
  return;
}

