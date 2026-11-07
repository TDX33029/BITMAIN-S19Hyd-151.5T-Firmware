// FUN_018f2938 @ 018f2938 size=232 calls_out=4 calls_in=1
// strings: 

void FUN_018f2938(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  undefined4 local_34;
  int local_30;
  int local_2c;
  
  *(undefined2 *)(param_1 + 0x252) = 0x101;
  if (param_2 != 0) {
    while (*(int *)(param_2 + 0x14) != 0) {
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + -1;
      uVar5 = *(int *)(param_2 + 0x10) + 1;
      piVar4 = (int *)(*(int *)(param_2 + 0xc) + *(int *)(param_2 + 0x10) * 0xc);
      iVar9 = *piVar4;
      uVar1 = uVar5 - *(uint *)(param_2 + 8);
      if (uVar5 < *(uint *)(param_2 + 8)) {
        uVar1 = uVar5;
      }
      iVar7 = piVar4[1];
      iVar6 = piVar4[2];
      *(uint *)(param_2 + 0x10) = uVar1;
      if (iVar9 == -0x80000000) {
        return;
      }
      uVar2 = *(undefined4 *)(param_2 + 0x18);
      *(undefined4 *)(param_2 + 0x18) = 0;
      uVar10 = FUN_01935674(0,uVar2,iVar6,&DAT_01d2fe30);
      iVar3 = (int)((ulonglong)uVar10 >> 0x20);
      iVar8 = (int)uVar10;
      if (iVar3 == iVar8) {
LAB_018f29e8:
        iVar8 = iVar8 + (iVar6 - iVar3);
      }
      else if (iVar6 != iVar3) {
        FUN_01bed864(iVar7 + iVar8,iVar7 + iVar3,iVar6 - iVar3);
        goto LAB_018f29e8;
      }
      local_34 = 0;
      local_30 = iVar7;
      local_2c = iVar8;
      FUN_018f2a40(param_1,&local_34,1);
      FUN_0134bd64(iVar9,iVar7);
    }
  }
  return;
}

