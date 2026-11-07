// FUN_0166b99c @ 0166b99c size=548 calls_out=8 calls_in=2
// strings: 

void FUN_0166b99c(int *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int **ppiVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  undefined8 uVar10;
  int *local_dc;
  int local_d8;
  int *local_d4;
  int local_d0;
  int iStack_cc;
  int iStack_c8;
  int iStack_c4;
  int iStack_c0;
  int iStack_bc;
  int local_b8;
  int iStack_b4;
  int iStack_b0;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  int local_5c;
  int *local_58 [13];
  
  iVar3 = FUN_0166e6f8(param_11,param_4);
  if (iVar3 != 0) {
    *param_1 = -0x7ffffff6;
    return;
  }
  uVar10 = FUN_01673048(param_10,param_4);
  if ((int)uVar10 == 0) {
    piVar9 = (int *)*param_2;
    do {
      iVar3 = *piVar9;
      bVar2 = (bool)hasExclusiveAccess(piVar9);
    } while (!bVar2);
    *piVar9 = iVar3 + 1;
    if (iVar3 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x166bbbc);
      (*pcVar1)();
    }
  }
  else {
    FUN_0166956c(&local_d8,*param_2,(int)uVar10,(int)((ulonglong)uVar10 >> 0x20),param_7);
    piVar9 = local_d4;
    if (local_d8 != -0x7ffffff6) {
      param_1[2] = local_d0;
      param_1[3] = iStack_cc;
      param_1[4] = iStack_c8;
      param_1[5] = iStack_c4;
      param_1[6] = iStack_c0;
      param_1[7] = iStack_bc;
      param_1[8] = local_b8;
      param_1[9] = iStack_b4;
      param_1[10] = iStack_b0;
      param_1[0xb] = iStack_ac;
      param_1[0xc] = iStack_a8;
      param_1[0xd] = iStack_a4;
      *param_1 = local_d8;
      param_1[1] = (int)local_d4;
      return;
    }
  }
  local_dc = piVar9;
  FUN_01669780(&local_d8,&local_dc,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
               param_11);
  if (local_d8 == -0x7ffffff6) {
    FUN_01672bf0(&local_d8,param_10,param_4);
    do {
      iVar3 = FUN_01674bcc(&local_d8);
      if (iVar3 == 0) {
        *param_1 = -0x7ffffff6;
        DataMemoryBarrier(0xb);
        do {
          iVar3 = *piVar9;
          bVar2 = (bool)hasExclusiveAccess(piVar9);
        } while (!bVar2);
        *piVar9 = iVar3 + -1;
        goto LAB_0166bba0;
      }
      FUN_0166b99c(&local_5c,&local_dc,param_3,iVar3,param_5,param_6,param_7,param_8,param_9,
                   param_10,param_11);
    } while (local_5c == -0x7ffffff6);
    ppiVar4 = local_58;
  }
  else {
    ppiVar4 = &local_d4;
    local_5c = local_d8;
  }
  piVar5 = ppiVar4[1];
  piVar6 = ppiVar4[2];
  piVar7 = ppiVar4[3];
  param_1[1] = (int)*ppiVar4;
  param_1[2] = (int)piVar5;
  param_1[3] = (int)piVar6;
  param_1[4] = (int)piVar7;
  piVar5 = ppiVar4[5];
  piVar6 = ppiVar4[6];
  piVar7 = ppiVar4[7];
  param_1[5] = (int)ppiVar4[4];
  param_1[6] = (int)piVar5;
  param_1[7] = (int)piVar6;
  param_1[8] = (int)piVar7;
  piVar5 = ppiVar4[9];
  piVar6 = ppiVar4[10];
  piVar7 = ppiVar4[0xb];
  piVar8 = ppiVar4[0xc];
  param_1[9] = (int)ppiVar4[8];
  param_1[10] = (int)piVar5;
  param_1[0xb] = (int)piVar6;
  param_1[0xc] = (int)piVar7;
  param_1[0xd] = (int)piVar8;
  *param_1 = local_5c;
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar9;
    bVar2 = (bool)hasExclusiveAccess(piVar9);
  } while (!bVar2);
  *piVar9 = iVar3 + -1;
LAB_0166bba0:
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01670d04(piVar9);
  }
  return;
}

