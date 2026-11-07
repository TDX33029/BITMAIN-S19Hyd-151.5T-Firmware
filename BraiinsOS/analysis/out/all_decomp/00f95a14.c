// FUN_00f95a14 @ 00f95a14 size=336 calls_out=5 calls_in=3
// strings: 

void FUN_00f95a14(undefined1 param_1,undefined4 param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  undefined4 local_d0 [4];
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_9c;
  undefined1 local_94;
  undefined1 local_90;
  undefined1 local_8c;
  undefined2 local_88;
  undefined1 local_86;
  undefined1 local_82;
  undefined1 local_7e;
  undefined2 local_7a;
  undefined1 local_78;
  undefined1 local_74;
  undefined1 local_70;
  undefined2 local_6c;
  undefined1 local_6a;
  undefined1 local_66;
  undefined1 local_62;
  undefined2 local_5e;
  undefined1 local_5c;
  undefined1 local_58;
  undefined1 local_54;
  undefined2 local_50;
  undefined1 local_4e;
  undefined1 local_4a;
  undefined1 local_46;
  undefined2 local_42;
  undefined1 local_40;
  undefined1 local_3c;
  undefined1 local_38;
  undefined2 local_34;
  undefined1 local_32;
  undefined1 local_2e;
  undefined1 local_2a;
  undefined2 local_26;
  undefined1 local_24;
  undefined1 local_16;
  undefined2 local_15;
  undefined1 local_13;
  
  local_d0[0] = 2;
  local_15 = 0x202;
  local_2a = 3;
  local_2e = 3;
  local_32 = 3;
  local_38 = 3;
  local_3c = 3;
  local_40 = 3;
  local_46 = 3;
  local_4a = 3;
  local_4e = 3;
  local_54 = 3;
  local_58 = 3;
  local_5c = 3;
  local_62 = 3;
  local_66 = 3;
  local_6a = 3;
  local_70 = 3;
  local_74 = 3;
  local_78 = 3;
  local_7e = 3;
  local_82 = 3;
  local_86 = 3;
  local_8c = 3;
  local_90 = 3;
  local_94 = 3;
  local_a8 = 0x80000001;
  local_ac = 0;
  local_b0 = 4;
  local_b4 = 0;
  local_b8 = 0;
  local_bc = 1;
  local_c0 = 0;
  local_9c = 0;
  local_24 = 4;
  local_26 = 0;
  local_34 = 0;
  local_42 = 0;
  local_50 = 0;
  local_5e = 0;
  local_6c = 0;
  local_7a = 0;
  local_88 = 0;
  local_16 = 0;
  local_13 = param_1;
  piVar1 = (int *)thunk_FUN_016d4a50(0xc0);
  if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0xc0);
  }
  FUN_016dd1aa(piVar1,local_d0,0xc0);
  iVar2 = *piVar1;
  bVar5 = iVar2 != 2;
  if (bVar5) {
    iVar2 = piVar1[1];
  }
  if (bVar5 && iVar2 != 0) {
    thunk_FUN_016d3fb4(piVar1[2]);
  }
  iVar2 = *param_3;
  iVar3 = param_3[1];
  iVar4 = param_3[2];
  *piVar1 = 1;
  piVar1[1] = iVar2;
  piVar1[2] = iVar3;
  piVar1[3] = iVar4;
  FUN_00f9545c(piVar1,param_2);
  return;
}

