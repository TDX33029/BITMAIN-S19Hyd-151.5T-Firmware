// FUN_016bce90 @ 016bce90 size=248 calls_out=3 calls_in=0
// strings: 

uint FUN_016bce90(int param_1,uint param_2,int param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  int local_c;
  
  uVar3 = *(uint *)(param_1 + 8);
  if (uVar3 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(param_2,uVar3,uVar3,&DAT_01d09230);
  }
  uVar3 = uVar3 - param_2;
  local_c = param_3;
  if (uVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(0,0,&DAT_01d08f28);
  }
  pbVar4 = (byte *)(*(int *)(param_1 + 4) + param_2 * 4);
  bVar1 = *pbVar4;
  if (bVar1 == 0xff) {
    uVar2 = *(int *)(param_1 + 0x28) + 2;
  }
  else {
    iVar5 = (uint)bVar1 + (uint)(bVar1 >> 2);
    uVar2 = iVar5 + 2;
    if ((bVar1 & 3) != 0) {
      uVar2 = iVar5 + 3;
    }
  }
  if (uVar3 <= uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(uVar2,uVar3,&DAT_01d08ef8);
  }
  if ((int)*(uint *)(pbVar4 + uVar2 * 4) < 0) {
    if (param_3 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01304210(0,&DAT_00533278,&local_c,0);
    }
    uVar3 = *(uint *)(pbVar4 + uVar2 * 4) & 0x7fffffff;
  }
  else {
    uVar2 = param_3 + uVar2 + 1;
    if (uVar3 <= uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar2,uVar3,&DAT_01d08f08);
    }
    uVar3 = *(uint *)(pbVar4 + uVar2 * 4);
  }
  return uVar3;
}

