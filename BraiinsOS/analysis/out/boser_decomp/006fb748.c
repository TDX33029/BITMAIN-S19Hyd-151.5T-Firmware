// FUN_006fb748 @ 006fb748 size=192 calls_out=2 calls_in=11
// strings: internal error: entered unreachable code

void FUN_006fb748(undefined4 *param_1,undefined4 *param_2)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  undefined4 uVar8;
  
  uVar7 = param_2[4];
  if ((uint)param_2[5] <= uVar7) {
    *param_1 = 0;
    return;
  }
  piVar5 = (int *)*param_2;
  iVar2 = *piVar5;
  *piVar5 = iVar2 + 1;
  if (iVar2 != -1) {
    piVar6 = (int *)param_2[3];
    uVar3 = param_2[1];
    uVar8 = param_2[2];
    iVar2 = *piVar6;
    *piVar6 = iVar2 + 1;
    if (iVar2 != -1) {
      if ((uint)piVar5[4] <= uVar7) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar7,piVar5[4],&DAT_01c06300);
      }
      pcVar4 = (char *)(piVar5[3] + uVar7 * 0x14);
      if (*pcVar4 == '\x01') {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01c06310);
      }
      param_1[1] = uVar3;
      param_1[2] = uVar8;
      *param_1 = piVar5;
      param_1[3] = piVar6;
      param_1[4] = uVar7;
      param_2[4] = *(int *)(pcVar4 + 4) + 1;
      param_2[6] = param_2[6] + -1;
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x6fb808);
  (*pcVar1)();
}

