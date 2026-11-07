// FUN_01595c64 @ 01595c64 size=376 calls_out=6 calls_in=4
// strings: 

int FUN_01595c64(undefined4 param_1,undefined4 param_2,int *param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 *param_7)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int local_c0;
  int local_bc;
  undefined4 local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  int iStack_9c;
  int iStack_98;
  int iStack_94;
  undefined1 *local_90;
  undefined4 local_8c;
  int local_88;
  int local_84;
  undefined1 local_58;
  undefined4 local_54;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  iVar1 = param_7[2];
  uVar4 = *param_7;
  iVar5 = param_7[1];
  iVar2 = iVar5 + iVar1 * 0xc;
  iVar6 = iVar5;
  local_c0 = iVar5;
  local_bc = iVar5;
  local_b8 = uVar4;
  local_b4 = iVar2;
  if (iVar1 != 0) {
    iVar6 = 0;
    do {
      puVar3 = (undefined4 *)(iVar5 + iVar6);
      local_a8 = *puVar3;
      local_b0 = puVar3[1];
      local_a4 = local_b0 + puVar3[2] * 4;
      local_ac = local_b0;
      FUN_014fcbb0(&local_30,&local_b0);
      iVar6 = iVar6 + 0xc;
      *puVar3 = local_30;
      puVar3[1] = uStack_2c;
      puVar3[2] = uStack_28;
    } while (iVar1 * 0xc != iVar6);
    iVar6 = iVar5 + iVar6;
    local_bc = iVar2;
  }
  iVar6 = ((uint)(iVar6 - iVar5) >> 2) * -0x55555555;
  local_b0 = iVar5;
  local_ac = iVar6;
  local_a8 = uVar4;
  FUN_0157674c(&local_c0);
  FUN_015779a4(&local_c0);
  local_b0 = *param_3;
  local_ac = param_3[1];
  local_a8 = param_3[2];
  local_a4 = param_3[3];
  local_a0 = param_3[4];
  iStack_9c = param_3[5];
  iStack_98 = param_3[6];
  iStack_94 = param_3[7];
  local_54 = param_6;
  local_58 = 6;
  local_90 = &DAT_8000000c;
  local_3c = param_5;
  local_8c = uVar4;
  local_88 = iVar5;
  local_84 = iVar6;
  local_40 = param_4;
  local_38 = param_1;
  local_34 = param_2;
  iVar6 = thunk_FUN_01be5118(0x80);
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x80);
  }
  FUN_01bed4e2(iVar6,&local_b0,0x80);
  return iVar6;
}

