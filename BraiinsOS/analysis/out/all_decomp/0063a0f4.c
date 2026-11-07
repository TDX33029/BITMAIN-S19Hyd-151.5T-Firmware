// FUN_0063a0f4 @ 0063a0f4 size=460 calls_out=5 calls_in=1
// strings: 

void FUN_0063a0f4(int param_1,undefined4 *param_2)

{
  code *pcVar1;
  undefined1 uVar2;
  bool bVar3;
  int *piVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  int unaff_r11;
  int local_11c;
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
  char local_b0;
  undefined1 local_af;
  undefined1 auStack_a8 [132];
  
  piVar5 = (int *)*param_2;
  do {
    piVar4 = piVar5;
    if (piVar4 == (int *)param_2[1]) {
      *(undefined1 **)(param_1 + 8) = &DAT_3b9aca00;
      return;
    }
    iVar8 = piVar4[0x16];
    *param_2 = piVar4 + 0x17;
    piVar5 = piVar4 + 0x17;
  } while ((char)iVar8 == '\0');
  uVar9 = param_2[2];
  iVar11 = -0x80000000;
  puVar6 = (undefined4 *)param_2[3];
  if (*piVar4 == -0x80000000) {
    iVar7 = -0x80000000;
  }
  else {
    iVar7 = piVar4[2];
    unaff_r11 = piVar4[1];
    if (iVar7 == 0) {
      local_11c = 1;
    }
    else {
      local_11c = thunk_FUN_016d4a50(iVar7);
      if (local_11c == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,iVar7);
      }
    }
    FUN_016dd1aa(local_11c,unaff_r11,iVar7);
  }
  if (piVar4[3] != -0x80000000) {
    iVar10 = piVar4[4];
    iVar11 = piVar4[5];
    if (iVar11 == 0) {
      unaff_r11 = 1;
    }
    else {
      unaff_r11 = thunk_FUN_016d4a50(iVar11);
      if (unaff_r11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,iVar11);
      }
    }
    FUN_016dd1aa(unaff_r11,iVar10,iVar11);
  }
  iVar10 = piVar4[0xe];
  uVar2 = *(undefined1 *)((int)piVar4 + 0x59);
  if ((short)iVar10 != 2) {
    FUN_016dd1aa(auStack_a8,(int)piVar4 + 0x3a,0x1e);
  }
  local_f0 = piVar4[6];
  iStack_ec = piVar4[7];
  iStack_e8 = piVar4[8];
  iStack_e4 = piVar4[9];
  local_e0 = piVar4[10];
  iStack_dc = piVar4[0xb];
  iStack_d8 = piVar4[0xc];
  iStack_d4 = piVar4[0xd];
  local_104 = local_11c;
  local_108 = iVar7;
  local_100 = iVar7;
  local_fc = iVar11;
  local_f8 = unaff_r11;
  local_f4 = iVar11;
  local_d0 = (short)iVar10;
  local_b0 = (char)iVar8;
  local_af = uVar2;
  FUN_016dd1aa(auStack_ce,auStack_a8,0x1e);
  FUN_00639e30(auStack_a8,uVar9);
  piVar5 = (int *)*puVar6;
  do {
    iVar8 = *piVar5;
    bVar3 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar3);
  *piVar5 = iVar8 + 1;
  if (iVar8 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x63a2bc);
    (*pcVar1)();
  }
  FUN_0063ddf4(param_1,&local_108,auStack_a8);
  return;
}

