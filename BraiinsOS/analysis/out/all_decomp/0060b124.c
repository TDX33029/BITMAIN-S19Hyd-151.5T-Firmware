// FUN_0060b124 @ 0060b124 size=240 calls_out=2 calls_in=1
// strings: 

void FUN_0060b124(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

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
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  if (param_5 != 0) {
    puVar3 = (undefined2 *)(param_4 + 2);
    param_5 = param_5 << 2;
    iVar4 = 0;
    iVar5 = 0x2e;
    do {
      FUN_0060b89c(local_40,param_2,param_3,*puVar3);
      if ((local_40[0] & 1) != 0) {
        uVar2 = 1;
        unaff_r4 = local_30;
        unaff_r5 = local_2c;
        goto LAB_0060b1f4;
      }
      psVar1 = puVar3 + -1;
      puVar3 = puVar3 + 2;
      if (*psVar1 == 1) {
        iVar5 = local_38;
        unaff_r5 = local_2c;
        unaff_r4 = local_30;
        iVar4 = local_34;
      }
      param_5 = param_5 + -4;
    } while (param_5 != 0);
    uVar2 = 0;
    local_34 = iVar4;
    local_38 = iVar5;
    if (iVar5 != 0x2e || iVar4 != 0) {
LAB_0060b1f4:
      *param_1 = uVar2;
      param_1[1] = 0;
      param_1[2] = local_38;
      param_1[3] = local_34;
      param_1[4] = unaff_r4;
      param_1[5] = unaff_r5;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00faa444(&DAT_01857880);
}

