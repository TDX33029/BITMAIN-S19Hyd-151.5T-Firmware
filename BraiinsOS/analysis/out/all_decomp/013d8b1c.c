// FUN_013d8b1c @ 013d8b1c size=388 calls_out=5 calls_in=1
// strings: 

void FUN_013d8b1c(undefined4 *param_1,int param_2,undefined1 param_3,int *param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined1 *local_170 [22];
  undefined1 auStack_118 [88];
  undefined4 local_c0 [23];
  undefined1 local_64;
  
  if (param_4[2] == 0) {
    piVar2 = (int *)((uint)local_170 | 4);
    iVar6 = param_4[4];
    iVar1 = param_4[5];
    iVar8 = param_4[6];
    iVar9 = param_4[7];
    iVar7 = param_4[8];
    *piVar2 = param_4[3];
    piVar2[1] = iVar6;
    piVar2[2] = iVar1;
    piVar2[3] = iVar8;
    piVar2[4] = iVar9;
    piVar2[5] = iVar7;
    iVar6 = param_4[1];
    local_170[0] = &DAT_00110000;
    iVar1 = *param_4;
  }
  else {
    if (param_4[2] != 1) {
      iVar6 = param_4[1];
      iVar1 = param_4[2];
      iVar8 = param_4[3];
      piVar2 = (int *)((uint)local_170 | 4);
      *piVar2 = *param_4;
      piVar2[1] = iVar6;
      piVar2[2] = iVar1;
      piVar2[3] = iVar8;
      iVar6 = param_4[5];
      iVar1 = param_4[6];
      iVar8 = param_4[7];
      iVar9 = param_4[8];
      piVar2[4] = param_4[4];
      piVar2[5] = iVar6;
      piVar2[6] = iVar1;
      piVar2[7] = iVar8;
      piVar2[8] = iVar9;
      local_170[0] = (undefined1 *)0x110007;
      goto LAB_013d8bcc;
    }
    iVar6 = param_4[1];
    FUN_016dd1aa(local_170,iVar6,0x58);
    iVar1 = *param_4;
  }
  if (iVar1 != 0) {
    thunk_FUN_016d3fb4(iVar6);
  }
LAB_013d8bcc:
  FUN_013d8d6c(auStack_118,param_2,local_170);
  if (*(int *)(param_2 + 0x20) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb715c(&DAT_01894c18);
  }
  *(undefined4 *)(param_2 + 0x20) = 0xffffffff;
  FUN_016dd1aa((uint)local_c0 | 4,auStack_118,0x58);
  iVar6 = *(int *)(param_2 + 0x2c);
  local_c0[0] = 0x110009;
  local_64 = param_3;
  if (iVar6 == *(int *)(param_2 + 0x24)) {
    FUN_01401694();
  }
  FUN_016dd1aa(iVar6 * 0x98 + *(int *)(param_2 + 0x28),local_c0,0x98);
  *(int *)(param_2 + 0x2c) = iVar6 + 1;
  *(int *)(param_2 + 0x20) = *(int *)(param_2 + 0x20) + 1;
  uVar3 = *(undefined4 *)(param_2 + 0x50);
  uVar4 = *(undefined4 *)(param_2 + 0x54);
  uVar5 = *(undefined4 *)(param_2 + 0x58);
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  param_1[6] = uVar3;
  param_1[7] = uVar4;
  param_1[8] = uVar5;
  *param_1 = 0;
  param_1[1] = 4;
  param_1[2] = 0;
  return;
}

