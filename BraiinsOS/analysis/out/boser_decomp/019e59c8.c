// FUN_019e59c8 @ 019e59c8 size=540 calls_out=6 calls_in=1
// strings: 

undefined4 FUN_019e59c8(int param_1,undefined4 param_2,uint param_3,int param_4,int param_5)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  char *pcVar9;
  bool bVar10;
  uint local_3c;
  int local_38;
  int local_34;
  int *local_30;
  code *local_2c;
  uint *local_28;
  code *local_24;
  
  local_34 = param_4 - param_3;
  local_3c = param_3;
  local_38 = param_4;
  if (local_34 != 0x100) {
    local_28 = &local_3c;
    local_30 = &local_38;
    local_24 = FUN_012fd02c;
    local_2c = FUN_012fd02c;
                    /* WARNING: Subroutine does not return */
    FUN_01304210(0,&local_34,&DAT_0056f810,&DAT_0058d4a2,&local_30,&DAT_01d290f4);
  }
  puVar2 = (uint *)(param_1 + 8);
  if (*puVar2 == param_3 && *(uint *)(param_1 + 0xc) == param_3) {
    DataMemoryBarrier(0xb);
    do {
      bVar10 = (bool)hasExclusiveAccess(puVar2);
      if (bVar10) {
        *puVar2 = param_3 + 0x80;
        *(uint *)(param_1 + 0xc) = param_3 + 0x80;
        iVar1 = *(int *)(param_1 + 0x14);
        iVar3 = 0;
        iVar5 = *(int *)(iVar1 + (param_3 & 0xff) * 4);
        uVar4 = 1;
        iVar7 = iVar5;
        do {
          uVar8 = param_3 + uVar4;
          bVar10 = 0xfffffffe < uVar4;
          uVar4 = uVar4 + 1;
          iVar3 = iVar3 + (uint)bVar10;
          iVar6 = *(int *)(iVar1 + (uVar8 & 0xff) * 4);
          *(int *)(iVar7 + 4) = iVar6;
          iVar7 = iVar6;
        } while (uVar4 != 0x80 || iVar3 != 0);
        *(undefined4 *)(iVar6 + 4) = param_2;
        pcVar9 = (char *)(param_5 + 0x94);
        if (*pcVar9 == '\0') {
          bVar10 = (bool)hasExclusiveAccess(pcVar9);
          if (!bVar10) goto LAB_019e5b8c;
          *pcVar9 = '\x01';
          DataMemoryBarrier(0xb);
        }
        else {
          ClearExclusiveLocal();
LAB_019e5b8c:
          FUN_0164fba8(pcVar9);
        }
        FUN_0165098c(pcVar9);
        if (*(char *)(param_5 + 0xac) == '\0') {
          if (*(int *)(param_5 + 0xa8) == 0) {
            *(int *)(param_5 + 0xa4) = iVar5;
          }
          else {
            *(int *)(*(int *)(param_5 + 0xa8) + 4) = iVar5;
          }
          *(undefined4 *)(param_5 + 0xa8) = param_2;
          DataMemoryBarrier(0xb);
          *(int *)(param_5 + 0x90) = *(int *)(param_5 + 0x90) + 0x81;
          FUN_01650a90(pcVar9);
          if (*pcVar9 == '\x01') {
            DataMemoryBarrier(0xb);
            do {
              bVar10 = (bool)hasExclusiveAccess(pcVar9);
              if (bVar10) {
                *pcVar9 = '\0';
                return 0;
              }
            } while (*pcVar9 == '\x01');
          }
          ClearExclusiveLocal();
          FUN_0164f86c(pcVar9);
          return 0;
        }
        FUN_01650a90(pcVar9);
        if (*pcVar9 == '\x01') {
          DataMemoryBarrier(0xb);
          do {
            bVar10 = (bool)hasExclusiveAccess(pcVar9);
            if (bVar10) {
              *pcVar9 = '\0';
              goto LAB_019e5b00;
            }
          } while (*pcVar9 == '\x01');
        }
        ClearExclusiveLocal();
        FUN_0164f86c(pcVar9);
LAB_019e5b00:
        do {
          iVar7 = *(int *)(iVar5 + 4);
          FUN_019d8d64(iVar5);
          iVar5 = iVar7;
        } while (iVar7 != 0);
        return 0;
      }
    } while (*puVar2 == param_3 && *(uint *)(param_1 + 0xc) == param_3);
  }
  ClearExclusiveLocal();
  return param_2;
}

