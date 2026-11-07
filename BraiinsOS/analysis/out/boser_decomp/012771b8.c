// FUN_012771b8 @ 012771b8 size=468 calls_out=3 calls_in=2
// strings: 

undefined8 FUN_012771b8(undefined4 *param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int local_2c;
  
  puVar9 = (undefined4 *)param_1[6];
  if (puVar9 == (undefined4 *)&DAT_00000001) {
    piVar2 = param_1 + 5;
    param_1 = (undefined4 *)0x0;
    if (*(int *)(param_2 + 8) == *(int *)(*piVar2 + 0xd4)) {
      iVar8 = thunk_FUN_01bed842(*(undefined4 *)(param_2 + 4),*(undefined4 *)(*piVar2 + 0xd0));
      uVar4 = (uint)(iVar8 == 0);
    }
    else {
      uVar4 = 0;
    }
  }
  else if (puVar9 == (undefined4 *)0x0) {
    uVar4 = 0;
  }
  else {
    iVar10 = *(int *)(param_2 + 8);
    uVar6 = *(undefined4 *)(param_2 + 4);
    uVar3 = FUN_01930380(*param_1,param_1[1],param_1[2],param_1[3],uVar6,iVar10);
    uVar1 = uVar3 >> 0x19;
    iVar8 = param_1[7];
    uVar13 = param_1[8];
    iVar12 = param_1[5];
    local_2c = 0;
    while( true ) {
      uVar3 = uVar13 & uVar3;
      param_1 = (undefined4 *)0xfefefeff;
      uVar11 = *(uint *)(iVar8 + uVar3);
      uVar4 = uVar11 ^ uVar1 * 0x1010101;
      for (uVar7 = ~uVar4 & 0x80808080 & uVar4 + 0xfefefeff; uVar7 != 0; uVar7 = uVar7 - 1 & uVar7)
      {
        param_1 = *(undefined4 **)
                   (iVar8 + -4 +
                   (uVar3 + ((uint)LZCOUNT(uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 |
                                           (uVar7 >> 0x10 & 0xff) << 8 | uVar7 >> 0x18) >> 3) &
                   uVar13) * -4);
        if (puVar9 <= param_1) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(param_1,puVar9,&DAT_01d307c8);
        }
        iVar5 = (int)param_1 * 0xd8 + iVar12;
        if (iVar10 == *(int *)(iVar5 + 0xd4)) {
          iVar5 = thunk_FUN_01bed842(uVar6,*(undefined4 *)(iVar5 + 0xd0));
          uVar4 = 1;
          if (iVar5 == 0) goto LAB_0127736c;
        }
      }
      uVar4 = 0;
      if ((uVar11 & 0x80808080 & uVar11 << 1) != 0) break;
      local_2c = local_2c + 4;
      uVar3 = local_2c + uVar3;
    }
  }
LAB_0127736c:
  return CONCAT44(param_1,uVar4);
}

