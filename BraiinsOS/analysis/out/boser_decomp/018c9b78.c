// FUN_018c9b78 @ 018c9b78 size=604 calls_out=4 calls_in=3
// strings: 

void FUN_018c9b78(int *param_1,int *param_2,int *param_3)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  undefined8 uVar15;
  
  uVar15 = FUN_018bef28(param_2[4],param_2[5],param_2[6],param_2[7],param_3);
  uVar5 = (uint)uVar15;
  iVar8 = *param_3;
  uVar1 = uVar5 >> 0x19;
  cVar2 = *(char *)((int)param_3 + 1);
  iVar14 = param_3[3];
  iVar9 = *param_2;
  uVar10 = param_2[1];
  iVar13 = 0;
  iVar3 = *(int *)((int)param_3 + 2);
  iVar4 = param_3[2];
  do {
    uVar5 = uVar10 & uVar5;
    uVar12 = *(uint *)(iVar9 + uVar5);
    uVar6 = uVar12 ^ uVar1 * 0x1010101;
    for (uVar6 = ~uVar6 & 0x80808080 & uVar6 + 0xfefefeff; uVar6 != 0; uVar6 = uVar6 - 1 & uVar6) {
      iVar11 = iVar9 + (uVar5 + ((uint)LZCOUNT(uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 |
                                               (uVar6 >> 0x10 & 0xff) << 8 | uVar6 >> 0x18) >> 3) &
                       uVar10) * -0x90;
      if (*(char *)(iVar11 + -0x90) == (char)iVar8) {
        if ((char)iVar8 == '\0') {
          if ((*(int *)(iVar11 + -0x84) == iVar14) &&
             (iVar7 = thunk_FUN_01bed842(*(undefined4 *)(iVar11 + -0x88),iVar4,iVar14), iVar7 == 0))
          {
            *(undefined1 *)(param_1 + 2) = 2;
            *param_1 = iVar11;
            param_1[1] = (int)param_2;
            FUN_0134bd64(param_3[1],iVar4);
            return;
          }
        }
        else if (*(char *)(iVar11 + -0x8f) == cVar2) {
          if (cVar2 == '\0') {
            if (*(int *)(iVar11 + -0x8e) == iVar3) goto LAB_018c9d88;
          }
          else {
            iVar7 = thunk_FUN_01bed842((int *)(iVar11 + -0x8e),(int *)((int)param_3 + 2),0x10);
            if (iVar7 == 0) {
LAB_018c9d88:
              *(undefined1 *)(param_1 + 2) = 2;
              *param_1 = iVar11;
              param_1[1] = (int)param_2;
              return;
            }
          }
        }
      }
    }
    if ((uVar12 & 0x80808080 & uVar12 << 1) != 0) {
      if (param_2[2] == 0) {
        FUN_018c9df8(param_2,param_2 + 4);
      }
      iVar8 = param_3[1];
      iVar3 = param_3[2];
      iVar4 = param_3[3];
      iVar9 = param_3[4];
      param_1[2] = *param_3;
      param_1[3] = iVar8;
      param_1[4] = iVar3;
      param_1[5] = iVar4;
      param_1[6] = iVar9;
      *(undefined8 *)param_1 = uVar15;
      param_1[7] = (int)param_2;
      return;
    }
    iVar13 = iVar13 + 4;
    uVar5 = uVar5 + iVar13;
  } while( true );
}

