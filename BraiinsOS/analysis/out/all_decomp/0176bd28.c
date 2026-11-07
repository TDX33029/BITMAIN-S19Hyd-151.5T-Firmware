// FUN_0176bd28 @ 0176bd28 size=436 calls_out=6 calls_in=0
// strings: 

undefined4
FUN_0176bd28(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 auStack_a0 [8];
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 auStack_60 [13];
  int local_2c;
  
  local_2c = DAT_018ddaf8;
  iVar2 = FUN_01708d30(param_3,param_2,&PTR_018bc3f4,0);
  if (iVar2 != 0) {
    uVar3 = 0xffffffff;
LAB_0176be7c:
    if (local_2c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
      FUN_016d2b78();
    }
    return uVar3;
  }
  if ((auStack_60 <= param_4 || param_4 <= &local_80) &&
     ((&local_80 <= param_4 || (param_4 + 8 <= &local_80)))) {
    local_80 = *param_4;
    uStack_7c = param_4[1];
    uStack_78 = param_4[2];
    uStack_74 = param_4[3];
    uStack_64 = param_4[7];
    local_70 = param_4[4];
    uStack_6c = param_4[5];
    uStack_68 = param_4[6];
    FUN_017572d0(param_3,0x620,auStack_60);
    FUN_017573c4(&local_80,0x40,&local_c0);
    FUN_0176ae4c(param_1,&local_80,param_3,auStack_a0);
    if (((&local_c0 <= param_2) || (param_2 + 8 <= &local_c0)) &&
       (param_2 <= &local_c0 || auStack_a0 <= param_2)) {
      *param_2 = local_c0;
      param_2[1] = uStack_bc;
      param_2[2] = uStack_b8;
      param_2[3] = uStack_b4;
      param_2[4] = local_b0;
      param_2[5] = uStack_ac;
      param_2[6] = uStack_a8;
      param_2[7] = uStack_a4;
      FUN_0177aaa0(&local_80,0x40);
      FUN_0177aaa0(&local_c0,0x40);
      uVar3 = 0;
      goto LAB_0176be7c;
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0,0x176becc);
  (*pcVar1)();
}

