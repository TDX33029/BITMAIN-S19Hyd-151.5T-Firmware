// FUN_0066033c @ 0066033c size=384 calls_out=5 calls_in=3
// strings: 

void FUN_0066033c(int *param_1,int param_2,int param_3,uint param_4,uint param_5)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  int local_28;
  
  local_28 = *(int *)(param_2 + 8);
  if (local_28 != 0x40) {
                    /* WARNING: Subroutine does not return */
    FUN_01304210(0,&DAT_0056d744,&local_28,0);
  }
  iVar6 = *(int *)(param_2 + 0x10);
  uVar4 = iVar6 + param_5;
  if (uVar4 <= param_4) {
    if (uVar4 < param_5) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(param_5,uVar4,param_4,&DAT_01c03da8);
    }
    uVar4 = FUN_006602d8(param_2,param_3 + param_5,iVar6);
    iVar10 = *(int *)(param_2 + 4);
    iVar7 = *(int *)(param_2 + 0xc);
    iVar9 = *(int *)(param_2 + 0x14);
    while( true ) {
      iVar2 = iVar10 + (uVar4 & 0x3f) * 0xc;
      iVar5 = *(int *)(iVar2 + 8);
      if (iVar5 != 0) {
        iVar5 = iVar5 << 3;
        puVar8 = (undefined4 *)(*(int *)(iVar2 + 4) + 4);
        do {
          if ((puVar8[-1] == uVar4) &&
             (FUN_006604cc(param_1,*(undefined4 *)(iVar7 + 0xc),*(undefined4 *)(iVar7 + 0x10),
                           *puVar8,param_3,param_4,param_5), *param_1 != 0)) {
            return;
          }
          puVar8 = puVar8 + 2;
          iVar5 = iVar5 + -8;
        } while (iVar5 != 0);
      }
      uVar3 = param_5 + iVar6;
      if (param_4 <= uVar3) break;
      if (param_5 == param_4) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(param_4,param_4,&DAT_01c03db8);
      }
      pbVar1 = (byte *)(param_3 + param_5);
      param_5 = param_5 + 1;
      uVar4 = (uint)*(byte *)(param_3 + uVar3) + (uVar4 - iVar9 * (uint)*pbVar1) * 2;
    }
  }
  *param_1 = 0;
  return;
}

