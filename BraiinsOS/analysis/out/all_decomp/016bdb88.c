// FUN_016bdb88 @ 016bdb88 size=484 calls_out=0 calls_in=0
// strings: 

void FUN_016bdb88(byte *param_1,undefined4 *param_2)

{
  undefined1 local_3c;
  undefined1 local_3b;
  undefined1 local_3a;
  undefined1 local_39;
  undefined1 local_38;
  undefined1 local_37;
  undefined1 local_36;
  undefined1 local_35;
  undefined1 local_34;
  undefined1 local_33 [3];
  undefined1 uStack_30;
  undefined1 local_2f [3];
  undefined1 uStack_2c;
  undefined2 local_2b;
  undefined2 uStack_29;
  short local_27;
  undefined2 uStack_25;
  undefined1 local_23;
  undefined3 uStack_22;
  undefined1 local_1f;
  undefined1 local_1e;
  undefined1 local_1d;
  undefined1 local_1c;
  undefined1 uStack_1b;
  undefined1 uStack_1a;
  undefined1 uStack_19;
  
  local_3c = (&DAT_00563e90)[*param_1 >> 4];
  local_3a = (&DAT_00563e90)[param_1[1] >> 4];
  local_39 = (&DAT_00563e90)[param_1[1] & 0xf];
  local_36 = (&DAT_00563e90)[param_1[3] >> 4];
  local_3b = (&DAT_00563e90)[*param_1 & 0xf];
  local_35 = (&DAT_00563e90)[param_1[3] & 0xf];
  local_38 = (&DAT_00563e90)[param_1[2] >> 4];
  local_2f = (undefined1  [3])((uint3)(byte)(&DAT_00563e90)[param_1[6] >> 4] << 8);
  local_37 = (&DAT_00563e90)[param_1[2] & 0xf];
  _local_2f = CONCAT13((&DAT_00563e90)[param_1[7] >> 4],local_2f);
  local_33._0_2_ = CONCAT11((&DAT_00563e90)[param_1[4] & 0xf],(&DAT_00563e90)[param_1[4] >> 4]);
  local_34 = 0x2d;
  _local_2f = CONCAT31(stack0xffffffd2,0x2d);
  _local_2b = CONCAT22((ushort)(byte)(&DAT_00563e90)[param_1[8] >> 4],0x2d00);
  _local_2b = CONCAT31(stack0xffffffd6,(&DAT_00563e90)[param_1[7] & 0xf]);
  _local_2b = CONCAT13((&DAT_00563e90)[param_1[8] & 0xf],_local_2b);
  _local_27 = CONCAT22(0x2d,(ushort)(byte)(&DAT_00563e90)[param_1[9] & 0xf] << 8);
  _local_33 = CONCAT13((&DAT_00563e90)[param_1[5] & 0xf],
                       CONCAT12((&DAT_00563e90)[param_1[5] >> 4],local_33._0_2_));
  local_2f = (undefined1  [3])CONCAT12((&DAT_00563e90)[param_1[6] & 0xf],local_2f._0_2_);
  _local_2f = CONCAT13((&DAT_00563e90)[param_1[7] >> 4],local_2f);
  _local_27 = CONCAT13((&DAT_00563e90)[param_1[10] >> 4],_local_27);
  local_1e = (&DAT_00563e90)[param_1[0xd] >> 4];
  local_1f = (&DAT_00563e90)[param_1[0xc] & 0xf];
  uStack_1b = (&DAT_00563e90)[param_1[0xe] & 0xf];
  local_1d = (&DAT_00563e90)[param_1[0xd] & 0xf];
  local_1c = (&DAT_00563e90)[param_1[0xe] >> 4];
  uStack_1a = (&DAT_00563e90)[param_1[0xf] >> 4];
  _local_27 = CONCAT31(stack0xffffffda,(&DAT_00563e90)[param_1[9] >> 4]);
  uStack_19 = (&DAT_00563e90)[param_1[0xf] & 0xf];
  _local_23 = CONCAT31(CONCAT12((&DAT_00563e90)[param_1[0xc] >> 4],
                                CONCAT11((&DAT_00563e90)[param_1[0xb] & 0xf],
                                         (&DAT_00563e90)[param_1[0xb] >> 4])),
                       (&DAT_00563e90)[param_1[10] & 0xf]);
  (**(code **)(param_2[1] + 0xc))(*param_2,&local_3c,0x24);
  return;
}

