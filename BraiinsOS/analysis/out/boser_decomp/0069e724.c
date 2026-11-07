// FUN_0069e724 @ 0069e724 size=492 calls_out=6 calls_in=1
// strings: 

void FUN_0069e724(int *param_1,int param_2)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  ulonglong uVar15;
  
  uVar3 = *(uint *)(param_2 + 8);
  iVar14 = *(int *)(param_2 + 4);
  uVar12 = *(uint *)(param_2 + 0xc);
  uVar13 = *(uint *)(param_2 + 0x10);
  bVar2 = *(byte *)(param_2 + 0x25);
  uVar6 = *(uint *)(param_2 + 0x20);
  uVar11 = (uint)*(byte *)(param_2 + 0x18);
  uVar7 = (uint)*(byte *)(param_2 + 0x24);
  while ((bVar2 & 1) == 0) {
    if ((uVar13 <= uVar3) && (uVar12 <= uVar13)) {
      cVar1 = *(char *)(param_2 + 0x14 + uVar11 + -1);
      do {
        uVar9 = uVar13 - uVar12;
        if (uVar9 < 8) {
          uVar8 = 0;
          if (uVar9 == 0) {
            uVar15 = 0;
          }
          else {
            do {
              if (*(char *)(iVar14 + uVar12 + uVar8) == cVar1) {
                uVar15 = CONCAT44(uVar8,1);
                goto LAB_0069e7f0;
              }
              uVar8 = uVar8 + 1;
            } while (uVar9 != uVar8);
            uVar15 = (ulonglong)uVar9 << 0x20;
          }
        }
        else {
          uVar15 = FUN_01307168(cVar1,iVar14 + uVar12);
        }
LAB_0069e7f0:
        if ((uVar15 & 1) == 0) {
          *(uint *)(param_2 + 0xc) = uVar13;
          uVar12 = uVar13;
          break;
        }
        uVar12 = uVar12 + (int)(uVar15 >> 0x20) + 1;
        *(uint *)(param_2 + 0xc) = uVar12;
        if ((uVar11 <= uVar12) && (uVar12 <= uVar3)) {
          if (4 < uVar11) {
                    /* WARNING: Subroutine does not return */
            FUN_012faff4(0,uVar11,4,&DAT_01d2fe40);
          }
          iVar4 = thunk_FUN_01bed842(iVar14 + (uVar12 - uVar11),param_2 + 0x14,uVar11);
          if (iVar4 == 0) {
            uVar9 = *(uint *)(param_2 + 0x1c);
            bVar2 = 0;
            *(uint *)(param_2 + 0x1c) = uVar12;
            iVar4 = (uVar12 - uVar11) - uVar9;
            goto LAB_0069e878;
          }
        }
      } while (uVar12 <= uVar13);
    }
    uVar9 = *(uint *)(param_2 + 0x1c);
    *(undefined1 *)(param_2 + 0x25) = 1;
    uVar8 = uVar7;
    if (uVar7 == 0) {
      uVar8 = uVar6;
    }
    if (uVar7 == 0 && uVar8 == uVar9) break;
    iVar4 = uVar6 - uVar9;
    bVar2 = 1;
LAB_0069e878:
    if (iVar4 != 0) {
      uVar10 = 0;
      if (-1 < iVar4) {
        uVar10 = 1;
        iVar5 = FUN_01298504(iVar4,1);
        if (iVar5 != 0) {
          FUN_01bed4e2(iVar5,iVar14 + uVar9,iVar4);
          *param_1 = iVar4;
          param_1[1] = iVar5;
          param_1[2] = iVar4;
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar10,iVar4);
    }
  }
  *param_1 = -0x80000000;
  return;
}

