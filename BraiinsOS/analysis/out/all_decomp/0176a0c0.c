// FUN_0176a0c0 @ 0176a0c0 size=668 calls_out=4 calls_in=4
// strings: 

undefined8
FUN_0176a0c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 *param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8,
            undefined1 param_9)

{
  code *pcVar1;
  undefined1 auStack_340 [128];
  undefined1 auStack_2c0 [128];
  undefined1 auStack_240 [128];
  undefined1 auStack_1c0 [128];
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined1 local_120 [32];
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined1 local_e0 [32];
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined1 local_a0 [32];
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined1 local_60 [52];
  int local_2c;
  
  local_2c = DAT_018ddaf8;
  if ((local_120 <= param_5 || param_5 <= &local_140) &&
     ((&local_140 <= param_5 || (param_5 + 8 <= &local_140)))) {
    local_140 = *param_5;
    uStack_13c = param_5[1];
    uStack_138 = param_5[2];
    uStack_134 = param_5[3];
    local_130 = param_5[4];
    uStack_12c = param_5[5];
    uStack_128 = param_5[6];
    uStack_124 = param_5[7];
    if ((param_5 <= &local_100 || local_e0 <= param_5) &&
       ((&local_100 <= param_5 || (param_5 + 8 <= &local_100)))) {
      local_100 = *param_5;
      uStack_fc = param_5[1];
      uStack_f8 = param_5[2];
      uStack_f4 = param_5[3];
      local_f0 = param_5[4];
      uStack_ec = param_5[5];
      uStack_e8 = param_5[6];
      uStack_e4 = param_5[7];
      if ((local_a0 <= param_5 || param_5 <= &local_c0) &&
         ((&local_c0 <= param_5 || (param_5 + 8 <= &local_c0)))) {
        local_c0 = *param_5;
        uStack_bc = param_5[1];
        uStack_b8 = param_5[2];
        uStack_b4 = param_5[3];
        local_b0 = param_5[4];
        uStack_ac = param_5[5];
        uStack_a8 = param_5[6];
        uStack_a4 = param_5[7];
        if ((local_60 <= param_5 || param_5 <= &local_80) &&
           ((&local_80 <= param_5 || (param_5 + 8 <= &local_80)))) {
          local_120[0] = param_6;
          local_e0[0] = param_7;
          local_a0[0] = param_8;
          local_80 = *param_5;
          uStack_7c = param_5[1];
          uStack_78 = param_5[2];
          uStack_74 = param_5[3];
          local_70 = param_5[4];
          uStack_6c = param_5[5];
          uStack_68 = param_5[6];
          uStack_64 = param_5[7];
          local_60[0] = param_9;
          FUN_01769db8(&local_140,&local_100,&local_c0,&local_80,0x21,auStack_340,auStack_2c0,
                       auStack_240,auStack_1c0,0x80);
          FUN_017033c0(param_1,auStack_340);
          FUN_017033c0(param_2,auStack_2c0);
          FUN_017033c0(param_3,auStack_240);
          FUN_017033c0(param_4,auStack_1c0);
          FUN_0177aaa0(auStack_340,0x200);
          FUN_0177aaa0(&local_140,0x100);
          if (local_2c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
            FUN_016d2b78();
          }
          return 0;
        }
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0,0x176a358);
  (*pcVar1)();
}

