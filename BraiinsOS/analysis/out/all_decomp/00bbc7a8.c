// FUN_00bbc7a8 @ 00bbc7a8 size=388 calls_out=5 calls_in=1
// strings: 

int * FUN_00bbc7a8(undefined1 param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  undefined4 local_d8 [4];
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_a4;
  undefined1 local_9c;
  undefined1 local_98;
  undefined1 local_94;
  undefined2 local_90;
  undefined1 local_8e;
  undefined1 local_8a;
  undefined1 local_86;
  undefined2 local_82;
  undefined1 local_80;
  undefined1 local_7c;
  undefined1 local_78;
  undefined2 local_74;
  undefined1 local_72;
  undefined1 local_6e;
  undefined1 local_6a;
  undefined2 local_66;
  undefined1 local_64;
  undefined1 local_60;
  undefined1 local_5c;
  undefined2 local_58;
  undefined1 local_56;
  undefined1 local_52;
  undefined1 local_4e;
  undefined2 local_4a;
  undefined1 local_48;
  undefined1 local_44;
  undefined1 local_40;
  undefined2 local_3c;
  undefined1 local_3a;
  undefined1 local_36;
  undefined1 local_32;
  undefined2 local_2e;
  undefined1 local_2c;
  undefined1 local_1e;
  undefined2 local_1d;
  undefined1 local_1b;
  
  local_d8[0] = 2;
  local_1d = 0x202;
  local_32 = 3;
  local_36 = 3;
  local_3a = 3;
  local_40 = 3;
  local_44 = 3;
  local_48 = 3;
  local_4e = 3;
  local_52 = 3;
  local_56 = 3;
  local_5c = 3;
  local_60 = 3;
  local_64 = 3;
  local_6a = 3;
  local_6e = 3;
  local_72 = 3;
  local_78 = 3;
  local_7c = 3;
  local_80 = 3;
  local_86 = 3;
  local_8a = 3;
  local_8e = 3;
  local_94 = 3;
  local_98 = 3;
  local_9c = 3;
  local_b0 = 0x80000001;
  local_b4 = 0;
  local_b8 = 4;
  local_bc = 0;
  local_c0 = 0;
  local_c4 = 1;
  local_c8 = 0;
  local_a4 = 0;
  local_2c = 4;
  local_2e = 0;
  local_3c = 0;
  local_4a = 0;
  local_58 = 0;
  local_66 = 0;
  local_74 = 0;
  local_82 = 0;
  local_90 = 0;
  local_1e = 0;
  local_1b = param_1;
  piVar1 = (int *)thunk_FUN_016d4a50(0xc0);
  if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0xc0);
  }
  FUN_016dd1aa(piVar1,local_d8,0xc0);
  iVar2 = thunk_FUN_016d4a50(param_3);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,param_3);
  }
  FUN_016dd1aa(iVar2,param_2,param_3);
  iVar3 = *piVar1;
  bVar4 = iVar3 != 2;
  if (bVar4) {
    iVar3 = piVar1[1];
  }
  if (bVar4 && iVar3 != 0) {
    thunk_FUN_016d3fb4(piVar1[2]);
  }
  piVar1[3] = param_3;
  *piVar1 = 0;
  piVar1[1] = param_3;
  piVar1[2] = iVar2;
  return piVar1;
}

