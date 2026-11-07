// FUN_016753d8 @ 016753d8 size=2448 calls_out=9 calls_in=2
// strings: 

void FUN_016753d8(uint param_1,uint param_2,uint param_3,uint param_4,int param_5,int param_6)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined4 uVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  bool bVar20;
  int local_110;
  uint local_fc;
  uint local_f8;
  int local_f0;
  undefined1 auStack_e8 [196];
  
  local_f8 = param_1;
  if (0x20 < param_2) {
    local_110 = param_6;
    uVar7 = param_2;
    do {
      while( true ) {
        if (param_5 == 0) {
          FUN_0167c154(local_f8,uVar7,param_3,param_4,1);
          return;
        }
        uVar10 = (uVar7 >> 3) * 0x540 + local_f8;
        uVar3 = local_f8 + (uVar7 >> 3) * 0x300;
        if (uVar7 < 0x40) {
          uVar11 = *(uint *)(uVar3 + 0x78);
          uVar13 = *(undefined4 *)(uVar3 + 0x74);
          uVar9 = *(undefined4 *)(local_f8 + 0x74);
          uVar4 = *(uint *)(local_f8 + 0x78);
          uVar16 = uVar11;
          if (uVar4 < uVar11) {
            uVar16 = uVar4;
          }
          uVar19 = FUN_016dd50a(uVar9,uVar13,uVar16);
          uVar17 = *(uint *)(uVar10 + 0x78);
          uVar8 = *(undefined4 *)(uVar10 + 0x74);
          if (uVar19 == 0) {
            uVar19 = uVar4 - uVar11;
          }
          uVar16 = uVar17;
          if (uVar4 < uVar17) {
            uVar16 = uVar4;
          }
          uVar2 = FUN_016dd50a(uVar9,uVar8,uVar16);
          if (uVar2 == 0) {
            uVar2 = uVar4 - uVar17;
          }
          uVar16 = local_f8;
          if (-1 < (int)(uVar2 ^ uVar19)) {
            uVar16 = uVar17;
            if (uVar11 < uVar17) {
              uVar16 = uVar11;
            }
            uVar4 = FUN_016dd50a(uVar13,uVar8,uVar16);
            if (uVar4 == 0) {
              uVar4 = uVar11 - uVar17;
            }
            uVar16 = uVar3;
            if ((int)(uVar4 ^ uVar19) < 0) {
              uVar16 = uVar10;
            }
          }
        }
        else {
          uVar16 = FUN_01684218(local_f8,uVar3,uVar10);
        }
        param_5 = param_5 + -1;
        FUN_016dd1aa(auStack_e8,uVar16,0xc0);
        uVar10 = (uVar16 - local_f8 >> 6) * -0x55555555;
        if (local_110 == 0) break;
        uVar4 = *(uint *)(uVar16 + 0x78);
        uVar11 = *(uint *)(local_110 + 0x78);
        uVar3 = uVar4;
        if (uVar11 < uVar4) {
          uVar3 = uVar11;
        }
        uVar3 = FUN_016dd50a(*(undefined4 *)(local_110 + 0x74),*(undefined4 *)(uVar16 + 0x74),uVar3)
        ;
        if (uVar3 == 0) {
          uVar3 = uVar11 - uVar4;
        }
        if (0x7fffffff < uVar3) break;
LAB_01675710:
        if (param_4 < uVar7) goto LAB_01675d50;
        uVar4 = 0;
        uVar3 = param_3 + uVar7 * 0xc0;
        uVar11 = local_f8;
        while( true ) {
          for (; uVar11 < local_f8 + uVar10 * 0xc0; uVar11 = uVar11 + 0xc0) {
            uVar17 = *(uint *)(uVar11 + 0x78);
            uVar2 = *(uint *)(uVar16 + 0x78);
            uVar19 = uVar17;
            if (uVar2 < uVar17) {
              uVar19 = uVar2;
            }
            uVar19 = FUN_016dd50a(*(undefined4 *)(uVar16 + 0x74),*(undefined4 *)(uVar11 + 0x74),
                                  uVar19);
            uVar3 = uVar3 - 0xc0;
            if (uVar19 == 0) {
              uVar19 = uVar2 - uVar17;
            }
            uVar2 = uVar3;
            uVar17 = uVar4;
            if (uVar19 < 0x80000000) {
              uVar17 = uVar4 + 1;
              uVar2 = param_3;
            }
            FUN_016dd1aa(uVar2 + uVar4 * 0xc0,uVar11,0xc0);
            uVar4 = uVar17;
          }
          if (uVar10 == uVar7) break;
          FUN_016dd1aa(param_3 + uVar4 * 0xc0,uVar11,0xc0);
          uVar11 = uVar11 + 0xc0;
          uVar4 = uVar4 + 1;
          uVar3 = uVar3 - 0xc0;
          uVar10 = uVar7;
        }
        FUN_016dd1aa(local_f8,param_3,uVar4 * 0xc0);
        param_2 = uVar7 - uVar4;
        if (param_2 == 0) {
          return;
        }
        local_f8 = local_f8 + uVar4 * 0xc0;
        iVar12 = (param_3 - 0xc0) + uVar7 * 0xc0;
        uVar10 = param_2;
        uVar3 = local_f8;
        do {
          FUN_016dd1aa(uVar3,iVar12,0xc0);
          iVar12 = iVar12 + -0xc0;
          uVar3 = uVar3 + 0xc0;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
        if (uVar7 < uVar4) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa36c(uVar4,uVar7,uVar7,&DAT_018af348);
        }
        local_110 = 0;
        uVar7 = param_2;
        if (param_2 < 0x21) goto LAB_016758a0;
      }
      if (param_4 < uVar7) goto LAB_01675d50;
      param_2 = 0;
      uVar3 = param_3 + uVar7 * 0xc0;
      uVar4 = local_f8;
      uVar11 = uVar10;
      while( true ) {
        for (; uVar4 < local_f8 + uVar11 * 0xc0; uVar4 = uVar4 + 0xc0) {
          uVar2 = *(uint *)(uVar16 + 0x78);
          uVar17 = *(uint *)(uVar4 + 0x78);
          uVar19 = uVar2;
          if (uVar17 < uVar2) {
            uVar19 = uVar17;
          }
          iVar12 = FUN_016dd50a(*(undefined4 *)(uVar4 + 0x74),*(undefined4 *)(uVar16 + 0x74),uVar19)
          ;
          uVar3 = uVar3 - 0xc0;
          if (iVar12 == 0) {
            iVar12 = uVar17 - uVar2;
          }
          uVar19 = uVar3;
          if (iVar12 < 0) {
            uVar19 = param_3;
          }
          FUN_016dd1aa(uVar19 + param_2 * 0xc0,uVar4,0xc0);
          param_2 = param_2 - (iVar12 >> 0x1f);
        }
        if (uVar11 == uVar7) break;
        uVar3 = uVar3 - 0xc0;
        FUN_016dd1aa(uVar3 + param_2 * 0xc0,uVar4,0xc0);
        uVar4 = uVar4 + 0xc0;
        uVar11 = uVar7;
      }
      FUN_016dd1aa(local_f8,param_3,param_2 * 0xc0);
      iVar12 = uVar7 - param_2;
      if (iVar12 != 0) {
        iVar15 = (param_3 - 0xc0) + uVar7 * 0xc0;
        iVar18 = local_f8 + param_2 * 0xc0;
        iVar14 = iVar12;
        do {
          FUN_016dd1aa(iVar18,iVar15,0xc0);
          iVar15 = iVar15 + -0xc0;
          iVar18 = iVar18 + 0xc0;
          iVar14 = iVar14 + -1;
        } while (iVar14 != 0);
      }
      if (param_2 == 0) goto LAB_01675710;
      if (uVar7 < param_2) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa478(&DAT_00418e0f,0x13,&DAT_018af338);
      }
      FUN_016753d8(local_f8 + param_2 * 0xc0,iVar12,param_3,param_4,param_5,auStack_e8);
      uVar7 = param_2;
    } while (0x20 < param_2);
  }
LAB_016758a0:
  if (param_2 < 2) {
    return;
  }
  if (param_2 + 0x10 <= param_4) {
    uVar7 = param_2 >> 1;
    uVar10 = param_3 + uVar7 * 0xc0;
    iVar12 = local_f8 + uVar7 * 0xc0;
    if (param_2 < 8) {
      FUN_016dd1aa(param_3,local_f8,0xc0);
      FUN_016dd1aa(uVar10,iVar12,0xc0);
      uVar3 = 1;
    }
    else {
      FUN_01670558(local_f8,param_3);
      FUN_01670558(iVar12,uVar10);
      uVar3 = 4;
    }
    if (uVar3 < uVar7) {
      local_f0 = uVar3 * 0xc0;
      uVar16 = uVar3;
      do {
        iVar18 = local_f8 + uVar16 * 0xc0;
        iVar14 = param_3 + uVar16 * 0xc0;
        FUN_016dd1aa(iVar14,iVar18,0xc0);
        uVar11 = *(uint *)(iVar14 + -0x48);
        uVar13 = *(undefined4 *)(iVar14 + 0x74);
        uVar19 = *(uint *)(iVar14 + 0x78);
        uVar4 = uVar11;
        if (uVar19 < uVar11) {
          uVar4 = uVar19;
        }
        uVar4 = FUN_016dd50a(uVar13,*(undefined4 *)(iVar14 + -0x4c),uVar4);
        if (uVar4 == 0) {
          uVar4 = uVar19 - uVar11;
        }
        if (0x7fffffff < uVar4) {
          iVar14 = local_f0;
          do {
            iVar15 = param_3 + iVar14;
            FUN_016dd1aa(iVar15,iVar15 + -0xc0,0xc0);
            if (iVar14 == 0xc0) {
              uVar4 = param_3;
              goto LAB_0167595c;
            }
            uVar11 = *(uint *)(iVar15 + -0x108);
            uVar4 = uVar11;
            if (uVar19 < uVar11) {
              uVar4 = uVar19;
            }
            iVar5 = FUN_016dd50a(uVar13,*(undefined4 *)(iVar15 + -0x10c),uVar4);
            iVar14 = iVar14 + -0xc0;
            if (iVar5 == 0) {
              iVar5 = uVar19 - uVar11;
            }
          } while (iVar5 < 0);
          uVar4 = param_3 + iVar14;
LAB_0167595c:
          FUN_016dd1aa(uVar4,iVar18,0x74);
          *(undefined4 *)(iVar15 + -0x4c) = uVar13;
          *(uint *)(iVar15 + -0x48) = uVar19;
          FUN_016dd1aa(iVar15 + -0x44,iVar18 + 0x7c,0x44);
        }
        uVar16 = uVar16 + 1;
        local_f0 = local_f0 + 0xc0;
      } while (uVar16 != uVar7);
    }
    if (uVar3 < param_2 - uVar7) {
      iVar14 = uVar3 * 0xc0;
      local_f0 = 0xc0;
      local_fc = uVar10;
      do {
        iVar15 = uVar10 + uVar3 * 0xc0;
        iVar18 = iVar12 + uVar3 * 0xc0;
        FUN_016dd1aa(iVar15,iVar18,0xc0);
        uVar11 = *(uint *)(iVar15 + -0x48);
        uVar13 = *(undefined4 *)(iVar15 + 0x74);
        uVar4 = *(uint *)(iVar15 + 0x78);
        uVar16 = uVar11;
        if (uVar4 < uVar11) {
          uVar16 = uVar4;
        }
        uVar16 = FUN_016dd50a(uVar13,*(undefined4 *)(iVar15 + -0x4c),uVar16);
        if (uVar16 == 0) {
          uVar16 = uVar4 - uVar11;
        }
        if (0x7fffffff < uVar16) {
          iVar15 = local_f0;
          uVar16 = local_fc;
          do {
            iVar5 = uVar16 + iVar14;
            FUN_016dd1aa(iVar5,iVar5 + -0xc0,0xc0);
            if (iVar14 == iVar15) {
              uVar16 = uVar10;
              goto LAB_01675a8c;
            }
            uVar19 = *(uint *)(iVar5 + -0x108);
            uVar11 = uVar19;
            if (uVar4 < uVar19) {
              uVar11 = uVar4;
            }
            iVar6 = FUN_016dd50a(uVar13,*(undefined4 *)(iVar5 + -0x10c),uVar11);
            iVar15 = iVar15 + 0xc0;
            uVar16 = uVar16 - 0xc0;
            if (iVar6 == 0) {
              iVar6 = uVar4 - uVar19;
            }
          } while (iVar6 < 0);
          uVar16 = uVar16 + iVar14;
LAB_01675a8c:
          FUN_016dd1aa(uVar16,iVar18,0x74);
          *(undefined4 *)(iVar5 + -0x4c) = uVar13;
          *(uint *)(iVar5 + -0x48) = uVar4;
          FUN_016dd1aa(iVar5 + -0x44,iVar18 + 0x7c,0x44);
        }
        uVar3 = uVar3 + 1;
        local_f0 = local_f0 + -0xc0;
        local_fc = local_fc + 0xc0;
      } while (uVar3 != param_2 - uVar7);
    }
    iVar12 = 0;
    iVar18 = uVar10 - 0xc0;
    iVar14 = param_3 + param_2 * 0xc0 + -0xc0;
    do {
      uVar16 = *(uint *)(param_3 + 0x78);
      uVar4 = *(uint *)(uVar10 + 0x78);
      uVar3 = uVar16;
      if (uVar4 < uVar16) {
        uVar3 = uVar4;
      }
      uVar3 = FUN_016dd50a(*(undefined4 *)(uVar10 + 0x74),*(undefined4 *)(param_3 + 0x74),uVar3);
      if (uVar3 == 0) {
        uVar3 = uVar4 - uVar16;
      }
      uVar16 = uVar10;
      if (uVar3 < 0x80000000) {
        uVar16 = param_3;
      }
      FUN_016dd1aa(local_f8 + iVar12,uVar16,0xc0);
      uVar11 = *(uint *)(iVar18 + 0x78);
      uVar4 = *(uint *)(iVar14 + 0x78);
      uVar16 = uVar11;
      if (uVar4 < uVar11) {
        uVar16 = uVar4;
      }
      uVar16 = FUN_016dd50a(*(undefined4 *)(iVar14 + 0x74),*(undefined4 *)(iVar18 + 0x74),uVar16);
      if (uVar16 == 0) {
        uVar16 = uVar4 - uVar11;
      }
      iVar15 = iVar18;
      if (uVar16 < 0x80000000) {
        iVar15 = iVar14;
      }
      FUN_016dd1aa((local_f8 + param_2 * 0xc0 + -0xc0) - iVar12,iVar15,0xc0);
      iVar12 = iVar12 + 0xc0;
      uVar10 = uVar10 + (uVar3 >> 0x1f | (uVar3 >> 0x1f) << 1) * 0x40;
      uVar3 = uVar3 >> 0x1f ^ 1;
      param_3 = param_3 + (uVar3 | uVar3 << 1) * 0x40;
      iVar18 = iVar18 + ((int)uVar16 >> 0x1f) * 0xc0;
      iVar14 = iVar14 + ~((int)uVar16 >> 0x1f) * 0xc0;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
    uVar7 = iVar18 + 0xc0;
    if ((param_2 & 1) == 0) {
      uVar3 = uVar10;
    }
    else {
      bVar20 = uVar7 <= param_3;
      uVar3 = uVar10 + ((uint)bVar20 | (uint)bVar20 << 1) * 0x40;
      if (!bVar20) {
        uVar10 = param_3;
      }
      FUN_016dd1aa(local_f8 + iVar12,uVar10,0xc0);
      param_2 = (uint)!bVar20 | (uint)!bVar20 << 1;
      param_3 = param_3 + param_2 * 0x40;
    }
    if (param_3 == uVar7) {
      param_2 = iVar14 + 0xc0;
    }
    if (param_3 == uVar7 && uVar3 == param_2) {
      return;
    }
    FUN_00fb7254();
  }
LAB_01675d50:
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x1675d50);
  (*pcVar1)();
}

