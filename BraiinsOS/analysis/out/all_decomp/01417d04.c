// FUN_01417d04 @ 01417d04 size=960 calls_out=10 calls_in=0
// strings: `Ready` polled after completionConnTask Future polled twice

void FUN_01417d04(undefined4 *param_1,int *param_2,undefined4 param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  int local_158;
  int local_154;
  int local_150 [15];
  undefined2 local_114;
  undefined4 local_c0;
  int *local_bc;
  int *local_b8;
  
  while( true ) {
    while ((char)param_2[100] != '\0') {
      if ((char)param_2[100] == '\x01') {
        cVar1 = *(char *)((int)param_2 + 0x191);
        *(undefined1 *)((int)param_2 + 0x191) = 0;
        if (cVar1 == '\0') {
                    /* WARNING: Subroutine does not return */
          FUN_00fb74b8("`Ready` polled after completionConnTask Future polled twice",0x1f,
                       &DAT_018a6c40);
        }
        *(undefined1 *)(param_2 + 100) = 2;
      }
      else {
        iVar3 = *param_2;
        iVar4 = param_2[1];
        *param_2 = 3;
        param_2[1] = 0;
        if (iVar3 == 3 && iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00fb74b8(&DAT_005662b0,0x20,&DAT_018a6b50);
        }
        local_158 = iVar3;
        local_154 = iVar4;
        FUN_016dd1aa(local_150,param_2 + 2,0x90);
        FUN_0143e01c(&local_c0,param_2 + 0x5c,&local_158);
        if (*param_2 != 3 || param_2[1] != 0) {
          FUN_01418304(param_2);
        }
        FUN_016dd1aa(param_2,&local_c0,0x98);
        FUN_016dd1aa(&local_c0,&local_158,0x98);
        iVar3 = FUN_01408efc(param_2 + 0x26,&local_c0);
        if ((char)param_2[100] == '\0') {
          puVar9 = (undefined4 *)param_2[0x66];
          iVar4 = param_2[0x65];
          pcVar5 = (code *)*puVar9;
          if (pcVar5 != (code *)0x0) {
            (*pcVar5)(iVar4);
          }
          if (puVar9[1] != 0) {
            thunk_FUN_016d3fb4(iVar4);
          }
        }
        *(undefined1 *)(param_2 + 100) = 0;
        param_2[0x65] = iVar3;
        param_2[0x66] = (int)&DAT_018a36ac;
      }
    }
    (**(code **)(param_2[0x66] + 0xc))(&local_c0,param_2[0x65],param_3);
    if (local_c0 == 4 && local_bc == (int *)0x0) {
      *param_1 = 4;
      param_1[1] = 0;
      return;
    }
    FUN_016dd1aa(&local_158,&local_c0,0x68);
    if (*param_2 == 3 && param_2[1] == 0) goto LAB_01418064;
    iVar3 = param_2[0x5c];
    if (iVar3 != 2) break;
    local_c0 = CONCAT22(local_114,(ushort)(local_158 == 3 && local_154 == 0));
    local_bc = local_150;
    local_b8 = param_2;
    iVar3 = (**(code **)(param_2[0x5e] + 0xc))
                      (param_2[0x5d] + (*(int *)(param_2[0x5e] + 8) - 1U & 0xfffffff8) + 8,&local_c0
                      );
    if (iVar3 == 0) goto LAB_0141802c;
    iVar3 = param_2[0x5f];
    if (iVar3 != 0) {
      iVar10 = *(int *)(iVar3 + 0x4c);
      FUN_0168fe7c(iVar3 + 8);
      DataMemoryBarrier(0xb);
      iVar4 = *(int *)(iVar3 + 0x1c);
      if (iVar4 == 0) {
        iVar6 = 0;
      }
      else {
        piVar7 = *(int **)(iVar3 + 0x18);
        iVar6 = 0;
        do {
          iVar8 = *piVar7;
          piVar7 = piVar7 + 1;
          iVar4 = iVar4 + -1;
          iVar6 = SignedSaturate(iVar6 + iVar8,0x20);
          SignedDoesSaturate(iVar6,0x20);
          DataMemoryBarrier(0xb);
        } while (iVar4 != 0);
      }
      iVar4 = SignedSaturate(*(int *)(iVar3 + 0x44) + iVar6,0x20);
      SignedDoesSaturate(iVar4,0x20);
      iVar4 = SignedSaturate(iVar4 + *(int *)(iVar3 + 0x40),0x20);
      SignedDoesSaturate(iVar4,0x20);
      if (iVar4 < iVar10) goto LAB_01418064;
      piVar7 = (int *)(iVar3 + 0x44);
      DataMemoryBarrier(0xb);
      do {
        bVar2 = (bool)hasExclusiveAccess(piVar7);
      } while (!bVar2);
      *piVar7 = *piVar7 - iVar10;
      DataMemoryBarrier(0xb);
    }
    param_2[0x61] = param_2[0x61] + 1;
    if ((char)param_2[100] == '\0') {
      puVar9 = (undefined4 *)param_2[0x66];
      iVar3 = param_2[0x65];
      pcVar5 = (code *)*puVar9;
      if (pcVar5 != (code *)0x0) {
        (*pcVar5)(iVar3);
      }
      if (puVar9[1] != 0) {
        thunk_FUN_016d3fb4(iVar3);
      }
    }
    *(undefined2 *)(param_2 + 100) = 0x101;
    FUN_01418180(&local_158);
  }
  if (((iVar3 != 0) && (local_158 == 3 && local_154 == 0)) && (*(int *)(local_150[0] + 0x5c) != 0))
  {
    (**(code **)(*(int *)(local_150[0] + 0x60) + 0x18))();
  }
LAB_0141802c:
  iVar3 = param_2[0x5f];
  if (iVar3 != 0) {
    iVar4 = *(int *)(iVar3 + 0x48);
    FUN_0168fe7c(iVar3 + 8);
    piVar7 = (int *)(iVar3 + 0x44);
    DataMemoryBarrier(0xb);
    do {
      bVar2 = (bool)hasExclusiveAccess(piVar7);
    } while (!bVar2);
    *piVar7 = *piVar7 + iVar4;
    DataMemoryBarrier(0xb);
  }
LAB_01418064:
  FUN_016dd1aa(param_1,&local_158,0x68);
  return;
}

