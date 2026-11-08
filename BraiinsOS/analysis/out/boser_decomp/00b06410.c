// FUN_00b06410 @ 00b06410 size=88 calls_out=1 calls_in=0
// strings: 

void FUN_00b06410(int *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  
  puVar1 = (undefined4 *)*param_1;
  iVar5 = puVar1[4];
  puVar6 = (undefined4 *)puVar1[0xc];
  puVar1[4] = 0x80000000;
  if (iVar5 == -0x80000000) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0cc(&DAT_01d293f0);
  }
  uVar2 = puVar1[1];
  uVar3 = puVar1[2];
  uVar4 = puVar1[3];
  *puVar6 = *puVar1;
  puVar6[1] = uVar2;
  puVar6[2] = uVar3;
  puVar6[3] = uVar4;
  puVar6[4] = iVar5;
  uVar2 = puVar1[6];
  uVar3 = puVar1[7];
  puVar6[5] = puVar1[5];
  puVar6[6] = uVar2;
  puVar6[7] = uVar3;
  uVar2 = puVar1[9];
  uVar3 = puVar1[10];
  uVar4 = puVar1[0xb];
  puVar6[8] = puVar1[8];
  puVar6[9] = uVar2;
  puVar6[10] = uVar3;
  puVar6[0xb] = uVar4;
  return;
}

