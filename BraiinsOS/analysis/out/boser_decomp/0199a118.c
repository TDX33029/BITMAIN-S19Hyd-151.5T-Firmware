// FUN_0199a118 @ 0199a118 size=256 calls_out=2 calls_in=1
// strings: 

void FUN_0199a118(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  short *psVar1;
  undefined4 uVar2;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined2 *puVar3;
  int iVar4;
  int iVar5;
  uint local_40 [2];
  int local_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  
  if (param_5 != 0) {
    puVar3 = (undefined2 *)(param_4 + 2);
    param_5 = param_5 << 2;
    iVar5 = 0;
    iVar4 = 0x2e;
    do {
      FUN_0199a654(local_40,param_2,param_3,*puVar3);
      if ((local_40[0] & 1) != 0) {
        uVar2 = 1;
        unaff_r4 = local_30;
        unaff_r5 = uStack_2c;
        goto LAB_0199a1fc;
      }
      psVar1 = puVar3 + -1;
      puVar3 = puVar3 + 2;
      if (*psVar1 == 1) {
        iVar4 = local_38;
        unaff_r4 = local_30;
        unaff_r5 = uStack_2c;
        iVar5 = iStack_34;
      }
      param_5 = param_5 + -4;
    } while (param_5 != 0);
    uVar2 = 0;
    local_38 = iVar4;
    iStack_34 = iVar5;
    if (iVar4 != 0x2e || iVar5 != 0) {
LAB_0199a1fc:
      *param_1 = uVar2;
      param_1[1] = 0;
      param_1[2] = local_38;
      param_1[3] = iStack_34;
      param_1[4] = unaff_r4;
      param_1[5] = unaff_r5;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012fb0cc(&DAT_01d28080);
}

