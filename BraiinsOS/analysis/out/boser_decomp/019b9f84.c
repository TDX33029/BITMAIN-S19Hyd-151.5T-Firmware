// FUN_019b9f84 @ 019b9f84 size=776 calls_out=7 calls_in=61
// strings: 

/* WARNING: Type propagation algorithm not settling */

void FUN_019b9f84(undefined4 *param_1)

{
  bool bVar1;
  undefined4 *******pppppppuVar2;
  int iVar3;
  char *unaff_r7;
  char *pcVar4;
  uint uVar5;
  undefined4 *******local_58;
  undefined4 ******local_54;
  int *local_50;
  int local_4c;
  undefined4 *******local_48;
  char *local_44;
  int local_40;
  code *local_3c;
  undefined4 *******local_38;
  code **local_34;
  int *local_30;
  int local_2c;
  undefined4 local_28;
  
  if (DAT_01d51ac0 == '\x01') goto LAB_019ba1cc;
  if (DAT_01d51ac0 != '\0') goto LAB_019ba0e8;
  FUN_019a3070(&local_48,&DAT_00526a72,0x12);
  iVar3 = local_40;
  pcVar4 = local_44;
  pppppppuVar2 = local_48;
  if (local_48 == (undefined4 *******)0x80000000) {
    local_58 = (undefined4 *******)0x1;
    local_54 = (undefined4 ******)0x80000000;
    pcVar4 = unaff_r7;
LAB_019ba018:
    FUN_019a3070(&local_48,&DAT_005268d9,0xe);
    if (local_48 == (undefined4 *******)0x80000000) {
      bVar1 = false;
    }
    else {
      FUN_012fbd94(&local_38,local_44,local_40);
      if (local_38 == (undefined4 *******)0x0) {
        bVar1 = true;
        if ((local_40 == 1) && (bVar1 = false, *local_44 != '0')) {
          bVar1 = true;
        }
      }
      else {
        bVar1 = false;
      }
      if (local_48 != (undefined4 *******)0x0) {
        thunk_FUN_01be4678(local_44);
      }
    }
    pppppppuVar2 = (undefined4 *******)((uint)pppppppuVar2 & 0x7fffffff);
  }
  else {
    FUN_012fbd94(&local_38,local_44,local_40);
    local_4c = iVar3;
    local_50 = (int *)pcVar4;
    local_54 = pppppppuVar2;
    local_58 = local_38;
    if (local_38 == (undefined4 *******)0x1) goto LAB_019ba018;
    bVar1 = true;
    if ((iVar3 == 1) && (bVar1 = false, *pcVar4 != '0')) {
      bVar1 = true;
    }
  }
  if (pppppppuVar2 != (undefined4 *******)0x0) {
    thunk_FUN_01be4678(pcVar4);
  }
  DAT_01d51ac0 = '\x01';
  if (bVar1) {
    DAT_01d51ac0 = '\x02';
LAB_019ba0e8:
    local_3c = FUN_019b9f84;
    do {
      if (DAT_01d51b0c != 0) {
        ClearExclusiveLocal();
        FUN_0197ade4(&DAT_01d51b0c);
        goto LAB_019ba120;
      }
      bVar1 = (bool)hasExclusiveAccess(0x1d51b0c);
    } while (!bVar1);
    DAT_01d51b0c = 1;
    DataMemoryBarrier(0xb);
LAB_019ba120:
    uVar5 = 0;
    if ((DAT_01d51b08 & 0x7fffffff) != 0) {
      uVar5 = FUN_0197ac0c();
      uVar5 = uVar5 ^ 1;
    }
    local_44 = "";
    local_48 = &local_58;
    local_34 = (code **)&SUB_00000004;
    local_50 = &local_2c;
    local_54 = (undefined4 ******)&local_3c;
    local_58 = &local_38;
    local_30 = (int *)0x0;
    local_38 = (undefined4 *******)0x0;
    local_2c = 0;
    FUN_01bdf9c8(FUN_0197b7ec,&local_48);
    if (local_30 == (int *)0x0) {
      *param_1 = 0;
      param_1[1] = local_58;
      param_1[2] = local_54;
      param_1[3] = local_50;
      if (local_38 != (undefined4 *******)0x0) {
        thunk_FUN_01be4678(local_34);
      }
    }
    else {
      if (local_2c == 0) {
        local_28 = 0;
      }
      *param_1 = 2;
      param_1[1] = local_38;
      param_1[2] = local_34;
      param_1[3] = local_30;
      param_1[4] = local_28;
      param_1[5] = 3;
      local_58 = local_38;
      local_54 = (undefined4 ******)local_34;
      local_50 = local_30;
    }
    if (((uVar5 == 0) && ((DAT_01d51b08 & 0x7fffffff) != 0)) && (iVar3 = FUN_0197ac0c(), iVar3 == 0)
       ) {
      DAT_01d51b10 = 1;
    }
    iVar3 = DAT_01d51b0c;
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(0x1d51b0c);
    } while (!bVar1);
    DAT_01d51b0c = 0;
    if (iVar3 == 2) {
      FUN_01be6c3c(0xf0,&DAT_01d51b0c,0x81,1);
      return;
    }
    return;
  }
LAB_019ba1cc:
  *param_1 = 1;
  return;
}

