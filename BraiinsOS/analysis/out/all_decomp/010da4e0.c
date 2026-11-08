// FUN_010da4e0 @ 010da4e0 size=1028 calls_out=4 calls_in=2
// strings: capacity overflow

void FUN_010da4e0(int param_1,uint *param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint *puVar22;
  uint uVar23;
  uint uVar24;
  uint *puVar25;
  uint uVar26;
  uint uVar27;
  uint local_68 [4];
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint uStack_40;
  uint uStack_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  
  uVar12 = *param_2;
  uVar13 = param_2[1];
  uVar14 = param_2[4];
  uVar15 = param_2[5];
  puVar10 = (uint *)(param_1 + 0x48);
  uVar7 = *puVar10;
  uVar16 = param_2[6];
  uVar17 = param_2[7];
  uVar5 = 0x11;
  if (0x11 < uVar7) {
    uVar5 = uVar7;
  }
  uVar18 = param_2[8];
  uVar19 = param_2[0xc];
  uVar20 = param_2[0xd];
  uVar2 = uVar7;
  if (0x11 < uVar7) {
    uVar2 = *(uint *)(param_1 + 4);
  }
  uVar11 = param_2[2];
  uVar27 = param_2[3];
  uVar24 = param_2[0x10];
  uVar21 = param_2[0xe];
  uVar4 = param_2[0xf];
  uVar8 = param_2[9];
  uVar23 = param_2[10];
  uVar26 = param_2[0xb];
  if (uVar5 - uVar2 < 0x11) {
    if ((0xffffffee < uVar2) || (LZCOUNT(uVar2 + 0x10) == 0)) {
LAB_010da89c:
                    /* WARNING: Subroutine does not return */
      FUN_00faa464("capacity overflow",0x11,&DAT_0188b950);
    }
    iVar3 = FUN_010d9998(param_1,(0xffffffffU >> LZCOUNT(uVar2 + 0x10)) + 1);
    if (iVar3 != -0x7fffffff) {
      if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874();
      }
      goto LAB_010da89c;
    }
    uVar7 = *puVar10;
  }
  puVar25 = (uint *)(param_1 + 4);
  puVar22 = puVar25;
  puVar6 = puVar10;
  if (0x11 < uVar7) {
    puVar22 = *(uint **)(param_1 + 8);
    puVar6 = puVar25;
  }
  uVar5 = *puVar6;
  uVar2 = 0x11;
  if (0x11 < uVar7) {
    uVar2 = uVar7;
  }
  bVar1 = false;
  if (uVar5 < uVar2) {
    puVar22[uVar5] = uVar12;
    iVar3 = 1;
    if (uVar5 + 1 != uVar2) {
      puVar22[uVar5 + 1] = uVar13;
      iVar3 = 2;
      if (uVar5 + 2 != uVar2) {
        puVar22[uVar5 + 2] = uVar11;
        iVar3 = 3;
        if (uVar5 + 3 != uVar2) {
          puVar22[uVar5 + 3] = uVar27;
          iVar3 = 4;
          if (uVar5 + 4 != uVar2) {
            puVar22[uVar5 + 4] = uVar14;
            iVar3 = 5;
            if (uVar5 + 5 != uVar2) {
              puVar22[uVar5 + 5] = uVar15;
              iVar3 = 6;
              if (uVar5 + 6 != uVar2) {
                puVar22[uVar5 + 6] = uVar16;
                iVar3 = 7;
                if (uVar5 + 7 != uVar2) {
                  puVar22[uVar5 + 7] = uVar17;
                  iVar3 = 8;
                  if (uVar5 + 8 != uVar2) {
                    puVar22[uVar5 + 8] = uVar18;
                    iVar3 = 9;
                    if (uVar5 + 9 != uVar2) {
                      puVar22[uVar5 + 9] = uVar8;
                      iVar3 = 10;
                      if (uVar5 + 10 != uVar2) {
                        puVar22[uVar5 + 10] = uVar23;
                        iVar3 = 0xb;
                        if (uVar5 + 0xb != uVar2) {
                          puVar22[uVar5 + 0xb] = uVar26;
                          iVar3 = 0xc;
                          if (uVar5 + 0xc != uVar2) {
                            puVar22[uVar5 + 0xc] = uVar19;
                            iVar3 = 0xd;
                            if (uVar5 + 0xd != uVar2) {
                              puVar22[uVar5 + 0xd] = uVar20;
                              iVar3 = 0xe;
                              if (uVar5 + 0xe != uVar2) {
                                puVar22[uVar5 + 0xe] = uVar21;
                                iVar3 = 0xf;
                                if (uVar5 + 0xf != uVar2) {
                                  puVar22[uVar5 + 0xf] = uVar4;
                                  iVar3 = 0x10;
                                  if (uVar5 + 0x10 != uVar2) {
                                    puVar22[uVar5 + 0x10] = uVar24;
                                    if (uVar5 + 0x11 != uVar2) {
                                      *puVar6 = uVar5 + 0x11;
                                      return;
                                    }
                                    iVar3 = 0x11;
                                    bVar1 = true;
                                    uVar5 = uVar2;
                                    goto LAB_010da780;
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
    uVar5 = uVar2;
  }
  else {
    iVar3 = 0;
  }
LAB_010da780:
  *puVar6 = uVar5;
  local_28 = uVar24;
  local_2c = uVar4;
  local_30 = uVar21;
  local_34 = uVar20;
  local_38 = uVar19;
  local_44 = uVar8;
  uStack_40 = uVar23;
  uStack_3c = uVar26;
  local_48 = uVar18;
  local_4c = uVar17;
  local_50 = uVar16;
  local_54 = uVar15;
  local_58 = uVar14;
  local_68[1] = uVar13;
  local_68[0] = uVar12;
  local_68[3] = uVar27;
  local_68[2] = uVar11;
  if (!bVar1) {
    do {
      uVar5 = *puVar10;
      iVar9 = iVar3 + 1;
      if (uVar5 < 0x12) {
        uVar7 = 0x11;
        puVar6 = puVar25;
        puVar22 = puVar10;
      }
      else {
        uVar7 = uVar5;
        puVar6 = *(uint **)(param_1 + 8);
        puVar22 = puVar25;
        uVar5 = *(uint *)(param_1 + 4);
      }
      uVar12 = local_68[iVar3];
      if (uVar5 == uVar7) {
        FUN_010d9b58(param_1);
        uVar5 = *(uint *)(param_1 + 4);
        puVar6 = *(uint **)(param_1 + 8);
        puVar22 = puVar25;
      }
      puVar6[uVar5] = uVar12;
      *puVar22 = *puVar22 + 1;
      iVar3 = iVar9;
    } while (iVar9 != 0x11);
  }
  return;
}

