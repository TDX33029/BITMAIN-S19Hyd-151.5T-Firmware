// FUN_011e5090 @ 011e5090 size=296 calls_out=3 calls_in=1
// strings: 

void FUN_011e5090(undefined4 *param_1,uint *param_2)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  uint *puVar4;
  undefined8 uVar5;
  undefined1 local_60 [16];
  uint local_50;
  uint uStack_4c;
  uint uStack_48;
  undefined4 *local_40;
  uint local_3c;
  uint uStack_38;
  uint uStack_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  
  uVar1 = 0x15;
  if ((int)*param_2 < 0) {
    uVar1 = *param_2 ^ 0x80000000;
  }
  if (uVar1 == 0x10) {
LAB_011e50cc:
    uVar5 = thunk_FUN_01bee35a(local_60,0x2c0);
    puVar2 = (uint *)((int)uVar5 + (int)((ulonglong)uVar5 >> 0x20));
    if ((char)puVar2[4] == '\0') {
      FUN_019ae6ac(&local_40);
      *puVar2 = (uint)local_40;
      puVar2[1] = local_3c;
      puVar2[2] = uStack_38;
      puVar2[3] = uStack_34;
      *(undefined1 *)(puVar2 + 4) = 1;
    }
    local_30 = *puVar2;
    local_2c = puVar2[1];
    local_28 = puVar2[2];
    local_24 = puVar2[3];
    *puVar2 = local_30 + 1;
    puVar2[1] = local_2c + (0xfffffffe < local_30);
    local_40 = &DAT_0056d238;
    puVar2 = &DAT_01d3084c;
  }
  else {
    if (uVar1 == 0x11) {
      param_2 = (uint *)param_2[1];
    }
    else if (uVar1 == 0x12) goto LAB_011e50cc;
    FUN_00fe51bc(&local_40,param_2);
    if (local_40 == (undefined4 *)0x0) {
      *param_1 = 0;
      param_1[1] = local_3c;
      return;
    }
    puVar4 = (uint *)((uint)&local_40 | 4);
    puVar2 = &local_50;
    local_50 = *puVar4;
    uStack_4c = puVar4[1];
    uStack_48 = puVar4[2];
  }
  uVar1 = puVar2[1];
  uVar3 = puVar2[2];
  param_1[1] = *puVar2;
  param_1[2] = uVar1;
  param_1[3] = uVar3;
  param_1[4] = local_30;
  param_1[5] = local_2c;
  param_1[6] = local_28;
  param_1[7] = local_24;
  *param_1 = local_40;
  return;
}

