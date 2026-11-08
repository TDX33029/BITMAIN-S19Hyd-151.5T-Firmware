// FUN_00c6e930 @ 00c6e930 size=340 calls_out=5 calls_in=1
// strings: 

void FUN_00c6e930(undefined4 *param_1,int param_2)

{
  uint uVar1;
  byte bVar2;
  longlong lVar3;
  uint extraout_r2;
  uint uVar4;
  int extraout_r3;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int unaff_r6;
  int iVar8;
  uint uVar9;
  bool bVar10;
  bool bVar11;
  uint in_fpscr;
  undefined4 uVar12;
  undefined4 extraout_s1;
  double dVar13;
  double dVar14;
  longlong lVar15;
  undefined8 uVar16;
  uint local_60 [3];
  undefined4 local_54;
  uint local_50;
  undefined4 local_4c;
  int local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined1 uStack_39;
  
  local_60[2] = *(int *)(param_2 + 0x80);
  local_54 = *(undefined4 *)(param_2 + 0x84);
  local_40 = *(undefined4 *)(param_2 + 0x88);
  if (local_60[2] == 0) {
    local_40 = 0;
  }
  lVar3 = 0;
  local_60[0] = (uint)(local_60[2] != 0);
  uVar7 = 0;
  iVar8 = 0;
  local_4c = 0;
  local_60[1] = 0;
  local_50 = local_60[0];
  local_48 = local_60[2];
  local_44 = local_54;
  while( true ) {
    uVar6 = (uint)((ulonglong)lVar3 >> 0x20);
    uVar9 = (uint)lVar3;
    uVar16 = FUN_00c38db8(local_60);
    iVar5 = (int)((ulonglong)uVar16 >> 0x20);
    bVar10 = (int)uVar16 != 0;
    if (bVar10) {
      unaff_r6 = iVar5;
    }
    if (!bVar10 || iVar5 == 0) break;
    dVar14 = (double)FUN_01845f30(*(undefined4 *)(unaff_r6 + 0x10),*(undefined4 *)(unaff_r6 + 0x14))
    ;
    dVar13 = (double)VectorUnsignedToFloat
                               (*(undefined4 *)(unaff_r6 + 0x18),(byte)(in_fpscr >> 0x16) & 3);
    dVar14 = dVar13 / 1000000000.0 + dVar14;
    in_fpscr = in_fpscr & 0xfffffff;
    if (dVar14 == 0.0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74f8(&DAT_0034ad94,0x1f,&uStack_39,&DAT_0186ab28,&DAT_0186aae8);
    }
    uVar12 = FUN_0184590c(0,*(undefined4 *)(unaff_r6 + 0x30),0,0);
    dVar14 = (double)CONCAT44(extraout_s1,uVar12) / dVar14;
    lVar15 = FUN_01845bac(SUB84(dVar14,0));
    uVar1 = in_fpscr & 0xfffffff | (uint)(dVar14 < 3.4028236692093843e+38) << 0x1f |
            (uint)(dVar14 == 3.4028236692093843e+38) << 0x1e;
    in_fpscr = uVar1 | (uint)NAN(dVar14) << 0x1c;
    iVar5 = extraout_r3;
    uVar4 = extraout_r2;
    if (NAN(dVar14)) {
      lVar15 = 0;
      uVar4 = 0;
      iVar5 = 0;
    }
    bVar2 = (byte)(uVar1 >> 0x18);
    if (!(bool)(bVar2 >> 6 & 1) && bVar2 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) {
      iVar5 = -1;
      uVar4 = 0xffffffff;
      lVar15 = -1;
    }
    uVar1 = (uint)((ulonglong)lVar15 >> 0x20);
    lVar3 = lVar15 + lVar3;
    bVar11 = CARRY4(uVar1,uVar6) || CARRY4(uVar1 + uVar6,(uint)CARRY4((uint)lVar15,uVar9));
    uVar6 = uVar4 + uVar7;
    bVar10 = CARRY4(uVar4,uVar7);
    uVar7 = uVar4 + uVar7 + (uint)bVar11;
    iVar8 = iVar5 + iVar8 + (uint)(bVar10 || CARRY4(uVar6,(uint)bVar11));
  }
  *param_1 = 0;
  param_1[1] = 0;
  *(longlong *)(param_1 + 2) = lVar3;
  param_1[4] = uVar7;
  param_1[5] = iVar8;
  return;
}

