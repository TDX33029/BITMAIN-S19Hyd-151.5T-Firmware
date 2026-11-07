// FUN_00036788 @ 00036788  size=256  callers=1
// program: bmminer


undefined4 FUN_00036788(void)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  undefined4 *puVar5;
  undefined4 *puVar4;
  int iVar6;
  uint in_fpscr;
  uint uVar7;
  undefined4 uVar8;
  
  if (DAT_00087dec == 2) {
    iVar6 = 0;
    do {
      iVar3 = FUN_000201d8(iVar6);
      if ((iVar3 != 0) && (iVar3 = FUN_0002002c(), uVar8 = DAT_0048d398, 0 < iVar3)) {
        puVar4 = &DAT_005063f0 + iVar6 * 0x100;
        do {
          puVar5 = puVar4 + 1;
          *puVar4 = uVar8;
          puVar4 = puVar5;
        } while (puVar5 != &DAT_005063f0 + iVar3 + iVar6 * 0x100);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 != 4);
    uVar1 = in_fpscr & 0xfffffff | (uint)(DAT_00087b84 < 0.0) << 0x1f |
            (uint)(DAT_00087b84 == 0.0) << 0x1e;
    in_fpscr = uVar1 | (uint)NAN(DAT_00087b84) << 0x1c;
    bVar2 = (byte)(uVar1 >> 0x18);
    if (!(bool)(bVar2 >> 6 & 1) && bVar2 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) {
      FUN_0001df34(DAT_0048d39c,DAT_00087df0,DAT_0048d398);
      uVar1 = in_fpscr & 0xfffffff | (uint)(DAT_00087b84 < 0.0) << 0x1f |
              (uint)(DAT_00087b84 == 0.0) << 0x1e;
      uVar7 = uVar1 | (uint)NAN(DAT_00087b84) << 0x1c;
      bVar2 = (byte)(uVar1 >> 0x18);
      if ((bool)(bVar2 >> 6 & 1) || bVar2 >> 7 != ((byte)(uVar7 >> 0x1c) & 1)) goto LAB_00036834;
      goto LAB_000367c0;
    }
  }
  uVar1 = in_fpscr & 0xfffffff | (uint)(DAT_00087b84 < 0.0) << 0x1f |
          (uint)(DAT_00087b84 == 0.0) << 0x1e;
  uVar7 = uVar1 | (uint)NAN(DAT_00087b84) << 0x1c;
  bVar2 = (byte)(uVar1 >> 0x18);
  if ((bool)(bVar2 >> 6 & 1) || bVar2 >> 7 != ((byte)(uVar7 >> 0x1c) & 1)) {
LAB_00036834:
    DAT_0048d398 = FUN_0001e400(DAT_00087df4,&DAT_005063f0,DAT_0048d39c,1);
    uVar8 = VectorUnsignedToFloat(DAT_0048d398,(byte)(uVar7 >> 0x16) & 3);
    return uVar8;
  }
LAB_000367c0:
  uVar8 = VectorUnsignedToFloat(DAT_0048d398,(byte)(uVar7 >> 0x16) & 3);
  return uVar8;
}

