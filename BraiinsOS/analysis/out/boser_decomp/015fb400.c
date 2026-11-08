// FUN_015fb400 @ 015fb400 size=272 calls_out=5 calls_in=3
// strings: 

void FUN_015fb400(undefined4 *param_1,undefined4 param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined4 *local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  uint local_d8;
  uint uStack_d4;
  uint uStack_d0;
  uint uStack_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined1 auStack_c0 [72];
  uint local_78;
  uint local_74;
  uint uStack_70;
  uint uStack_6c;
  
  uVar6 = thunk_FUN_01bee35a(param_1,0x2c0);
  puVar1 = (uint *)((int)uVar6 + (int)((ulonglong)uVar6 >> 0x20));
  if ((char)puVar1[4] == '\0') {
    FUN_019ae6ac(&local_78);
    *puVar1 = local_78;
    puVar1[1] = local_74;
    puVar1[2] = uStack_70;
    puVar1[3] = uStack_6c;
    *(undefined1 *)(puVar1 + 4) = 1;
  }
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  *puVar1 = uVar2 + 1;
  puVar1[1] = uVar3 + (0xfffffffe < uVar2);
  local_e8 = &DAT_0056d238;
  uStack_e4 = 0;
  uStack_e0 = 0;
  uStack_dc = 0;
  local_d8 = uVar2;
  uStack_d4 = uVar3;
  uStack_d0 = uVar4;
  uStack_cc = uVar5;
  FUN_01bed4e2(auStack_c0,param_2,0x48);
  local_c4 = 1;
  local_c8 = 0;
  FUN_014534c4(&local_e8,1,uVar2,uVar3,uVar4,uVar5);
  FUN_01bed4e2(&local_78,&local_c8,0x50);
  if (local_78 != local_74) {
    FUN_01453a54(&local_e8,param_2);
  }
  *param_1 = local_e8;
  param_1[1] = uStack_e4;
  param_1[2] = uStack_e0;
  param_1[3] = uStack_dc;
  param_1[4] = local_d8;
  param_1[5] = uStack_d4;
  param_1[6] = uStack_d0;
  param_1[7] = uStack_cc;
  return;
}

