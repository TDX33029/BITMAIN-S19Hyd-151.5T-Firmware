// FUN_015dac6c @ 015dac6c size=424 calls_out=4 calls_in=2
// strings: 

void FUN_015dac6c(int *param_1,int *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  undefined8 uVar12;
  
  iVar7 = param_3[1];
  iVar9 = param_3[2];
  uVar12 = FUN_01adafd4(param_2[4],param_2[5],param_2[6],param_2[7],iVar7,iVar9);
  uVar8 = (uint)uVar12;
  uVar1 = uVar8 >> 0x19;
  uVar4 = param_2[1];
  iVar5 = *param_2;
  iVar11 = 0;
  do {
    uVar8 = uVar4 & uVar8;
    uVar10 = *(uint *)(iVar5 + uVar8);
    uVar2 = uVar10 ^ uVar1 * 0x1010101;
    for (uVar2 = ~uVar2 & 0x80808080 & uVar2 + 0xfefefeff; uVar2 != 0; uVar2 = uVar2 - 1 & uVar2) {
      iVar6 = iVar5 + (uVar8 + ((uint)LZCOUNT(uVar2 << 0x18 | (uVar2 >> 8 & 0xff) << 0x10 |
                                              (uVar2 >> 0x10 & 0xff) << 8 | uVar2 >> 0x18) >> 3) &
                      uVar4) * -0x50;
      if ((*(int *)(iVar6 + -0x48) == iVar9) &&
         (iVar3 = thunk_FUN_01bed842(*(undefined4 *)(iVar6 + -0x4c),iVar7,iVar9), iVar3 == 0)) {
        *param_1 = iVar6;
        param_1[1] = (int)param_2;
        param_1[2] = -0x80000000;
        FUN_0134bd64(*param_3,iVar7);
        return;
      }
    }
    if ((uVar10 & 0x80808080 & uVar10 << 1) != 0) {
      if (param_2[2] == 0) {
        FUN_015d7fd4(param_2,param_2 + 4);
      }
      iVar5 = param_3[1];
      iVar7 = param_3[2];
      param_1[2] = *param_3;
      param_1[3] = iVar5;
      param_1[4] = iVar7;
      *(undefined8 *)param_1 = uVar12;
      param_1[5] = (int)param_2;
      return;
    }
    iVar11 = iVar11 + 4;
    uVar8 = uVar8 + iVar11;
  } while( true );
}

