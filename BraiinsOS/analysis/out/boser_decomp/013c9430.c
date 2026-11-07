// FUN_013c9430 @ 013c9430 size=236 calls_out=3 calls_in=3
// strings: 

void FUN_013c9430(short *param_1,short *param_2,int param_3)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  short sVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  int local_28;
  int local_24;
  
  if (*(short *)(param_3 + 0x24) == 1) {
    uVar2 = (uint)*(byte *)(param_3 + 0x30);
  }
  else {
    uVar2 = (uint)*(ushort *)(param_3 + 0x26);
  }
  local_24 = (uVar2 & 0xff) << 8;
  local_28 = param_3;
  do {
    uVar10 = FUN_013c7a64(&local_28);
    if ((int)uVar10 == 0) {
      sVar8 = *param_2;
      iVar3 = *(int *)(param_2 + 2);
      *(undefined1 *)(param_2 + 0x20) = *(undefined1 *)(param_3 + 0x40);
      if (sVar8 == 2) goto LAB_013c94bc;
      sVar1 = param_2[1];
      uVar9 = *(undefined4 *)(param_2 + 0x20);
      uVar4 = *(undefined4 *)(param_2 + 6);
      uVar5 = *(undefined4 *)(param_2 + 8);
      uVar6 = *(undefined4 *)(param_2 + 10);
      *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
      *(undefined4 *)(param_1 + 6) = uVar4;
      *(undefined4 *)(param_1 + 8) = uVar5;
      *(undefined4 *)(param_1 + 10) = uVar6;
      uVar4 = *(undefined4 *)(param_2 + 0xe);
      uVar5 = *(undefined4 *)(param_2 + 0x10);
      uVar6 = *(undefined4 *)(param_2 + 0x12);
      uVar7 = *(undefined4 *)(param_2 + 0x14);
      *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
      *(undefined4 *)(param_1 + 0xe) = uVar4;
      *(undefined4 *)(param_1 + 0x10) = uVar5;
      *(undefined4 *)(param_1 + 0x12) = uVar6;
      *(undefined4 *)(param_1 + 0x14) = uVar7;
      uVar4 = *(undefined4 *)(param_2 + 0x18);
      uVar5 = *(undefined4 *)(param_2 + 0x1a);
      uVar6 = *(undefined4 *)(param_2 + 0x1c);
      uVar7 = *(undefined4 *)(param_2 + 0x1e);
      *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)(param_2 + 0x16);
      *(undefined4 *)(param_1 + 0x18) = uVar4;
      *(undefined4 *)(param_1 + 0x1a) = uVar5;
      *(undefined4 *)(param_1 + 0x1c) = uVar6;
      *(undefined4 *)(param_1 + 0x1e) = uVar7;
      *(char *)((int)param_1 + 0x43) = (char)((uint)uVar9 >> 0x18);
      *(short *)((int)param_1 + 0x41) = (short)((uint)uVar9 >> 8);
      *(undefined1 *)(param_1 + 0x20) = 1;
      *(int *)(param_1 + 2) = iVar3;
      param_1[1] = sVar1;
      goto LAB_013c9510;
    }
    iVar3 = FUN_013c7f34(param_2,(int)uVar10,(int)((ulonglong)uVar10 >> 0x20));
  } while (iVar3 == 0);
  FUN_0079217c(param_2);
LAB_013c94bc:
  *(int *)(param_1 + 2) = iVar3;
  sVar8 = 2;
LAB_013c9510:
  *param_1 = sVar8;
  return;
}

