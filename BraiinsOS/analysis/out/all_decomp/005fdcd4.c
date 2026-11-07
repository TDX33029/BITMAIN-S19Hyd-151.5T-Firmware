// FUN_005fdcd4 @ 005fdcd4 size=384 calls_out=4 calls_in=2
// strings: 

void FUN_005fdcd4(int *param_1,int param_2,int param_3,uint param_4,uint param_5)

{
  int iVar1;
  uint uVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int local_28;
  
  local_28 = *(int *)(param_2 + 8);
  if (local_28 != 0x40) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb3aac(0,&DAT_00567914,&local_28,0);
  }
  iVar10 = *(int *)(param_2 + 0x10);
  uVar5 = iVar10 + param_5;
  if (uVar5 <= param_4) {
    if (uVar5 < param_5) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(param_5,uVar5,param_4,&DAT_018573f8);
    }
    if (iVar10 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = 0;
      pbVar3 = (byte *)(param_3 + param_5);
      iVar7 = iVar10;
      do {
        iVar7 = iVar7 + -1;
        uVar5 = (uint)*pbVar3 + uVar5 * 2;
        pbVar3 = pbVar3 + 1;
      } while (iVar7 != 0);
    }
    iVar7 = *(int *)(param_2 + 4);
    uVar8 = *(undefined4 *)(param_2 + 0xc);
    iVar9 = *(int *)(param_2 + 0x14);
    local_28 = 0x40;
    while( true ) {
      iVar1 = iVar7 + (uVar5 & 0x3f) * 0xc;
      iVar4 = *(int *)(iVar1 + 8);
      if (iVar4 != 0) {
        iVar4 = iVar4 << 3;
        puVar6 = (undefined4 *)(*(int *)(iVar1 + 4) + 4);
        do {
          if ((puVar6[-1] == uVar5) &&
             (FUN_005fde64(param_1,uVar8,*puVar6,param_3,param_4,param_5), *param_1 != 0)) {
            return;
          }
          puVar6 = puVar6 + 2;
          iVar4 = iVar4 + -8;
        } while (iVar4 != 0);
      }
      uVar2 = param_5 + iVar10;
      if (param_4 <= uVar2) break;
      if (param_5 == param_4) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(param_4,param_4,&DAT_018573e8);
      }
      pbVar3 = (byte *)(param_3 + param_5);
      param_5 = param_5 + 1;
      uVar5 = (uint)*(byte *)(param_3 + uVar2) + (uVar5 - iVar9 * (uint)*pbVar3) * 2;
    }
  }
  *param_1 = 0;
  return;
}

