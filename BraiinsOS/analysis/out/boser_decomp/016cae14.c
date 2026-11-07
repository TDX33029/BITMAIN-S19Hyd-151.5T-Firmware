// FUN_016cae14 @ 016cae14 size=208 calls_out=2 calls_in=2
// strings: 

void FUN_016cae14(undefined4 *param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  uint local_20 [2];
  
  if (param_3 != 0) {
    iVar6 = param_3 << 3;
    uVar1 = param_3 * 2;
    iVar2 = 0;
    do {
      if (param_3 == iVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01d097d8);
      }
      piVar5 = (int *)(param_2 + iVar2 * 8);
      iVar3 = *piVar5;
      uVar4 = piVar5[1];
      if ((CARRY4(uVar4,uVar1)) || (0x7ffffffe < uVar4 + uVar1)) {
        *param_1 = 0x80000001;
        param_1[1] = iVar2;
        param_1[2] = (uVar4 - iVar3 >> 1) + 1;
        return;
      }
      local_20[0] = iVar3 + uVar1;
      piVar5[1] = uVar4 + uVar1;
      if (0x7ffffffe < local_20[0]) {
        local_20[1] = 0;
                    /* WARNING: Subroutine does not return */
        FUN_013073dc(&DAT_00533467,0x2b,local_20,&DAT_01d09948,&DAT_01d098a8);
      }
      *(uint *)(param_2 + iVar2 * 8) = local_20[0];
      iVar2 = iVar2 + 1;
      iVar6 = iVar6 + -8;
    } while (iVar6 != 0);
  }
  *param_1 = &DAT_80000004;
  return;
}

