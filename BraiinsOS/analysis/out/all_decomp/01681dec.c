// FUN_01681dec @ 01681dec size=464 calls_out=3 calls_in=18
// strings: 

ulonglong FUN_01681dec(undefined4 *param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint unaff_r5;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int local_28;
  
  uVar7 = param_1[6];
  if (uVar7 == 1) {
    if (param_3 == *(int *)(param_1[5] + 0x78)) {
      iVar6 = thunk_FUN_016dd50a(param_2,*(undefined4 *)(param_1[5] + 0x74),param_3);
      return (ulonglong)(iVar6 == 0);
    }
    return 0;
  }
  if (uVar7 == 0) {
    uVar5 = 0;
  }
  else {
    uVar2 = FUN_006a4f44(*param_1,param_1[1],param_1[2],param_1[3],param_2,param_3);
    uVar1 = uVar2 >> 0x19;
    iVar6 = param_1[7];
    uVar8 = param_1[8];
    iVar10 = param_1[5];
    local_28 = 0;
    while( true ) {
      uVar2 = uVar8 & uVar2;
      uVar9 = *(uint *)(iVar6 + uVar2);
      uVar3 = uVar9 ^ uVar1 * 0x1010101;
      for (uVar3 = ~uVar3 & 0x80808080 & uVar3 + 0xfefefeff; uVar3 != 0; uVar3 = uVar3 - 1 & uVar3)
      {
        unaff_r5 = *(uint *)(iVar6 + -4 +
                            (uVar2 + ((uint)LZCOUNT(uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 |
                                                    (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18) >>
                                     3) & uVar8) * -4);
        if (uVar7 <= unaff_r5) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa4a4(unaff_r5,uVar7,&DAT_018adbc8);
        }
        iVar4 = iVar10 + unaff_r5 * 0xc0;
        if (param_3 == *(int *)(iVar4 + 0x78)) {
          iVar4 = thunk_FUN_016dd50a(param_2,*(undefined4 *)(iVar4 + 0x74),param_3);
          uVar5 = 1;
          if (iVar4 == 0) goto LAB_01681e14;
        }
      }
      unaff_r5 = uVar9 & 0x80808080;
      uVar5 = 0;
      if ((unaff_r5 & uVar9 << 1) != 0) break;
      local_28 = local_28 + 4;
      uVar2 = local_28 + uVar2;
    }
  }
LAB_01681e14:
  return CONCAT44(unaff_r5,uVar5);
}

