// FUN_016beb5c @ 016beb5c size=796 calls_out=0 calls_in=1
// strings: 

bool FUN_016beb5c(byte *param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  bool bVar33;
  
  DAT_018d910c = &LAB_016bee84;
  bVar1 = param_1[8];
  bVar33 = bVar1 == 0x2d;
  if (bVar33) {
    bVar1 = param_1[0xd];
  }
  if (bVar33 && bVar1 == 0x2d) {
    bVar1 = param_1[0x12];
    bVar33 = bVar1 == 0x2d;
    if (bVar33) {
      bVar1 = param_1[0x17];
    }
    if (bVar33 && bVar1 == 0x2d) {
      bVar1 = (&DAT_00418c87)[param_1[2]];
      bVar2 = (&DAT_00418c87)[param_1[3]];
      bVar3 = (&DAT_00418c87)[*param_1];
      bVar4 = (&DAT_00418c87)[param_1[1]];
      param_2[1] = bVar2 | bVar1 << 4;
      *param_2 = bVar4 | bVar3 << 4;
      bVar5 = (&DAT_00418c87)[param_1[6]];
      bVar6 = (&DAT_00418c87)[param_1[7]];
      bVar7 = param_1[4];
      bVar8 = param_1[5];
      param_2[3] = bVar6 | bVar5 << 4;
      bVar7 = (&DAT_00418c87)[bVar7];
      bVar8 = (&DAT_00418c87)[bVar8];
      param_2[2] = bVar8 | bVar7 << 4;
      bVar9 = (&DAT_00418c87)[param_1[0xb]];
      bVar10 = (&DAT_00418c87)[param_1[0xc]];
      bVar11 = param_1[9];
      bVar12 = param_1[10];
      param_2[5] = bVar10 | bVar9 << 4;
      bVar11 = (&DAT_00418c87)[bVar11];
      bVar12 = (&DAT_00418c87)[bVar12];
      param_2[4] = bVar12 | bVar11 << 4;
      bVar13 = (&DAT_00418c87)[param_1[0x10]];
      bVar14 = (&DAT_00418c87)[param_1[0x11]];
      bVar15 = param_1[0xe];
      bVar16 = param_1[0xf];
      param_2[7] = bVar14 | bVar13 << 4;
      bVar15 = (&DAT_00418c87)[bVar15];
      bVar16 = (&DAT_00418c87)[bVar16];
      param_2[6] = bVar16 | bVar15 << 4;
      bVar17 = (&DAT_00418c87)[param_1[0x15]];
      bVar18 = (&DAT_00418c87)[param_1[0x16]];
      bVar19 = param_1[0x13];
      bVar20 = param_1[0x14];
      param_2[9] = bVar18 | bVar17 << 4;
      bVar19 = (&DAT_00418c87)[bVar19];
      bVar20 = (&DAT_00418c87)[bVar20];
      param_2[8] = bVar20 | bVar19 << 4;
      bVar21 = param_1[0x18];
      bVar22 = (&DAT_00418c87)[param_1[0x1a]];
      bVar23 = (&DAT_00418c87)[param_1[0x1b]];
      bVar24 = param_1[0x19];
      param_2[0xb] = bVar23 | bVar22 << 4;
      bVar21 = (&DAT_00418c87)[bVar21];
      bVar24 = (&DAT_00418c87)[bVar24];
      param_2[10] = bVar24 | bVar21 << 4;
      bVar25 = param_1[0x1c];
      bVar26 = (&DAT_00418c87)[param_1[0x1e]];
      bVar27 = (&DAT_00418c87)[param_1[0x1f]];
      bVar28 = param_1[0x1d];
      param_2[0xd] = bVar27 | bVar26 << 4;
      bVar25 = (&DAT_00418c87)[bVar25];
      bVar28 = (&DAT_00418c87)[bVar28];
      param_2[0xc] = bVar28 | bVar25 << 4;
      bVar29 = param_1[0x20];
      bVar30 = param_1[0x21];
      bVar31 = (&DAT_00418c87)[param_1[0x22]];
      bVar32 = (&DAT_00418c87)[param_1[0x23]];
      param_2[0xf] = bVar32 | bVar31 << 4;
      bVar29 = (&DAT_00418c87)[bVar29];
      bVar30 = (&DAT_00418c87)[bVar30];
      param_2[0xe] = bVar30 | bVar29 << 4;
      return (byte)(bVar29 | bVar25 | bVar21 | bVar19 | bVar15 | bVar11 | bVar7 | bVar3 | bVar4 |
                                                                                  bVar1 | bVar2 |
                                                                          bVar8 | bVar5 | bVar6 |
                                                                 bVar12 | bVar9 | bVar10 | bVar16 |
                                                        bVar13 | bVar14 | bVar20 | bVar17 | bVar18 |
                                      bVar24 | bVar22 | bVar23 | bVar28 | bVar26 | bVar27 | bVar30 |
                    bVar31 | bVar32) == 0xff;
    }
  }
  return true;
}

