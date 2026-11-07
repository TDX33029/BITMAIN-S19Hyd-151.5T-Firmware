// FUN_0076e530 @ 0076e530 size=256 calls_out=4 calls_in=0
// strings: 

void FUN_0076e530(int *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int local_e8;
  int iStack_e4;
  int iStack_e0;
  int local_dc;
  int local_d8;
  int local_d4;
  int local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  int iStack_c0;
  int local_bc;
  
  local_e8 = -0x80000000;
  iVar3 = FUN_00783a20(&local_e8);
  local_d8 = FUN_013cec90(0);
  local_bc = 0;
  local_c4 = 0;
  local_c8 = 1;
  local_cc = -0x80000000;
  local_d0 = 0x20;
  iStack_e4 = 1;
  local_e8 = 1;
  iStack_e0 = iVar3;
  local_dc = iVar3;
  local_d4 = local_d8;
  piVar4 = (int *)thunk_FUN_01be5118(0x30);
  if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x30);
  }
  *piVar4 = local_e8;
  piVar4[1] = iStack_e4;
  piVar4[2] = iStack_e0;
  piVar4[3] = local_dc;
  piVar4[4] = local_d8;
  piVar4[5] = local_d4;
  piVar4[6] = local_d0;
  piVar4[7] = local_cc;
  piVar4[8] = local_c8;
  piVar4[9] = local_c4;
  piVar4[10] = iStack_c0;
  piVar4[0xb] = local_bc;
  do {
    iVar3 = *piVar4;
    bVar2 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar2);
  *piVar4 = iVar3 + 1;
  if (iVar3 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x76e630);
    (*pcVar1)();
  }
  puVar5 = (undefined4 *)thunk_FUN_01be5118(0x1c);
  if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x1c);
  }
  puVar5[6] = 0;
  *puVar5 = 1;
  puVar5[1] = 1;
  puVar5[2] = 0;
  puVar5[3] = 0;
  puVar5[4] = 0;
  param_1[3] = (int)piVar4;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = (int)piVar4;
  param_1[1] = (int)puVar5;
  return;
}

