// FUN_0175a500 @ 0175a500 size=368 calls_out=3 calls_in=3
// strings: 

undefined8 FUN_0175a500(int param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  uint uVar12;
  undefined4 local_140 [8];
  undefined1 local_120;
  undefined1 local_11f;
  undefined1 local_e0;
  undefined1 local_df;
  undefined1 local_a0;
  undefined1 local_9f;
  undefined1 local_60;
  undefined1 local_5f;
  undefined4 auStack_40 [5];
  int local_2c;
  
  local_2c = DAT_018ddaf8;
  puVar10 = local_140;
  do {
    if (puVar10 < param_2) {
      if (param_2 < puVar10 + 8) {
LAB_0175a668:
                    /* WARNING: Does not return */
        pcVar6 = (code *)software_udf(0,0x175a668);
        (*pcVar6)();
      }
    }
    else if ((puVar10 != param_2) && (puVar10 < param_2 + 8)) goto LAB_0175a668;
    puVar11 = puVar10 + 0x10;
    uVar7 = param_2[1];
    uVar8 = param_2[2];
    uVar9 = param_2[3];
    *puVar10 = *param_2;
    puVar10[1] = uVar7;
    puVar10[2] = uVar8;
    puVar10[3] = uVar9;
    uVar7 = param_2[5];
    uVar8 = param_2[6];
    uVar9 = param_2[7];
    puVar10[4] = param_2[4];
    puVar10[5] = uVar7;
    puVar10[6] = uVar8;
    puVar10[7] = uVar9;
    puVar10 = puVar11;
    if (auStack_40 == puVar11) {
      uVar12 = 0;
      do {
        uVar2 = uVar12 + 1 >> 2;
        uVar3 = uVar12 + 2 >> 2;
        uVar4 = uVar12 + 3 >> 2;
        uVar5 = uVar12 >> 2;
        local_df = (undefined1)uVar2;
        local_9f = (undefined1)uVar3;
        iVar1 = uVar12 * 0x400;
        uVar12 = uVar12 + 4;
        local_5f = (undefined1)uVar4;
        local_60 = 3;
        local_120 = 0;
        local_11f = (undefined1)uVar5;
        local_e0 = 1;
        local_a0 = 2;
        FUN_01759e3c(param_1 + iVar1,param_1 + uVar2 * 0x1000 + 0x400,
                     param_1 + uVar3 * 0x1000 + 0x800,param_1 + uVar4 * 0x1000 + 0xc00,local_140);
      } while (uVar12 != 0x10);
      FUN_0177aaa0(local_140,0x100);
      if (local_2c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
        FUN_016d2b78();
      }
      return 0;
    }
  } while( true );
}

