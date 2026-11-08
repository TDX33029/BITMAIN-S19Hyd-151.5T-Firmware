// FUN_01444714 @ 01444714 size=488 calls_out=7 calls_in=3
// strings: 

void FUN_01444714(int param_1,int *param_2)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  undefined8 uVar9;
  int local_28;
  int *local_24;
  int *local_20;
  undefined1 local_1c;
  char local_1b;
  
  cVar2 = *(char *)((int)param_2 + 0xd);
  iVar5 = param_2[3];
  if (*param_2 == 0) {
    local_28 = 0;
    local_24 = param_2;
  }
  else {
    uVar9 = (**(code **)(param_2[1] + 0xc))();
    local_28 = (int)uVar9;
    local_24 = (int *)((ulonglong)uVar9 >> 0x20);
  }
  local_20 = (int *)param_2[2];
  do {
    iVar6 = *local_20;
    bVar3 = (bool)hasExclusiveAccess(local_20);
  } while (!bVar3);
  *local_20 = iVar6 + 1;
  if (iVar6 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x14448f8);
    (*pcVar1)();
  }
  iVar6 = *(int *)(param_1 + 8);
  piVar7 = (int *)(iVar6 + 0x98);
  local_1c = (char)iVar5;
  local_1b = cVar2;
  if (*piVar7 == 0) {
    bVar3 = (bool)hasExclusiveAccess(piVar7);
    if (bVar3) {
      *piVar7 = 8;
      DataMemoryBarrier(0xb);
      goto LAB_014447b0;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  FUN_0164d8d8(piVar7);
LAB_014447b0:
  FUN_0165098c(piVar7);
  FUN_0165098c((uint)piVar7 | 1);
  iVar5 = 0;
  do {
    iVar8 = (&local_28)[iVar5];
    (&local_28)[iVar5] = *(int *)(iVar6 + 0x9c + iVar5 * 4);
    *(int *)(iVar6 + 0x9c + iVar5 * 4) = iVar8;
    iVar5 = iVar5 + 1;
  } while (iVar5 != 4);
  piVar4 = (int *)(iVar6 + 0xac);
  DataMemoryBarrier(0xb);
  do {
    bVar3 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar3);
  *piVar4 = *piVar4 + 2;
  FUN_01650a90(piVar7);
  FUN_01650a90((uint)piVar7 | 1);
  if (*piVar7 == 8) {
    DataMemoryBarrier(0xb);
    do {
      bVar3 = (bool)hasExclusiveAccess(piVar7);
      if (bVar3) {
        *piVar7 = 0;
        goto LAB_01444850;
      }
    } while (*piVar7 == 8);
  }
  ClearExclusiveLocal();
  FUN_0164d408(piVar7);
LAB_01444850:
  iVar5 = 0;
  do {
    FUN_019e03e8(iVar6 + 8 + iVar5);
    piVar4 = local_20;
    piVar7 = local_24;
    iVar8 = local_28;
    iVar5 = iVar5 + 0x10;
  } while (iVar5 != 0x80);
  if (local_1b != '\x02') {
    if (local_28 != 0) {
      if ((code *)*local_24 != (code *)0x0) {
        (*(code *)*local_24)(local_28);
      }
      if (piVar7[1] != 0) {
        thunk_FUN_01be4678(iVar8);
      }
    }
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar4;
      bVar3 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar3);
    *piVar4 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01a38efc(piVar4);
      return;
    }
  }
  return;
}

