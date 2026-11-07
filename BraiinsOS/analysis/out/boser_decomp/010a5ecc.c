// FUN_010a5ecc @ 010a5ecc size=384 calls_out=9 calls_in=2
// strings: 

int FUN_010a5ecc(undefined4 param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined *local_138;
  undefined2 *local_134;
  int local_c8;
  undefined4 uStack_c4;
  undefined *puStack_c0;
  int *local_b8;
  undefined1 *local_b4;
  int local_b0;
  int *local_ac;
  undefined *local_a8 [33];
  
  local_138 = &DAT_01c1e170;
  local_134 = &DAT_0132b6a0;
  FUN_00664898(&local_b0,&DAT_00574ea5,&local_138);
  puVar3 = local_a8[0];
  piVar2 = local_ac;
  iVar1 = local_b0;
  iVar5 = *param_2;
  if (iVar5 == 2) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0cc(&DAT_01c1b018);
  }
  iVar4 = param_2[4];
  FUN_00711858(&local_138,param_1);
  local_ac = (int *)thunk_FUN_01be5118(0x14);
  if (local_ac == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x14);
  }
  *local_ac = iVar5;
  iVar5 = param_2[2];
  iVar6 = param_2[3];
  local_ac[1] = param_2[1];
  local_ac[2] = iVar5;
  local_ac[3] = iVar6;
  local_ac[4] = iVar4;
  local_a8[0] = &DAT_01c1c8e8;
  local_b0 = 3;
  FUN_00ff5734(&local_c8,&local_138,piVar2,puVar3,&local_b0);
  if (local_c8 != -0x7fffffff) {
    local_b0 = local_c8;
    local_ac = (int *)uStack_c4;
    local_a8[0] = puStack_c0;
    local_b4 = &LAB_012b97d8;
    local_b8 = &local_b0;
                    /* WARNING: Subroutine does not return */
    FUN_012fb100(&DAT_00590e5f,&local_b8,&DAT_01c1d24c);
  }
  FUN_01bed4e2(local_a8,&local_138,0x70);
  local_ac = (int *)0x1;
  local_b0 = 1;
  iVar5 = thunk_FUN_01be5118(0x78);
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x78);
  }
  FUN_01bed4e2(iVar5,&local_b0,0x78);
  FUN_019bb7e0(iVar1,piVar2);
  return iVar5;
}

