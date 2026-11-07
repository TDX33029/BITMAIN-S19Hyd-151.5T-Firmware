// FUN_01a3afe8 @ 01a3afe8 size=208 calls_out=2 calls_in=1
// strings: 

void FUN_01a3afe8(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  puVar7 = (undefined4 *)*param_1;
  puVar8 = (undefined4 *)param_1[1];
  iVar1 = puVar8[1];
  iVar2 = puVar8[2];
  *param_1 = 1;
  param_1[1] = &DAT_01d2bbb0;
  if (iVar1 == 0x34 && iVar2 == 4) {
    if ((code *)*puVar8 != (code *)0x0) {
      (*(code *)*puVar8)(puVar7);
    }
    uVar3 = param_2[1];
    uVar4 = param_2[2];
    uVar5 = param_2[3];
    *puVar7 = *param_2;
    puVar7[1] = uVar3;
    puVar7[2] = uVar4;
    puVar7[3] = uVar5;
    uVar3 = param_2[5];
    uVar4 = param_2[6];
    uVar5 = param_2[7];
    puVar7[4] = param_2[4];
    puVar7[5] = uVar3;
    puVar7[6] = uVar4;
    puVar7[7] = uVar5;
    uVar3 = param_2[9];
    uVar4 = param_2[10];
    uVar5 = param_2[0xb];
    uVar6 = param_2[0xc];
    puVar7[8] = param_2[8];
    puVar7[9] = uVar3;
    puVar7[10] = uVar4;
    puVar7[0xb] = uVar5;
    puVar7[0xc] = uVar6;
    FUN_01139b38(1,&DAT_01d2bbb0);
  }
  else {
    FUN_01139b38(puVar7,puVar8);
    puVar7 = (undefined4 *)FUN_01a3af8c();
    FUN_01139b38(1,&DAT_01d2bbb0);
  }
  *param_1 = puVar7;
  param_1[1] = &DAT_01d2bba0;
  return;
}

