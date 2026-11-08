// FUN_00653614 @ 00653614 size=160 calls_out=2 calls_in=4
// strings: 

void FUN_00653614(undefined4 *param_1,int *param_2,uint param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  uint local_28 [2];
  
  if (0x7ffffffe < param_3) {
    local_28[1] = 0;
    local_28[0] = param_3;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_003d3ec4,0x34,local_28,&DAT_01c03638,&DAT_01c03278);
  }
  iVar4 = param_2[2];
  iVar3 = param_2[0x56];
  if (iVar4 == *param_2) {
    FUN_0161d664(param_2);
  }
  param_2[2] = iVar4 + 1;
  iVar1 = param_2[1];
  *param_1 = 3;
  param_1[1] = iVar4;
  puVar2 = (undefined4 *)(iVar1 + iVar4 * 0x14);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = iVar3;
  puVar2[4] = param_3;
  return;
}

