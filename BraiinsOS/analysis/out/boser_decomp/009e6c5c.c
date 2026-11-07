// FUN_009e6c5c @ 009e6c5c size=336 calls_out=0 calls_in=1
// strings: 

void FUN_009e6c5c(undefined4 *param_1,int *param_2,int *param_3)

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
  int iVar10;
  undefined4 uVar11;
  int *piVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  
  iVar10 = *param_2;
  DataMemoryBarrier(0xb);
  if (*(char *)(iVar10 + 0x40) == '\0') {
    uVar14 = (*(code *)**(undefined4 **)*param_3)(((undefined4 *)*param_3)[1]);
    pcVar5 = (char *)(iVar10 + 0x30);
    DataMemoryBarrier(0xb);
    do {
      cVar1 = *pcVar5;
      bVar3 = (bool)hasExclusiveAccess(pcVar5);
    } while (!bVar3);
    *pcVar5 = '\x01';
    piVar12 = (int *)(iVar10 + 0x28);
    if (cVar1 != '\0') {
      piVar12 = (int *)0x0;
    }
    DataMemoryBarrier(0xb);
    if (cVar1 == '\0') {
      iVar6 = *(int *)(iVar10 + 0x28);
      if (iVar6 != 0) {
        (**(code **)(iVar6 + 0xc))(piVar12[1]);
      }
      *(undefined8 *)(iVar10 + 0x28) = uVar14;
      DataMemoryBarrier(0xb);
      *(undefined1 *)(piVar12 + 2) = 0;
      DataMemoryBarrier(0xb);
      DataMemoryBarrier(0xb);
      if (*(char *)(iVar10 + 0x40) == '\0') {
        uVar4 = 3;
        goto LAB_009e6d6c;
      }
    }
    else {
      (**(code **)((int)uVar14 + 0xc))((int)((ulonglong)uVar14 >> 0x20));
    }
  }
  pcVar5 = (char *)(iVar10 + 0x24);
  DataMemoryBarrier(0xb);
  do {
    cVar1 = *pcVar5;
    bVar3 = (bool)hasExclusiveAccess(pcVar5);
  } while (!bVar3);
  *pcVar5 = '\x01';
  DataMemoryBarrier(0xb);
  if (cVar1 == '\0') {
    cVar1 = *(char *)(iVar10 + 0x21);
    uVar2 = *(undefined2 *)(iVar10 + 0x22);
    *(undefined1 *)(iVar10 + 0x21) = 2;
    if (cVar1 != '\x02') {
      uVar7 = *(undefined4 *)(iVar10 + 0xc);
      uVar8 = *(undefined4 *)(iVar10 + 0x10);
      uVar9 = *(undefined4 *)(iVar10 + 0x14);
      uVar11 = *(undefined4 *)(iVar10 + 0x18);
      uVar13 = *(undefined4 *)(iVar10 + 0x1c);
      *param_1 = *(undefined4 *)(iVar10 + 8);
      param_1[1] = uVar7;
      param_1[2] = uVar8;
      param_1[3] = uVar9;
      param_1[4] = uVar11;
      param_1[5] = uVar13;
      *(undefined1 *)(param_1 + 6) = *(undefined1 *)(iVar10 + 0x20);
      *(undefined2 *)((int)param_1 + 0x1a) = uVar2;
      *(char *)((int)param_1 + 0x19) = cVar1;
      DataMemoryBarrier(0xb);
      *(undefined1 *)(iVar10 + 0x24) = 0;
      DataMemoryBarrier(0xb);
      return;
    }
    DataMemoryBarrier(0xb);
    *(undefined1 *)(iVar10 + 0x24) = 0;
    DataMemoryBarrier(0xb);
  }
  uVar4 = 2;
LAB_009e6d6c:
  *(undefined1 *)((int)param_1 + 0x19) = uVar4;
  return;
}

