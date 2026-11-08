// FUN_01347274 @ 01347274 size=884 calls_out=3 calls_in=1
// strings: 

void FUN_01347274(int *param_1,int param_2,uint param_3,uint param_4)

{
  undefined1 uVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  
  uVar9 = param_4;
LAB_01347294:
  do {
    if (param_3 == 0) {
      return;
    }
    uVar6 = 0;
    do {
      if (*(char *)(param_2 + uVar6) == '%') goto LAB_013472bc;
      uVar6 = uVar6 + 1;
    } while (param_3 != uVar6);
    uVar6 = param_3;
LAB_013472bc:
    if (uVar6 != 0) {
      if (uVar6 < param_3) {
        if (*(char *)(param_2 + uVar6) < -0x40) goto LAB_013475bc;
      }
      else if (param_3 != uVar6) goto LAB_013475bc;
      uVar8 = param_1[2];
      uVar3 = uVar8;
      if (*param_1 - uVar8 < uVar6) {
        FUN_006520b4(param_1,uVar8,uVar6,1,1);
        uVar3 = param_1[2];
      }
      iVar10 = param_1[1];
      iVar11 = param_2 + uVar6;
      param_3 = param_3 - uVar6;
      FUN_01bed4e2(iVar10 + uVar3,param_2,uVar6);
      uVar3 = uVar3 + uVar6;
      uVar6 = uVar9 & 1;
      uVar9 = 0;
      param_1[2] = uVar3;
      param_2 = iVar11;
      if (uVar6 != 0) {
        if (uVar8 != 0) {
          if (uVar8 < uVar3) {
            if (*(char *)(iVar10 + uVar8) < -0x40) goto LAB_01347574;
          }
          else if (uVar3 != uVar8) {
LAB_01347574:
                    /* WARNING: Subroutine does not return */
            FUN_012fb514(iVar10,uVar3,uVar8,uVar3,&DAT_01ce6b94);
          }
        }
        iVar11 = uVar3 - uVar8;
        uVar9 = 1;
        pbVar2 = (byte *)(iVar10 + uVar8);
        if (iVar11 != 0) {
          do {
            bVar5 = *pbVar2;
            if (bVar5 - 0x41 < 0x1a) {
              bVar5 = bVar5 | 0x20;
            }
            *pbVar2 = bVar5;
            iVar11 = iVar11 + -1;
            pbVar2 = pbVar2 + 1;
          } while (iVar11 != 0);
        }
      }
      goto LAB_01347294;
    }
    if (param_3 < 4) {
      if (param_3 != 3) goto LAB_013475a8;
    }
    else if (*(char *)(param_2 + 3) < -0x40) {
LAB_013475a8:
      uVar6 = 3;
LAB_013475bc:
                    /* WARNING: Subroutine does not return */
      FUN_012fb514(param_2,param_3,0,uVar6,&DAT_01d2e668);
    }
    bVar5 = (&DAT_0053309f)[*(byte *)(param_2 + 2)] | (&DAT_00450f12)[*(byte *)(param_2 + 1)];
    uVar6 = (uint)(char)bVar5;
    if ((&DAT_00451d6d)[bVar5] == '\0') {
      iVar10 = (uint)bVar5 * 3;
      if (uVar6 == 0) {
LAB_0134745c:
        if ((char)(&DAT_004c1510)[iVar10] < -0x40) {
LAB_013475c8:
                    /* WARNING: Subroutine does not return */
          FUN_012fb514(&DAT_004c150d,0x300,iVar10,iVar10 + 3,&DAT_01ce69cc);
        }
      }
      else {
        if ((char)(&DAT_004c150d)[iVar10] < -0x40) goto LAB_013475c8;
        if (uVar6 != 0xffffffff) goto LAB_0134745c;
      }
      iVar11 = param_1[2];
      if ((uint)(*param_1 - iVar11) < 3) {
        FUN_006520b4(param_1,iVar11,3,1,1);
        iVar11 = param_1[2];
      }
      iVar4 = param_1[1];
      uVar1 = (&DAT_004c150f)[iVar10];
      *(undefined2 *)(iVar4 + iVar11) = *(undefined2 *)(&DAT_004c150d + iVar10);
      iVar10 = iVar11 + 3;
      *(undefined1 *)((undefined2 *)(iVar4 + iVar11) + 1) = uVar1;
    }
    else {
      iVar10 = param_1[2];
      bVar7 = bVar5;
      if ((uVar6 - 0x41 & 0xff) < 0x1a) {
        bVar7 = bVar5 | 0x20;
      }
      uVar9 = 2;
      if (param_4 == 0) {
        bVar7 = bVar5;
      }
      if (uVar6 < 0x80000000) {
        uVar9 = 1;
      }
      iVar11 = iVar10;
      if ((uint)(*param_1 - iVar10) < uVar9) {
        FUN_006520b4(param_1,iVar10,uVar9,1,1);
        iVar11 = param_1[2];
      }
      iVar4 = param_1[1];
      if (0x7fffffff < uVar6) {
        ((byte *)(iVar4 + iVar11))[1] = bVar7 & 0xbf;
        bVar7 = bVar5 >> 6 | 0xc0;
      }
      *(byte *)(iVar4 + iVar11) = bVar7;
      iVar10 = uVar9 + iVar10;
      uVar9 = param_4;
    }
    param_3 = param_3 - 3;
    param_2 = param_2 + 3;
    param_1[2] = iVar10;
  } while( true );
}

