// FUN_0067d938 @ 0067d938 size=432 calls_out=4 calls_in=1
// strings: 

int FUN_0067d938(int param_1)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  byte bVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  bool bVar14;
  ulonglong uVar15;
  undefined8 uVar16;
  
  iVar13 = *(int *)(param_1 + 4);
  uVar3 = *(uint *)(param_1 + 8);
  iVar4 = *(int *)(param_1 + 0x20);
  uVar11 = *(uint *)(param_1 + 0xc);
  uVar12 = *(uint *)(param_1 + 0x10);
  bVar10 = *(byte *)(param_1 + 0x25);
  uVar9 = (uint)*(byte *)(param_1 + 0x18);
  cVar1 = *(char *)(param_1 + 0x24);
  do {
    if ((bVar10 & 1) != 0) {
      return 0;
    }
    if ((uVar12 <= uVar3) && (uVar11 <= uVar12)) {
      cVar2 = *(char *)(param_1 + 0x14 + uVar9 + -1);
      do {
        uVar8 = uVar12 - uVar11;
        if (uVar8 < 8) {
          uVar6 = 0;
          if (uVar8 == 0) {
            uVar15 = 0;
          }
          else {
            do {
              if (*(char *)(iVar13 + uVar11 + uVar6) == cVar2) {
                uVar15 = CONCAT44(uVar6,1);
                goto LAB_0067da04;
              }
              uVar6 = uVar6 + 1;
            } while (uVar8 != uVar6);
            uVar15 = (ulonglong)uVar8 << 0x20;
          }
        }
        else {
          uVar15 = FUN_01307168(cVar2,iVar13 + uVar11);
        }
LAB_0067da04:
        if ((uVar15 & 1) == 0) {
          *(uint *)(param_1 + 0xc) = uVar12;
          uVar11 = uVar12;
          break;
        }
        uVar11 = uVar11 + (int)(uVar15 >> 0x20) + 1;
        *(uint *)(param_1 + 0xc) = uVar11;
        if ((uVar9 <= uVar11) && (uVar11 <= uVar3)) {
          if (4 < uVar9) {
                    /* WARNING: Subroutine does not return */
            FUN_012faff4(0,uVar9,4,&DAT_01d2fe40);
          }
          iVar5 = thunk_FUN_01bed842(iVar13 + (uVar11 - uVar9),param_1 + 0x14,uVar9);
          if (iVar5 == 0) {
            iVar5 = *(int *)(param_1 + 0x1c);
            bVar10 = 0;
            *(uint *)(param_1 + 0x1c) = uVar11;
            iVar7 = (uVar11 - uVar9) - iVar5;
            goto LAB_0067da94;
          }
        }
      } while (uVar11 <= uVar12);
    }
    *(undefined1 *)(param_1 + 0x25) = 1;
    iVar5 = *(int *)(param_1 + 0x1c);
    if ((cVar1 == '\0') && (iVar4 == iVar5)) {
      return 0;
    }
    bVar10 = 1;
    iVar7 = iVar4 - iVar5;
LAB_0067da94:
    uVar16 = FUN_013245a0(iVar13 + iVar5,iVar7);
    bVar14 = (int)((ulonglong)uVar16 >> 0x20) != 0;
    iVar5 = 0;
    if (bVar14) {
      iVar5 = (int)uVar16;
    }
    if (bVar14 && (int)uVar16 != 0) {
      return iVar5;
    }
  } while( true );
}

