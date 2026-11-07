// FUN_016e9184 @ 016e9184 size=156 calls_out=2 calls_in=2
// strings: 

void FUN_016e9184(int *param_1,undefined4 *param_2)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  
  if (*param_1 != 0) {
    FUN_01306fc8(&DAT_01d0a438);
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x16e921c);
    (*pcVar1)();
  }
  *param_1 = -1;
  iVar6 = param_1[3];
  if (iVar6 == param_1[1]) {
    FUN_015f5b48();
  }
  puVar2 = (undefined4 *)(param_1[2] + iVar6 * 0x1c);
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  *puVar2 = *param_2;
  puVar2[1] = uVar3;
  puVar2[2] = uVar4;
  uVar3 = param_2[4];
  uVar4 = param_2[5];
  uVar5 = param_2[6];
  puVar2[3] = param_2[3];
  puVar2[4] = uVar3;
  puVar2[5] = uVar4;
  puVar2[6] = uVar5;
  param_1[3] = iVar6 + 1;
  *param_1 = *param_1 + 1;
  return;
}

