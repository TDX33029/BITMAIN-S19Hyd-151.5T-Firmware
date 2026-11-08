// FUN_006e55e0 @ 006e55e0 size=488 calls_out=3 calls_in=2
// strings: 

void FUN_006e55e0(int *param_1,int *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined8 uVar13;
  
  uVar13 = FUN_006c4c10(param_2[4],param_2[5],param_2[6],param_2[7],param_3);
  uVar9 = (uint)uVar13;
  uVar1 = uVar9 >> 0x19;
  iVar2 = *param_3;
  iVar7 = *param_2;
  uVar10 = param_2[1];
  iVar12 = 0;
  iVar3 = param_3[1];
  iVar4 = param_3[2];
  do {
    uVar9 = uVar10 & uVar9;
    uVar11 = *(uint *)(iVar7 + uVar9);
    uVar5 = uVar11 ^ uVar1 * 0x1010101;
    for (uVar5 = ~uVar5 & 0x80808080 & uVar5 + 0xfefefeff; uVar5 != 0; uVar5 = uVar5 - 1 & uVar5) {
      iVar8 = iVar7 + (uVar9 + ((uint)LZCOUNT(uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                                              (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18) >> 3) &
                      uVar10) * -0x18;
      if (*(int *)(iVar8 + -0x18) == iVar2) {
        if (iVar2 == 0) {
          iVar6 = *(int *)(iVar8 + -0x14);
          if (iVar3 == 0 || iVar6 == 0) {
            if (iVar3 == 0 && iVar6 == 0) goto LAB_006e5774;
          }
          else if (*(int *)(iVar8 + -0x10) == iVar4) goto LAB_006e5708;
        }
        else if (*(int *)(iVar8 + -0x10) == iVar4) {
          iVar6 = *(int *)(iVar8 + -0x14);
LAB_006e5708:
          iVar6 = thunk_FUN_01bed842(iVar6,iVar3,iVar4);
          if (iVar6 == 0) {
LAB_006e5774:
            *param_1 = iVar8;
            param_1[1] = (int)param_2;
            param_1[2] = 2;
            return;
          }
        }
      }
    }
    if ((uVar11 & 0x80808080 & uVar11 << 1) != 0) {
      if (param_2[2] == 0) {
        FUN_006b58e4(param_2,param_2 + 4);
      }
      iVar2 = param_3[1];
      iVar3 = param_3[2];
      param_1[2] = *param_3;
      param_1[3] = iVar2;
      param_1[4] = iVar3;
      *(undefined8 *)param_1 = uVar13;
      param_1[5] = (int)param_2;
      return;
    }
    iVar12 = iVar12 + 4;
    uVar9 = uVar9 + iVar12;
  } while( true );
}

