// FUN_01733e68 @ 01733e68 size=904 calls_out=9 calls_in=0
// strings: 

undefined8 FUN_01733e68(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  uint uVar11;
  int *piVar12;
  int *piVar13;
  undefined1 auStack_1a78 [204];
  int aiStack_19ac [51];
  undefined1 auStack_18e0 [204];
  int aiStack_1814 [508];
  int local_1024;
  int local_2c [2];
  
  local_2c[0] = DAT_018ddaf8;
  local_1024 = param_1;
  FUN_01733e18(param_1,aiStack_19ac,&PTR_018bc3f4,0);
  uVar9 = 2;
  bVar1 = false;
  FUN_01733d34(auStack_18e0,param_3);
  piVar13 = aiStack_1814;
  do {
    while (!bVar1) {
      uVar6 = uVar9 >> 1;
      piVar12 = piVar13 + 0x33;
      uVar9 = uVar9 + 1;
      bVar1 = true;
      FUN_0172ed94(param_1,piVar13,aiStack_19ac + uVar6 * 0x33);
      piVar13 = piVar12;
      if (local_2c == piVar12) goto LAB_01733f48;
    }
    piVar12 = piVar13 + 0x33;
    FUN_0172fc4c(param_1,piVar13,auStack_18e0,piVar13 + -0x33);
    uVar9 = uVar9 + 1;
    bVar1 = false;
    piVar13 = piVar12;
  } while (local_2c != piVar12);
LAB_01733f48:
  uVar9 = FUN_0172c66c(param_1);
  uVar6 = uVar9 - 1;
  if (uVar9 != 0) {
    do {
      uVar7 = uVar6;
      if (uVar6 * -0x33333333 < 0x33333334) {
LAB_01733ff8:
        bVar1 = true;
        while( true ) {
          uVar10 = *(undefined4 *)(param_1 + 0xec);
          iVar2 = FUN_017209a8(param_4,uVar10,uVar7 + 4);
          iVar3 = FUN_017209a8(param_4,uVar10,uVar7 + 3);
          iVar4 = FUN_017209a8(param_4,uVar10,uVar7 + 2);
          iVar5 = FUN_017209a8(param_4,uVar10,uVar7 + 1);
          uVar6 = FUN_017209a8(param_4,uVar10,uVar7);
          FUN_016dd606(auStack_1a78,0,0xcc);
          uVar11 = 0;
          piVar13 = aiStack_19ac;
          do {
            uVar8 = uVar11 ^ (iVar2 << 4 | iVar3 << 3 | uVar6 | iVar4 << 2 | iVar5 << 1) & 0xff;
            piVar12 = piVar13 + 0x33;
            uVar11 = uVar11 + 1;
            FUN_0172fbd8(param_1,auStack_1a78,(int)(uVar8 - 1 & ~uVar8) >> 0x1f,piVar13,auStack_1a78
                        );
            piVar13 = piVar12;
          } while (local_2c != piVar12);
          if (bVar1) {
            FUN_01733d34(param_2,auStack_1a78);
          }
          else {
            FUN_0172fc4c(param_1,param_2,param_2,auStack_1a78);
          }
          uVar7 = uVar7 - 1;
          if (uVar9 <= uVar7) break;
          bVar1 = false;
          while (FUN_0172ed94(param_1,param_2,param_2), 0x33333333 < uVar7 * -0x33333333) {
            uVar7 = uVar7 - 1;
            if (uVar9 <= uVar7) goto LAB_01733fb0;
          }
        }
        goto LAB_01733fb0;
      }
      uVar7 = uVar6 - 1;
      if (uVar9 <= uVar7) break;
      if (uVar7 * -0x33333333 < 0x33333334) goto LAB_01733ff8;
      uVar6 = uVar6 - 2;
    } while (uVar6 < uVar9);
  }
  FUN_01733e18(param_1,param_2);
LAB_01733fb0:
  if (local_2c[0] != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return 0;
}

