// FUN_0169c7a0 @ 0169c7a0 size=212 calls_out=3 calls_in=2
// strings: 

void FUN_0169c7a0(uint *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined4 uVar5;
  uint local_30;
  uint local_2c;
  
  if (param_3 - param_2 == 0) {
    uVar4 = 0;
    local_2c = 4;
    local_30 = 0;
  }
  else {
    local_30 = (uint)(param_3 - param_2) >> 5;
    local_2c = thunk_FUN_016d4a50(local_30 * 0xc);
    if (local_2c == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,local_30 * 0xc);
    }
    piVar3 = (int *)(local_2c + 8);
    uVar4 = 0;
    do {
      iVar1 = param_2 + uVar4 * 0x20;
      uVar5 = *(undefined4 *)(iVar1 + 0x14);
      iVar1 = *(int *)(iVar1 + 0x18);
      if (iVar1 == 0) {
        iVar2 = 1;
      }
      else {
        iVar2 = thunk_FUN_016d4a50(iVar1);
        if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(1,iVar1);
        }
      }
      FUN_016dd1aa(iVar2,uVar5,iVar1);
      uVar4 = uVar4 + 1;
      piVar3[-2] = iVar1;
      *piVar3 = iVar1;
      piVar3[-1] = iVar2;
      piVar3 = piVar3 + 3;
    } while (local_30 != uVar4);
  }
  *param_1 = local_30;
  param_1[1] = local_2c;
  param_1[2] = uVar4;
  return;
}

