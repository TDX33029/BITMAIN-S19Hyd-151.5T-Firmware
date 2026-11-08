// FUN_015f6af4 @ 015f6af4 size=584 calls_out=8 calls_in=7
// strings: 

void FUN_015f6af4(undefined1 *param_1,uint param_2,undefined4 *param_3)

{
  bool bVar1;
  undefined1 uVar2;
  int iVar3;
  int *piVar4;
  code *pcVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined1 auStack_4c [36];
  int local_28;
  int local_24;
  
  local_28 = FUN_016de238(auStack_4c);
  if (local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_015f3600(&local_28,&DAT_00568f30,0,&DAT_018aadfc);
  }
  if (param_2 < 0x801) {
    param_2 = 0x800;
  }
  local_24 = FUN_016de268(auStack_4c,param_2);
  if (local_24 != 0) {
    if (local_24 != 0x16) {
                    /* WARNING: Subroutine does not return */
      FUN_015f3600(&local_24,&DAT_00569048,0,&DAT_018aadec);
    }
    iVar3 = FUN_016d2558(0x1e);
    iVar3 = FUN_016de268(auStack_4c,(param_2 + iVar3) - 1 & -iVar3);
    if (iVar3 != 0) {
      *param_1 = 2;
      *(undefined **)(param_1 + 4) = &DAT_018aade0;
      local_24 = FUN_016de210(auStack_4c);
      if (local_24 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_015f3600(&local_24,&DAT_00568f30,0,&DAT_018aae0c);
      }
      piVar4 = (int *)*param_3;
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar4;
        bVar1 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar1);
      *piVar4 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_015e92c0(*param_3);
      }
      uVar7 = param_3[1];
      puVar8 = (undefined4 *)param_3[2];
      pcVar5 = (code *)*puVar8;
      if (pcVar5 != (code *)0x0) {
        (*pcVar5)(uVar7);
      }
      if (puVar8[1] != 0) {
        thunk_FUN_016d3fb4(uVar7);
      }
      thunk_FUN_016d3fb4(param_3);
      return;
    }
  }
  local_24 = 0;
  iVar3 = FUN_016de5ec(&local_24,auStack_4c,FUN_015f6e38,param_3);
  if (iVar3 == 0) {
    *(int *)(param_1 + 4) = local_24;
    uVar2 = 4;
  }
  else {
    piVar4 = (int *)*param_3;
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *piVar4;
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = iVar6 + -1;
    if (iVar6 == 1) {
      DataMemoryBarrier(0xb);
      FUN_015e92c0(*param_3);
    }
    uVar7 = param_3[1];
    puVar8 = (undefined4 *)param_3[2];
    pcVar5 = (code *)*puVar8;
    if (pcVar5 != (code *)0x0) {
      (*pcVar5)(uVar7);
    }
    if (puVar8[1] != 0) {
      thunk_FUN_016d3fb4(uVar7);
    }
    thunk_FUN_016d3fb4(param_3);
    uVar2 = 0;
    *(int *)(param_1 + 4) = iVar3;
  }
  *param_1 = uVar2;
  local_24 = FUN_016de210(auStack_4c);
  if (local_24 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_015f3600(&local_24,&DAT_00568f30,0,&DAT_018aae0c);
  }
  return;
}

