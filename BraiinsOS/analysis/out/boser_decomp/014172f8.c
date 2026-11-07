// FUN_014172f8 @ 014172f8 size=592 calls_out=3 calls_in=0
// strings: internal error: entered unreachable code | internal error: entered unreachable code

void FUN_014172f8(ushort *param_1,undefined4 *param_2)

{
  ushort uVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  undefined3 local_58;
  undefined1 uStack_55;
  undefined4 uStack_54;
  undefined3 local_50;
  undefined1 uStack_4d;
  uint local_4c;
  undefined4 uStack_48;
  uint local_44;
  uint local_40;
  undefined1 local_3c;
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  uVar4 = *(byte *)((int)param_1 + 7) - 1 & 0xff;
  if (6 < uVar4) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01cf43a4);
  }
  uVar5 = (byte)param_1[3] - 1 & 0xff;
  if (0xb < uVar5) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01cf4394);
  }
  local_3c = 0x54;
  uVar2 = (short)(ushort)*(byte *)((int)param_1 + 5) * 0xcd;
  uVar1 = *param_1;
  _local_58 = CONCAT13(0x2c,*(undefined3 *)(&PTR_s_Mon_01d324c4)[uVar4]);
  uStack_54._0_2_ = CONCAT11((char)(uVar2 >> 0xb) + '0',0x20);
  uVar4 = (short)(uVar1 >> 2) * 0x147b;
  uStack_54 = CONCAT13(0x20,CONCAT12(*(byte *)((int)param_1 + 5) + (char)(uVar2 >> 0xb) * -10,
                                     (undefined2)uStack_54)) | 0x300000;
  _local_50 = CONCAT13(0x20,*(undefined3 *)(&PTR_s_Jan_01d324e0)[uVar5]);
  cVar3 = (char)(uVar1 / 10);
  local_4c = CONCAT13((char)uVar1 + cVar3 * -10,
                      CONCAT12(cVar3 + (char)((uint)((short)(uVar1 / 10) * 0x199a) >> 0x10) * -10,
                               CONCAT11((char)(uVar4 >> 0x11) +
                                        (char)((uint)((short)(ushort)(uVar4 >> 0x11) * 0x199a) >>
                                              0x10) * -10,
                                        (char)((uint)((short)(uVar1 >> 3) * 0x20c5) >> 0x14) + '0'))
                     ) | 0x30303000;
  uVar4 = (short)(ushort)(byte)param_1[2] * 0xcd;
  uStack_48._0_2_ = CONCAT11((char)(uVar4 >> 0xb) + '0',0x20);
  uStack_48 = CONCAT13(0x3a,CONCAT12((byte)param_1[2] + (char)(uVar4 >> 0xb) * -10,
                                     (undefined2)uStack_48)) | 0x300000;
  uVar4 = (short)(ushort)*(byte *)((int)param_1 + 3) * 0xcd;
  uVar5 = (short)(ushort)(byte)param_1[1] * 0xcd;
  local_44 = CONCAT13((char)(uVar5 >> 0xb) + '0',
                      (int3)CONCAT22(0x303a,CONCAT11(*(byte *)((int)param_1 + 3) +
                                                     (char)(uVar4 >> 0xb) * -10,
                                                     (char)(uVar4 >> 0xb) + '0'))) | 0x3000;
  local_40 = CONCAT31(0x4d4720,(byte)param_1[1] + (char)(uVar5 >> 0xb) * -10) | 0x30;
  FUN_012fbd94(&local_34,&local_58,0x1d);
  if (local_34 == 1) {
    local_28 = local_30;
    local_24 = local_2c;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,&local_28,&DAT_01cf4374,&DAT_01cf4384);
  }
  (**(code **)(param_2[1] + 0xc))(*param_2,local_30,local_2c);
  return;
}

