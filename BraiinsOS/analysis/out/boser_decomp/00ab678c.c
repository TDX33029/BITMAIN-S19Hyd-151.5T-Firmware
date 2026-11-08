// FUN_00ab678c @ 00ab678c size=392 calls_out=8 calls_in=2
// strings: 

void FUN_00ab678c(undefined4 *param_1,int *param_2)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined4 *local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  uint local_b0;
  uint uStack_ac;
  uint uStack_a8;
  uint uStack_a4;
  uint local_9c [3];
  int local_90;
  uint local_8c;
  undefined4 local_88;
  int local_84;
  int local_80;
  int local_7c;
  uint local_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  uint local_50;
  uint uStack_4c;
  uint uStack_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  iVar4 = *param_2;
  iVar1 = param_2[1];
  iVar5 = param_2[2];
  if (iVar4 == 0) {
    iVar5 = 0;
  }
  uVar3 = (uint)(iVar4 != 0);
  uVar6 = thunk_FUN_01bee35a(iVar1,0x2c0);
  puVar2 = (uint *)((int)uVar6 + (int)((ulonglong)uVar6 >> 0x20));
  if ((char)puVar2[4] == '\0') {
    FUN_019ae6ac(&local_78);
    *puVar2 = local_78;
    puVar2[1] = uStack_74;
    puVar2[2] = uStack_70;
    puVar2[3] = uStack_6c;
    *(undefined1 *)(puVar2 + 4) = 1;
  }
  local_b0 = *puVar2;
  uStack_ac = puVar2[1];
  uStack_a8 = puVar2[2];
  uStack_a4 = puVar2[3];
  *puVar2 = local_b0 + 1;
  puVar2[1] = uStack_ac + (0xfffffffe < local_b0);
  local_c0 = &DAT_0056d238;
  uStack_bc = 0;
  uStack_b8 = 0;
  uStack_b4 = 0;
  if (iVar5 != 0) {
    FUN_0126ffd8(&local_c0,iVar5,&local_b0);
  }
  local_88 = 0;
  local_9c[1] = 0;
  local_9c[0] = uVar3;
  local_9c[2] = iVar4;
  local_90 = iVar1;
  local_8c = uVar3;
  local_84 = iVar4;
  local_80 = iVar1;
  local_7c = iVar5;
  while( true ) {
    uVar6 = FUN_0165d304(local_9c);
    iVar5 = (int)uVar6;
    if (iVar5 == 0) break;
    FUN_006666fc(&local_50,*(undefined4 *)(iVar5 + 4),*(undefined4 *)(iVar5 + 8));
    FUN_00ab5bcc(&local_40,(int)((ulonglong)uVar6 >> 0x20));
    local_78 = local_50;
    uStack_74 = uStack_4c;
    uStack_70 = uStack_48;
    local_68 = local_40;
    uStack_64 = uStack_3c;
    uStack_60 = uStack_38;
    uStack_5c = uStack_34;
    uStack_58 = uStack_30;
    uStack_54 = uStack_2c;
    FUN_01274ad8(&local_40,&local_c0,&local_78,&local_68);
    if ((char)local_40 != '\x06') {
      FUN_00db4764(&local_40);
    }
  }
  *param_1 = local_c0;
  param_1[1] = uStack_bc;
  param_1[2] = uStack_b8;
  param_1[3] = uStack_b4;
  param_1[4] = local_b0;
  param_1[5] = uStack_ac;
  param_1[6] = uStack_a8;
  param_1[7] = uStack_a4;
  return;
}

