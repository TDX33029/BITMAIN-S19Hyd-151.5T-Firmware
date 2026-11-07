// FUN_014bb378 @ 014bb378 size=96 calls_out=0 calls_in=0
// strings: 

void FUN_014bb378(undefined4 *param_1,int param_2,int param_3)

{
  ushort *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ushort *puVar5;
  ushort *puVar6;
  uint unaff_lr;
  
  puVar6 = *(ushort **)(param_2 + 0xc);
  puVar1 = *(ushort **)(param_2 + 4);
  for (; param_3 != 0; param_3 = param_3 + -1) {
    puVar5 = puVar1;
    if (puVar1 != puVar6) {
      puVar5 = puVar1 + 0x10;
      unaff_lr = (uint)*puVar1;
      *(ushort **)(param_2 + 4) = puVar5;
    }
    if (puVar1 == puVar6 || unaff_lr == 2) goto LAB_014bb3cc;
    puVar1 = puVar5;
  }
  if (puVar1 != puVar6) {
    *(ushort **)(param_2 + 4) = puVar1 + 0x10;
    uVar2 = *(undefined4 *)(puVar1 + 2);
    uVar3 = *(undefined4 *)(puVar1 + 4);
    uVar4 = *(undefined4 *)(puVar1 + 6);
    *param_1 = *(undefined4 *)puVar1;
    param_1[1] = uVar2;
    param_1[2] = uVar3;
    param_1[3] = uVar4;
    uVar2 = *(undefined4 *)(puVar1 + 10);
    uVar3 = *(undefined4 *)(puVar1 + 0xc);
    uVar4 = *(undefined4 *)(puVar1 + 0xe);
    param_1[4] = *(undefined4 *)(puVar1 + 8);
    param_1[5] = uVar2;
    param_1[6] = uVar3;
    param_1[7] = uVar4;
    return;
  }
LAB_014bb3cc:
  *(undefined2 *)param_1 = 2;
  return;
}

