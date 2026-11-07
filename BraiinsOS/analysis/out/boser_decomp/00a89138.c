// FUN_00a89138 @ 00a89138 size=476 calls_out=12 calls_in=0
// strings: 

void FUN_00a89138(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint **ppuVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  uint ***local_68;
  undefined *local_64;
  uint ***local_60;
  undefined *local_5c;
  uint ***local_58;
  undefined *local_54;
  uint ***local_50;
  undefined *puStack_4c;
  uint ***pppuStack_48;
  int local_44;
  uint ***local_40;
  undefined *local_3c;
  uint ***local_38;
  undefined *local_34;
  uint ***pppuStack_30;
  int local_2c;
  
  ppuVar5 = *(uint ***)(param_1 + 0x420);
  uVar4 = *(uint *)(param_1 + 0x424);
  uVar6 = *param_2;
  uVar7 = param_2[1];
  uVar2 = FUN_012672ac(0,0,param_1 + 0x428,param_4,uVar6,uVar7,ppuVar5,uVar4);
  if ((uVar2 & 0xfd) == 0) {
    return;
  }
  FUN_01267ec8(param_1,param_2,param_3);
  uVar1 = *(undefined1 *)(param_1 + 0x41e);
  FUN_01ab9f1c(&local_58,param_1 + 0x428,uVar6,uVar7);
  if (local_44 != 0) {
    local_40 = local_58;
    local_3c = local_54;
    local_38 = local_50;
    local_34 = puStack_4c;
    pppuStack_30 = pppuStack_48;
    local_2c = local_44;
    if (((uint)*local_50 & (uint)ppuVar5) == 0 && ((uint)local_50[1] & uVar4) == 0) {
      local_68 = local_50;
      local_64 = puStack_4c;
      local_60 = pppuStack_48;
      local_58 = (uint ***)ppuVar5;
      local_54 = (undefined *)uVar4;
      uVar8 = FUN_01ab96a8(local_50);
      iVar3 = FUN_01ab8994();
      if (iVar3 == 0) {
        local_3c = &DAT_01d2f100;
        local_60 = (uint ***)0x0;
        local_68 = (uint ***)0x0;
        local_5c = (undefined *)((uint)local_5c & 0xffffff00);
        local_64 = (undefined *)0x1;
        local_34 = (undefined *)CONCAT22(local_34._2_2_,1);
        local_38 = (uint ***)CONCAT31(local_38._1_3_,uVar1);
        local_40 = (uint ***)&local_68;
        FUN_01aacd68(*param_3,&local_40,&DAT_01d2f1d8);
        if (((uint)local_34 & 0x100) == 0) {
          local_5c = (undefined *)CONCAT31(local_5c._1_3_,uVar1);
          local_40 = local_68;
          local_3c = local_64;
          local_38 = local_60;
          local_34 = local_5c;
          FUN_01ab8828((int)uVar8,&local_40);
        }
        else {
          FUN_0134bd64(local_68,local_64);
        }
      }
      else {
        FUN_01abcb5c(iVar3,*param_3);
      }
      FUN_01ac2a34((int)uVar8,(uint)((ulonglong)uVar8 >> 0x20) & 1);
      FUN_01ab4580(&local_50);
      return;
    }
    FUN_01ab4580();
  }
                    /* WARNING: Subroutine does not return */
  FUN_0130739c(&DAT_00531972,0x1d,&DAT_01d2f0f0);
}

