// FUN_00b92048 @ 00b92048 size=96 calls_out=2 calls_in=7
// strings: 

void FUN_00b92048(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  
  uVar6 = FUN_019ec558(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if ((*(int *)(param_1 + 0x10) == 1) &&
     (*(int *)(param_1 + 0x18) != 0 || *(int *)(param_1 + 0x1c) != 0)) {
    FUN_00b91e68(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24));
  }
  iVar1 = param_2[1];
  iVar2 = param_2[2];
  iVar3 = param_2[3];
  iVar4 = param_2[4];
  iVar5 = param_2[5];
  *(int *)(param_1 + 0x10) = *param_2;
  *(int *)(param_1 + 0x14) = iVar1;
  *(int *)(param_1 + 0x18) = iVar2;
  *(int *)(param_1 + 0x1c) = iVar3;
  *(int *)(param_1 + 0x20) = iVar4;
  *(int *)(param_1 + 0x24) = iVar5;
  FUN_019ec558((int)uVar6,(int)((ulonglong)uVar6 >> 0x20));
  return;
}

