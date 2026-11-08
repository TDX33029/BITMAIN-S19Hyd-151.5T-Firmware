// FUN_00678df8 @ 00678df8 size=584 calls_out=10 calls_in=11
// strings: 

int FUN_00678df8(int param_1,undefined4 param_2,undefined4 param_3)

{
  byte bVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  int local_58;
  int iStack_54;
  int local_50;
  int local_48;
  int local_44;
  int local_40;
  int local_34;
  int local_30;
  undefined4 local_2c;
  undefined4 local_28;
  int local_24;
  undefined4 local_20;
  
  piVar5 = &local_58;
  FUN_00677968(&local_28,param_1);
  if ((char)local_28 == '\x01') {
    FUN_0067904c(local_24);
LAB_00678f6c:
    local_28 = 10;
    uVar6 = FUN_01966fbc(&local_28,*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20));
    goto LAB_00678f88;
  }
  bVar1 = local_28._2_1_;
  if (local_28._1_1_ == '\0') {
    bVar1 = 0;
  }
  if (bVar1 < 0x66) {
    if (bVar1 == 0x22) {
      FUN_0157653c(param_1 + 0xc);
      *(undefined4 *)(param_1 + 8) = 0;
      FUN_0069e49c(&local_34,param_1 + 0xc,param_1);
      if (local_34 == 2) {
        return local_30;
      }
      local_24 = local_30;
      uVar2 = 5;
      local_20 = local_2c;
    }
    else {
      if (bVar1 == 0x2d) {
        FUN_0157653c(param_1 + 0xc);
        FUN_00678ac4(&local_58,param_1,0);
        if (local_58 == 3 && iStack_54 == 0) {
          return local_50;
        }
LAB_00678fc4:
        uVar6 = FUN_01965e58(piVar5,param_2,param_3);
        goto LAB_00678f88;
      }
      if (bVar1 != 0x5b) goto LAB_00678ffc;
      uVar2 = 10;
    }
LAB_00678fe4:
    local_28 = CONCAT31(local_28._1_3_,uVar2);
  }
  else {
    if (bVar1 < 0x74) {
      if (bVar1 != 0x66) {
        if (bVar1 != 0x6e) goto LAB_00678ffc;
        FUN_0157653c(param_1 + 0xc);
        iVar4 = FUN_00677b98(param_1,"ull",3);
        if (iVar4 != 0) {
          return iVar4;
        }
        uVar2 = 7;
        goto LAB_00678fe4;
      }
      FUN_0157653c(param_1 + 0xc);
      iVar4 = FUN_00677b98(param_1,&DAT_0056efac,4);
      if (iVar4 != 0) {
        return iVar4;
      }
      uVar3 = 0;
    }
    else {
      if (bVar1 != 0x74) {
        if (bVar1 != 0x7b) {
LAB_00678ffc:
          if ((byte)(bVar1 - 0x30) < 10) {
            FUN_00678ac4(&local_48,param_1,1);
            if (local_48 == 3 && local_44 == 0) {
              return local_40;
            }
            piVar5 = &local_48;
            goto LAB_00678fc4;
          }
          goto LAB_00678f6c;
        }
        uVar2 = 0xb;
        goto LAB_00678fe4;
      }
      FUN_0157653c(param_1 + 0xc);
      iVar4 = FUN_00677b98(param_1,"rue",3);
      if (iVar4 != 0) {
        return iVar4;
      }
      uVar3 = 0x100;
    }
    local_28 = CONCAT22(local_28._2_2_,uVar3);
  }
  uVar6 = FUN_01967538(&local_28,param_2,param_3);
LAB_00678f88:
  iVar4 = FUN_012c6694(uVar6,*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20));
  return iVar4;
}

