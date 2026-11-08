// FUN_015fb578 @ 015fb578 size=184 calls_out=4 calls_in=2
// strings: 

void FUN_015fb578(undefined4 *param_1,undefined4 param_2)

{
  uint *puVar1;
  undefined8 uVar2;
  undefined4 *local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  uint local_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  
  uVar2 = thunk_FUN_01bee35a(param_1,0x2c0);
  puVar1 = (uint *)((int)uVar2 + (int)((ulonglong)uVar2 >> 0x20));
  if ((char)puVar1[4] == '\0') {
    FUN_019ae6ac(&local_38);
    *puVar1 = local_38;
    puVar1[1] = uStack_34;
    puVar1[2] = uStack_30;
    puVar1[3] = uStack_2c;
    *(undefined1 *)(puVar1 + 4) = 1;
  }
  local_48 = *puVar1;
  uStack_44 = puVar1[1];
  uStack_40 = puVar1[2];
  uStack_3c = puVar1[3];
  *puVar1 = local_48 + 1;
  puVar1[1] = uStack_44 + (0xfffffffe < local_48);
  local_58 = &DAT_0056d238;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  FUN_015d694c(&local_58,1,&local_48);
  FUN_015dc214(&local_58,param_2);
  *param_1 = local_58;
  param_1[1] = uStack_54;
  param_1[2] = uStack_50;
  param_1[3] = uStack_4c;
  param_1[4] = local_48;
  param_1[5] = uStack_44;
  param_1[6] = uStack_40;
  param_1[7] = uStack_3c;
  return;
}

