// FUN_016be0a8 @ 016be0a8 size=2056 calls_out=0 calls_in=2
// strings: 

void FUN_016be0a8(undefined1 *param_1,byte *param_2,undefined4 param_3)

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
  byte *pbVar31;
  bool bVar32;
  
  pbVar31 = param_2;
  switch(param_3) {
  case 0x20:
    bVar1 = (&DAT_00418c87)[param_2[1]];
    if ((bVar1 | (&DAT_00418c87)[*param_2]) != 0xff) {
      bVar2 = (&DAT_00418c87)[param_2[3]];
      if ((bVar2 | (&DAT_00418c87)[param_2[2]]) != 0xff) {
        bVar3 = (&DAT_00418c87)[param_2[5]];
        if ((bVar3 | (&DAT_00418c87)[param_2[4]]) != 0xff) {
          bVar4 = (&DAT_00418c87)[param_2[7]];
          if ((bVar4 | (&DAT_00418c87)[param_2[6]]) != 0xff) {
            if (((&DAT_00418c87)[param_2[9]] | (&DAT_00418c87)[param_2[8]]) != 0xff) {
              bVar5 = (&DAT_00418c87)[param_2[10]];
              bVar6 = (&DAT_00418c87)[param_2[0xb]];
              if ((bVar6 | bVar5) != 0xff) {
                bVar7 = (&DAT_00418c87)[param_2[0xc]];
                bVar8 = (&DAT_00418c87)[param_2[0xd]];
                if ((bVar8 | bVar7) != 0xff) {
                  bVar9 = (&DAT_00418c87)[param_2[0xe]];
                  bVar10 = (&DAT_00418c87)[param_2[0xf]];
                  if ((bVar10 | bVar9) != 0xff) {
                    bVar11 = (&DAT_00418c87)[param_2[0x10]];
                    bVar12 = (&DAT_00418c87)[param_2[0x11]];
                    if ((bVar12 | bVar11) != 0xff) {
                      bVar13 = (&DAT_00418c87)[param_2[0x12]];
                      bVar14 = (&DAT_00418c87)[param_2[0x13]];
                      if ((bVar14 | bVar13) != 0xff) {
                        bVar15 = (&DAT_00418c87)[param_2[0x14]];
                        bVar16 = (&DAT_00418c87)[param_2[0x15]];
                        if ((bVar16 | bVar15) != 0xff) {
                          bVar17 = (&DAT_00418c87)[param_2[0x16]];
                          bVar18 = (&DAT_00418c87)[param_2[0x17]];
                          if ((bVar18 | bVar17) != 0xff) {
                            bVar19 = (&DAT_00418c87)[param_2[0x18]];
                            bVar20 = (&DAT_00418c87)[param_2[0x19]];
                            if ((bVar20 | bVar19) != 0xff) {
                              bVar21 = (&DAT_00418c87)[param_2[0x1a]];
                              bVar22 = (&DAT_00418c87)[param_2[0x1b]];
                              if ((bVar22 | bVar21) != 0xff) {
                                bVar23 = (&DAT_00418c87)[param_2[0x1c]];
                                bVar24 = (&DAT_00418c87)[param_2[0x1d]];
                                if ((bVar24 | bVar23) != 0xff) {
                                  bVar25 = (&DAT_00418c87)[param_2[0x1e]];
                                  bVar26 = (&DAT_00418c87)[param_2[0x1f]];
                                  if ((bVar26 | bVar25) != 0xff) {
                                    bVar27 = (&DAT_00418b54)[(byte)(&DAT_00418c87)[*param_2]];
                                    bVar28 = (&DAT_00418b54)[(byte)(&DAT_00418c87)[param_2[2]]];
                                    bVar29 = (&DAT_00418b54)[(byte)(&DAT_00418c87)[param_2[4]]];
                                    bVar30 = (&DAT_00418b54)[(byte)(&DAT_00418c87)[param_2[6]]];
                                    param_1[5] = (&DAT_00418b54)[(byte)(&DAT_00418c87)[param_2[8]]]
                                                 | (&DAT_00418c87)[param_2[9]];
                                    param_1[6] = (&DAT_00418b54)[bVar5] | bVar6;
                                    param_1[7] = (&DAT_00418b54)[bVar7] | bVar8;
                                    param_1[8] = (&DAT_00418b54)[bVar9] | bVar10;
                                    bVar5 = (&DAT_00418b54)[bVar11];
                                    bVar6 = (&DAT_00418b54)[bVar13];
                                    param_1[0xd] = (&DAT_00418b54)[bVar19] | bVar20;
                                    bVar7 = (&DAT_00418b54)[bVar15];
                                    param_1[0xe] = (&DAT_00418b54)[bVar21] | bVar22;
                                    param_1[0xb] = bVar7 | bVar16;
                                    bVar7 = (&DAT_00418b54)[bVar17];
                                    param_1[10] = bVar6 | bVar14;
                                    param_1[0xc] = bVar7 | bVar18;
                                    param_1[4] = bVar30 | bVar4;
                                    param_1[3] = bVar29 | bVar3;
                                    param_1[2] = bVar28 | bVar2;
                                    param_1[9] = bVar5 | bVar12;
                                    bVar2 = (&DAT_00418b54)[bVar25];
                                    bVar3 = (&DAT_00418b54)[bVar23];
                                    param_1[1] = bVar27 | bVar1;
                                    param_1[0x10] = bVar2 | bVar26;
                                    param_1[0xf] = bVar3 | bVar24;
                                    *param_1 = 0;
                                    return;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    param_3 = 0x20;
  default:
    goto switchD_016be0cc_caseD_21;
  case 0x24:
    goto switchD_016be0cc_caseD_24;
  case 0x26:
    break;
  case 0x2d:
    if (*param_2 != 0x75) goto switchD_016be0cc_caseD_21;
    bVar1 = param_2[1];
    bVar32 = bVar1 != 0x72;
    if (!bVar32) {
      bVar1 = param_2[2];
    }
    if (bVar32 || bVar1 != 0x6e) goto switchD_016be0cc_caseD_21;
    bVar1 = param_2[3];
    bVar32 = bVar1 != 0x3a;
    if (!bVar32) {
      bVar1 = param_2[4];
    }
    if (bVar32 || bVar1 != 0x75) goto switchD_016be0cc_caseD_21;
    bVar1 = param_2[5];
    bVar32 = bVar1 != 0x75;
    if (!bVar32) {
      bVar1 = param_2[6];
    }
    if (bVar32 || bVar1 != 0x69) goto switchD_016be0cc_caseD_21;
    bVar1 = param_2[7];
    bVar32 = bVar1 != 100;
    if (!bVar32) {
      bVar1 = param_2[8];
    }
    if (bVar32 || bVar1 != 0x3a) goto switchD_016be0cc_caseD_21;
    pbVar31 = param_2 + 9;
    if (param_2[0x11] != 0x2d) goto LAB_016be374;
    goto LAB_016be360;
  }
  bVar1 = *param_2;
  bVar32 = bVar1 != 0x7b;
  if (!bVar32) {
    bVar1 = param_2[0x25];
  }
  if (bVar32 || bVar1 != 0x7d) goto switchD_016be0cc_caseD_21;
  pbVar31 = param_2 + 1;
switchD_016be0cc_caseD_24:
  if (pbVar31[8] == 0x2d) {
LAB_016be360:
    bVar1 = pbVar31[0xd];
    bVar32 = bVar1 == 0x2d;
    if (bVar32) {
      bVar1 = pbVar31[0x12];
    }
    if ((bVar32 && bVar1 == 0x2d) && (pbVar31[0x17] == 0x2d)) {
      bVar1 = (&DAT_00418c87)[pbVar31[1]];
      bVar2 = (&DAT_00418c87)[pbVar31[3]];
      if ((byte)(bVar1 | (&DAT_00418c87)[*pbVar31] | (&DAT_00418c87)[pbVar31[2]] | bVar2) != 0xff) {
        bVar3 = (&DAT_00418c87)[pbVar31[5]];
        bVar4 = (&DAT_00418c87)[pbVar31[7]];
        if ((byte)(bVar3 | (&DAT_00418c87)[pbVar31[4]] | (&DAT_00418c87)[pbVar31[6]] | bVar4) !=
            0xff) {
          bVar5 = (&DAT_00418c87)[pbVar31[10]];
          if ((byte)(bVar5 | (&DAT_00418c87)[pbVar31[9]] | (&DAT_00418c87)[pbVar31[0xb]] |
                    (&DAT_00418c87)[pbVar31[0xc]]) != 0xff) {
            bVar6 = (&DAT_00418c87)[pbVar31[0xe]];
            bVar7 = (&DAT_00418c87)[pbVar31[0xf]];
            bVar8 = (&DAT_00418c87)[pbVar31[0x10]];
            bVar9 = (&DAT_00418c87)[pbVar31[0x11]];
            if ((byte)(bVar7 | bVar6 | bVar8 | bVar9) != 0xff) {
              bVar10 = (&DAT_00418c87)[pbVar31[0x13]];
              bVar11 = (&DAT_00418c87)[pbVar31[0x14]];
              bVar12 = (&DAT_00418c87)[pbVar31[0x15]];
              bVar13 = (&DAT_00418c87)[pbVar31[0x16]];
              if ((byte)(bVar11 | bVar10 | bVar12 | bVar13) != 0xff) {
                bVar14 = (&DAT_00418c87)[pbVar31[0x18]];
                bVar15 = (&DAT_00418c87)[pbVar31[0x19]];
                bVar16 = (&DAT_00418c87)[pbVar31[0x1a]];
                bVar17 = (&DAT_00418c87)[pbVar31[0x1b]];
                if ((byte)(bVar15 | bVar14 | bVar16 | bVar17) != 0xff) {
                  bVar18 = (&DAT_00418c87)[pbVar31[0x1c]];
                  bVar19 = (&DAT_00418c87)[pbVar31[0x1d]];
                  bVar20 = (&DAT_00418c87)[pbVar31[0x1e]];
                  bVar21 = (&DAT_00418c87)[pbVar31[0x1f]];
                  if ((byte)(bVar19 | bVar18 | bVar20 | bVar21) != 0xff) {
                    bVar22 = (&DAT_00418c87)[pbVar31[0x20]];
                    bVar23 = (&DAT_00418c87)[pbVar31[0x21]];
                    bVar24 = (&DAT_00418c87)[pbVar31[0x22]];
                    bVar25 = (&DAT_00418c87)[pbVar31[0x23]];
                    if ((byte)(bVar23 | bVar22 | bVar24 | bVar25) != 0xff) {
                      bVar26 = (&DAT_00418b54)[(byte)(&DAT_00418c87)[*pbVar31]];
                      bVar27 = (&DAT_00418b54)[(byte)(&DAT_00418c87)[pbVar31[2]]];
                      bVar28 = (&DAT_00418b54)[(byte)(&DAT_00418c87)[pbVar31[4]]];
                      bVar29 = (&DAT_00418b54)[(byte)(&DAT_00418c87)[pbVar31[6]]];
                      bVar30 = (&DAT_00418b54)[(byte)(&DAT_00418c87)[pbVar31[9]]];
                      param_1[6] = (&DAT_00418b54)[(byte)(&DAT_00418c87)[pbVar31[0xb]]] |
                                   (&DAT_00418c87)[pbVar31[0xc]];
                      bVar14 = (&DAT_00418b54)[bVar14];
                      bVar6 = (&DAT_00418b54)[bVar6];
                      param_1[5] = bVar30 | bVar5;
                      bVar5 = (&DAT_00418b54)[bVar8];
                      param_1[4] = bVar29 | bVar4;
                      bVar4 = (&DAT_00418b54)[bVar10];
                      param_1[3] = bVar28 | bVar3;
                      bVar3 = (&DAT_00418b54)[bVar12];
                      param_1[7] = bVar6 | bVar7;
                      param_1[9] = bVar4 | bVar11;
                      param_1[2] = bVar27 | bVar2;
                      bVar2 = (&DAT_00418b54)[bVar16];
                      bVar4 = (&DAT_00418b54)[bVar18];
                      bVar6 = (&DAT_00418b54)[bVar20];
                      bVar7 = (&DAT_00418b54)[bVar22];
                      param_1[0x10] = (&DAT_00418b54)[bVar24] | bVar25;
                      param_1[0xf] = bVar7 | bVar23;
                      param_1[0xb] = bVar14 | bVar15;
                      param_1[0xe] = bVar6 | bVar21;
                      param_1[0xc] = bVar2 | bVar17;
                      param_1[10] = bVar3 | bVar13;
                      param_1[8] = bVar5 | bVar9;
                      param_1[1] = bVar26 | bVar1;
                      param_1[0xd] = bVar4 | bVar19;
                      *param_1 = 0;
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
      param_3 = 0x24;
      param_2 = pbVar31;
switchD_016be0cc_caseD_21:
      *(byte **)(param_1 + 4) = param_2;
      *(undefined4 *)(param_1 + 8) = param_3;
      *param_1 = 1;
      return;
    }
  }
LAB_016be374:
  *(byte **)(param_1 + 4) = pbVar31;
  *(undefined4 *)(param_1 + 8) = 0x24;
  *param_1 = 1;
  return;
}

