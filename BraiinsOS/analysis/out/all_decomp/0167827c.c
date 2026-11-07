// FUN_0167827c @ 0167827c size=180 calls_out=2 calls_in=3
// strings: 

void FUN_0167827c(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  uint local_58;
  uint uStack_54;
  uint uStack_50;
  uint local_4c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  uVar8 = thunk_FUN_016de0ee(param_1,0x2c0);
  puVar5 = (uint *)((int)uVar8 + (int)((ulonglong)uVar8 >> 0x20));
  local_24 = 0x80000003;
  local_30 = 0x80000003;
  if ((char)puVar5[4] == '\0') {
    FUN_015f62e4(&local_58);
    *puVar5 = local_58;
    puVar5[1] = uStack_54;
    puVar5[2] = uStack_50;
    puVar5[3] = local_4c;
    *(undefined1 *)(puVar5 + 4) = 1;
  }
  uVar1 = *puVar5;
  *puVar5 = uVar1 + 1;
  puVar5[1] = puVar5[1] + (uint)(0xfffffffe < uVar1);
  param_1[0x12] = 0x80000000;
  *(undefined1 *)(param_1 + 0x18) = 0;
  param_1[0xc] = local_30;
  param_1[0xd] = uStack_2c;
  param_1[0xe] = uStack_28;
  param_1[0xf] = local_24;
  param_1[0x10] = uStack_20;
  param_1[0x11] = uStack_1c;
  *(undefined1 *)((int)param_1 + 0x61) = 0;
  param_1[0x15] = 0;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  uVar6 = param_2[4];
  uVar7 = param_2[5];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  param_1[4] = uVar6;
  param_1[5] = uVar7;
  uVar2 = param_2[7];
  uVar3 = param_2[8];
  uVar4 = param_2[9];
  uVar6 = param_2[10];
  uVar7 = param_2[0xb];
  param_1[6] = param_2[6];
  param_1[7] = uVar2;
  param_1[8] = uVar3;
  param_1[9] = uVar4;
  param_1[10] = uVar6;
  param_1[0xb] = uVar7;
  return;
}

