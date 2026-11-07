// FUN_006784dc @ 006784dc size=516 calls_out=5 calls_in=2
// strings: 

void FUN_006784dc(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 ulonglong param_5)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  char local_38;
  char local_37;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  
  FUN_0157653c(param_2 + 0xc);
  iVar4 = 0;
  do {
    uVar3 = (uint)(param_5 >> 0x20);
    FUN_00677968(&local_30,param_2);
    if ((char)local_30 == '\x01') {
LAB_006785c8:
      *param_1 = 1;
      param_1[1] = local_2c;
      return;
    }
    uVar1 = 0xffffffd0;
    if (local_30._1_1_ != '\0') {
      uVar1 = (local_30 >> 0x10 & 0xff) - 0x30;
    }
    if (9 < (uVar1 & 0xff)) {
      if (iVar4 == 0) {
        FUN_00677968(&local_38,param_2);
        if (local_38 == '\0') {
          if (local_37 == '\x01') {
            local_30 = 0xd;
          }
          else {
            local_30 = 5;
          }
          local_34 = FUN_01966fbc(&local_30,*(undefined4 *)(param_2 + 0x1c),
                                  *(undefined4 *)(param_2 + 0x20));
        }
        param_1[1] = local_34;
        *param_1 = 1;
        return;
      }
      FUN_00677968(&local_30,param_2);
      if ((char)local_30 == '\0') {
        bVar2 = 0x20;
        if (local_30._1_1_ != '\0') {
          bVar2 = local_30._2_1_ | 0x20;
        }
        if (bVar2 == 0x65) {
          FUN_006786e0(param_1,param_2,param_3);
          return;
        }
        FUN_012c4418(param_1,*(undefined4 *)(param_2 + 0x1c),*(undefined4 *)(param_2 + 0x20),param_3
                    );
        return;
      }
      goto LAB_006785c8;
    }
    if ((0x19999998 < uVar3 && (uint)((uint)param_5 < 0x99999999) <= 0x19999999 - uVar3) &&
       (((uint)param_5 != 0x99999999 || (int)((param_5 ^ 0x1999999999999999) >> 0x20) != 0 ||
        (5 < (uVar1 & 0xff))))) {
      break;
    }
    FUN_0157653c(param_2 + 0xc);
    iVar4 = iVar4 + -1;
    param_5 = (param_5 & 0xffffffff) * 10 + (CONCAT44(uVar3 * 10,uVar1) & 0xffffffff000000ff);
  } while( true );
LAB_006789e8:
  FUN_00677968(&local_2c,param_2);
  if ((char)local_2c == '\x01') {
LAB_00678a40:
    *param_1 = 1;
    param_1[1] = uStack_28;
    return;
  }
  if ((local_2c._1_1_ != '\x01') || (9 < (local_2c >> 0x10 & 0xff) - 0x30)) {
    FUN_00677968(&local_2c,param_2);
    if ((char)local_2c == '\0') {
      bVar2 = 0x20;
      if (local_2c._1_1_ != '\0') {
        bVar2 = local_2c._2_1_ | 0x20;
      }
      if (bVar2 == 0x65) {
        FUN_006786e0(param_1,param_2,param_3);
        return;
      }
      FUN_012c4418(param_1,*(undefined4 *)(param_2 + 0x1c),*(undefined4 *)(param_2 + 0x20),param_3);
      return;
    }
    goto LAB_00678a40;
  }
  FUN_0157653c(param_2 + 0xc);
  goto LAB_006789e8;
}

