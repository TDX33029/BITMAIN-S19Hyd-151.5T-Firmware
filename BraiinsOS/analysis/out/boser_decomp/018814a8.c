// FUN_018814a8 @ 018814a8 size=336 calls_out=0 calls_in=2
// strings: 

void FUN_018814a8(undefined4 *param_1,undefined4 *param_2,int *param_3)

{
  char cVar1;
  undefined2 uVar2;
  bool bVar3;
  undefined1 uVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int *piVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  
  DataMemoryBarrier(0xb);
  if (*(char *)(param_2 + 0xe) == '\0') {
    uVar13 = (*(code *)**(undefined4 **)*param_3)(((undefined4 *)*param_3)[1]);
    pcVar5 = (char *)(param_2 + 10);
    DataMemoryBarrier(0xb);
    do {
      cVar1 = *pcVar5;
      bVar3 = (bool)hasExclusiveAccess(pcVar5);
    } while (!bVar3);
    *pcVar5 = '\x01';
    piVar11 = param_2 + 8;
    if (cVar1 != '\0') {
      piVar11 = (int *)0x0;
    }
    DataMemoryBarrier(0xb);
    if (cVar1 == '\0') {
      iVar6 = param_2[8];
      if (iVar6 != 0) {
        (**(code **)(iVar6 + 0xc))(piVar11[1]);
      }
      *(undefined8 *)(param_2 + 8) = uVar13;
      DataMemoryBarrier(0xb);
      *(undefined1 *)(piVar11 + 2) = 0;
      DataMemoryBarrier(0xb);
      DataMemoryBarrier(0xb);
      if (*(char *)(param_2 + 0xe) == '\0') {
        uVar4 = 3;
        goto LAB_018815b4;
      }
    }
    else {
      (**(code **)((int)uVar13 + 0xc))((int)((ulonglong)uVar13 >> 0x20));
    }
  }
  pcVar5 = (char *)(param_2 + 7);
  DataMemoryBarrier(0xb);
  do {
    cVar1 = *pcVar5;
    bVar3 = (bool)hasExclusiveAccess(pcVar5);
  } while (!bVar3);
  *pcVar5 = '\x01';
  DataMemoryBarrier(0xb);
  if (cVar1 == '\0') {
    cVar1 = *(char *)((int)param_2 + 0x19);
    uVar2 = *(undefined2 *)((int)param_2 + 0x1a);
    *(undefined1 *)((int)param_2 + 0x19) = 2;
    if (cVar1 != '\x02') {
      uVar7 = param_2[1];
      uVar8 = param_2[2];
      uVar9 = param_2[3];
      uVar10 = param_2[4];
      uVar12 = param_2[5];
      *param_1 = *param_2;
      param_1[1] = uVar7;
      param_1[2] = uVar8;
      param_1[3] = uVar9;
      param_1[4] = uVar10;
      param_1[5] = uVar12;
      *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
      *(undefined2 *)((int)param_1 + 0x1a) = uVar2;
      *(char *)((int)param_1 + 0x19) = cVar1;
      DataMemoryBarrier(0xb);
      *(undefined1 *)(param_2 + 7) = 0;
      DataMemoryBarrier(0xb);
      return;
    }
    DataMemoryBarrier(0xb);
    *pcVar5 = '\0';
    DataMemoryBarrier(0xb);
  }
  uVar4 = 2;
LAB_018815b4:
  *(undefined1 *)((int)param_1 + 0x19) = uVar4;
  return;
}

