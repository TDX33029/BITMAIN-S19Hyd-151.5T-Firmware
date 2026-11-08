// FUN_01965eac @ 01965eac size=996 calls_out=6 calls_in=14
// strings: internal error: entered unreachable code | internal error: entered unreachable code

int FUN_01965eac(int param_1)

{
  uint uVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  bool bVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint unaff_r10;
  bool bVar11;
  undefined4 local_30 [3];
  
  uVar1 = *(uint *)(param_1 + 0x10);
  uVar2 = *(uint *)(param_1 + 0x14);
  iVar9 = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  if (uVar2 < uVar1) {
    piVar7 = (int *)(param_1 + 0xc);
    iVar4 = *piVar7;
LAB_01965ee4:
    do {
      uVar10 = (uint)*(byte *)(iVar4 + uVar2);
      if (0x2c < uVar10) {
        if (0x6d < uVar10) {
          if (uVar10 == 0x6e) {
            *(uint *)(param_1 + 0x14) = uVar2 + 1;
            pcVar3 = "ull";
          }
          else {
            if (uVar10 != 0x74) {
              if (uVar10 != 0x7b) goto LAB_01965ff0;
              goto LAB_01965f6c;
            }
            *(uint *)(param_1 + 0x14) = uVar2 + 1;
            pcVar3 = "rue";
          }
          uVar5 = 3;
LAB_01965fe8:
          iVar4 = FUN_01964c70(param_1,pcVar3,uVar5);
          goto LAB_01966008;
        }
        if (uVar10 == 0x2d) {
          *(uint *)(param_1 + 0x14) = uVar2 + 1;
          goto LAB_01966000;
        }
        if (uVar10 != 0x5b) {
          if (uVar10 != 0x66) goto LAB_01965ff0;
          *(uint *)(param_1 + 0x14) = uVar2 + 1;
          uVar5 = 4;
          pcVar3 = &DAT_0056efac;
          goto LAB_01965fe8;
        }
LAB_01965f6c:
        FUN_0196bd38(param_1,iVar9,unaff_r10);
        bVar6 = false;
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
LAB_01966040:
        uVar1 = *(uint *)(param_1 + 0x10);
        uVar2 = *(uint *)(param_1 + 0x14);
        if (uVar2 < uVar1) {
          iVar9 = *(int *)(param_1 + 8);
          iVar4 = *(int *)(param_1 + 0xc);
LAB_0196605c:
          do {
            uVar8 = (uint)*(byte *)(iVar4 + uVar2);
            if (uVar8 < 0xd) {
              if (1 < uVar8 - 9) goto LAB_0196610c;
            }
            else if (uVar8 < 0x20) {
              if (uVar8 != 0xd) goto LAB_0196610c;
            }
            else {
              if (0x2b < uVar8) {
                if (uVar8 == 0x2c) {
                  if (bVar6) {
                    uVar2 = uVar2 + 1;
                    *(uint *)(param_1 + 0x14) = uVar2;
                  }
                  goto LAB_01966124;
                }
                if (uVar8 == 0x5d) {
                  if ((uVar10 & 0xff) != 0x5b) goto LAB_0196610c;
                }
                else {
                  bVar11 = uVar8 != 0x7d;
                  if (!bVar11) {
                    uVar8 = uVar10 & 0xff;
                  }
                  if (bVar11 || uVar8 != 0x7b) goto LAB_0196610c;
                }
                uVar2 = uVar2 + 1;
                *(uint *)(param_1 + 0x14) = uVar2;
                if (iVar9 == 0) {
                  return 0;
                }
                iVar9 = iVar9 + -1;
                bVar6 = true;
                *(int *)(param_1 + 8) = iVar9;
                uVar10 = (uint)*(byte *)(*(int *)(param_1 + 4) + iVar9);
                if (uVar1 <= uVar2) break;
                goto LAB_0196605c;
              }
              if (uVar8 != 0x20) goto LAB_0196610c;
            }
            uVar2 = uVar2 + 1;
            *(uint *)(param_1 + 0x14) = uVar2;
            if (uVar1 == uVar2) break;
          } while( true );
        }
        local_30[0] = 2;
        if ((uVar10 & 0xff) != 0x5b) {
          if ((uVar10 & 0xff) != 0x7b) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d271dc);
          }
          goto LAB_0196620c;
        }
        goto LAB_01966210;
      }
      uVar8 = uVar10 - 9;
      if (0x19 < uVar8) {
LAB_01965ff0:
        if ((uVar10 - 0x30 & 0xff) < 10) {
LAB_01966000:
          iVar4 = FUN_019662ac(param_1);
LAB_01966008:
          if (iVar4 != 0) {
            return iVar4;
          }
          bVar6 = true;
          if (iVar9 == 0) {
            if (*(int *)(param_1 + 8) == 0) {
              return 0;
            }
            iVar9 = *(int *)(param_1 + 8) + -1;
            *(int *)(param_1 + 8) = iVar9;
            uVar10 = (uint)*(byte *)(*(int *)(param_1 + 4) + iVar9);
          }
          else {
            uVar10 = unaff_r10;
          }
          goto LAB_01966040;
        }
        local_30[0] = 10;
        goto LAB_01966210;
      }
      if ((1 << (uVar8 & 0xff) & 0x800013U) == 0) {
        if (uVar8 != 0x19) goto LAB_01965ff0;
        *(uint *)(param_1 + 0x14) = uVar2 + 1;
        iVar4 = FUN_01968350(piVar7);
        goto LAB_01966008;
      }
      uVar2 = uVar2 + 1;
      *(uint *)(param_1 + 0x14) = uVar2;
    } while (uVar1 != uVar2);
  }
LAB_019661e0:
  local_30[0] = 5;
LAB_01966210:
  iVar9 = FUN_01964674(param_1,local_30);
  return iVar9;
LAB_0196610c:
  if (bVar6) {
    local_30[0] = 7;
    if ((uVar10 & 0xff) != 0x5b) {
      if ((uVar10 & 0xff) != 0x7b) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d271ec);
      }
      local_30[0] = 8;
    }
    goto LAB_01966210;
  }
LAB_01966124:
  if ((uVar10 & 0xff) != 0x7b) {
LAB_019661d4:
    iVar9 = 1;
    unaff_r10 = uVar10;
    if (uVar1 <= uVar2) goto LAB_019661e0;
    goto LAB_01965ee4;
  }
  if (uVar2 < uVar1) {
    while( true ) {
      uVar8 = *(byte *)(iVar4 + uVar2) - 9;
      if (0x19 < uVar8) goto LAB_01966248;
      if ((1 << (uVar8 & 0xff) & 0x800013U) == 0) break;
      uVar2 = uVar2 + 1;
      *(uint *)(param_1 + 0x14) = uVar2;
      if (uVar1 == uVar2) goto LAB_0196620c;
    }
    if (uVar8 != 0x19) {
LAB_01966248:
      local_30[0] = 0x11;
      goto LAB_01966210;
    }
    *(uint *)(param_1 + 0x14) = uVar2 + 1;
    iVar9 = FUN_01968350(piVar7);
    if (iVar9 != 0) {
      return iVar9;
    }
    uVar1 = *(uint *)(param_1 + 0x10);
    uVar2 = *(uint *)(param_1 + 0x14);
    if (uVar2 < uVar1) {
      iVar4 = *piVar7;
      while( true ) {
        uVar8 = *(byte *)(iVar4 + uVar2) - 9;
        if ((0x17 < uVar8) || ((1 << (uVar8 & 0xff) & 0x800013U) == 0)) break;
        uVar2 = uVar2 + 1;
        *(uint *)(param_1 + 0x14) = uVar2;
        if (uVar1 == uVar2) goto LAB_0196620c;
      }
      if (*(byte *)(iVar4 + uVar2) != 0x3a) {
        local_30[0] = 6;
        goto LAB_01966210;
      }
      uVar2 = uVar2 + 1;
      *(uint *)(param_1 + 0x14) = uVar2;
      goto LAB_019661d4;
    }
  }
LAB_0196620c:
  local_30[0] = 3;
  goto LAB_01966210;
}

