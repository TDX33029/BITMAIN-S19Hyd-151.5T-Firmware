// FUN_01764448 @ 01764448 size=440 calls_out=3 calls_in=3
// strings: 

undefined8 FUN_01764448(int param_1,undefined4 *param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 local_140 [8];
  char local_120;
  char local_11f;
  char local_e0;
  char local_df;
  char local_a0;
  char local_9f;
  char local_60;
  char local_5f;
  undefined4 auStack_40 [5];
  int local_2c;
  
  local_2c = DAT_018ddaf8;
  puVar5 = local_140;
  do {
    if (puVar5 < param_2) {
      if (param_2 < puVar5 + 8) {
LAB_017645f8:
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0,0x17645f8);
        (*pcVar1)();
      }
    }
    else if ((puVar5 != param_2) && (puVar5 < param_2 + 8)) goto LAB_017645f8;
    puVar6 = puVar5 + 0x10;
    uVar2 = param_2[1];
    uVar3 = param_2[2];
    uVar4 = param_2[3];
    *puVar5 = *param_2;
    puVar5[1] = uVar2;
    puVar5[2] = uVar3;
    puVar5[3] = uVar4;
    uVar2 = param_2[5];
    uVar3 = param_2[6];
    uVar4 = param_2[7];
    puVar5[4] = param_2[4];
    puVar5[5] = uVar2;
    puVar5[6] = uVar3;
    puVar5[7] = uVar4;
    puVar5 = puVar6;
    if (auStack_40 == puVar6) {
      uVar7 = 0;
      do {
        local_df = (char)((uVar7 + 1) / 7);
        local_e0 = (char)(uVar7 + 1) + local_df * -7;
        local_11f = (char)(uVar7 / 7);
        local_120 = (char)uVar7 + local_11f * -7;
        local_5f = (char)((uVar7 + 3) / 7);
        local_60 = (char)(uVar7 + 3) + local_5f * -7;
        local_9f = (char)((uVar7 + 2) / 7);
        local_a0 = (char)(uVar7 + 2) + local_9f * -7;
        uVar7 = uVar7 + 4;
        FUN_01759e3c(param_1,param_1 + 0x400,param_1 + 0x800,param_1 + 0xc00,local_140);
        param_1 = param_1 + 0x1000;
      } while (uVar7 != 0x38);
      FUN_0177aaa0(local_140,0x100);
      if (local_2c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
        FUN_016d2b78();
      }
      return 0;
    }
  } while( true );
}

