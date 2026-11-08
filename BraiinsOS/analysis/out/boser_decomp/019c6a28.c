// FUN_019c6a28 @ 019c6a28 size=768 calls_out=7 calls_in=1
// strings: 

void FUN_019c6a28(int *param_1,int param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  code *pcVar7;
  undefined4 *puVar8;
  int *piVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  int local_298;
  char local_294;
  undefined4 *local_290;
  undefined4 local_28c;
  undefined4 uStack_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  uint local_178 [2];
  int local_170;
  char local_16c;
  undefined2 local_16b;
  undefined1 local_169;
  undefined4 *local_168;
  undefined4 local_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  int local_150 [72];
  undefined4 local_30;
  int local_2c;
  int local_28;
  
  piVar9 = (int *)(param_2 + 0x18);
  iVar6 = param_2 + 0x10;
  if (*piVar9 == 0) {
LAB_019c6a88:
    *(undefined4 *)(param_2 + 0x18) = 0;
    if (*(char *)(param_2 + 0x3c) != '\x02') {
      puVar3 = (undefined4 *)(param_2 + 0x38);
      do {
        FUN_019bb288(local_178,puVar3);
        puVar2 = local_168;
        if ((local_178[0] & 1) == 0) {
          if (*(char *)(param_2 + 0x3c) != '\x02') {
            piVar5 = (int *)*puVar3;
            DataMemoryBarrier(0xb);
            do {
              iVar12 = *piVar5;
              bVar1 = (bool)hasExclusiveAccess(piVar5);
            } while (!bVar1);
            *piVar5 = iVar12 + -1;
            if (iVar12 == 1) {
              DataMemoryBarrier(0xb);
              FUN_019ad05c(*puVar3);
            }
          }
          *(undefined1 *)(param_2 + 0x3c) = 2;
          if (*(int *)(param_2 + 0x18) != 0) {
            FUN_019ca8d4(piVar9);
          }
          goto LAB_019c6c9c;
        }
        if (local_170 == 0) {
          iVar12 = 8;
          uVar10 = 0;
          if (local_16c == '\x03') {
            puVar8 = (undefined4 *)local_168[1];
            uVar11 = *local_168;
            pcVar7 = (code *)*puVar8;
            if (pcVar7 != (code *)0x0) {
              (*pcVar7)(uVar11);
            }
            if (puVar8[1] != 0) {
              thunk_FUN_01be4678(uVar11);
            }
            thunk_FUN_01be4678(puVar2);
            iVar4 = 0;
          }
          else {
            iVar4 = 0;
          }
        }
        else {
          local_298 = local_170;
          local_294 = local_16c;
          *(undefined2 *)((uint)&local_298 | 5) = local_16b;
          *(undefined1 *)((undefined2 *)((uint)&local_298 | 5) + 1) = local_169;
          local_290 = local_168;
          local_28c = local_164;
          uStack_288 = uStack_160;
          uStack_284 = uStack_15c;
          uStack_280 = uStack_158;
          uStack_27c = uStack_154;
          local_28 = 0;
          local_2c = 8;
          local_30 = 0;
          FUN_019bcb90(0,&local_30,0,uStack_160,&local_298,&local_30);
          iVar4 = local_28;
          uVar10 = local_30;
          iVar12 = local_2c;
        }
        if (*piVar9 != 0) {
          FUN_019ca8d4(piVar9);
        }
        *(int *)(param_2 + 0x18) = iVar12;
        *(int *)(param_2 + 0x1c) = iVar12;
        *(undefined4 *)(param_2 + 0x20) = uVar10;
        *(int *)(param_2 + 0x24) = iVar12 + iVar4 * 0x38;
        FUN_019c9f0c(local_150,piVar9,iVar6,param_2);
      } while (local_150[0] == 2);
      FUN_01bed4e2(&local_298,(uint)local_150 | 4,0x11c);
      goto LAB_019c6d0c;
    }
LAB_019c6c9c:
    piVar9 = (int *)(param_2 + 0x28);
    *(undefined4 *)(param_2 + 0x18) = 0;
    if (*piVar9 == 0) {
LAB_019c6ce8:
      *param_1 = 2;
      *piVar9 = 0;
      return;
    }
    FUN_019c9f0c(local_150,piVar9,iVar6,param_2);
    if (local_150[0] == 2) {
      if (*piVar9 != 0) {
        FUN_019ca8d4(piVar9);
      }
      goto LAB_019c6ce8;
    }
  }
  else {
    FUN_019c9f0c(local_150,piVar9,iVar6,param_2);
    if (local_150[0] == 2) {
      if (*piVar9 != 0) {
        FUN_019ca8d4(piVar9);
      }
      goto LAB_019c6a88;
    }
  }
  FUN_01bed4e2(&local_298,(uint)local_150 | 4,0x11c);
LAB_019c6d0c:
  *param_1 = local_150[0];
  FUN_01bed4e2(param_1 + 1,&local_298,0x11c);
  return;
}

