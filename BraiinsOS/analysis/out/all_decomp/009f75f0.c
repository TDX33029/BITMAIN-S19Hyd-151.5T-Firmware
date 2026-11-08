// FUN_009f75f0 @ 009f75f0 size=548 calls_out=0 calls_in=0
// strings: 

ulonglong FUN_009f75f0(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  int local_38;
  int iStack_34;
  int iStack_30;
  int local_2c;
  
  iVar9 = *param_2;
  iVar5 = param_2[1];
  iVar7 = param_2[2];
  iVar4 = param_2[3];
  if (((iVar9 == -0x3f10d693 && iVar7 == -0x57e15430) &&
       (iVar5 == -0x409d6e90 && iVar4 == 0x61cf8e7c)) ||
     ((iVar9 == 0x77404f96 && iVar7 == 0x200fdcda) && (iVar5 == 0xecdde3a && iVar4 == 0x169e293e)))
  {
    return CONCAT44(param_1,1);
  }
  if ((iVar9 == 0x1032b866 && iVar7 == -0x76c200cc) && (iVar5 == 0x40b7bcd2 && iVar4 == 0x4fae36de))
  {
    puVar3 = *(undefined4 **)(param_1 + 4);
    iVar1 = *(int *)(param_1 + 8);
    iVar8 = iVar1 << 3;
    puVar6 = puVar3;
    do {
      if (iVar8 == 0) goto joined_r0x009f7758;
      local_38 = *param_2;
      iStack_34 = param_2[1];
      iStack_30 = param_2[2];
      local_2c = param_2[3];
      iVar2 = (**(code **)(puVar6[1] + 0x44))(*puVar6,&local_38);
      iVar8 = iVar8 + -8;
      puVar6 = puVar6 + 2;
    } while (iVar2 == 1);
  }
  else {
    puVar3 = *(undefined4 **)(param_1 + 4);
    iVar1 = *(int *)(param_1 + 8);
joined_r0x009f7758:
    if (iVar1 != 0) {
      puVar6 = puVar3 + iVar1 * 2;
      do {
        local_38 = *param_2;
        iStack_34 = param_2[1];
        iStack_30 = param_2[2];
        local_2c = param_2[3];
        uVar10 = (**(code **)(puVar3[1] + 0x44))(*puVar3,&local_38);
        if ((uVar10 & 1) != 0) {
          return 1;
        }
        puVar3 = puVar3 + 2;
      } while (puVar3 != puVar6);
    }
  }
  return (ulonglong)
         ((iVar9 == -0xe7e742 && iVar7 == 0x2409813b) &&
         (iVar5 == -0x4bf543c6 && iVar4 == -0x110b429a));
}

