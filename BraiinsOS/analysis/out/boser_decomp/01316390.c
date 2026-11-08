// FUN_01316390 @ 01316390 size=776 calls_out=5 calls_in=2
// strings: Nth specifier out of bounds. | Invalid nth specifier.

/* WARNING: Control flow encountered bad instruction data */

void FUN_01316390(undefined4 *param_1,int param_2,uint param_3)

{
  bool bVar1;
  bool bVar2;
  undefined1 uVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  
  if ((param_3 == 0) || (*(char *)(param_2 + param_3 + -1) != 'L')) {
    uVar10 = 0;
    do {
      uVar8 = param_3 - uVar10;
      if (uVar8 < 8) {
        uVar6 = 0;
        if (uVar8 == 0) {
          uVar11 = 0;
        }
        else {
          do {
            if (*(char *)(param_2 + uVar10 + uVar6) == '#') {
              uVar11 = CONCAT44(uVar6,1);
              goto LAB_0131642c;
            }
            uVar6 = uVar6 + 1;
          } while (uVar8 != uVar6);
          uVar11 = (ulonglong)uVar8 << 0x20;
        }
      }
      else {
        uVar11 = FUN_01307168(0x23,param_2 + uVar10);
      }
LAB_0131642c:
      iVar5 = (int)(uVar11 >> 0x20);
      if ((uVar11 & 1) == 0) break;
      uVar8 = iVar5 + uVar10;
      if ((uVar8 < param_3) && (*(char *)(param_2 + uVar8) == '#')) {
        uVar8 = uVar8 + 1;
        pbVar4 = (byte *)(param_2 + uVar8);
        if ((uVar8 < param_3) && ((char)*pbVar4 < -0x40)) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb514(param_2,param_3,uVar8,param_3,&DAT_01ce4c64);
        }
        uVar8 = param_3 - uVar8;
        if (uVar8 == 0) goto LAB_013165b4;
        if (uVar8 == 1) {
          bVar7 = *pbVar4;
          if (bVar7 == 0x2b || bVar7 == 0x2d) goto LAB_013165b4;
        }
        else {
          bVar7 = *pbVar4;
        }
        iVar9 = 0;
        if (bVar7 == 0x2b) {
          pbVar4 = pbVar4 + 1;
          uVar8 = uVar8 - 1;
          iVar9 = -1;
        }
        uVar6 = 0;
        if (2 < uVar8) {
          iVar5 = (iVar5 - (param_3 + iVar9)) + uVar10;
          goto LAB_0131656c;
        }
        if (uVar8 == 0) goto LAB_01316520;
        bVar2 = uVar8 == 1;
        goto LAB_013164e8;
      }
      uVar10 = uVar8 + 1;
    } while (uVar10 <= param_3);
    *param_1 = 7;
    uVar3 = 1;
  }
  else {
    *param_1 = 7;
    uVar3 = 0x40;
  }
  goto LAB_01316464;
LAB_0131656c:
  iVar5 = iVar5 + 1;
  if (iVar5 == 0) goto LAB_01316510;
  uVar10 = (uVar6 & 0xff) * 4 + (uVar6 & 0xff);
  if (uVar10 >> 7 != 0) goto LAB_013165b4;
  if ((9 < *pbVar4 - 0x30) ||
     (uVar6 = (uVar10 * 2 & 0xff) + (*pbVar4 - 0x30 & 0xff), pbVar4 = pbVar4 + 1, uVar6 >> 8 != 0))
  goto LAB_013165b4;
  goto LAB_0131656c;
  while( true ) {
    pbVar4 = pbVar4 + 1;
    uVar6 = (bVar7 - 0x30) + uVar6 * 10;
    bVar2 = true;
    if (bVar1) break;
LAB_013164e8:
    bVar1 = bVar2;
    bVar7 = *pbVar4;
    if (9 < bVar7 - 0x30) {
LAB_013165b4:
      iVar5 = thunk_FUN_01be5118(0x16);
      if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,0x16);
      }
      FUN_01bed4e2(iVar5,"Invalid nth specifier.",0x16);
      param_1[2] = iVar5;
      *(undefined1 *)((int)param_1 + 7) = 0;
      *(undefined2 *)((int)param_1 + 5) = 0;
      param_1[3] = 0x16;
      *(undefined1 *)(param_1 + 1) = 0x16;
      *param_1 = 6;
      return;
    }
  }
LAB_01316510:
  if ((uVar6 - 6 & 0xff) < 0xfb) {
LAB_01316520:
    iVar5 = thunk_FUN_01be5118(0x1c);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,0x1c);
    }
    FUN_01bed4e2(iVar5,"Nth specifier out of bounds.",0x1c);
    param_1[2] = iVar5;
    *param_1 = 6;
    param_1[1] = 0x1c;
    param_1[3] = 0x1c;
    return;
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(uVar6 & 0xff) {
  case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 1:
    *param_1 = 7;
    uVar3 = 2;
    break;
  case 2:
    *param_1 = 7;
    uVar3 = 4;
    break;
  case 3:
    *param_1 = 7;
    uVar3 = 8;
    break;
  case 4:
    *param_1 = 7;
    uVar3 = 0x10;
    break;
  case 5:
    *param_1 = 7;
    uVar3 = 0x20;
  }
LAB_01316464:
  *(undefined1 *)(param_1 + 1) = uVar3;
  return;
}

