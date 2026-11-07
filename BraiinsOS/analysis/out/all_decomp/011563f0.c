// FUN_011563f0 @ 011563f0 size=2132 calls_out=1 calls_in=1
// strings: 

void FUN_011563f0(uint *param_1,undefined4 *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  bool bVar9;
  int iVar10;
  int *piVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint *puVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  undefined1 uVar19;
  
  piVar11 = (int *)*param_2;
  uVar13 = param_2[1];
  uVar19 = 2;
  uVar3 = piVar11[1];
  iVar7 = piVar11[2];
  uVar12 = piVar11[3];
  uVar14 = 0;
  if (iVar7 != 0) {
    uVar14 = uVar12;
  }
  uVar16 = uVar14 + uVar3;
  if (uVar16 <= uVar13) goto LAB_01156bf8;
  uVar17 = uVar13;
  if (iVar7 == 0) {
LAB_01156458:
    if (uVar17 < uVar3) {
      cVar1 = *(char *)(*piVar11 + uVar17);
      goto joined_r0x01156474;
    }
    uVar19 = false;
    if ((uVar14 - 1 < uVar14) && (uVar13 == uVar14 - 1)) goto LAB_011564a8;
  }
  else {
    if (uVar12 <= uVar13) {
      uVar17 = uVar13 - uVar12;
      goto LAB_01156458;
    }
    cVar1 = *(char *)(iVar7 + uVar13);
joined_r0x01156474:
    if ((uVar14 - 1 < uVar14) && (uVar13 == uVar14 - 1)) {
      uVar19 = cVar1 == '/';
LAB_011564a8:
      uVar14 = 0;
LAB_011564c8:
      do {
        uVar13 = uVar3 - uVar14;
        iVar7 = *piVar11 + uVar14;
        if (uVar13 < 8) {
          if (uVar3 == uVar14) goto LAB_01156be0;
          uVar17 = 0;
          while (*(char *)(iVar7 + uVar17) != '/') {
            uVar17 = uVar17 + 1;
            if (uVar13 == uVar17) goto LAB_01156be0;
          }
        }
        else {
          uVar16 = (iVar7 + 3U & 0xfffffffc) - iVar7;
          if (uVar16 == 0) {
            uVar16 = 0;
            goto LAB_01156554;
          }
          uVar17 = 0;
          do {
            if (*(char *)(iVar7 + uVar17) == '/') goto LAB_011565d0;
            uVar17 = uVar17 + 1;
          } while (uVar16 != uVar17);
          for (; uVar16 <= uVar13 - 8; uVar16 = uVar16 + 8) {
LAB_01156554:
            uVar5 = *(uint *)(iVar7 + uVar16);
            uVar17 = ((uint *)(iVar7 + uVar16))[1] ^ 0x2f2f2f2f;
            if (((0x1010100 - (uVar5 ^ 0x2f2f2f2f) | uVar5) & 0x80808080 &
                (0x1010100 - uVar17 | uVar17)) != 0x80808080) break;
          }
          if (uVar13 == uVar16) goto LAB_01156be0;
          iVar10 = 0;
          while (*(char *)(iVar7 + uVar16 + iVar10) != '/') {
            iVar10 = iVar10 + 1;
            if ((uVar3 - uVar16) - uVar14 == iVar10) goto LAB_01156be0;
          }
          uVar17 = iVar10 + uVar16;
        }
LAB_011565d0:
        uVar17 = uVar17 + uVar14;
        uVar14 = uVar17 + 1;
        if (uVar3 <= uVar17) {
          if (uVar3 < uVar14) goto LAB_01156be0;
          goto LAB_011564c8;
        }
        cVar1 = *(char *)(*piVar11 + uVar17);
        if ((uVar3 < uVar14) || (cVar1 == '/')) goto LAB_01156bd4;
      } while( true );
    }
    uVar19 = cVar1 == '/';
    if ((bool)uVar19) {
      uVar13 = uVar13 + 1;
      param_2[1] = uVar13;
    }
  }
  if (iVar7 == 0) {
    iVar7 = *piVar11;
    if (uVar13 != 0) {
      if (uVar13 < uVar3) {
        if (*(char *)(iVar7 + uVar13) < -0x40) goto LAB_011567fc;
      }
      else if (uVar3 != uVar13) {
LAB_011567fc:
                    /* WARNING: Subroutine does not return */
        FUN_00faa8ac(iVar7,uVar3,uVar13,uVar3,&DAT_01888d9c);
      }
    }
    uVar12 = uVar3 - uVar13;
    uVar14 = 0;
    do {
      while( true ) {
        uVar17 = uVar12 - uVar14;
        iVar10 = iVar7 + uVar13 + uVar14;
        if (uVar17 < 8) break;
        uVar4 = (iVar10 + 3U & 0xfffffffc) - iVar10;
        if (uVar4 != 0) {
          uVar5 = 0;
          while (*(char *)(iVar10 + uVar5) != '/') {
            uVar5 = uVar5 + 1;
            if (uVar4 == uVar5) goto LAB_01156944;
          }
          goto LAB_01156910;
        }
        uVar4 = 0;
        do {
          uVar8 = *(uint *)(iVar10 + uVar4);
          uVar5 = ((uint *)(iVar10 + uVar4))[1] ^ 0x2f2f2f2f;
          if (((0x1010100 - (uVar8 ^ 0x2f2f2f2f) | uVar8) & 0x80808080 & (0x1010100 - uVar5 | uVar5)
              ) != 0x80808080) break;
          uVar4 = uVar4 + 8;
LAB_01156944:
        } while (uVar4 <= uVar17 - 8);
        if (uVar17 == uVar4) goto LAB_01156ba0;
        iVar2 = 0;
        while (*(char *)(iVar10 + uVar4 + iVar2) != '/') {
          iVar2 = iVar2 + 1;
          if ((uVar12 - uVar4) - uVar14 == iVar2) goto LAB_01156ba0;
        }
        uVar5 = iVar2 + uVar4 + uVar14;
        uVar14 = uVar5 + 1;
        if (uVar12 <= uVar5) goto LAB_011569d8;
LAB_01156920:
        cVar1 = *(char *)(iVar7 + uVar13 + uVar5);
        bVar9 = cVar1 == '/';
        if ((uVar12 < uVar14) || (cVar1 == '/')) goto LAB_01156c04;
      }
      if (uVar12 == uVar14) break;
      iVar2 = 0;
      while (*(char *)(iVar10 - iVar2) != '/') {
        iVar2 = iVar2 + -1;
        if ((uVar13 - uVar3) + uVar14 == iVar2) goto LAB_01156ba0;
      }
      uVar5 = -iVar2;
LAB_01156910:
      uVar5 = uVar5 + uVar14;
      uVar14 = uVar5 + 1;
      if (uVar5 < uVar12) goto LAB_01156920;
LAB_011569d8:
    } while (uVar14 <= uVar12);
  }
  else {
    if (uVar12 <= uVar13) {
      iVar7 = *piVar11;
      uVar14 = uVar13 - uVar12;
      if (uVar13 != uVar12) {
        if (uVar14 < uVar3) {
          if (*(char *)(iVar7 + uVar14) < -0x40) goto LAB_0115683c;
        }
        else if (uVar3 != uVar14) {
LAB_0115683c:
                    /* WARNING: Subroutine does not return */
          FUN_00faa8ac(iVar7,uVar3,uVar14,uVar3,&DAT_01888d7c);
        }
      }
      iVar10 = (uVar3 + uVar12) - uVar13;
      iVar2 = iVar7 + uVar14;
      uVar3 = uVar3 - uVar14;
      uVar14 = 0;
LAB_01156a2c:
      do {
        uVar17 = uVar3 - uVar14;
        iVar18 = iVar2 + uVar14;
        if (uVar17 < 8) {
          if (uVar3 == uVar14) {
LAB_01156bb8:
            uVar12 = uVar13;
            goto LAB_01156bec;
          }
          iVar6 = 0;
          while (*(char *)(iVar18 + iVar6) != '/') {
            iVar6 = iVar6 + 1;
            if (iVar10 - uVar14 == iVar6) goto LAB_01156bb8;
          }
        }
        else {
          uVar5 = iVar18 + 3U & 0xfffffffc;
          uVar4 = uVar5 - iVar18;
          if (uVar4 == 0) {
            uVar4 = 0;
LAB_01156a8c:
            puVar15 = (uint *)(iVar2 + 4 + uVar4 + uVar14);
            do {
              if (((0x1010100 - (puVar15[-1] ^ 0x2f2f2f2f) | puVar15[-1]) & 0x80808080 &
                  (0x1010100 - (*puVar15 ^ 0x2f2f2f2f) | *puVar15 ^ 0x2f2f2f2f)) != 0x80808080)
              break;
              uVar4 = uVar4 + 8;
              puVar15 = puVar15 + 2;
            } while (uVar4 <= uVar17 - 8);
          }
          else {
            iVar6 = 0;
            do {
              if (*(char *)(iVar18 - iVar6) == '/') {
                uVar5 = uVar14 - iVar6;
                uVar14 = uVar5 + 1;
                if (uVar5 < uVar3) goto LAB_01156b60;
                goto LAB_01156b98;
              }
              iVar6 = iVar6 + -1;
            } while ((((uVar13 + iVar7) - uVar12) + uVar14) - uVar5 != iVar6);
            if (uVar4 <= uVar17 - 8) goto LAB_01156a8c;
          }
          if (uVar17 == uVar4) goto LAB_01156ba0;
          iVar6 = 0;
          while (*(char *)(iVar18 + uVar4 + iVar6) != '/') {
            iVar6 = iVar6 + 1;
            if ((iVar10 - uVar4) - uVar14 == iVar6) goto LAB_01156ba0;
          }
          iVar6 = iVar6 + uVar4;
        }
        uVar5 = iVar6 + uVar14;
        uVar14 = uVar5 + 1;
        if (uVar3 <= uVar5) {
LAB_01156b98:
          if (uVar3 < uVar14) goto LAB_01156ba0;
          goto LAB_01156a2c;
        }
LAB_01156b60:
        bVar9 = *(char *)(iVar2 + uVar5) == '/';
        if ((uVar3 < uVar14) || (*(char *)(iVar2 + uVar5) == '/')) goto LAB_01156c04;
      } while( true );
    }
    if ((uVar13 != 0) && (*(char *)(iVar7 + uVar13) < -0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa8ac(iVar7,uVar12,uVar13,uVar12,&DAT_01888d8c);
    }
    uVar14 = uVar12 - uVar13;
    uVar3 = 0;
    do {
      while( true ) {
        uVar17 = uVar14 - uVar3;
        iVar10 = iVar7 + uVar13 + uVar3;
        if (uVar17 < 8) break;
        uVar4 = (iVar10 + 3U & 0xfffffffc) - iVar10;
        if (uVar4 != 0) {
          uVar5 = 0;
          while (*(char *)(iVar10 + uVar5) != '/') {
            uVar5 = uVar5 + 1;
            if (uVar4 == uVar5) goto LAB_01156738;
          }
          goto LAB_01156704;
        }
        uVar4 = 0;
        do {
          uVar8 = *(uint *)(iVar10 + uVar4);
          uVar5 = ((uint *)(iVar10 + uVar4))[1] ^ 0x2f2f2f2f;
          if (((0x1010100 - (uVar8 ^ 0x2f2f2f2f) | uVar8) & 0x80808080 & (0x1010100 - uVar5 | uVar5)
              ) != 0x80808080) break;
          uVar4 = uVar4 + 8;
LAB_01156738:
        } while (uVar4 <= uVar17 - 8);
        if (uVar17 == uVar4) goto LAB_01156ba0;
        iVar2 = 0;
        while (*(char *)(iVar10 + uVar4 + iVar2) != '/') {
          iVar2 = iVar2 + 1;
          if ((uVar14 - uVar4) - uVar3 == iVar2) goto LAB_01156ba0;
        }
        uVar5 = iVar2 + uVar4 + uVar3;
        uVar3 = uVar5 + 1;
        if (uVar14 <= uVar5) goto LAB_011567cc;
LAB_01156714:
        cVar1 = *(char *)(iVar7 + uVar13 + uVar5);
        bVar9 = cVar1 == '/';
        if ((uVar14 < uVar3) || (cVar1 == '/')) goto LAB_01156c04;
      }
      if (uVar14 == uVar3) break;
      iVar2 = 0;
      while (*(char *)(iVar10 - iVar2) != '/') {
        iVar2 = iVar2 + -1;
        if ((uVar13 - uVar12) + uVar3 == iVar2) goto LAB_01156ba0;
      }
      uVar5 = -iVar2;
LAB_01156704:
      uVar5 = uVar5 + uVar3;
      uVar3 = uVar5 + 1;
      if (uVar5 < uVar14) goto LAB_01156714;
LAB_011567cc:
    } while (uVar3 <= uVar14);
  }
LAB_01156ba0:
  uVar12 = uVar13;
  goto LAB_01156bec;
LAB_01156c04:
  if (bVar9) {
    uVar16 = uVar5 + uVar13;
  }
  uVar12 = uVar13;
  goto LAB_01156bec;
LAB_01156bd4:
  if (cVar1 == '/') {
    uVar3 = uVar17;
  }
LAB_01156be0:
  uVar16 = uVar3 + uVar12;
LAB_01156bec:
  *param_1 = uVar12;
  param_1[1] = uVar16;
  param_2[1] = uVar16;
LAB_01156bf8:
  *(undefined1 *)(param_1 + 2) = uVar19;
  return;
}

