// FUN_018d9838 @ 018d9838 size=212 calls_out=4 calls_in=0
// strings: 

void FUN_018d9838(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  uint *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  int local_34;
  int local_30;
  undefined1 local_2c;
  int local_28;
  undefined1 local_24;
  
  FUN_01933ff0(&local_34);
  if (local_34 == 1) {
    local_24 = local_2c;
    local_28 = local_30;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,&local_28,&DAT_01d23088,&DAT_01d23048);
  }
  uVar10 = FUN_018c4600(local_30 + 8,param_3);
  uVar4 = (uint)((ulonglong)uVar10 >> 0x20);
  puVar1 = (uint *)uVar10;
  if (puVar1 != (uint *)0x0) {
    uVar4 = puVar1[3];
  }
  if (puVar1 != (uint *)0x0 && uVar4 != 0) {
    puVar1[3] = uVar4 - 1;
    uVar2 = puVar1[2] + (uVar4 - 1);
    uVar4 = uVar2 - *puVar1;
    if (uVar2 < *puVar1) {
      uVar4 = uVar2;
    }
    puVar3 = (undefined4 *)(puVar1[1] + uVar4 * 0x40);
    uVar5 = puVar3[1];
    uVar6 = puVar3[2];
    uVar7 = puVar3[3];
    uVar8 = puVar3[4];
    *param_1 = *puVar3;
    param_1[1] = uVar5;
    param_1[2] = uVar6;
    param_1[3] = uVar7;
    param_1[4] = uVar8;
    uVar5 = puVar3[6];
    uVar6 = puVar3[7];
    uVar7 = puVar3[8];
    uVar8 = puVar3[9];
    param_1[5] = puVar3[5];
    param_1[6] = uVar5;
    param_1[7] = uVar6;
    param_1[8] = uVar7;
    param_1[9] = uVar8;
    uVar5 = puVar3[0xb];
    uVar6 = puVar3[0xc];
    uVar7 = puVar3[0xd];
    uVar8 = puVar3[0xe];
    uVar9 = puVar3[0xf];
    param_1[10] = puVar3[10];
    param_1[0xb] = uVar5;
    param_1[0xc] = uVar6;
    param_1[0xd] = uVar7;
    param_1[0xe] = uVar8;
    param_1[0xf] = uVar9;
  }
  else {
    param_1[2] = 0x80000000;
  }
  FUN_00a97e8c(local_30,local_2c);
  return;
}

