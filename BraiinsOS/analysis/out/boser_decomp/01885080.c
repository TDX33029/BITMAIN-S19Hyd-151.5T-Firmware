// FUN_01885080 @ 01885080 size=168 calls_out=2 calls_in=2
// strings: 

uint * FUN_01885080(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  undefined8 uVar7;
  uint local_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  
  if ((char)param_1[4] != '\0') {
    return param_1;
  }
  uVar1 = 0;
  if (param_2 != (uint *)0x0) {
    uVar4 = *param_2;
    uVar1 = param_2[2];
    uVar2 = param_2[3];
    uVar6 = param_2[4];
    uVar3 = param_2[5];
    *param_2 = 0;
    param_2[1] = 0;
    if ((uVar4 & 1) != 0) goto LAB_018850f0;
  }
  uVar7 = thunk_FUN_01bee35a(uVar1,0x2c0);
  puVar5 = (uint *)((int)uVar7 + (int)((ulonglong)uVar7 >> 0x20));
  if ((char)puVar5[4] == '\0') {
    FUN_019ae6ac(&local_28);
    *puVar5 = local_28;
    puVar5[1] = uStack_24;
    puVar5[2] = uStack_20;
    puVar5[3] = uStack_1c;
    *(undefined1 *)(puVar5 + 4) = 1;
  }
  uVar1 = *puVar5;
  uVar2 = puVar5[1];
  uVar6 = puVar5[2];
  uVar3 = puVar5[3];
  *puVar5 = uVar1 + 1;
  puVar5[1] = uVar2 + (0xfffffffe < uVar1);
LAB_018850f0:
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar6;
  *(undefined1 *)(param_1 + 4) = 1;
  param_1[3] = uVar3;
  return param_1;
}

