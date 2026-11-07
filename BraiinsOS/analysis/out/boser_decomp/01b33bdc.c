// FUN_01b33bdc @ 01b33bdc size=176 calls_out=2 calls_in=3
// strings: 

void FUN_01b33bdc(int param_1,int param_2,uint param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  
  if (param_3 >> 5 < param_4) {
    uVar2 = param_3 >> 5;
    param_3 = param_3 & 0x1f;
    iVar1 = (param_4 - uVar2) * 4;
    puVar3 = (uint *)(param_2 + uVar2 * 4);
    if (param_3 == 0) {
      FUN_01b265f4(param_1,puVar3,iVar1);
    }
    else {
      puVar5 = (uint *)(param_2 + param_4 * 4);
      puVar4 = (uint *)(param_1 + -4);
      while (puVar6 = puVar3 + 1, puVar5 != puVar6) {
        puVar4 = puVar4 + 1;
        *puVar4 = *puVar3 >> param_3 | *puVar6 << (0x20 - param_3 & 0xff);
        puVar3 = puVar6;
      }
      *(uint *)(param_1 + ((param_4 - 1) - uVar2) * 4) = puVar5[-1] >> param_3;
    }
    param_1 = param_1 + iVar1;
    param_4 = uVar2;
  }
  FUN_01b257dc(param_1,0,param_4 << 2);
  return;
}

