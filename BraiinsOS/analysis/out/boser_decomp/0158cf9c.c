// FUN_0158cf9c @ 0158cf9c size=656 calls_out=10 calls_in=1
// strings: 

int FUN_0158cf9c(int param_1,undefined4 param_2)

{
  byte bVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  int local_50;
  int iStack_4c;
  int local_48;
  int local_40;
  int local_3c;
  int local_38;
  int local_2c;
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  undefined4 local_18;
  
  piVar5 = &local_50;
  FUN_0158c30c(&local_20,param_1);
  if ((char)local_20 == '\x01') {
    local_28 = local_1c;
    local_2c = CONCAT31(local_2c._1_3_,1);
    FUN_015834e8(&local_28);
LAB_0158d138:
    local_20 = 10;
    uVar6 = FUN_01966fbc(&local_20,*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20));
    goto LAB_0158d154;
  }
  bVar1 = local_20._2_1_;
  if (local_20._1_1_ == '\0') {
    bVar1 = 0;
  }
  if (bVar1 < 0x66) {
    if (bVar1 == 0x22) {
      FUN_0157653c(param_1 + 0xc);
      *(undefined4 *)(param_1 + 8) = 0;
      FUN_01576784(&local_2c,param_1 + 0xc,param_1);
      if (local_2c == 2) {
        return local_28;
      }
      local_1c = local_28;
      uVar2 = 5;
      local_18 = local_24;
    }
    else {
      if (bVar1 == 0x2d) {
        FUN_0157653c(param_1 + 0xc);
        FUN_0158c43c(&local_50,param_1,0);
        if (local_50 == 3 && iStack_4c == 0) {
          return local_48;
        }
LAB_0158d1a8:
        uVar6 = FUN_01965e58(piVar5,param_2,&DAT_01d271fc);
        goto LAB_0158d154;
      }
      if (bVar1 != 0x5b) goto LAB_0158d1e0;
      uVar2 = 10;
    }
LAB_0158d1cc:
    local_20 = CONCAT31(local_20._1_3_,uVar2);
  }
  else {
    if (bVar1 < 0x74) {
      if (bVar1 != 0x66) {
        if (bVar1 != 0x6e) goto LAB_0158d1e0;
        FUN_0157653c(param_1 + 0xc);
        iVar4 = FUN_0158c3a4(param_1,"ull",3);
        if (iVar4 != 0) {
          return iVar4;
        }
        uVar2 = 7;
        goto LAB_0158d1cc;
      }
      FUN_0157653c(param_1 + 0xc);
      iVar4 = FUN_0158c3a4(param_1,&DAT_0056efac,4);
      if (iVar4 != 0) {
        return iVar4;
      }
      uVar3 = 0;
    }
    else {
      if (bVar1 != 0x74) {
        if (bVar1 != 0x7b) {
LAB_0158d1e0:
          if ((byte)(bVar1 - 0x30) < 10) {
            FUN_0158c43c(&local_40,param_1,1);
            if (local_40 == 3 && local_3c == 0) {
              return local_38;
            }
            piVar5 = &local_40;
            goto LAB_0158d1a8;
          }
          goto LAB_0158d138;
        }
        uVar2 = 0xb;
        goto LAB_0158d1cc;
      }
      FUN_0157653c(param_1 + 0xc);
      iVar4 = FUN_0158c3a4(param_1,"rue",3);
      if (iVar4 != 0) {
        return iVar4;
      }
      uVar3 = 0x100;
    }
    local_20 = CONCAT22(local_20._2_2_,uVar3);
  }
  uVar6 = FUN_01967538(&local_20,param_2,&DAT_01d271fc);
LAB_0158d154:
  iVar4 = FUN_012c6694(uVar6,*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20));
  return iVar4;
}

