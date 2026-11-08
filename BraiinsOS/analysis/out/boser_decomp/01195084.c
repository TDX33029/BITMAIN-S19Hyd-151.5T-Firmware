// FUN_01195084 @ 01195084 size=424 calls_out=3 calls_in=3
// strings: 

void FUN_01195084(char *param_1,int *param_2,int *param_3)

{
  bool bVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  char cVar8;
  uint uVar9;
  undefined1 auStack_40 [40];
  
  iVar2 = *param_2;
  uVar9 = param_2[2];
  uVar5 = *(uint *)(iVar2 + 0x280);
  while (uVar5 != (uVar9 & 0xfffffff0)) {
    iVar2 = *(int *)(iVar2 + 0x284);
    DataMemoryBarrier(0xb);
    if (iVar2 == 0) {
      *param_1 = '\x06';
      return;
    }
    *param_2 = iVar2;
    HintYield();
    uVar5 = *(uint *)(iVar2 + 0x280);
  }
  iVar4 = param_2[1];
  if (iVar4 != iVar2) {
    do {
      DataMemoryBarrier(0xb);
      if ((*(uint *)(iVar4 + 0x288) & 0x10000) == 0) break;
      uVar9 = param_2[2];
      if (uVar9 < *(uint *)(iVar4 + 0x28c)) goto LAB_011951a4;
      if (*(int *)(iVar4 + 0x284) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01d2e16c);
      }
      iVar2 = 0;
      param_2[1] = *(int *)(iVar4 + 0x284);
      *(undefined4 *)(iVar4 + 0x280) = 0;
      *(undefined4 *)(iVar4 + 0x284) = 0;
      *(undefined4 *)(iVar4 + 0x288) = 0;
      iVar6 = *param_3;
      DataMemoryBarrier(0xb);
      do {
        if (iVar2 == 3) {
          thunk_FUN_01be4678(iVar4);
          break;
        }
        *(int *)(iVar4 + 0x280) = *(int *)(iVar6 + 0x280) + 0x10;
        piVar7 = (int *)(iVar6 + 0x284);
        iVar6 = *piVar7;
        if (iVar6 == 0) {
          DataMemoryBarrier(0xb);
          do {
            bVar1 = (bool)hasExclusiveAccess(piVar7);
            if (bVar1) {
              *piVar7 = iVar4;
              bVar1 = true;
              goto LAB_0119516c;
            }
            iVar6 = *piVar7;
          } while (iVar6 == 0);
        }
        bVar1 = false;
        ClearExclusiveLocal();
LAB_0119516c:
        iVar2 = iVar2 + 1;
        DataMemoryBarrier(0xb);
      } while (!bVar1);
      HintYield();
      iVar2 = *param_2;
      iVar4 = param_2[1];
    } while (iVar4 != iVar2);
    uVar9 = param_2[2];
  }
LAB_011951a4:
  DataMemoryBarrier(0xb);
  if ((*(uint *)(iVar2 + 0x288) >> (uVar9 & 0xf) & 1) == 0) {
    cVar8 = '\x05';
    if ((*(uint *)(iVar2 + 0x288) & 0x20000) == 0) {
      cVar8 = '\x06';
    }
  }
  else {
    pcVar3 = (char *)(iVar2 + (uVar9 & 0xf) * 0x28);
    cVar8 = *pcVar3;
    FUN_01bed4e2(auStack_40,pcVar3 + 1,0x27);
  }
  *param_1 = cVar8;
  if (1 < (byte)(cVar8 - 5U)) {
    param_2[2] = uVar9 + 1;
  }
  FUN_01bed4e2(param_1 + 1,auStack_40,0x27);
  return;
}

