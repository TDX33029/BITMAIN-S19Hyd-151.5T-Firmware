// FUN_0188f728 @ 0188f728 size=204 calls_out=4 calls_in=2
// strings: 

void FUN_0188f728(undefined4 *param_1,int param_2,int param_3)

{
  int iVar1;
  uint *extraout_r1;
  uint *puVar2;
  undefined4 uVar3;
  int iVar4;
  bool bVar5;
  int local_20;
  int local_1c;
  
  local_20 = param_1[1];
  local_1c = param_3;
  if (local_20 != param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_01304210(0,&local_20,&local_1c,0);
  }
  uVar3 = *param_1;
  FUN_01895fcc(param_2,param_3,uVar3,param_3);
  iVar1 = param_1[4];
  if (iVar1 != param_3 * 0x20) {
    bVar5 = param_3 == 0;
    puVar2 = extraout_r1;
    if (!bVar5) {
      puVar2 = (uint *)(param_2 + param_3 * 4 + -4);
      bVar5 = puVar2 == (uint *)0x0;
    }
    if (bVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01d211c4);
    }
    iVar4 = iVar1 + param_3 * -0x20;
    *puVar2 = *puVar2 & 0xffffffffU >> (-iVar1 & 0x1fU);
    do {
      FUN_01895e88(param_2,param_3,uVar3,param_3);
      bVar5 = iVar4 != -1;
      iVar4 = iVar4 + 1;
    } while (bVar5);
  }
  return;
}

