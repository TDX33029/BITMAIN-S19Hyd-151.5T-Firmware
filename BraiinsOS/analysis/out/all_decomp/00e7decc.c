// FUN_00e7decc @ 00e7decc size=412 calls_out=7 calls_in=12
// strings: 

int FUN_00e7decc(uint *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int local_30;
  int iStack_2c;
  char *local_28;
  
  uVar5 = param_1[2];
  pcVar4 = (char *)(uVar5 + 0x10);
  if (*pcVar4 == '\0') {
    bVar1 = (bool)hasExclusiveAccess(pcVar4);
    if (bVar1) {
      *pcVar4 = '\x01';
      DataMemoryBarrier(0xb);
      goto LAB_00e7df00;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  FUN_01280da8(pcVar4);
LAB_00e7df00:
  FUN_0128236c(pcVar4);
  uVar6 = *(uint *)(uVar5 + 0x18);
  uVar7 = *(uint *)(uVar5 + 0x1c);
  iVar2 = *(int *)(uVar5 + 0x28) + -1;
  *(int *)(uVar5 + 0x28) = iVar2;
  if (iVar2 == 0) {
    FUN_0163b708(param_1[2] + 0x30);
    *(undefined1 *)(uVar5 + 0x2c) = 1;
  }
  FUN_01282570(pcVar4);
  if (*pcVar4 == '\x01') {
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(pcVar4);
      if (bVar1) {
        *pcVar4 = '\0';
        goto LAB_00e7df70;
      }
    } while (*pcVar4 == '\x01');
  }
  ClearExclusiveLocal();
  FUN_01280a5c(pcVar4);
LAB_00e7df70:
  uVar5 = param_1[1];
  iVar2 = uVar5 - (uVar7 + (uVar6 > *param_1));
  if (uVar5 <= uVar7 && (uint)(uVar6 <= *param_1) <= uVar5 - uVar7) {
    do {
      FUN_00a94f40(&local_30,param_1,0);
      pcVar4 = local_28;
      if (local_30 == 3 && iStack_2c == 0) {
        DataMemoryBarrier(0xb);
        piVar3 = (int *)(local_28 + 0x10);
        do {
          iVar2 = *piVar3;
          bVar1 = (bool)hasExclusiveAccess(piVar3);
        } while (!bVar1);
        *piVar3 = iVar2 + -1;
        DataMemoryBarrier(0xb);
        if (iVar2 == 1) {
          local_28[0x14] = '\0';
        }
        FUN_01282570(local_28);
        if (*pcVar4 == '\x01') {
          DataMemoryBarrier(0xb);
          do {
            bVar1 = (bool)hasExclusiveAccess(pcVar4);
            if (bVar1) {
              *pcVar4 = '\0';
              goto LAB_00e7df98;
            }
          } while (*pcVar4 == '\x01');
        }
        ClearExclusiveLocal();
        FUN_01280a5c(pcVar4);
      }
      else {
        if (local_30 == 1) {
          return 1;
        }
        if (local_30 != 2) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa478(&DAT_0035e385,0x45,&DAT_01880ae4);
        }
      }
LAB_00e7df98:
      uVar5 = param_1[1];
      iVar2 = uVar5 - (uVar7 + (uVar6 > *param_1));
    } while (uVar5 <= uVar7 && (uint)(uVar6 <= *param_1) <= uVar5 - uVar7);
  }
  return iVar2;
}

