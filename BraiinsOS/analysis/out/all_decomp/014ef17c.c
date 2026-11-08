// FUN_014ef17c @ 014ef17c size=1156 calls_out=10 calls_in=1
// strings: `Ready` polled after completionConnTask Future polled twice

void FUN_014ef17c(undefined4 *param_1,int *param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  int iVar5;
  code *pcVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  undefined8 uVar12;
  int local_158;
  int local_154;
  int local_150 [15];
  undefined2 local_114;
  undefined4 local_c0;
  int *local_bc;
  int *local_b8;
  int iStack_b4;
  
  while( true ) {
    while ((char)param_2[0x6a] != '\0') {
      if ((char)param_2[0x6a] == '\x01') {
        cVar1 = *(char *)((int)param_2 + 0x1a9);
        *(undefined1 *)((int)param_2 + 0x1a9) = 0;
        if (cVar1 == '\0') {
                    /* WARNING: Subroutine does not return */
          FUN_00fb74b8("`Ready` polled after completionConnTask Future polled twice",0x1f,
                       &DAT_018a6c40);
        }
        *(undefined1 *)(param_2 + 0x6a) = 2;
      }
      else {
        iVar2 = *param_2;
        iVar5 = param_2[1];
        *param_2 = 3;
        param_2[1] = 0;
        if (iVar2 == 3 && iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00fb74b8(&DAT_005662b0,0x20,&DAT_018a6b50);
        }
        local_158 = iVar2;
        local_154 = iVar5;
        FUN_016dd1aa(local_150,param_2 + 2,0x90);
        FUN_014ab194(&local_c0,param_2 + 0x62,&local_158);
        if (*param_2 != 3 || param_2[1] != 0) {
          FUN_014ed81c(param_2);
        }
        FUN_016dd1aa(param_2,&local_c0,0x98);
        FUN_016dd1aa(&local_c0,&local_158,0x98);
        iVar2 = FUN_0145db88(param_2 + 0x26,&local_c0);
        if ((char)param_2[0x6a] == '\0') {
          puVar8 = (undefined4 *)param_2[0x6c];
          iVar5 = param_2[0x6b];
          pcVar6 = (code *)*puVar8;
          if (pcVar6 != (code *)0x0) {
            (*pcVar6)(iVar5);
          }
          if (puVar8[1] != 0) {
            thunk_FUN_016d3fb4(iVar5);
          }
        }
        *(undefined1 *)(param_2 + 0x6a) = 0;
        param_2[0x6b] = iVar2;
        param_2[0x6c] = (int)&DAT_018a448c;
      }
    }
    (**(code **)(param_2[0x6c] + 0xc))(&local_c0,param_2[0x6b],param_3);
    if (local_c0 == 4 && local_bc == (int *)0x0) {
      *param_1 = 4;
      param_1[1] = 0;
      return;
    }
    FUN_016dd1aa(&local_158,&local_c0,0x68);
    if (*param_2 == 3 && param_2[1] == 0) goto LAB_014ef5a0;
    iVar2 = param_2[0x62];
    if (iVar2 == 1) break;
    if (iVar2 != 2) goto LAB_014ef568;
    local_c0 = CONCAT22(local_114,(ushort)(local_158 == 3 && local_154 == 0));
    local_bc = local_150;
    local_b8 = param_2;
    iVar2 = (**(code **)(param_2[100] + 0xc))
                      (param_2[99] + (*(int *)(param_2[100] + 8) - 1U & 0xfffffff8) + 8,&local_c0);
    if (iVar2 == 0) goto LAB_014ef568;
LAB_014ef478:
    iVar2 = param_2[0x65];
    if (iVar2 != 0) {
      iVar10 = *(int *)(iVar2 + 0x4c);
      FUN_0168fe7c(iVar2 + 8);
      DataMemoryBarrier(0xb);
      iVar5 = *(int *)(iVar2 + 0x1c);
      if (iVar5 == 0) {
        iVar7 = 0;
      }
      else {
        piVar4 = *(int **)(iVar2 + 0x18);
        iVar7 = 0;
        do {
          iVar9 = *piVar4;
          piVar4 = piVar4 + 1;
          iVar5 = iVar5 + -1;
          iVar7 = SignedSaturate(iVar7 + iVar9,0x20);
          SignedDoesSaturate(iVar7,0x20);
          DataMemoryBarrier(0xb);
        } while (iVar5 != 0);
      }
      iVar5 = SignedSaturate(*(int *)(iVar2 + 0x44) + iVar7,0x20);
      SignedDoesSaturate(iVar5,0x20);
      iVar5 = SignedSaturate(iVar5 + *(int *)(iVar2 + 0x40),0x20);
      SignedDoesSaturate(iVar5,0x20);
      if (iVar5 < iVar10) goto LAB_014ef5a0;
      piVar4 = (int *)(iVar2 + 0x44);
      DataMemoryBarrier(0xb);
      do {
        bVar11 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar11);
      *piVar4 = *piVar4 - iVar10;
      DataMemoryBarrier(0xb);
    }
    param_2[0x67] = param_2[0x67] + 1;
    if ((char)param_2[0x6a] == '\0') {
      puVar8 = (undefined4 *)param_2[0x6c];
      iVar2 = param_2[0x6b];
      pcVar6 = (code *)*puVar8;
      if (pcVar6 != (code *)0x0) {
        (*pcVar6)(iVar2);
      }
      if (puVar8[1] != 0) {
        thunk_FUN_016d3fb4(iVar2);
      }
    }
    *(undefined2 *)(param_2 + 0x6a) = 0x101;
    FUN_014ef6bc(&local_158);
  }
  if ((local_158 == 3 && local_154 == 0) && (*(int *)(local_150[0] + 0x5c) != 0)) {
    uVar12 = (**(code **)(*(int *)(local_150[0] + 0x60) + 0x18))();
    if ((int)uVar12 != 0) {
      uVar12 = (**(code **)((int)((ulonglong)uVar12 >> 0x20) + 0x18))();
      pcVar3 = (char *)uVar12;
      if ((pcVar3 != (char *)0x0) &&
         ((**(code **)((int)((ulonglong)uVar12 >> 0x20) + 0x1c))(&local_c0,pcVar3),
         (local_c0 == 0xb8558d8 && local_b8 == (int *)0x7f7d8494) &&
         (local_bc == (int *)0x291847ab && iStack_b4 == -0x5d43dcd7))) {
        cVar1 = *pcVar3;
        if (cVar1 == '\0') {
          if (pcVar3[1] == '\x02') {
            iVar2 = 7;
            iVar5 = 8;
            goto LAB_014ef46c;
          }
        }
        else {
          bVar11 = cVar1 == '\x01';
          if (bVar11) {
            cVar1 = pcVar3[1];
          }
          if (bVar11 && cVar1 == '\x02') {
            iVar2 = 0;
            iVar5 = 4;
LAB_014ef46c:
            if (*(int *)(pcVar3 + iVar5) == iVar2) goto LAB_014ef478;
          }
        }
      }
    }
  }
LAB_014ef568:
  iVar2 = param_2[0x65];
  if (iVar2 != 0) {
    iVar5 = *(int *)(iVar2 + 0x48);
    FUN_0168fe7c(iVar2 + 8);
    piVar4 = (int *)(iVar2 + 0x44);
    DataMemoryBarrier(0xb);
    do {
      bVar11 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar11);
    *piVar4 = *piVar4 + iVar5;
    DataMemoryBarrier(0xb);
  }
LAB_014ef5a0:
  FUN_016dd1aa(param_1,&local_158,0x68);
  return;
}

