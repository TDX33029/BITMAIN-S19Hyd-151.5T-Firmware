// FUN_016caa44 @ 016caa44 size=140 calls_out=3 calls_in=1
// strings: 

void FUN_016caa44(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 local_40;
  undefined4 uStack_3c;
  int iStack_38;
  int local_34;
  undefined8 local_30;
  
  uVar1 = *(undefined4 *)(param_2 + 4);
  uVar2 = *(undefined4 *)(param_2 + 8);
  iVar3 = *(int *)(param_2 + 0x10);
  iVar4 = *(int *)(param_2 + 0x14);
  local_30 = FUN_016ca3f0(param_2);
  local_34 = iVar3 + iVar4 * 8;
  local_40 = uVar1;
  uStack_3c = uVar2;
  iStack_38 = iVar3;
  uVar5 = FUN_016ca380(&local_40);
  iVar3 = (int)uVar5;
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0cc(&DAT_01d09858);
  }
  param_1[6] = local_40;
  param_1[7] = uStack_3c;
  param_1[8] = iStack_38;
  param_1[9] = local_34;
  *(undefined8 *)(param_1 + 10) = local_30;
  param_1[0xc] = iVar3;
  param_1[0xd] = iVar3 + (int)((ulonglong)uVar5 >> 0x20) * 8;
  *param_1 = 0;
  param_1[1] = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 4;
  param_1[5] = 0;
  return;
}

