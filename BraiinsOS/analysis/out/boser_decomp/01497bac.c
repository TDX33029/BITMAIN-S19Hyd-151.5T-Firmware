// FUN_01497bac @ 01497bac size=176 calls_out=2 calls_in=36
// strings: 

void FUN_01497bac(undefined4 param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 local_1c0 [94];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  local_3c = param_3[3];
  local_38 = param_3[4];
  uStack_34 = param_3[5];
  local_30 = param_3[6];
  uStack_2c = param_3[7];
  uStack_28 = param_3[8];
  local_48 = *param_3;
  uStack_44 = param_3[1];
  uStack_40 = param_3[2];
  puVar1 = (undefined4 *)((uint)local_1c0 | 4);
  *puVar1 = local_48;
  puVar1[1] = uStack_44;
  puVar1[2] = uStack_40;
  puVar1[3] = local_3c;
  puVar1[4] = local_38;
  puVar1[5] = uStack_34;
  puVar1[6] = local_30;
  puVar1[7] = uStack_2c;
  puVar1[8] = uStack_28;
  local_1c0[0] = 7;
  iVar2 = *(int *)(param_2 + 0xb4);
  if (iVar2 == *(int *)(param_2 + 0xac)) {
    FUN_0149e53c();
  }
  FUN_01bed4e2(iVar2 * 0x178 + *(int *)(param_2 + 0xb0),local_1c0,0x178);
  *(int *)(param_2 + 0xb4) = iVar2 + 1;
  FUN_01bed4e2(param_1,param_2,200);
  return;
}

