// FUN_010f28f4 @ 010f28f4 size=684 calls_out=9 calls_in=0
// strings: 

longlong FUN_010f28f4(undefined4 *param_1,undefined4 param_2)

{
  uint uVar1;
  byte bVar2;
  int *piVar3;
  byte *pbVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined1 uVar7;
  int iVar8;
  undefined4 unaff_r6;
  byte *pbVar9;
  int local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  int local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int local_38;
  int *local_34;
  undefined4 local_30;
  int *local_2c;
  undefined1 *local_28;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 0xe)) {
  case 0:
    uVar5 = *param_1;
    param_1[1] = uVar5;
    param_1[2] = uVar5;
    *(undefined1 *)(param_1 + 0xd) = 0;
LAB_010f2968:
    uVar7 = 7;
    param_1[0xb] = uVar5;
    *(undefined2 *)(param_1 + 0xc) = 7;
LAB_010f297c:
    param_1[7] = uVar5;
    *(undefined1 *)((int)param_1 + 0x22) = 0;
    *(undefined1 *)(param_1 + 8) = uVar7;
    param_1[3] = 1;
    param_1[4] = 1;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01886214);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01886214,&switchD_010f2910::switchdataD_010f2914,param_2);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_1 + 0xd)) {
    case 0:
      uVar5 = param_1[2];
      goto LAB_010f2968;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_018861f4);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_018861f4,&switchD_010f2950::switchdataD_010f2954,param_2);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)((int)param_1 + 0x31)) {
    case 0:
      uVar7 = *(undefined1 *)(param_1 + 0xc);
      uVar5 = param_1[0xb];
      goto LAB_010f297c;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_018861e4);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_018861e4,&switchD_010f2a08::switchdataD_010f2a0c,param_2);
    }
  }
  FUN_010ee5e8(&local_34,param_1 + 4);
  pbVar4 = (byte *)local_30;
  piVar3 = local_34;
  if (local_34 == (int *)0x80000001) {
    *(undefined1 *)(param_1 + 0xe) = 3;
    *(undefined1 *)(param_1 + 0xd) = 3;
    *(undefined1 *)((int)param_1 + 0x31) = 3;
    return CONCAT44(unaff_r6,1);
  }
  FUN_00868aa0(param_1 + 4);
  if (piVar3 == (int *)0x80000000) {
    pbVar9 = pbVar4;
  }
  else {
    if (local_2c == (int *)param_1[3]) {
      if (local_2c != (int *)0x1) {
        uVar1 = 0;
        local_30 = (code *)0x1;
        local_34 = (int *)0x6;
        pbVar9 = (byte *)FUN_010f683c(&local_34);
      }
      else {
        bVar2 = *pbVar4 >> 4;
        uVar6 = *pbVar4 & 0xf;
        uVar1 = CONCAT31(CONCAT21(local_30._2_2_,bVar2),(char)(0x73de >> (uint)bVar2));
        local_30 = (code *)(uVar1 & 0xffffff01);
        local_30._0_3_ = CONCAT12((char)uVar6,(undefined2)local_30);
        uVar1 = (uVar1 & 0xff01 | uVar6 << 0x10) << 8;
        pbVar9 = &DAT_00000001;
      }
      if (piVar3 != (int *)0x0) {
        thunk_FUN_016d3fb4(pbVar4);
      }
      *(undefined1 *)(param_1 + 0xd) = 1;
      *(undefined1 *)((int)param_1 + 0x31) = 1;
      if (local_2c == (int *)0x1) {
        uVar7 = (undefined1)(uVar1 >> 0x10);
        if ((uVar1 & 0x100) == 0) {
          iVar8 = param_1[1];
          pbVar9 = (byte *)0x0;
          *(undefined1 *)(iVar8 + 0x10) = uVar7;
          *(uint *)(iVar8 + 0xc) = uVar1 >> 0x18;
        }
        else {
          local_48 = CONCAT31(local_48._1_3_,uVar7);
          local_34 = &local_48;
          local_30 = FUN_00facb58;
          pbVar9 = (byte *)FUN_010f2cb8(&local_34);
        }
      }
      goto LAB_010f2b1c;
    }
    local_38 = (int)local_2c;
    local_28 = &LAB_00fac484;
    local_30 = (code *)&LAB_00fac484;
    local_34 = param_1 + 3;
    local_2c = &local_38;
    FUN_00600d2c(&local_48,&DAT_00573fe9,&local_34);
    local_58 = local_48;
    uStack_54 = uStack_44;
    uStack_50 = uStack_40;
    pbVar9 = (byte *)FUN_010f66dc(&local_58);
    if (piVar3 != (int *)0x0) {
      thunk_FUN_016d3fb4(pbVar4);
    }
  }
  *(undefined1 *)(param_1 + 0xd) = 1;
  *(undefined1 *)((int)param_1 + 0x31) = 1;
LAB_010f2b1c:
  *(undefined1 *)(param_1 + 0xe) = 1;
  return ZEXT48(pbVar9) << 0x20;
}

