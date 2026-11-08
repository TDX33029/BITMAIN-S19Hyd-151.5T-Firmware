// FUN_01811310 @ 01811310 size=340 calls_out=0 calls_in=1
// strings: 

void FUN_01811310(undefined4 *param_1,undefined4 *param_2,int *param_3)

{
  char cVar1;
  undefined2 uVar2;
  bool bVar3;
  undefined1 uVar4;
  char *pcVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int *piVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  
  DataMemoryBarrier(0xb);
  if (*(char *)(param_2 + 0xe) == '\0') {
    uVar14 = (*(code *)**(undefined4 **)*param_3)(((undefined4 *)*param_3)[1]);
    pcVar5 = (char *)(param_2 + 10);
    DataMemoryBarrier(0xb);
    do {
      cVar1 = *pcVar5;
      bVar3 = (bool)hasExclusiveAccess(pcVar5);
    } while (!bVar3);
    *pcVar5 = '\x01';
    piVar12 = param_2 + 8;
    if (cVar1 != '\0') {
      piVar12 = (int *)0x0;
    }
    DataMemoryBarrier(0xb);
    if (cVar1 == '\0') {
      iVar7 = param_2[8];
      if (iVar7 != 0) {
        (**(code **)(iVar7 + 0xc))(piVar12[1]);
      }
      *(undefined8 *)(param_2 + 8) = uVar14;
      DataMemoryBarrier(0xb);
      *(undefined1 *)(piVar12 + 2) = 0;
      DataMemoryBarrier(0xb);
      DataMemoryBarrier(0xb);
      if (*(char *)(param_2 + 0xe) == '\0') {
        uVar4 = 3;
        goto LAB_01811424;
      }
    }
    else {
      (**(code **)((int)uVar14 + 0xc))((int)((ulonglong)uVar14 >> 0x20));
    }
  }
  pcVar5 = (char *)(param_2 + 7);
  DataMemoryBarrier(0xb);
  do {
    cVar1 = *pcVar5;
    bVar3 = (bool)hasExclusiveAccess(pcVar5);
  } while (!bVar3);
  *pcVar5 = '\x01';
  puVar6 = param_2;
  if (cVar1 != '\0') {
    puVar6 = (undefined4 *)0x0;
  }
  DataMemoryBarrier(0xb);
  if (cVar1 == '\0') {
    cVar1 = *(char *)((int)puVar6 + 0x19);
    uVar2 = *(undefined2 *)((int)param_2 + 0x1a);
    *(undefined1 *)((int)puVar6 + 0x19) = 2;
    if (cVar1 != '\x02') {
      uVar8 = param_2[1];
      uVar9 = param_2[2];
      uVar10 = param_2[3];
      uVar11 = param_2[4];
      uVar13 = param_2[5];
      *param_1 = *param_2;
      param_1[1] = uVar8;
      param_1[2] = uVar9;
      param_1[3] = uVar10;
      param_1[4] = uVar11;
      param_1[5] = uVar13;
      *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
      *(undefined2 *)((int)param_1 + 0x1a) = uVar2;
      *(char *)((int)param_1 + 0x19) = cVar1;
      DataMemoryBarrier(0xb);
      *(undefined1 *)(puVar6 + 7) = 0;
      DataMemoryBarrier(0xb);
      return;
    }
    DataMemoryBarrier(0xb);
    *(undefined1 *)(puVar6 + 7) = 0;
    DataMemoryBarrier(0xb);
  }
  uVar4 = 2;
LAB_01811424:
  *(undefined1 *)((int)param_1 + 0x19) = uVar4;
  return;
}

