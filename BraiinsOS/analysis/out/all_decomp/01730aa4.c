// FUN_01730aa4 @ 01730aa4 size=1072 calls_out=3 calls_in=0
// strings: 

undefined8 FUN_01730aa4(undefined4 param_1,int *param_2,int *param_3,int *param_4)

{
  code *pcVar1;
  undefined4 uVar2;
  int *piVar3;
  int local_ec;
  int iStack_e8;
  int iStack_e4;
  int iStack_e0;
  int local_dc;
  int iStack_d8;
  int iStack_d4;
  int iStack_d0;
  int local_cc;
  int iStack_c8;
  int iStack_c4;
  int iStack_c0;
  int local_bc;
  int iStack_b8;
  int iStack_b4;
  int iStack_b0;
  int local_ac;
  int iStack_a8;
  int iStack_a4;
  int iStack_a0;
  int local_9c;
  int iStack_98;
  int iStack_94;
  int iStack_90;
  int local_8c;
  int iStack_88;
  int iStack_84;
  int iStack_80;
  int local_7c;
  int iStack_78;
  int iStack_74;
  int iStack_70;
  int local_6c;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  int local_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int local_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int local_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int local_2c [2];
  
  local_2c[0] = DAT_018ddaf8;
  if ((&local_cc <= param_3 || param_3 <= &local_ec) &&
     ((&local_ec <= param_3 || (param_3 + 8 <= &local_ec)))) {
    local_ec = *param_3;
    iStack_e8 = param_3[1];
    piVar3 = param_3 + 0x11;
    iStack_e4 = param_3[2];
    iStack_e0 = param_3[3];
    iStack_d0 = param_3[7];
    local_dc = param_3[4];
    iStack_d8 = param_3[5];
    iStack_d4 = param_3[6];
    if ((&local_ac <= piVar3 || piVar3 <= &local_cc) &&
       ((&local_cc <= piVar3 || (param_3 + 0x19 <= &local_cc)))) {
      local_cc = param_3[0x11];
      iStack_c8 = param_3[0x12];
      piVar3 = param_3 + 0x22;
      iStack_c4 = param_3[0x13];
      iStack_c0 = param_3[0x14];
      iStack_b0 = param_3[0x18];
      local_bc = param_3[0x15];
      iStack_b8 = param_3[0x16];
      iStack_b4 = param_3[0x17];
      if ((&local_8c <= piVar3 || piVar3 <= &local_ac) &&
         ((&local_ac <= piVar3 || (param_3 + 0x2a <= &local_ac)))) {
        local_ac = param_3[0x22];
        iStack_a8 = param_3[0x23];
        iStack_a4 = param_3[0x24];
        iStack_a0 = param_3[0x25];
        iStack_90 = param_3[0x29];
        local_9c = param_3[0x26];
        iStack_98 = param_3[0x27];
        iStack_94 = param_3[0x28];
        if ((&local_6c <= param_4 || param_4 <= &local_8c) &&
           ((&local_8c <= param_4 || (param_4 + 8 <= &local_8c)))) {
          local_8c = *param_4;
          iStack_88 = param_4[1];
          piVar3 = param_4 + 0x11;
          iStack_84 = param_4[2];
          iStack_80 = param_4[3];
          iStack_70 = param_4[7];
          iStack_74 = param_4[6];
          local_7c = param_4[4];
          iStack_78 = param_4[5];
          if ((&local_4c <= piVar3 || piVar3 <= &local_6c) &&
             ((&local_6c <= piVar3 || (param_4 + 0x19 <= &local_6c)))) {
            piVar3 = param_4 + 0x22;
            iStack_60 = param_4[0x14];
            local_6c = param_4[0x11];
            iStack_68 = param_4[0x12];
            iStack_64 = param_4[0x13];
            local_5c = param_4[0x15];
            iStack_58 = param_4[0x16];
            iStack_54 = param_4[0x17];
            iStack_50 = param_4[0x18];
            if ((local_2c <= piVar3 || piVar3 <= &local_4c) &&
               ((&local_4c <= piVar3 || (param_4 + 0x2a <= &local_4c)))) {
              local_4c = param_4[0x22];
              iStack_48 = param_4[0x23];
              iStack_44 = param_4[0x24];
              iStack_40 = param_4[0x25];
              iStack_38 = param_4[0x27];
              iStack_34 = param_4[0x28];
              iStack_30 = param_4[0x29];
              local_3c = param_4[0x26];
              uVar2 = FUN_017309d0();
              FUN_0172d238(uVar2,&local_ec,&local_cc,&local_ac,&local_ec,&local_cc,&local_ac,0,
                           &local_8c,&local_6c,&local_4c);
              if (((&local_ec <= param_2) || (param_2 + 8 <= &local_ec)) &&
                 (&local_cc <= param_2 || param_2 <= &local_ec)) {
                piVar3 = param_2 + 0x11;
                *param_2 = local_ec;
                param_2[1] = iStack_e8;
                param_2[2] = iStack_e4;
                param_2[3] = iStack_e0;
                param_2[4] = local_dc;
                param_2[5] = iStack_d8;
                param_2[6] = iStack_d4;
                param_2[7] = iStack_d0;
                if (((&local_cc <= piVar3) || (param_2 + 0x19 <= &local_cc)) &&
                   (&local_ac <= piVar3 || piVar3 <= &local_cc)) {
                  param_2[0x11] = local_cc;
                  piVar3 = param_2 + 0x22;
                  param_2[0x12] = iStack_c8;
                  param_2[0x13] = iStack_c4;
                  param_2[0x14] = iStack_c0;
                  param_2[0x15] = local_bc;
                  param_2[0x16] = iStack_b8;
                  param_2[0x17] = iStack_b4;
                  param_2[0x18] = iStack_b0;
                  if (((&local_ac <= piVar3) || (param_2 + 0x2a <= &local_ac)) &&
                     (&local_8c <= piVar3 || piVar3 <= &local_ac)) {
                    param_2[0x22] = local_ac;
                    param_2[0x23] = iStack_a8;
                    param_2[0x24] = iStack_a4;
                    param_2[0x25] = iStack_a0;
                    param_2[0x28] = iStack_94;
                    param_2[0x29] = iStack_90;
                    param_2[0x26] = local_9c;
                    param_2[0x27] = iStack_98;
                    if (local_2c[0] != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
                      FUN_016d2b78();
                    }
                    return 0;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0,0x1730ed0);
  (*pcVar1)();
}

