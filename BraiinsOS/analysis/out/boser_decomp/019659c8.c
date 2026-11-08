// FUN_019659c8 @ 019659c8 size=528 calls_out=7 calls_in=45
// strings: 

int FUN_019659c8(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 uVar1;
  undefined2 uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  uint uVar7;
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
  uVar7 = *(uint *)(param_1 + 0x14);
  if (*(uint *)(param_1 + 0x10) <= uVar7) {
LAB_01965bac:
    local_20 = 10;
    uVar6 = FUN_01964674(param_1,&local_20);
    goto LAB_01965bc0;
  }
  uVar3 = (uint)*(byte *)(*(int *)(param_1 + 0xc) + uVar7);
  if (uVar3 < 0x66) {
    if (uVar3 == 0x22) {
      *(undefined4 *)(param_1 + 8) = 0;
      *(uint *)(param_1 + 0x14) = uVar7 + 1;
      FUN_019686b4(&local_2c,(int *)(param_1 + 0xc),param_1);
      if (local_2c == 2) {
        return local_28;
      }
      local_1c = local_28;
      uVar1 = 5;
      local_18 = local_24;
    }
    else {
      if (uVar3 == 0x2d) {
        *(uint *)(param_1 + 0x14) = uVar7 + 1;
        FUN_01964ce0(&local_50,param_1,0);
        if (local_50 == 3 && iStack_4c == 0) {
          return local_48;
        }
LAB_01965b3c:
        uVar6 = FUN_01965e58(piVar5,param_2,param_3);
        goto LAB_01965bc0;
      }
      if (uVar3 != 0x5b) goto LAB_01965b74;
      uVar1 = 10;
    }
LAB_01965b5c:
    local_20 = CONCAT31(local_20._1_3_,uVar1);
  }
  else {
    if (uVar3 < 0x74) {
      if (uVar3 != 0x66) {
        if (uVar3 != 0x6e) goto LAB_01965b74;
        *(uint *)(param_1 + 0x14) = uVar7 + 1;
        iVar4 = FUN_01964c70(param_1,"ull",3);
        if (iVar4 != 0) {
          return iVar4;
        }
        uVar1 = 7;
        goto LAB_01965b5c;
      }
      *(uint *)(param_1 + 0x14) = uVar7 + 1;
      iVar4 = FUN_01964c70(param_1,&DAT_0056efac,4);
      if (iVar4 != 0) {
        return iVar4;
      }
      uVar2 = 0;
    }
    else {
      if (uVar3 != 0x74) {
        if (uVar3 != 0x7b) {
LAB_01965b74:
          if (uVar3 - 0x30 < 10) {
            FUN_01964ce0(&local_40,param_1,1);
            if (local_40 == 3 && local_3c == 0) {
              return local_38;
            }
            piVar5 = &local_40;
            goto LAB_01965b3c;
          }
          goto LAB_01965bac;
        }
        uVar1 = 0xb;
        goto LAB_01965b5c;
      }
      *(uint *)(param_1 + 0x14) = uVar7 + 1;
      iVar4 = FUN_01964c70(param_1,"rue",3);
      if (iVar4 != 0) {
        return iVar4;
      }
      uVar2 = 0x100;
    }
    local_20 = CONCAT22(local_20._2_2_,uVar2);
  }
  uVar6 = FUN_01967538(&local_20,param_2,param_3);
LAB_01965bc0:
  iVar4 = FUN_01966f00(uVar6,param_1);
  return iVar4;
}

