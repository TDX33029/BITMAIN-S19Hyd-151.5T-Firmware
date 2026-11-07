// FUN_00639b9c @ 00639b9c size=472 calls_out=5 calls_in=1
// strings: 

void FUN_00639b9c(int param_1,undefined4 *param_2)

{
  code *pcVar1;
  bool bVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  int unaff_r10;
  undefined4 uVar9;
  int local_118;
  int local_108;
  int local_104;
  int local_100;
  int local_fc;
  int local_f8;
  int local_f4;
  int local_f0;
  int iStack_ec;
  int iStack_e8;
  int iStack_e4;
  int local_e0;
  int iStack_dc;
  int iStack_d8;
  int iStack_d4;
  short local_d0;
  undefined1 auStack_ce [30];
  undefined1 local_b0;
  undefined1 local_af;
  undefined1 auStack_a8 [132];
  
  piVar4 = (int *)*param_2;
  do {
    piVar3 = piVar4;
    if (piVar3 == (int *)param_2[1]) {
      *(undefined1 **)(param_1 + 8) = &DAT_3b9aca00;
      return;
    }
    iVar5 = piVar3[0x16];
    *param_2 = piVar3 + 0x17;
    piVar4 = piVar3 + 0x17;
  } while ((char)iVar5 != '\0');
  uVar9 = param_2[2];
  iVar5 = -0x80000000;
  puVar6 = (undefined4 *)param_2[3];
  if (*piVar3 == -0x80000000) {
    iVar8 = -0x80000000;
  }
  else {
    iVar7 = piVar3[1];
    iVar8 = piVar3[2];
    if (iVar8 == 0) {
      local_118 = 1;
    }
    else {
      local_118 = thunk_FUN_016d4a50(iVar8);
      if (local_118 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,iVar8);
      }
    }
    FUN_016dd1aa(local_118,iVar7,iVar8);
  }
  if (piVar3[3] == -0x80000000) {
    local_d0 = (short)piVar3[0xe];
    local_af = *(undefined1 *)((int)piVar3 + 0x59);
  }
  else {
    iVar5 = piVar3[5];
    iVar7 = piVar3[4];
    if (iVar5 == 0) {
      unaff_r10 = 1;
    }
    else {
      unaff_r10 = thunk_FUN_016d4a50(iVar5);
      if (unaff_r10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,iVar5);
      }
    }
    FUN_016dd1aa(unaff_r10,iVar7,iVar5);
    local_d0 = (short)piVar3[0xe];
    local_af = *(undefined1 *)((int)piVar3 + 0x59);
  }
  if (local_d0 != 2) {
    FUN_016dd1aa(auStack_a8,(int)piVar3 + 0x3a,0x1e);
  }
  local_f0 = piVar3[6];
  iStack_ec = piVar3[7];
  iStack_e8 = piVar3[8];
  iStack_e4 = piVar3[9];
  local_e0 = piVar3[10];
  iStack_dc = piVar3[0xb];
  iStack_d8 = piVar3[0xc];
  iStack_d4 = piVar3[0xd];
  local_104 = local_118;
  local_b0 = 0;
  local_108 = iVar8;
  local_100 = iVar8;
  local_fc = iVar5;
  local_f8 = unaff_r10;
  local_f4 = iVar5;
  FUN_016dd1aa(auStack_ce,auStack_a8,0x1e);
  FUN_00639e30(auStack_a8,uVar9);
  piVar4 = (int *)*puVar6;
  do {
    iVar5 = *piVar4;
    bVar2 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar2);
  *piVar4 = iVar5 + 1;
  if (iVar5 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x639d70);
    (*pcVar1)();
  }
  FUN_0063ddf4(param_1,&local_108,auStack_a8);
  return;
}

