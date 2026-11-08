// FUN_00fb1f64 @ 00fb1f64 size=612 calls_out=0 calls_in=636
// strings: 

undefined4 FUN_00fb1f64(undefined4 *param_1,int param_2,uint param_3)

{
  bool bVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  code *pcVar6;
  uint uVar7;
  int iVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  
  uVar3 = *param_1;
  iVar4 = param_1[1];
  pcVar2 = (char *)param_1[2];
  uVar13 = 0;
  bVar9 = false;
  uVar12 = 0;
  do {
    uVar14 = uVar13;
    if (bVar9) {
      return 0;
    }
    do {
      uVar13 = uVar14;
      if (param_3 < uVar14) {
LAB_00fb2138:
        bVar9 = true;
        uVar14 = uVar12;
        uVar5 = param_3;
        if (param_3 == uVar12) {
          return 0;
        }
        goto LAB_00fb214c;
      }
      uVar13 = param_3 - uVar14;
      iVar10 = param_2 + uVar14;
      if (uVar13 < 8) {
        if (param_3 == uVar14) {
LAB_00fb2134:
          uVar13 = param_3;
          goto LAB_00fb2138;
        }
        uVar7 = 0;
        while (*(char *)(iVar10 + uVar7) != '\n') {
          uVar7 = uVar7 + 1;
          if (uVar13 == uVar7) goto LAB_00fb2134;
        }
      }
      else {
        uVar5 = (iVar10 + 3U & 0xfffffffc) - iVar10;
        if (uVar5 == 0) {
          uVar5 = 0;
          do {
            uVar11 = *(uint *)(iVar10 + uVar5);
            uVar7 = ((uint *)(iVar10 + uVar5))[1] ^ 0xa0a0a0a;
            if (((0x1010100 - (uVar11 ^ 0xa0a0a0a) | uVar11) & 0x80808080 &
                (0x1010100 - uVar7 | uVar7)) != 0x80808080) break;
            uVar5 = uVar5 + 8;
LAB_00fb208c:
          } while (uVar5 <= uVar13 - 8);
          if (uVar13 == uVar5) goto LAB_00fb2134;
          iVar8 = 0;
          while (*(char *)(iVar10 + uVar5 + iVar8) != '\n') {
            iVar8 = iVar8 + 1;
            if ((param_3 - uVar5) - uVar14 == iVar8) goto LAB_00fb2134;
          }
          uVar7 = iVar8 + uVar5;
        }
        else {
          uVar7 = 0;
          while (*(char *)(iVar10 + uVar7) != '\n') {
            uVar7 = uVar7 + 1;
            if (uVar5 == uVar7) goto LAB_00fb208c;
          }
        }
      }
      uVar13 = uVar14 + uVar7;
      uVar14 = uVar13 + 1;
    } while ((param_3 <= uVar13) || (*(char *)(iVar10 + uVar7) != '\n'));
    bVar9 = false;
    uVar5 = uVar14;
    uVar13 = uVar14;
LAB_00fb214c:
    if ((*pcVar2 != '\0') &&
       (iVar10 = (**(code **)(iVar4 + 0xc))(uVar3,&DAT_00567348,4), iVar10 != 0)) {
      return 1;
    }
    bVar1 = false;
    if (uVar5 != uVar12) {
      bVar1 = *(char *)(param_2 + -1 + uVar5) == '\n';
    }
    pcVar6 = *(code **)(iVar4 + 0xc);
    *pcVar2 = bVar1;
    iVar10 = (*pcVar6)(uVar3,param_2 + uVar12,uVar5 - uVar12);
    uVar12 = uVar14;
    if (iVar10 != 0) {
      return 1;
    }
  } while( true );
}

