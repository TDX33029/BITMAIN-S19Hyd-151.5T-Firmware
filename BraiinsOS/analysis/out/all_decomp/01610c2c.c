// FUN_01610c2c @ 01610c2c size=548 calls_out=3 calls_in=1
// strings: 

void FUN_01610c2c(undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
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
  
  puVar5 = (undefined4 *)*param_2;
  puVar6 = (undefined4 *)param_2[1];
  if ((uint)((int)puVar6 - (int)puVar5) < 4) {
    param_1[1] = 0x80000005;
    param_1[2] = puVar5;
    *param_1 = 2;
    param_1[3] = 4;
    return;
  }
  uVar3 = 0x80000005;
  local_48 = 0x80000005;
  FUN_00f2cc28(&local_48);
  puVar1 = puVar5 + 1;
  uVar4 = *puVar5;
  *param_2 = (int)puVar1;
  if ((uint)((int)puVar6 - (int)puVar1) < 4) {
    *param_1 = 2;
    param_1[1] = 0x80000005;
    param_1[2] = puVar1;
    param_1[3] = 4;
    return;
  }
  local_48 = 0x80000005;
  FUN_00f2cc28(&local_48);
  *param_2 = (int)(puVar5 + 2);
  puVar1 = (undefined4 *)0x0;
  if (puVar5 + 2 != puVar6) {
    uVar9 = puVar5[1];
    puVar8 = (undefined4 *)((int)puVar5 + 9);
    *param_2 = (int)puVar8;
    uVar3 = 0x80000007;
    if (*(byte *)(puVar5 + 2) < 2) {
      if ((*(byte *)(puVar5 + 2) & 1) == 0) {
        uVar2 = 0;
      }
      else {
        if ((uint)((int)puVar6 - (int)puVar8) < 4) {
          uVar3 = 0x80000005;
          puVar1 = puVar8;
          goto LAB_01610d10;
        }
        local_48 = 0x80000005;
        FUN_00f2cc28(&local_48);
        puVar8 = (undefined4 *)((int)puVar5 + 0xd);
        *param_2 = (int)puVar8;
        uVar3 = *(undefined4 *)((int)puVar5 + 9);
        uVar2 = 1;
      }
      if ((uint)((int)puVar6 - (int)puVar8) < 4) {
        *param_1 = 2;
        param_1[1] = 0x80000005;
        param_1[2] = puVar8;
        param_1[3] = 4;
        return;
      }
      local_48 = 0x80000005;
      FUN_00f2cc28(&local_48);
      uVar7 = *puVar8;
      *param_2 = (int)(puVar8 + 1);
      FUN_0161f8fc(&local_48,param_2);
      if ((char)local_48 == '\x01') {
        param_1[1] = local_44;
        param_1[3] = uStack_3c;
        param_1[2] = uStack_40;
        *param_1 = 2;
        return;
      }
      FUN_016dd1aa(&local_68,(uint)&local_48 | 1,0x20);
      param_1[5] = local_68;
      param_1[6] = uStack_64;
      param_1[7] = uStack_60;
      param_1[8] = uStack_5c;
      param_1[9] = local_58;
      param_1[10] = uStack_54;
      param_1[0xb] = uStack_50;
      param_1[0xc] = uStack_4c;
      param_1[2] = uVar4;
      *param_1 = uVar2;
      param_1[1] = uVar3;
      param_1[3] = uVar9;
      param_1[4] = uVar7;
      return;
    }
  }
LAB_01610d10:
  *param_1 = 2;
  param_1[1] = uVar3;
  param_1[2] = puVar1;
  param_1[3] = 4;
  return;
}

