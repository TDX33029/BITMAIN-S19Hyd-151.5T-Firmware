// FUN_01b2b99c @ 01b2b99c size=164 calls_out=3 calls_in=4
// strings: 

void FUN_01b2b99c(undefined4 *param_1,int param_2,byte *param_3,uint param_4)

{
  undefined4 uVar1;
  uint *puVar2;
  uint *puVar3;
  byte *pbVar5;
  byte *pbVar4;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  
  if ((uint)(param_2 * 4) < param_4) {
                    /* WARNING: Subroutine does not return */
    FUN_01be32a0();
  }
  uVar6 = param_4;
  puVar8 = param_1;
  while (3 < uVar6) {
    uVar6 = uVar6 - 4;
    uVar1 = FUN_01b27554(param_3 + uVar6);
    *puVar8 = uVar1;
    puVar8 = puVar8 + 1;
  }
  uVar6 = param_4 >> 2;
  param_2 = param_2 - uVar6;
  iVar7 = uVar6 * -4 + param_4;
  puVar2 = param_1 + uVar6;
  puVar3 = puVar2;
  if (iVar7 != 0) {
    uVar6 = 0;
    pbVar5 = param_3;
    do {
      pbVar4 = pbVar5 + 1;
      uVar6 = (uint)*pbVar5 | uVar6 << 8;
      pbVar5 = pbVar4;
    } while (pbVar4 != param_3 + iVar7);
    param_2 = param_2 + -1;
    puVar3 = puVar2 + 1;
    *puVar2 = uVar6;
  }
  FUN_01b257dc(puVar3,0,param_2 << 2);
  return;
}

