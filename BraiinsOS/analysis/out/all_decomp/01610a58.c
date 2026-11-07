// FUN_01610a58 @ 01610a58 size=248 calls_out=3 calls_in=1
// strings: 

void FUN_01610a58(undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  
  puVar1 = (undefined4 *)*param_2;
  if ((uint)(param_2[1] - (int)puVar1) < 4) {
    param_1[3] = 4;
    param_1[1] = 0x80000005;
    param_1[2] = puVar1;
    *param_1 = 1;
    return;
  }
  local_44 = 0x80000005;
  FUN_00f2cc28(&local_44);
  uVar2 = *puVar1;
  *param_2 = (int)(puVar1 + 1);
  FUN_0161f8fc(&local_44,param_2);
  if ((char)local_44 == '\x01') {
    param_1[1] = local_40;
    param_1[3] = uStack_38;
    param_1[2] = uStack_3c;
    *param_1 = 1;
    return;
  }
  FUN_016dd1aa(&local_68,(uint)&local_44 | 1,0x20);
  param_1[1] = local_68;
  param_1[2] = uStack_64;
  param_1[3] = uStack_60;
  param_1[4] = uStack_5c;
  param_1[5] = local_58;
  param_1[6] = uStack_54;
  param_1[7] = uStack_50;
  param_1[8] = uStack_4c;
  param_1[9] = uVar2;
  *param_1 = 0;
  return;
}

