// FUN_01a1fd14 @ 01a1fd14 size=692 calls_out=8 calls_in=1
// strings: 

void FUN_01a1fd14(int *param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  byte bVar6;
  uint uVar7;
  byte bVar8;
  int local_34;
  undefined4 local_30;
  
  iVar5 = *(int *)(param_3 + 0x18) + *(int *)(param_3 + 0x14);
  if (0x2a2fe < iVar5 + 0x1517fU) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0cc(&DAT_01ce21ec);
  }
  FUN_0128ec84(&local_34,param_3,iVar5);
  uVar7 = local_30;
  iVar5 = local_34;
  if (local_34 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0130739c(&DAT_00529c62,0x2b,&DAT_01d2a938);
  }
  uVar1 = local_30 / 0x3c;
  FUN_013160c4(&local_34,param_2 + 0xc,local_30 + (uVar1 * 0x10 - local_30 / 0x3c) * -4,1);
  if (local_34 != 7) {
    FUN_01bed4e2((int)param_1 + 5,(int)&local_30 + 1,0xb);
    *(byte *)(param_1 + 1) = (byte)local_30;
    *param_1 = local_34;
    return;
  }
  bVar8 = 0;
  if ((local_30 & 1) == 0) {
LAB_01a1ff48:
    *param_1 = 7;
    *(byte *)(param_1 + 1) = bVar8 & 1;
    return;
  }
  FUN_013160c4(&local_34,param_2 + 0x24,uVar1 + ((uVar1 / 0x3c) * 0x10 - uVar1 / 0x3c) * -4,1);
  if (local_34 != 7) {
    FUN_01bed4e2((int)param_1 + 5,(int)&local_30 + 1,0xb);
    *(byte *)(param_1 + 1) = (byte)local_30;
    goto LAB_01a1ff70;
  }
  if ((local_30 & 1) == 0) goto LAB_01a1ff48;
  if (uVar7 < 0x15180) {
    FUN_013160c4(&local_34,param_2 + 0x3c,uVar7 / 0xe10,1);
    uVar7 = local_30 & 0xff;
    if (local_34 != 7) goto LAB_01a1ff5c;
    if ((local_30 & 1) == 0) goto LAB_01a1ff48;
    uVar3 = FUN_01a1ffd4(iVar5);
    uVar4 = FUN_01a20010(iVar5);
    iVar2 = iVar5 >> 0xd;
    FUN_01318fe0(&local_34,param_2,iVar2,uVar3,uVar4);
    bVar6 = (byte)local_30;
    if (local_34 == 7) {
      if ((local_30 & 1) == 0) goto LAB_01a1ff48;
      iVar5 = FUN_01a1ffd4(iVar5);
      if (iVar5 - 1U < 0xc) {
        FUN_013160c4(&local_34,param_2 + 0x6c,iVar5,1);
        bVar6 = (byte)local_30;
        if (local_34 == 7) {
          if ((((local_30 & 1) != 0) && (bVar8 = 0, iVar2 - 1U < 5000)) &&
             (FUN_013160c4(&local_34,param_2 + 0x9c,iVar2,1), bVar8 = (byte)local_30, local_34 != 7)
             ) {
            FUN_01bed4e2((int)param_1 + 5,(int)&local_30 + 1,0xb);
            *(byte *)(param_1 + 1) = (byte)local_30;
            goto LAB_01a1ff70;
          }
          goto LAB_01a1ff48;
        }
      }
      else {
        local_34 = 1;
      }
    }
    iVar5 = local_34;
  }
  else {
    local_34 = 2;
LAB_01a1ff5c:
    bVar6 = (byte)uVar7;
    iVar5 = local_34;
  }
  FUN_01bed4e2((int)param_1 + 5,(int)&local_30 + 1,0xb);
  *(byte *)(param_1 + 1) = bVar6;
  local_34 = iVar5;
LAB_01a1ff70:
  *param_1 = local_34;
  return;
}

