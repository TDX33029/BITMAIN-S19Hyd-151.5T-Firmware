// FUN_0182c560 @ 0182c560 size=652 calls_out=9 calls_in=2
// strings: size overflows MAX_SIZE | expected a header name; but got None

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0182c560(undefined4 param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 local_f8 [2];
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  int local_e4;
  int local_e0;
  undefined4 local_dc;
  int local_d8;
  uint local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  uint local_bc [2];
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined2 local_a4;
  int local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined1 auStack_94 [8];
  uint local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  uint uStack_78;
  undefined2 local_74;
  char local_72;
  undefined1 local_71;
  uint local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 uStack_60;
  uint local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  uint local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  local_dc = *(undefined4 *)(param_2 + 0x20);
  local_e4 = *(int *)(param_2 + 0x24);
  local_f0 = *(undefined4 *)(param_2 + 0x2c);
  uStack_ec = *(undefined4 *)(param_2 + 0x30);
  uStack_e8 = *(undefined4 *)(param_2 + 0x34);
  local_d8 = *(int *)(param_2 + 0x28) * 0x34 + local_e4;
  local_f8[0] = 0;
  local_e0 = local_e4;
  if (*(int *)(param_2 + 0x1c) != 0) {
    thunk_FUN_01be4678(*(undefined4 *)(param_2 + 0x18));
  }
  FUN_006ced10(&local_70,local_f8);
  if (local_70 == 2) {
LAB_0182c5dc:
    FUN_00713cb8(local_f8);
    return;
  }
  if ((local_70 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01979f74("expected a header name, but got None",0x24,&DAT_01d1e364);
  }
  do {
    local_d0 = local_5c;
    uStack_cc = local_58;
    uStack_c8 = uStack_54;
    uStack_c4 = uStack_50;
    uStack_c0 = uStack_4c;
    local_48 = local_6c;
    uStack_44 = local_68;
    uStack_40 = local_64;
    uStack_3c = uStack_60;
    FUN_0141cbc4(&local_70,param_1);
    uVar2 = local_68;
    uVar1 = local_70;
    if (local_58._2_1_ == '\x03') {
                    /* WARNING: Subroutine does not return */
      FUN_013073dc("size overflows MAX_SIZE",0x17,&local_a0,&DAT_01d2f38c,&DAT_01d1e374);
    }
    local_b0 = local_64;
    uStack_ac = uStack_60;
    local_a4 = (undefined2)local_58;
    if (local_58._2_1_ == '\x02') {
      local_70 = local_d0;
      local_6c = uStack_cc;
      local_68 = uStack_c8;
      local_64 = uStack_c4;
      uStack_60 = uStack_c0;
      FUN_0141e608(&local_a0,uVar1,uVar2,&local_70);
      (**(code **)(local_a0 + 0x10))(auStack_94,uStack_9c,uStack_98);
      local_bc[0] = uVar1;
    }
    else {
      local_88 = local_6c;
      local_84 = local_68;
      local_8c = local_70;
      local_80 = local_64;
      uStack_7c = uStack_60;
      uStack_78 = local_5c;
      local_74 = (undefined2)local_58;
      local_71 = local_58._3_1_;
      local_72 = local_58._2_1_;
      FUN_0182c99c(local_bc,&local_8c,&local_d0);
      uVar1 = local_bc[0];
      uVar2 = local_b4;
    }
    while( true ) {
      FUN_006ced10(&local_70,local_f8);
      if (local_70 == 2) goto LAB_0182c5dc;
      if ((local_70 & 1) != 0) break;
      local_38 = local_5c;
      uStack_34 = local_58;
      uStack_30 = uStack_54;
      uStack_2c = uStack_50;
      uStack_28 = uStack_4c;
      FUN_0182cad4(uVar1,uVar2,&local_38);
    }
  } while( true );
}

