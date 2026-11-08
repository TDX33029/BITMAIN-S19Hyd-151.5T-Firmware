// FUN_016d3634 @ 016d3634 size=196 calls_out=2 calls_in=4
// strings: /proc/self/exe

/* WARNING: Removing unreachable block (ram,0x016d36ae) */

void FUN_016d3634(code *param_1,undefined4 param_2)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  int *piVar7;
  undefined4 local_e8;
  int local_e4;
  int local_e0;
  char *local_dc;
  int *local_d8;
  undefined2 local_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  uint auStack_b8 [3];
  int *local_ac;
  int local_a8;
  int iStack_a4;
  
  FUN_016dd606(auStack_b8,0,0x98);
  puVar1 = DAT_018ddb10;
  while( true ) {
    puVar5 = puVar1;
    uVar4 = *puVar5;
    if (uVar4 == 0) break;
    puVar1 = puVar5 + 2;
    if (uVar4 < 0x26) {
      auStack_b8[uVar4] = puVar5[1];
    }
  }
  piVar2 = (int *)0x0;
  local_e0 = 0;
  piVar7 = local_ac;
  for (iVar6 = iStack_a4; iVar6 != 0; iVar6 = iVar6 + -1) {
    iVar3 = *piVar7;
    if (iVar3 == 6) {
      local_e0 = (int)local_ac - piVar7[2];
    }
    else if ((iVar3 != 2) && (iVar3 == 7)) {
      piVar2 = piVar7;
    }
    piVar7 = (int *)((int)piVar7 + local_a8);
  }
  local_d8 = local_ac;
  local_d4 = (undefined2)iStack_a4;
  local_dc = "/proc/self/exe";
  local_d0 = 0;
  uStack_cc = 0;
  local_c8 = 0;
  uStack_c4 = 0;
  if (piVar2 == (int *)0x0) {
    local_c0 = 0;
    local_bc = 0;
  }
  else {
    local_c0 = 1;
    local_e8 = 1;
    local_e4 = iVar6;
    local_bc = FUN_016ddfac(&local_e8);
  }
  (*param_1)(&local_e0,0x28,param_2);
  return;
}

