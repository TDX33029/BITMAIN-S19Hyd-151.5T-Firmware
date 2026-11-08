// FUN_014436b4 @ 014436b4 size=336 calls_out=6 calls_in=1
// strings: 

void FUN_014436b4(int *param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  undefined8 uVar8;
  int local_58;
  int local_54;
  int local_50;
  int local_48;
  int local_44;
  int local_40;
  uint local_38;
  int local_34;
  uint local_30;
  int iStack_2c;
  
  uVar3 = param_2[7];
  bVar7 = 0x3ffffffe < uVar3;
  bVar6 = uVar3 == 0x3fffffff;
  uVar1 = uVar3 * 4;
  if (uVar3 < 0x40000000) {
    bVar7 = 0x7ffffffd < uVar1;
    bVar6 = uVar1 == 0x7ffffffe;
  }
  if (bVar7 && !bVar6) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,uVar1);
  }
  iVar2 = param_2[0xe];
  iVar4 = param_2[6];
  if (uVar1 == 0) {
    local_38 = 0;
    local_34 = 2;
  }
  else {
    local_34 = thunk_FUN_016d4a50(uVar1);
    local_38 = uVar3;
    if (local_34 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(2,uVar1);
    }
  }
  FUN_016dd1aa(local_34,iVar4,uVar1);
  local_30 = uVar3;
  uVar8 = FUN_00a5ee50(&local_38);
  FUN_0141b5e8(&local_58,param_2[9],param_2[10]);
  FUN_01497d1c(&local_48,param_2[0xc],param_2[0xd]);
  iVar4 = *param_2;
  iVar5 = 0;
  if (iVar4 == 0) {
    iVar4 = 0;
  }
  else if (iVar4 == 1) {
    iVar4 = 1;
  }
  else {
    iVar5 = param_2[1];
    local_38 = param_2[2];
    local_34 = param_2[3];
    local_30 = param_2[4];
    iStack_2c = param_2[5];
  }
  *(short *)(param_1 + 0xe) = (short)iVar2;
  param_1[10] = local_50;
  param_1[2] = local_38;
  param_1[3] = local_34;
  param_1[4] = local_30;
  param_1[5] = iStack_2c;
  param_1[6] = (int)uVar8;
  param_1[8] = local_58;
  param_1[9] = local_54;
  param_1[0xb] = local_48;
  param_1[0xc] = local_44;
  param_1[0xd] = local_40;
  *param_1 = iVar4;
  param_1[1] = iVar5;
  param_1[7] = (int)((ulonglong)uVar8 >> 0x20);
  return;
}

