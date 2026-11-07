// FUN_01610e50 @ 01610e50 size=348 calls_out=3 calls_in=1
// strings: 

void FUN_01610e50(undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  
  puVar2 = (undefined4 *)*param_2;
  iVar5 = param_2[1];
  if ((uint)(iVar5 - (int)puVar2) < 4) {
    param_1[3] = 4;
    param_1[1] = 0x80000005;
    param_1[2] = puVar2;
    *param_1 = 1;
    return;
  }
  local_4c = 0x80000005;
  FUN_00f2cc28(&local_4c);
  puVar1 = puVar2 + 1;
  uVar4 = *puVar2;
  *param_2 = (int)puVar1;
  if ((uint)(iVar5 - (int)puVar1) < 4) {
    param_1[2] = puVar1;
    param_1[1] = 0x80000005;
    param_1[3] = 4;
    *param_1 = 1;
    return;
  }
  local_4c = 0x80000005;
  FUN_00f2cc28(&local_4c);
  uVar3 = puVar2[1];
  *param_2 = (int)(puVar2 + 2);
  FUN_0161f8fc(&local_4c,param_2);
  if ((char)local_4c == '\x01') {
    param_1[1] = local_48;
    param_1[3] = uStack_40;
    param_1[2] = uStack_44;
    *param_1 = 1;
    return;
  }
  FUN_016dd1aa(&local_70,(uint)&local_4c | 1,0x20);
  param_1[1] = local_70;
  param_1[2] = uStack_6c;
  param_1[3] = uStack_68;
  param_1[4] = uStack_64;
  param_1[5] = local_60;
  param_1[6] = uStack_5c;
  param_1[7] = uStack_58;
  param_1[8] = uStack_54;
  param_1[10] = uVar3;
  param_1[9] = uVar4;
  *param_1 = 0;
  return;
}

