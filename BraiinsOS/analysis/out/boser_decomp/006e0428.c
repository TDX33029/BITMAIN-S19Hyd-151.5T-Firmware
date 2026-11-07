// FUN_006e0428 @ 006e0428 size=432 calls_out=3 calls_in=2
// strings: 

undefined8 FUN_006e0428(undefined4 *param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint unaff_r4;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int local_28;
  
  uVar8 = param_1[6];
  iVar9 = param_1[5];
  if (uVar8 == 1) {
    unaff_r4 = 0;
    if (param_3 == *(int *)(iVar9 + 8)) {
      iVar9 = thunk_FUN_01bed842(param_2,*(undefined4 *)(iVar9 + 4),param_3);
      uVar3 = (uint)(iVar9 == 0);
    }
    else {
      uVar3 = 0;
    }
  }
  else if (uVar8 == 0) {
    uVar3 = 0;
  }
  else {
    uVar2 = FUN_01a60560(*param_1,param_1[1],param_1[2],param_1[3],param_2,param_3);
    uVar1 = uVar2 >> 0x19;
    uVar6 = param_1[8];
    uVar7 = param_1[7];
    local_28 = 0;
    while( true ) {
      uVar2 = uVar6 & uVar2;
      uVar10 = *(uint *)(uVar7 + uVar2);
      uVar3 = uVar10 ^ uVar1 * 0x1010101;
      unaff_r4 = uVar7;
      for (uVar5 = ~uVar3 & 0x80808080 & uVar3 + 0xfefefeff; uVar5 != 0; uVar5 = uVar5 - 1 & uVar5)
      {
        unaff_r4 = *(uint *)((uVar7 - 4) +
                            (uVar2 + ((uint)LZCOUNT(uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                                                    (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18) >>
                                     3) & uVar6) * -4);
        if (uVar8 <= unaff_r4) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(unaff_r4,uVar8,&DAT_01d307c8);
        }
        iVar4 = unaff_r4 * 0x6c + iVar9;
        if (param_3 == *(int *)(iVar4 + 8)) {
          iVar4 = thunk_FUN_01bed842(param_2,*(undefined4 *)(iVar4 + 4),param_3);
          uVar3 = 1;
          if (iVar4 == 0) goto LAB_006e05b8;
        }
      }
      uVar3 = 0;
      if ((uVar10 & 0x80808080 & uVar10 << 1) != 0) break;
      local_28 = local_28 + 4;
      uVar2 = local_28 + uVar2;
    }
  }
LAB_006e05b8:
  return CONCAT44(unaff_r4,uVar3);
}

