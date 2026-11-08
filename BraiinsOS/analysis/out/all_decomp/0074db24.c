// FUN_0074db24 @ 0074db24 size=432 calls_out=5 calls_in=1
// strings: 

int * FUN_0074db24(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  undefined4 local_e0 [4];
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_ac;
  undefined1 local_a4;
  undefined1 local_a0;
  undefined1 local_9c;
  undefined2 local_98;
  undefined1 local_96;
  undefined1 local_92;
  undefined1 local_8e;
  undefined2 local_8a;
  undefined1 local_88;
  undefined1 local_84;
  undefined1 local_80;
  undefined2 local_7c;
  undefined1 local_7a;
  undefined1 local_76;
  undefined1 local_72;
  undefined2 local_6e;
  undefined1 local_6c;
  undefined1 local_68;
  undefined1 local_64;
  undefined2 local_60;
  undefined1 local_5e;
  undefined1 local_5a;
  undefined1 local_56;
  undefined2 local_52;
  undefined1 local_50;
  undefined1 local_4c;
  undefined1 local_48;
  undefined2 local_44;
  undefined1 local_42;
  undefined1 local_3e;
  undefined1 local_3a;
  undefined2 local_36;
  undefined1 local_34;
  undefined1 local_26;
  undefined2 local_25;
  undefined1 local_23;
  
  local_c0 = 4;
  local_34 = 4;
  local_cc = 1;
  local_3a = 3;
  local_3e = 3;
  uVar5 = 0;
  local_42 = 3;
  local_48 = 3;
  local_4c = 3;
  local_50 = 3;
  local_56 = 3;
  local_5a = 3;
  local_5e = 3;
  local_64 = 3;
  local_68 = 3;
  local_6c = 3;
  local_72 = 3;
  local_76 = 3;
  local_7a = 3;
  local_80 = 3;
  local_84 = 3;
  local_88 = 3;
  local_8e = 3;
  local_92 = 3;
  local_96 = 3;
  local_9c = 3;
  local_a0 = 3;
  local_a4 = 3;
  local_b8 = 0x80000001;
  local_23 = 2;
  local_e0[0] = 2;
  local_bc = 0;
  local_c4 = 0;
  local_c8 = 0;
  local_d0 = 0;
  local_ac = 0;
  local_25 = 0x202;
  local_36 = 0;
  local_44 = 0;
  local_52 = 0;
  local_60 = 0;
  local_6e = 0;
  local_7c = 0;
  local_8a = 0;
  local_98 = 0;
  local_26 = 0;
  piVar1 = (int *)thunk_FUN_016d4a50(0xc0);
  if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0xc0);
  }
  FUN_016dd1aa(piVar1,local_e0,0xc0);
  iVar6 = param_1[2];
  if (iVar6 < 0) {
LAB_0074dc30:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar5,iVar6);
  }
  iVar7 = param_1[1];
  if (iVar6 == 0) {
    iVar2 = 1;
    iVar4 = 0;
  }
  else {
    iVar2 = thunk_FUN_016d4a50(iVar6);
    if (iVar2 == 0) {
      uVar5 = 1;
      goto LAB_0074dc30;
    }
    iVar4 = iVar6;
  }
  FUN_016dd1aa(iVar2,iVar7,iVar6);
  iVar3 = *piVar1;
  bVar8 = iVar3 != 2;
  if (bVar8) {
    iVar3 = piVar1[1];
  }
  if (bVar8 && iVar3 != 0) {
    thunk_FUN_016d3fb4(piVar1[2]);
  }
  iVar3 = *param_1;
  *piVar1 = 0;
  piVar1[1] = iVar4;
  piVar1[2] = iVar2;
  piVar1[3] = iVar6;
  if (iVar3 != 0) {
    thunk_FUN_016d3fb4(iVar7);
  }
  return piVar1;
}

