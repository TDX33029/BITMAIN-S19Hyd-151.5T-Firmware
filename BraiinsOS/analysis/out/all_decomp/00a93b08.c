// FUN_00a93b08 @ 00a93b08 size=444 calls_out=6 calls_in=2
// strings: 

undefined8 FUN_00a93b08(undefined4 *param_1,undefined4 param_2)

{
  byte bVar1;
  undefined4 uVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  undefined4 unaff_r6;
  byte *pbVar6;
  int local_38;
  byte *local_34;
  uint local_30;
  int local_2c;
  byte *local_28;
  uint local_24;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 0xcb)) {
  case 0:
    *(undefined1 *)(param_1 + 7) = 0;
    param_1[2] = param_1[0xca];
    param_1[3] = *param_1;
    param_1[4] = param_1[1];
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_0187b5fc);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_0187b5fc,&switchD_00a93b24::switchdataD_00a93b28,param_2);
  }
  FUN_00a91764(&local_2c,param_1 + 2);
  if (local_2c == -0x7fffffff) {
    *(undefined1 *)(param_1 + 0xcb) = 3;
    return CONCAT44(unaff_r6,2);
  }
  FUN_00a9166c(param_1 + 2);
  if (local_2c == -0x80000000) {
    uVar2 = 1;
    pbVar6 = local_28;
    goto LAB_00a93bac;
  }
  local_30 = local_24;
  local_34 = local_28;
  local_38 = local_2c;
  if (local_24 == 0) {
LAB_00a93c84:
    pbVar6 = (byte *)FUN_00a93d34(&local_38);
    uVar2 = 1;
  }
  else {
    if (local_24 == 1) {
      bVar1 = *local_28;
      if (bVar1 == 0x2b || bVar1 == 0x2d) goto LAB_00a93c84;
    }
    else {
      bVar1 = *local_28;
    }
    pbVar3 = local_28;
    if (bVar1 == 0x2b) {
      pbVar3 = local_28 + 1;
      local_24 = local_24 - 1;
    }
    if (8 < local_24) {
      pbVar6 = (byte *)0x0;
      while( true ) {
        if (local_24 == 0) goto LAB_00a93c38;
        uVar5 = (uint)(ZEXT48(pbVar6) * 10);
        if ((int)(ZEXT48(pbVar6) * 10 >> 0x20) != 0) break;
        uVar4 = *pbVar3 - 0x30;
        pbVar6 = (byte *)(uVar4 + uVar5);
        if ((9 < uVar4) || (local_24 = local_24 - 1, pbVar3 = pbVar3 + 1, CARRY4(uVar4,uVar5)))
        break;
      }
      goto LAB_00a93c84;
    }
    pbVar6 = (byte *)0x0;
    for (; local_24 != 0; local_24 = local_24 - 1) {
      bVar1 = *pbVar3;
      if (9 < bVar1 - 0x30) goto LAB_00a93c84;
      pbVar3 = pbVar3 + 1;
      pbVar6 = (byte *)((bVar1 - 0x30) + (int)pbVar6 * 10);
    }
LAB_00a93c38:
    uVar2 = 0;
  }
  if (local_2c != 0) {
    thunk_FUN_016d3fb4(local_28);
    *(undefined1 *)(param_1 + 0xcb) = 1;
    return CONCAT44(pbVar6,uVar2);
  }
LAB_00a93bac:
  *(undefined1 *)(param_1 + 0xcb) = 1;
  return CONCAT44(pbVar6,uVar2);
}

