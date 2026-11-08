// FUN_017688d8 @ 017688d8 size=1220 calls_out=7 calls_in=2
// strings: 

undefined8 FUN_017688d8(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined1 auStack_7d20 [3324];
  undefined4 auStack_7024 [1217];
  undefined1 auStack_5d20 [8192];
  undefined1 auStack_3d20 [1024];
  undefined1 auStack_3920 [1024];
  undefined1 auStack_3520 [1024];
  undefined1 auStack_3120 [1024];
  undefined1 auStack_2d20 [1024];
  undefined1 auStack_2920 [1024];
  undefined1 auStack_2520 [1024];
  undefined1 auStack_2120 [1024];
  undefined1 auStack_1d20 [1024];
  undefined1 auStack_1920 [1024];
  undefined1 auStack_1520 [1024];
  undefined1 auStack_1120 [1024];
  undefined1 auStack_d20 [1024];
  undefined1 auStack_920 [1024];
  undefined1 auStack_520 [1024];
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 auStack_100 [16];
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0 [16];
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined2 local_40 [10];
  int local_2c;
  undefined4 uStack_28;
  
  puVar6 = (undefined4 *)(local_40 + 0xe);
  do {
    puVar6 = puVar6 + -0x400;
    *puVar6 = param_1;
  } while (puVar6 != auStack_7024);
  local_2c = DAT_018ddaf8;
  if ((param_3 <= &local_60 || local_40 <= param_3) &&
     ((&local_60 <= param_3 || (param_3 + 8 <= &local_60)))) {
    uStack_5c = param_3[1];
    local_60 = *param_3;
    uStack_54 = param_3[3];
    uStack_58 = param_3[2];
    local_50 = param_3[4];
    uStack_4c = param_3[5];
    uStack_48 = param_3[6];
    uStack_44 = param_3[7];
    local_40[0] = 0x708;
    FUN_01757bf4(&local_60,0x22,&local_120,0x80);
    FUN_0175857c(auStack_1d20,auStack_1920,auStack_1520,auStack_1120,auStack_100,0,1,2,3);
    FUN_0175857c(auStack_d20,auStack_920,auStack_520,auStack_3d20,auStack_100,4,5,6,0xff);
    FUN_0175857c(auStack_3d20,auStack_3920,auStack_3520,auStack_3120,auStack_100,7,8,9,10);
    FUN_0175857c(auStack_2d20,auStack_2920,auStack_2520,auStack_2120,auStack_100,0xb,0xc,0xd,0xe);
    FUN_017681f0(auStack_7d20,auStack_5d20,local_a0,param_1,&local_120,auStack_1d20,auStack_3d20);
    if (((&local_120 <= param_2) || (param_2 + 8 <= &local_120)) &&
       (param_2 <= &local_120 || auStack_100 <= param_2)) {
      puVar6 = param_2 + 8;
      *param_2 = local_120;
      param_2[1] = uStack_11c;
      param_2[2] = uStack_118;
      param_2[3] = uStack_114;
      param_2[4] = local_110;
      param_2[5] = uStack_10c;
      param_2[6] = uStack_108;
      param_2[7] = uStack_104;
      if (((&local_c0 <= puVar6) || (param_2 + 0x10 <= &local_c0)) &&
         (local_a0 <= puVar6 || puVar6 <= &local_c0)) {
        puVar6 = param_2 + 0x10;
        param_2[8] = local_c0;
        param_2[9] = uStack_bc;
        param_2[10] = uStack_b8;
        param_2[0xb] = uStack_b4;
        param_2[0xc] = local_b0;
        param_2[0xd] = uStack_ac;
        param_2[0xe] = uStack_a8;
        param_2[0xf] = uStack_a4;
        if (((local_a0 <= puVar6) || (param_2 + 0x20 <= local_a0)) &&
           (&local_60 <= puVar6 || puVar6 <= local_a0)) {
          puVar7 = local_a0;
          do {
            uVar2 = puVar7[1];
            uVar3 = puVar7[2];
            uVar4 = puVar7[3];
            puVar8 = puVar7 + 4;
            *puVar6 = *puVar7;
            puVar6[1] = uVar2;
            puVar6[2] = uVar3;
            puVar6[3] = uVar4;
            puVar7 = puVar7 + 4;
            puVar6 = puVar6 + 4;
          } while (puVar8 != &local_60);
          puVar5 = auStack_1d20;
          puVar6 = param_2 + 0x20;
          do {
            puVar7 = puVar6 + 0x18;
            FUN_01702b00(puVar6,puVar5);
            puVar5 = puVar5 + 0x400;
            puVar6 = puVar7;
          } while (puVar7 != param_2 + 200);
          puVar5 = auStack_3d20;
          puVar6 = param_2 + 200;
          do {
            puVar7 = puVar6 + 0x18;
            FUN_01702b00(puVar6,puVar5);
            puVar5 = puVar5 + 0x400;
            puVar6 = puVar7;
          } while (param_2 + 0x188 != puVar7);
          puVar6 = param_2 + 0x188;
          puVar5 = auStack_7d20;
          do {
            puVar7 = puVar6 + 0x68;
            FUN_01702864(puVar6,puVar5);
            puVar5 = puVar5 + 0x400;
            puVar6 = puVar7;
          } while (puVar7 != param_2 + 0x4c8);
          FUN_0177aaa0(auStack_7d20,0x2000);
          FUN_0177aaa0(auStack_5d20,0x2000);
          FUN_0177aaa0(auStack_3d20,0x2000);
          FUN_0177aaa0(auStack_1d20,0x1c00);
          FUN_0177aaa0(local_a0,0x40);
          FUN_0177aaa0(&local_60,0x22);
          FUN_0177aaa0(&local_120,0x80);
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
  pcVar1 = (code *)software_udf(0,0x1768d98);
  (*pcVar1)();
}

