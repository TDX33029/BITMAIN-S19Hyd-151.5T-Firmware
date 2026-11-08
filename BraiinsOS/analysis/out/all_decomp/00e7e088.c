// FUN_00e7e088 @ 00e7e088 size=484 calls_out=8 calls_in=6
// strings: 

int FUN_00e7e088(uint *param_1)

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
      goto LAB_00e7e0bc;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  FUN_01280da8(pcVar4);
LAB_00e7e0bc:
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
        goto LAB_00e7e12c;
      }
    } while (*pcVar4 == '\x01');
  }
  ClearExclusiveLocal();
  FUN_01280a5c(pcVar4);
LAB_00e7e12c:
  uVar5 = param_1[1];
  iVar2 = uVar5 - (uVar7 + (uVar6 > *param_1));
  if (uVar5 <= uVar7 && (uint)(uVar6 <= *param_1) <= uVar5 - uVar7) {
    do {
      FUN_00e7d2a0(&local_30,param_1,0);
      pcVar4 = local_28;
      if (local_30 == 3 && iStack_2c == 0) {
        DataMemoryBarrier(0xb);
        piVar3 = (int *)(local_28 + 0x68);
        do {
          iVar2 = *piVar3;
          bVar1 = (bool)hasExclusiveAccess(piVar3);
        } while (!bVar1);
        *piVar3 = iVar2 + -1;
        DataMemoryBarrier(0xb);
        if (iVar2 == 1) {
          if (((1 < *(int *)(local_28 + 8) - 3U) && (iVar2 = *(int *)(local_28 + 0x34), iVar2 != 0))
             && (uVar5 = iVar2 * 0x11 & 0xfffffffc, uVar5 + iVar2 != -0x19)) {
            thunk_FUN_016d3fb4((*(int *)(local_28 + 0x30) - uVar5) + -0x14);
          }
          pcVar4[8] = '\x04';
          pcVar4[9] = '\0';
          pcVar4[10] = '\0';
          pcVar4[0xb] = '\0';
        }
        FUN_01282570(pcVar4);
        if (*pcVar4 == '\x01') {
          DataMemoryBarrier(0xb);
          do {
            bVar1 = (bool)hasExclusiveAccess(pcVar4);
            if (bVar1) {
              *pcVar4 = '\0';
              goto LAB_00e7e158;
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
LAB_00e7e158:
      uVar5 = param_1[1];
      iVar2 = uVar5 - (uVar7 + (uVar6 > *param_1));
    } while (uVar5 <= uVar7 && (uint)(uVar6 <= *param_1) <= uVar5 - uVar7);
  }
  return iVar2;
}

