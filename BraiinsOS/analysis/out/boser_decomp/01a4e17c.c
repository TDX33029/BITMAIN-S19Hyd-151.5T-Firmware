// FUN_01a4e17c @ 01a4e17c size=556 calls_out=8 calls_in=1
// strings: 

void FUN_01a4e17c(int *param_1,int param_2,undefined4 *param_3,int param_4,int param_5,
                 undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 local_100;
  int iStack_fc;
  int iStack_f8;
  undefined4 uStack_f4;
  int local_f0;
  int local_ec;
  undefined1 auStack_e8 [80];
  int local_98;
  int local_94;
  int local_90;
  int iStack_8c;
  int local_88;
  int local_84;
  undefined4 local_80;
  
  FUN_01a4d818(&local_98);
  if (local_98 != -0x7ffffffd) {
    param_1[1] = local_94;
    param_1[2] = local_90;
    param_1[3] = iStack_8c;
    param_1[4] = local_88;
    param_1[5] = local_84;
    *param_1 = local_98;
    FUN_01a4c510(param_3);
    return;
  }
  local_ec = param_5;
  uStack_f4 = 0x80000002;
  iStack_fc = *(int *)(param_2 + 0xc4);
  iStack_f8 = *(int *)(param_2 + 200);
  if (param_4 == param_5) {
    uStack_f4 = 0x80000000;
  }
  local_100 = 0x80000002;
  if (iStack_fc == iStack_f8) {
    local_100 = 0x80000000;
  }
  iVar5 = param_3[2];
  if ((*(uint *)(param_2 + 0xc0) & 1) == 0) {
    local_100 = 0x80000000;
  }
  iVar6 = iVar5 + -1;
  *(undefined4 *)(param_2 + 0xc0) = 0;
  local_f0 = param_4;
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(0,0xffffffff,0,&DAT_01d2c1b4);
  }
  iVar7 = param_3[1];
  FUN_01a4dcbc(&local_98,param_2,iVar7,iVar6,0);
  if (local_98 == -0x7ffffffd) {
    FUN_01a54fec(auStack_e8,local_94,iVar7 + iVar6 * 0x48);
    local_80 = 0;
    local_88 = 0;
    local_94 = 0;
    local_84 = 8;
    local_98 = 3;
    piVar2 = (int *)FUN_01a55af4(auStack_e8,&local_98);
    if ((*piVar2 == 3) || (FUN_01a4dee0(&local_98,iVar7,iVar5,iVar6), local_98 == -0x7ffffffd)) {
      *(int *)(param_2 + 0xd8) = *(int *)(param_2 + 0xd8) + 1;
      FUN_01a49da0((undefined4 *)(param_2 + 0x98));
      *(undefined4 *)(param_2 + 0x98) = local_100;
      *(int *)(param_2 + 0x9c) = iStack_fc;
      *(int *)(param_2 + 0xa0) = iStack_f8;
      *(undefined4 *)(param_2 + 0xa4) = uStack_f4;
      *(int *)(param_2 + 0xa8) = local_f0;
      *(int *)(param_2 + 0xac) = local_ec;
      *(undefined4 *)(param_2 + 0xb4) = param_6;
      *(undefined4 *)(param_2 + 0xb8) = param_7;
      *(undefined2 *)(param_2 + 0xbc) = 0;
      *(undefined1 *)(param_2 + 0xdc) = 1;
      *(undefined4 *)(param_2 + 0xb0) = 1;
      *(undefined4 *)(param_2 + 0x60) = 1;
      *(undefined4 *)(param_2 + 100) = *(undefined4 *)(param_2 + 0xd8);
      FUN_01a4c510((undefined4 *)(param_2 + 0xcc));
      uVar3 = param_3[1];
      uVar4 = param_3[2];
      *(undefined4 *)(param_2 + 0xcc) = *param_3;
      *(undefined4 *)(param_2 + 0xd0) = uVar3;
      *(undefined4 *)(param_2 + 0xd4) = uVar4;
      *param_1 = -0x7ffffffd;
      return;
    }
  }
  iVar1 = local_84;
  iVar7 = local_88;
  iVar6 = local_94;
  iVar5 = local_98;
  FUN_01a49da0(&local_100);
  FUN_01a4c510(param_3);
  param_1[2] = local_90;
  param_1[3] = iStack_8c;
  param_1[4] = iVar7;
  param_1[5] = iVar1;
  *param_1 = iVar5;
  param_1[1] = iVar6;
  return;
}

