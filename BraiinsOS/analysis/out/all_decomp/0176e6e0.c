// FUN_0176e6e0 @ 0176e6e0 size=448 calls_out=8 calls_in=0
// strings: 

undefined4 FUN_0176e6e0(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 auStack_c0 [8];
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 auStack_80 [8];
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 auStack_40 [5];
  int local_2c;
  
  local_2c = DAT_018ddaf8;
  iVar2 = FUN_0174bccc(&local_60,0x20,&PTR_018bc3f4,0);
  if (iVar2 != 1) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2c24();
  }
  iVar2 = FUN_01708f6c(param_3);
  if (iVar2 != 0) {
    uVar3 = 0xffffffff;
LAB_0176e830:
    FUN_0177aaa0(&local_60,0x20);
    if (local_2c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
      FUN_016d2b78();
    }
    return uVar3;
  }
  if ((auStack_80 <= &local_60 || &local_60 <= &local_a0) &&
     (&local_a0 <= &local_60 || auStack_40 <= &local_a0)) {
    local_a0 = local_60;
    uStack_9c = uStack_5c;
    uStack_98 = uStack_58;
    uStack_94 = uStack_54;
    local_90 = local_50;
    uStack_8c = uStack_4c;
    uStack_88 = uStack_48;
    uStack_84 = uStack_44;
    FUN_017572d0(param_3,0x4a0,auStack_80);
    FUN_017573c4(&local_a0,0x40,&local_e0);
    FUN_0176d520(param_1,&local_a0,param_3,auStack_c0);
    if (((&local_e0 <= param_2) || (param_2 + 8 <= &local_e0)) &&
       (param_2 <= &local_e0 || auStack_c0 <= param_2)) {
      *param_2 = local_e0;
      param_2[1] = uStack_dc;
      param_2[2] = uStack_d8;
      param_2[3] = uStack_d4;
      param_2[4] = local_d0;
      param_2[5] = uStack_cc;
      param_2[6] = uStack_c8;
      param_2[7] = uStack_c4;
      FUN_0177aaa0(&local_a0,0x40);
      FUN_0177aaa0(&local_e0,0x40);
      uVar3 = 0;
      goto LAB_0176e830;
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0,0x176e88c);
  (*pcVar1)();
}

