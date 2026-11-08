// FUN_00ab0aa8 @ 00ab0aa8 size=488 calls_out=4 calls_in=1
// strings: 

void FUN_00ab0aa8(undefined4 *param_1,int *param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined4 uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  bool bVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  uVar17 = FUN_00b06d5c(param_2[4],param_2[5],param_2[6],param_2[7],param_3);
  uVar10 = (uint)uVar17;
  uVar1 = uVar10 >> 0x19;
  iVar15 = param_3[2];
  uVar2 = param_3[1];
  uVar3 = param_3[4];
  uVar6 = param_3[5];
  iVar14 = 0;
  iVar7 = *param_2;
  uVar8 = param_2[1];
  do {
    uVar10 = uVar8 & uVar10;
    uVar13 = *(uint *)(iVar7 + uVar10);
    uVar4 = uVar13 ^ uVar1 * 0x1010101;
    for (uVar4 = ~uVar4 & 0x80808080 & uVar4 + 0xfefefeff; uVar4 != 0; uVar4 = uVar4 - 1 & uVar4) {
      iVar12 = iVar7 + (uVar10 + ((uint)LZCOUNT(uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 |
                                                (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18) >> 3) &
                       uVar8) * -0x60;
      if (*(int *)(iVar12 + -0x58) == iVar15) {
        uVar18 = thunk_FUN_01bed842(*(undefined4 *)(iVar12 + -0x5c),uVar2,iVar15);
        bVar16 = (int)uVar18 == 0;
        if (bVar16) {
          uVar18 = CONCAT44(uVar6,*(undefined4 *)(iVar12 + -0x4c));
        }
        if ((bVar16 && (int)uVar18 == (int)((ulonglong)uVar18 >> 0x20)) &&
           (iVar5 = thunk_FUN_01bed842(*(undefined4 *)(iVar12 + -0x50),uVar3,uVar6), iVar5 == 0)) {
          uVar6 = *param_3;
          *param_1 = 0x80000000;
          param_1[1] = iVar12;
          param_1[2] = param_2;
          FUN_019bb7e0(uVar6,uVar2);
          FUN_019bb7e0(param_3[3],uVar3);
          return;
        }
      }
    }
    if ((uVar13 & 0x80808080 & uVar13 << 1) != 0) {
      if (param_2[2] == 0) {
        FUN_00944590(param_2,param_2 + 4);
      }
      uVar2 = param_3[1];
      uVar3 = param_3[2];
      uVar6 = param_3[3];
      uVar9 = param_3[4];
      uVar11 = param_3[5];
      *param_1 = *param_3;
      param_1[1] = uVar2;
      param_1[2] = uVar3;
      param_1[3] = uVar6;
      param_1[4] = uVar9;
      param_1[5] = uVar11;
      *(undefined8 *)(param_1 + 6) = uVar17;
      param_1[8] = param_2;
      return;
    }
    iVar14 = iVar14 + 4;
    uVar10 = uVar10 + iVar14;
  } while( true );
}

