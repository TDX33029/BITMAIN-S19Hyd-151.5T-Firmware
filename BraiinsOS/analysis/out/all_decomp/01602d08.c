// FUN_01602d08 @ 01602d08 size=768 calls_out=7 calls_in=170
// strings: 

/* WARNING: Type propagation algorithm not settling */

void FUN_01602d08(undefined4 *param_1)

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
  
  if (DAT_018dd946 == '\x01') goto LAB_01602f48;
  if (DAT_018dd946 != '\0') goto LAB_01602e6c;
  FUN_015e9334(&local_48,&DAT_00410a41,0x12);
  iVar3 = local_40;
  pcVar4 = local_44;
  pppppppuVar2 = local_48;
  if (local_48 == (undefined4 *******)0x80000000) {
    local_58 = (undefined4 *******)0x1;
    local_54 = (undefined4 ******)0x80000000;
    pcVar4 = unaff_r7;
LAB_01602d9c:
    FUN_015e9334(&local_48,&DAT_004108a8,0xe);
    if (local_48 == (undefined4 *******)0x80000000) {
      bVar1 = false;
    }
    else {
      FUN_00fab1e0(&local_38,local_44,local_40);
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
        thunk_FUN_016d3fb4(local_44);
      }
    }
    pppppppuVar2 = (undefined4 *******)((uint)pppppppuVar2 & 0x7fffffff);
  }
  else {
    FUN_00fab1e0(&local_38,local_44,local_40);
    local_4c = iVar3;
    local_50 = (int *)pcVar4;
    local_54 = pppppppuVar2;
    local_58 = local_38;
    if (local_38 == (undefined4 *******)0x1) goto LAB_01602d9c;
    bVar1 = true;
    if ((iVar3 == 1) && (bVar1 = false, *pcVar4 != '0')) {
      bVar1 = true;
    }
  }
  if (pppppppuVar2 != (undefined4 *******)0x0) {
    thunk_FUN_016d3fb4(pcVar4);
  }
  DAT_018dd946 = '\x01';
  if (bVar1) {
    DAT_018dd946 = '\x02';
LAB_01602e6c:
    local_3c = FUN_01602d08;
    do {
      if (DAT_018dd998 != 0) {
        ClearExclusiveLocal();
        FUN_015bf680(&DAT_018dd998);
        goto LAB_01602e9c;
      }
      bVar1 = (bool)hasExclusiveAccess(0x18dd998);
    } while (!bVar1);
    DAT_018dd998 = 1;
    DataMemoryBarrier(0xb);
LAB_01602e9c:
    uVar5 = 0;
    if ((DAT_018dd988 & 0x7fffffff) != 0) {
      uVar5 = FUN_015bf3f8();
      uVar5 = uVar5 ^ 1;
    }
    local_44 = "";
    local_48 = &local_58;
    local_34 = (code **)&DAT_00000004;
    local_50 = &local_2c;
    local_54 = (undefined4 ******)&local_3c;
    local_58 = &local_38;
    local_30 = (int *)0x0;
    local_38 = (undefined4 *******)0x0;
    local_2c = 0;
    FUN_0184241c(FUN_015c0088,&local_48);
    if (local_30 == (int *)0x0) {
      *param_1 = 0;
      param_1[1] = local_58;
      param_1[2] = local_54;
      param_1[3] = local_50;
      if (local_38 != (undefined4 *******)0x0) {
        thunk_FUN_016d3fb4(local_34);
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
    if (((uVar5 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) && (iVar3 = FUN_015bf3f8(), iVar3 == 0)
       ) {
      DAT_018dd99c = 1;
    }
    iVar3 = DAT_018dd998;
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(0x18dd998);
    } while (!bVar1);
    DAT_018dd998 = 0;
    if (iVar3 == 2) {
      FUN_016d6968(0xf0,&DAT_018dd998,0x81,1);
      return;
    }
    return;
  }
LAB_01602f48:
  *param_1 = 1;
  return;
}

