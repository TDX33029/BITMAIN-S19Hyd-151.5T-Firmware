// FUN_007015e4 @ 007015e4 size=448 calls_out=3 calls_in=2
// strings: 

undefined8 FUN_007015e4(undefined4 *param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int local_28;
  
  puVar8 = (undefined4 *)param_1[6];
  if (puVar8 == (undefined4 *)&DAT_00000001) {
    piVar2 = param_1 + 5;
    param_1 = (undefined4 *)0x0;
    if (param_3 == *(int *)(*piVar2 + 0x34)) {
      iVar7 = thunk_FUN_01bed842(param_2,*(int *)(*piVar2 + 0x30) + 8,param_3);
      uVar4 = (uint)(iVar7 == 0);
    }
    else {
      uVar4 = 0;
    }
  }
  else if (puVar8 == (undefined4 *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar3 = FUN_01a60560(*param_1,param_1[1],param_1[2],param_1[3],param_2,param_3);
    uVar1 = uVar3 >> 0x19;
    iVar7 = param_1[7];
    iVar11 = param_1[5];
    uVar9 = param_1[8];
    local_28 = 0;
    while( true ) {
      uVar3 = uVar9 & uVar3;
      uVar10 = *(uint *)(iVar7 + uVar3);
      uVar4 = uVar10 ^ uVar1 * 0x1010101;
      for (uVar6 = ~uVar4 & 0x80808080 & uVar4 + 0xfefefeff; uVar6 != 0; uVar6 = uVar6 - 1 & uVar6)
      {
        param_1 = *(undefined4 **)
                   (iVar7 + -4 +
                   (uVar3 + ((uint)LZCOUNT(uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 |
                                           (uVar6 >> 0x10 & 0xff) << 8 | uVar6 >> 0x18) >> 3) &
                   uVar9) * -4);
        if (puVar8 <= param_1) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(param_1,puVar8,&DAT_01d307c8);
        }
        iVar5 = iVar11 + (int)param_1 * 0x40;
        if (param_3 == *(int *)(iVar5 + 0x34)) {
          iVar5 = thunk_FUN_01bed842(param_2,*(int *)(iVar5 + 0x30) + 8,param_3);
          uVar4 = 1;
          if (iVar5 == 0) goto LAB_00701784;
        }
      }
      param_1 = (undefined4 *)(uVar10 & 0x80808080);
      uVar4 = 0;
      if (((uint)param_1 & uVar10 << 1) != 0) break;
      local_28 = local_28 + 4;
      uVar3 = local_28 + uVar3;
    }
  }
LAB_00701784:
  return CONCAT44(param_1,uVar4);
}

