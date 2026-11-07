// FUN_014a8fb4 @ 014a8fb4 size=420 calls_out=3 calls_in=1
// strings: 

int FUN_014a8fb4(int param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  ulonglong uVar14;
  
  iVar13 = *(int *)(param_1 + 4);
  uVar12 = *(uint *)(param_1 + 8);
  uVar10 = *(uint *)(param_1 + 0xc);
  uVar11 = *(uint *)(param_1 + 0x10);
  bVar7 = *(byte *)(param_1 + 0x25);
  iVar3 = *(int *)(param_1 + 0x20);
  uVar9 = (uint)*(byte *)(param_1 + 0x18);
  cVar1 = *(char *)(param_1 + 0x24);
  do {
    if ((bVar7 & 1) != 0) {
      return 0;
    }
    if ((uVar11 <= uVar12) && (uVar10 <= uVar11)) {
      cVar2 = *(char *)(param_1 + 0x14 + uVar9 + -1);
      do {
        uVar8 = uVar11 - uVar10;
        if (uVar8 < 8) {
          uVar5 = 0;
          if (uVar8 == 0) {
            uVar14 = 0;
          }
          else {
            do {
              if (*(char *)(iVar13 + uVar10 + uVar5) == cVar2) {
                uVar14 = CONCAT44(uVar5,1);
                goto LAB_014a907c;
              }
              uVar5 = uVar5 + 1;
            } while (uVar8 != uVar5);
            uVar14 = (ulonglong)uVar8 << 0x20;
          }
        }
        else {
          uVar14 = FUN_01307168(cVar2,iVar13 + uVar10);
        }
LAB_014a907c:
        if ((uVar14 & 1) == 0) {
          *(uint *)(param_1 + 0xc) = uVar11;
          uVar10 = uVar11;
          break;
        }
        uVar10 = uVar10 + (int)(uVar14 >> 0x20) + 1;
        *(uint *)(param_1 + 0xc) = uVar10;
        if ((uVar9 <= uVar10) && (uVar10 <= uVar12)) {
          if (4 < uVar9) {
                    /* WARNING: Subroutine does not return */
            FUN_012faff4(0,uVar9,4,&DAT_01d2fe40);
          }
          iVar4 = thunk_FUN_01bed842(iVar13 + (uVar10 - uVar9),param_1 + 0x14,uVar9);
          if (iVar4 == 0) {
            iVar4 = *(int *)(param_1 + 0x1c);
            bVar7 = 0;
            *(uint *)(param_1 + 0x1c) = uVar10;
            iVar6 = (uVar10 - uVar9) - iVar4;
            goto LAB_014a9108;
          }
        }
      } while (uVar10 <= uVar11);
    }
    *(undefined1 *)(param_1 + 0x25) = 1;
    iVar4 = *(int *)(param_1 + 0x1c);
    if ((cVar1 == '\0') && (iVar3 == iVar4)) {
      return 0;
    }
    bVar7 = 1;
    iVar6 = iVar3 - iVar4;
LAB_014a9108:
    if (iVar6 != 0) {
      return iVar13 + iVar4;
    }
  } while( true );
}

