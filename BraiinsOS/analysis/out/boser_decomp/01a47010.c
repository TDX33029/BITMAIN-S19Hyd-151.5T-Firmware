// FUN_01a47010 @ 01a47010 size=428 calls_out=4 calls_in=4
// strings: 

void FUN_01a47010(int *param_1,int param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int local_54;
  undefined1 auStack_50 [20];
  int local_3c;
  undefined1 local_38;
  undefined1 auStack_37 [19];
  
  iVar3 = *(int *)(param_2 + 0xc);
  pbVar2 = *(byte **)(param_2 + 8);
  if (iVar3 == 0) {
LAB_01a470e0:
    uVar9 = 0;
    uVar8 = 4;
    uVar7 = 0;
    *(byte **)(param_2 + 8) = pbVar2;
    uVar6 = 1;
    *(int *)(param_2 + 0xc) = iVar3;
    FUN_01a4f43c(&local_3c);
    if (local_3c == 3) {
      local_3c = 3;
      local_38 = 10;
    }
    else {
      FUN_01bed4e2(auStack_50,auStack_37,0x13);
      if (local_3c == 1) {
        FUN_0134aee0(uVar7,4,4,0xc,uVar6,uVar7,uVar8,uVar9);
        FUN_012d40d0(0);
        *(undefined1 *)(param_1 + 1) = local_38;
        FUN_01bed4e2((int)param_1 + 5,auStack_50,0x13);
        *param_1 = 1;
        return;
      }
    }
    *(undefined1 *)(param_1 + 1) = local_38;
    *param_1 = local_3c;
    FUN_01bed4e2((int)param_1 + 5,auStack_50,0x13);
    FUN_0134aee0(0,4,4,0xc,uVar6,uVar7,uVar8,uVar9);
    FUN_012d40d0(0,local_54);
  }
  else {
    bVar1 = *pbVar2;
    *(byte **)(param_2 + 8) = pbVar2 + 1;
    *(int *)(param_2 + 0xc) = iVar3 + -1;
    if (bVar1 != 9) {
      uVar4 = bVar1 - 0x20;
      bVar5 = 6 < uVar4;
      if (bVar5) {
        uVar4 = bVar1 - 0x28;
      }
      if ((bVar5 && 0x56 < uVar4) && (-1 < (char)bVar1)) {
        *(byte **)(param_2 + 8) = pbVar2;
        *(int *)(param_2 + 0xc) = iVar3;
        goto LAB_01a470e0;
      }
    }
    *param_1 = 3;
    param_1[1] = (uint)bVar1;
    param_1[2] = 4;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = local_54;
  }
  return;
}

