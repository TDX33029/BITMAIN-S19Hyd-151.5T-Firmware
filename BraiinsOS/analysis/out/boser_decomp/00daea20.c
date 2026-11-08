// FUN_00daea20 @ 00daea20 size=236 calls_out=2 calls_in=0
// strings: 

void FUN_00daea20(undefined4 *param_1,int *param_2)

{
  undefined4 uVar1;
  uint local_e8 [2];
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 local_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined1 auStack_80 [104];
  
  if ((*param_2 == 1) && (param_2[1] != 0)) {
    (**(code **)(param_2[2] + 0xc))(local_e8,param_2[1]);
    if ((local_e8[0] & 7) == 3) {
      *param_1 = local_e0;
      param_1[1] = uStack_dc;
      param_1[2] = uStack_d8;
      param_1[3] = uStack_d4;
      param_1[4] = uStack_d0;
      param_1[5] = local_cc;
      param_1[6] = uStack_c8;
      param_1[7] = uStack_c4;
      param_1[8] = uStack_c0;
      param_1[9] = uStack_bc;
      param_1[10] = local_b8;
      param_1[0xb] = uStack_b4;
      param_1[0xc] = uStack_b0;
      param_1[0xd] = uStack_ac;
      param_1[0xe] = uStack_a8;
      param_1[0xf] = uStack_a4;
      return;
    }
    if (local_e8[0] != 4) {
      if (local_e8[0] != 5) {
        FUN_01bed4e2(auStack_80,local_e8,0x68);
        uVar1 = FUN_01a65494(auStack_80);
        param_1[1] = 0;
        *param_1 = 4;
        param_1[2] = uVar1;
        param_1[3] = &DAT_01d2cc7c;
        return;
      }
      uVar1 = 6;
      goto LAB_00daeaa0;
    }
  }
  uVar1 = 5;
LAB_00daeaa0:
  *param_1 = uVar1;
  param_1[1] = 0;
  return;
}

