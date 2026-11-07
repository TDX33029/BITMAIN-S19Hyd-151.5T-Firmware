// FUN_01610fac @ 01610fac size=432 calls_out=3 calls_in=1
// strings: 

void FUN_01610fac(undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  puVar3 = (undefined4 *)*param_2;
  iVar7 = param_2[1];
  if ((uint)(iVar7 - (int)puVar3) < 4) {
LAB_01610fc8:
    param_1[3] = 4;
    param_1[1] = 0x80000005;
    param_1[2] = puVar3;
    *param_1 = 1;
    return;
  }
  local_48 = 0x80000005;
  FUN_00f2cc28(&local_48);
  puVar1 = puVar3 + 1;
  uVar6 = *puVar3;
  *param_2 = (int)puVar1;
  if ((uint)(iVar7 - (int)puVar1) < 4) {
    param_1[1] = 0x80000005;
  }
  else {
    local_48 = 0x80000005;
    FUN_00f2cc28(&local_48);
    uVar5 = puVar3[1];
    *param_2 = (int)(puVar3 + 2);
    FUN_0161f8fc(&local_48,param_2);
    if ((char)local_48 == '\x01') {
      param_1[1] = local_44;
      param_1[3] = uStack_3c;
      param_1[2] = uStack_40;
      *param_1 = 1;
      return;
    }
    FUN_016dd1aa(&local_68,(uint)&local_48 | 1,0x20);
    puVar3 = (undefined4 *)*param_2;
    if ((uint)(param_2[1] - (int)puVar3) < 4) goto LAB_01610fc8;
    local_48 = 0x80000005;
    FUN_00f2cc28(&local_48);
    puVar1 = puVar3 + 1;
    uVar4 = *puVar3;
    *param_2 = (int)puVar1;
    if (3 < (uint)(param_2[1] - (int)puVar1)) {
      local_48 = 0x80000005;
      FUN_00f2cc28(&local_48);
      *param_2 = (int)(puVar3 + 2);
      uVar2 = puVar3[1];
      param_1[1] = local_68;
      param_1[2] = uStack_64;
      param_1[3] = uStack_60;
      param_1[4] = uStack_5c;
      param_1[5] = local_58;
      param_1[6] = uStack_54;
      param_1[7] = uStack_50;
      param_1[8] = uStack_4c;
      param_1[9] = uVar6;
      param_1[10] = uVar5;
      param_1[0xb] = uVar4;
      param_1[0xc] = uVar2;
      *param_1 = 0;
      return;
    }
    param_1[1] = 0x80000005;
  }
  param_1[2] = puVar1;
  param_1[3] = 4;
  *param_1 = 1;
  return;
}

