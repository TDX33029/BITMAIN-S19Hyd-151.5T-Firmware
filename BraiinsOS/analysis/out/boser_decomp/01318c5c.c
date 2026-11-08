// FUN_01318c5c @ 01318c5c size=824 calls_out=4 calls_in=1
// strings: 

void FUN_01318c5c(int *param_1,int param_2,int *param_3,char param_4)

{
  int iVar1;
  ushort *puVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 local_44;
  int iStack_40;
  int iStack_3c;
  uint local_38;
  uint *local_34;
  undefined4 local_30;
  ushort *local_2c;
  code *local_28;
  
  if (param_4 == '\x01') {
    uVar5 = param_3[1];
    uVar4 = 2;
    uVar7 = uVar5 + ((uVar5 / 0x3c) * 0x10 - uVar5 / 0x3c) * -4;
    iVar1 = 0xc;
  }
  else if (param_4 == '\x02') {
    uVar5 = param_3[1];
    uVar7 = uVar5 / 0x3c;
    uVar7 = uVar7 + ((uVar7 / 0x3c) * 0x10 - uVar7 / 0x3c) * -4;
    iVar1 = 0x24;
    uVar4 = 3;
  }
  else {
    uVar5 = param_3[1];
    iVar1 = 0x3c;
    uVar7 = uVar5 / 0xe10;
    uVar4 = 4;
  }
  puVar2 = (ushort *)(param_2 + iVar1 + 0xe);
  uVar8 = (uint)*puVar2;
  local_38 = uVar7;
  if (uVar8 < (uVar7 & 0xffff)) {
    local_34 = &local_38;
    local_30 = FUN_012fd02c;
    local_28 = FUN_012fcf18;
    local_2c = puVar2;
    FUN_00664898(&local_44,&DAT_00593c02,&local_34);
    local_34 = (uint *)0x6;
LAB_01318e14:
    *param_1 = (int)local_34;
    param_1[1] = local_44;
    param_1[2] = iStack_40;
    param_1[3] = iStack_3c;
  }
  else {
    uVar6 = uVar7;
    do {
      FUN_013160c4(&local_34,param_2 + iVar1,uVar6,1);
      uVar3 = uVar6 & 0xffff;
      if (local_34 != (uint *)0x7) {
        FUN_01bed4e2((int)&local_44 + 1,(int)&local_30 + 1,0xb);
        local_44 = CONCAT31(local_44._1_3_,(byte)local_30);
        goto LAB_01318e14;
      }
      if (((uint)local_30 & 1) != 0) {
        if (uVar3 != uVar7) {
          iVar1 = *param_3;
          if (param_4 == '\x03') {
            if ((0x17 < uVar3) || (iVar1 == 0)) goto LAB_01318f88;
            uVar7 = uVar3 * 0xe10 + uVar5 % 0xe10;
            uVar3 = (uVar7 / 0xe10) * 0xe10 + uVar7 + ((uVar7 / 0x3c) * 0x10 - uVar7 / 0x3c) * -4;
LAB_01318f28:
            uVar5 = uVar3;
          }
          else {
            if (param_4 == '\x02') {
              if ((0x3b < uVar3) || (iVar1 == 0)) {
LAB_01318f88:
                *param_1 = 2;
                return;
              }
              uVar3 = uVar5 + uVar3 * 0x3c + (uVar5 / 0xe10) * 0xe10 +
                      ((uVar5 / 0x3c) * 0x10 - uVar5 / 0x3c) * -4;
              goto LAB_01318f28;
            }
            if ((0x3b < uVar3) || (iVar1 == 0)) goto LAB_01318f88;
            uVar3 = uVar5 + uVar3;
          }
          param_3[1] = uVar3 + (((uVar5 / 0x3c) * 0x10 - uVar5 / 0x3c) * 4 - uVar5);
        }
        goto LAB_01318f6c;
      }
    } while ((uVar3 < uVar8) && (uVar6 = uVar6 + (uVar3 < uVar8), (uVar6 & 0xffff) <= uVar8));
    FUN_01318a38(&local_34,param_3,uVar4);
    if (local_34 == (uint *)0x7) {
      local_30._0_1_ = 0;
LAB_01318f6c:
      *param_1 = 7;
      *(byte *)(param_1 + 1) = ~(byte)local_30 & 1;
    }
    else {
      param_1[1] = (int)local_30;
      param_1[2] = (int)local_2c;
      param_1[3] = (int)local_28;
      *param_1 = (int)local_34;
    }
  }
  return;
}

