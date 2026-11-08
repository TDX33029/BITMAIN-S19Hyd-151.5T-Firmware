// FUN_015e5a74 @ 015e5a74 size=204 calls_out=3 calls_in=2
// strings: 

void FUN_015e5a74(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  
  uVar1 = FUN_015e8784(&local_48,0xc);
  uVar7 = thunk_FUN_01bee35a(uVar1,0x2c0);
  puVar4 = (uint *)((int)uVar7 + (int)((ulonglong)uVar7 >> 0x20));
  if ((char)puVar4[4] == '\0') {
    FUN_019ae6ac(&local_38);
    *puVar4 = local_38;
    puVar4[1] = uStack_34;
    puVar4[2] = uStack_30;
    puVar4[3] = uStack_2c;
    *(undefined1 *)(puVar4 + 4) = 1;
  }
  uVar5 = *puVar4;
  uVar3 = puVar4[1];
  uVar2 = puVar4[2];
  uVar6 = puVar4[3];
  *puVar4 = uVar5 + 1;
  puVar4[1] = uVar3 + (0xfffffffe < uVar5);
  param_1[9] = local_48;
  param_1[10] = uStack_44;
  param_1[0xb] = uStack_40;
  *param_1 = &DAT_0056d238;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[6] = uVar2;
  param_1[4] = uVar5;
  param_1[5] = uVar3;
  param_1[7] = uVar6;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[8] = param_2;
  return;
}

