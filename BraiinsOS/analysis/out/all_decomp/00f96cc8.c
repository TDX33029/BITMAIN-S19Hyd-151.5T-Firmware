// FUN_00f96cc8 @ 00f96cc8 size=496 calls_out=5 calls_in=1
// strings: 

void FUN_00f96cc8(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  code *pcVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uStack_108;
  undefined3 uStack_104;
  undefined1 local_fd;
  undefined3 uStack_fc;
  undefined3 uStack_f8;
  undefined4 local_e8;
  undefined1 local_e4;
  undefined4 local_e3;
  undefined4 local_df;
  uint uStack_db;
  undefined3 uStack_d7;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_b4;
  undefined1 local_ac;
  undefined1 local_a8;
  undefined1 local_a4;
  undefined2 local_a0;
  undefined1 local_9e;
  undefined1 local_9a;
  undefined1 local_96;
  undefined2 local_92;
  undefined1 local_90;
  undefined1 local_8c;
  undefined1 local_88;
  undefined2 local_84;
  undefined1 local_82;
  undefined1 local_7e;
  undefined1 local_7a;
  undefined2 local_76;
  undefined1 local_74;
  undefined1 local_70;
  undefined1 local_6c;
  undefined2 local_68;
  undefined1 local_66;
  undefined1 local_62;
  undefined1 local_5e;
  undefined2 local_5a;
  undefined1 local_58;
  undefined1 local_54;
  undefined1 local_50;
  undefined2 local_4c;
  undefined1 local_4a;
  undefined1 local_46;
  undefined1 local_42;
  undefined2 local_3e;
  undefined1 local_3c;
  undefined1 local_2e;
  undefined2 local_2d;
  undefined1 local_2b;
  
  local_d4 = 1;
  local_c8 = 4;
  local_2b = 4;
  local_3c = 4;
  local_e8 = 2;
  local_c4 = 0;
  local_cc = 0;
  local_d0 = 0;
  uStack_db = (uint)(uint3)uStack_db;
  uStack_d7 = 0;
  local_b4 = 0;
  local_3e = 0;
  local_42 = 3;
  local_46 = 3;
  local_4a = 3;
  local_4c = 0;
  local_50 = 3;
  local_54 = 3;
  local_58 = 3;
  local_5a = 0;
  local_5e = 3;
  local_62 = 3;
  local_66 = 3;
  local_68 = 0;
  local_6c = 3;
  local_70 = 3;
  local_74 = 3;
  local_76 = 0;
  local_7a = 3;
  local_7e = 3;
  local_82 = 3;
  local_84 = 0;
  local_88 = 3;
  local_8c = 3;
  local_90 = 3;
  local_92 = 0;
  local_96 = 3;
  local_9a = 3;
  local_9e = 3;
  local_a0 = 0;
  local_2e = 0;
  local_a4 = 3;
  local_a8 = 3;
  local_ac = 3;
  local_2d = 0x202;
  local_c0 = 0x80000001;
  iVar1 = thunk_FUN_016d4a50(0xc0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0xc0);
  }
  FUN_016dd1aa(iVar1,&local_e8,0xc0);
  iVar4 = *(int *)(iVar1 + 0x34);
  if (iVar4 != 0) {
    puVar3 = *(undefined4 **)(iVar1 + 0x38);
    pcVar2 = (code *)*puVar3;
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)(iVar4);
    }
    if (puVar3[1] != 0) {
      thunk_FUN_016d3fb4(iVar4);
    }
  }
  local_cc = *param_2;
  local_c8 = param_2[1];
  local_c4 = param_2[2];
  local_fd = (undefined1)param_1[2];
  uStack_db = CONCAT13(local_fd,(int3)((uint)param_1[1] >> 8));
  uStack_fc = (undefined3)((uint)param_1[2] >> 8);
  uStack_108._3_1_ = (undefined1)*param_1;
  uStack_104 = (undefined3)((uint)*param_1 >> 8);
  local_df = CONCAT13((char)param_1[1],uStack_104);
  local_e8 = CONCAT31(local_e8._1_3_,1);
  local_e3 = uStack_108;
  *(undefined4 *)(iVar1 + 0x34) = param_3;
  *(undefined4 *)(iVar1 + 0x38) = param_4;
  local_e4 = 2;
  local_d0 = CONCAT31(uStack_f8,2);
  local_d4 = CONCAT31(local_d4._1_3_,5);
  uStack_d7 = uStack_fc;
  FUN_00f96218(iVar1,&local_e8);
  return;
}

