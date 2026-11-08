// FUN_01763880 @ 01763880 size=1236 calls_out=6 calls_in=2
// strings: 

undefined8 FUN_01763880(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  byte *pbVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  byte *pbVar8;
  undefined4 *puVar9;
  undefined1 *puVar10;
  undefined4 *puVar11;
  byte *pbVar12;
  undefined4 *puVar13;
  undefined1 auStack_5d20 [3324];
  undefined4 auStack_5024 [705];
  undefined1 auStack_4520 [6144];
  undefined1 auStack_2d20 [1024];
  undefined4 auStack_2920 [256];
  undefined1 auStack_2520 [1024];
  undefined1 auStack_2120 [1024];
  undefined1 auStack_1d20 [1024];
  undefined1 auStack_1920 [1024];
  undefined1 auStack_1520 [1024];
  undefined4 auStack_1120 [256];
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
  } while (puVar6 != auStack_5024);
  local_2c = DAT_018ddaf8;
  if ((param_3 <= &local_60 || local_40 <= param_3) &&
     ((&local_60 <= param_3 || (param_3 + 8 <= &local_60)))) {
    local_60 = *param_3;
    uStack_5c = param_3[1];
    uStack_54 = param_3[3];
    uStack_58 = param_3[2];
    local_50 = param_3[4];
    uStack_4c = param_3[5];
    uStack_48 = param_3[6];
    uStack_44 = param_3[7];
    local_40[0] = 0x506;
    FUN_01757bf4(&local_60,0x22,&local_120,0x80);
    puVar6 = auStack_1120;
    FUN_01759464(auStack_1520,puVar6,auStack_d20,auStack_920,auStack_100,0,1,2,3);
    puVar11 = auStack_2920;
    FUN_01759464(auStack_520,auStack_2d20,puVar11,auStack_2520,auStack_100,4,5,6,0xff);
    FUN_01759464(auStack_2520,auStack_2120,auStack_1d20,auStack_1920,auStack_100,7,8,9,10);
    FUN_017631d8(auStack_5d20,auStack_4520,local_a0,param_1,&local_120,auStack_1520,auStack_2d20);
    if (((&local_120 <= param_2) || (param_2 + 8 <= &local_120)) &&
       (param_2 <= &local_120 || auStack_100 <= param_2)) {
      puVar5 = param_2 + 8;
      *param_2 = local_120;
      param_2[1] = uStack_11c;
      param_2[2] = uStack_118;
      param_2[3] = uStack_114;
      param_2[4] = local_110;
      param_2[5] = uStack_10c;
      param_2[6] = uStack_108;
      param_2[7] = uStack_104;
      if (((&local_c0 <= puVar5) || (param_2 + 0x10 <= &local_c0)) &&
         (local_a0 <= puVar5 || puVar5 <= &local_c0)) {
        param_2[8] = local_c0;
        puVar5 = param_2 + 0x10;
        param_2[9] = uStack_bc;
        param_2[10] = uStack_b8;
        param_2[0xb] = uStack_b4;
        param_2[0xc] = local_b0;
        param_2[0xd] = uStack_ac;
        param_2[0xe] = uStack_a8;
        param_2[0xf] = uStack_a4;
        if (((local_a0 <= puVar5) || (param_2 + 0x20 <= local_a0)) &&
           (&local_60 <= puVar5 || puVar5 <= local_a0)) {
          puVar9 = local_a0;
          do {
            uVar2 = puVar9[1];
            uVar4 = puVar9[2];
            uVar7 = puVar9[3];
            puVar13 = puVar9 + 4;
            *puVar5 = *puVar9;
            puVar5[1] = uVar2;
            puVar5[2] = uVar4;
            puVar5[3] = uVar7;
            puVar9 = puVar9 + 4;
            puVar5 = puVar5 + 4;
          } while (puVar13 != &local_60);
          pbVar12 = (byte *)((int)param_2 + 0x2ff);
          pbVar8 = (byte *)((int)param_2 + 0x7f);
          do {
            pbVar3 = pbVar8;
            puVar5 = puVar6 + -0x100;
            do {
              puVar9 = puVar5 + 2;
              pbVar3 = pbVar3 + 1;
              *pbVar3 = 4U - (char)*puVar5 | ('\x04' - (char)puVar5[1]) * '\x10';
              puVar5 = puVar9;
            } while (puVar6 != puVar9);
            pbVar8 = pbVar8 + 0x80;
            puVar6 = puVar6 + 0x100;
          } while (pbVar12 != pbVar8);
          do {
            pbVar8 = pbVar12;
            puVar6 = puVar11 + -0x100;
            do {
              puVar5 = puVar6 + 2;
              pbVar8 = pbVar8 + 1;
              *pbVar8 = 4U - (char)*puVar6 | ('\x04' - (char)puVar6[1]) * '\x10';
              puVar6 = puVar5;
            } while (puVar11 != puVar5);
            pbVar12 = pbVar12 + 0x80;
            puVar11 = puVar11 + 0x100;
          } while ((byte *)((int)param_2 + 0x5ffU) != pbVar12);
          puVar6 = param_2 + 0x180;
          puVar10 = auStack_5d20;
          do {
            puVar11 = puVar6 + 0x68;
            FUN_01702864(puVar6,puVar10);
            puVar10 = puVar10 + 0x400;
            puVar6 = puVar11;
          } while (puVar11 != param_2 + 0x3f0);
          FUN_0177aaa0(auStack_5d20,0x1800);
          FUN_0177aaa0(auStack_4520,0x1800);
          FUN_0177aaa0(auStack_2d20,0x1800);
          FUN_0177aaa0(auStack_1520,0x1400);
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
  pcVar1 = (code *)software_udf(0,0x1763d50);
  (*pcVar1)();
}

