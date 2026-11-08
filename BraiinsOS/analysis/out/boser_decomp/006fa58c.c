// FUN_006fa58c @ 006fa58c size=252 calls_out=6 calls_in=5
// strings: internal error: entered unreachable code

void FUN_006fa58c(int *param_1,undefined4 *param_2,char param_3)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  int local_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  
  uVar5 = param_2[4];
  if ((uint)param_2[5] <= uVar5) {
LAB_006fa644:
    *param_1 = 0;
    return;
  }
  piVar6 = (int *)*param_2;
  iVar3 = *piVar6;
  *piVar6 = iVar3 + 1;
  if (iVar3 != -1) {
    piVar7 = (int *)param_2[3];
    iVar3 = *piVar7;
    *piVar7 = iVar3 + 1;
    if (iVar3 != -1) {
      uVar5 = FUN_006fb3b4(piVar6,uVar5);
      if ((uint)piVar6[4] <= uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar5,piVar6[4],&DAT_01c06500);
      }
      pcVar4 = (char *)(piVar6[3] + uVar5 * 0x14);
      if (*pcVar4 == '\0') {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01c06510);
      }
      cVar2 = pcVar4[1];
      FUN_006f6e98(piVar6,piVar7);
      if (cVar2 == param_3) {
        FUN_006fb748(&local_38,param_2);
        if (local_38 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0cc(&DAT_01c062c0);
        }
        *param_1 = local_38;
        param_1[1] = iStack_34;
        param_1[2] = iStack_30;
        param_1[3] = iStack_2c;
        param_1[4] = iStack_28;
        return;
      }
      goto LAB_006fa644;
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x6fa688);
  (*pcVar1)();
}

