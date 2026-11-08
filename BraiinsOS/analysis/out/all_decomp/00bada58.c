// FUN_00bada58 @ 00bada58 size=188 calls_out=4 calls_in=1
// strings: 

void FUN_00bada58(int *param_1,undefined4 *param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  undefined1 auStack_30 [16];
  
  piVar4 = (int *)*param_2;
  iVar5 = param_2[1];
  iVar6 = iVar5;
  if (*param_1 != param_1[1]) {
    iVar7 = param_2[2];
    *param_1 = 1;
    uVar10 = *(undefined4 *)(param_1[2] + 4);
    iVar9 = *(int *)(param_1[2] + 8);
    if (param_1[1] != 1) {
      FUN_00c61fa4(auStack_30,uVar10,iVar9);
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0xbadb14);
      (*pcVar1)();
    }
    uVar2 = 0;
    if (iVar9 < 0) {
LAB_00bada9c:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(uVar2,iVar9);
    }
    if (iVar9 == 0) {
      iVar11 = 0;
      iVar3 = 1;
    }
    else {
      iVar3 = thunk_FUN_016d4a50(iVar9);
      iVar11 = iVar9;
      if (iVar3 == 0) {
        uVar2 = 1;
        goto LAB_00bada9c;
      }
    }
    FUN_016dd1aa(iVar3,uVar10,iVar9);
    iVar6 = iVar5 + 1;
    piVar8 = (int *)(iVar7 + iVar5 * 0xc);
    *piVar8 = iVar11;
    piVar8[1] = iVar3;
    piVar8[2] = iVar9;
  }
  *piVar4 = iVar6;
  return;
}

