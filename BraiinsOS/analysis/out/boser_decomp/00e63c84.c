// FUN_00e63c84 @ 00e63c84 size=396 calls_out=7 calls_in=0
// strings: 

undefined8 FUN_00e63c84(int *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  int local_48;
  int iStack_44;
  int local_40;
  int local_3c;
  int iStack_38;
  undefined1 *local_30;
  int local_2c;
  int local_28;
  int local_24;
  undefined4 local_20;
  
  local_30 = (undefined1 *)&local_48;
  local_48 = *param_1;
  iStack_44 = param_1[1];
  local_40 = param_1[2];
  local_3c = param_1[3];
  iStack_38 = param_1[4];
  iVar5 = param_1[5];
  iVar6 = param_1[6];
  uVar2 = *(uint *)(iVar5 + 0x14);
  local_2c = iVar6;
  if (uVar2 < *(uint *)(iVar5 + 0x10)) {
    do {
      uVar3 = (uint)*(byte *)(*(int *)(iVar5 + 0xc) + uVar2);
      if ((0x17 < uVar3 - 9) || ((1 << (uVar3 - 9 & 0xff) & 0x800013U) == 0)) {
        if (uVar3 == 0x2d) {
          *(uint *)(iVar5 + 0x14) = uVar2 + 1;
          local_30 = (undefined1 *)&local_48;
          FUN_012c751c(&local_28,iVar5,0);
          if (local_28 == 3 && local_24 == 0) {
LAB_00e63dbc:
            uVar1 = local_20;
            goto LAB_00e63d0c;
          }
          uVar7 = FUN_00fe3a04(&local_28,&local_48,iVar6);
LAB_00e63dd4:
          uVar1 = (undefined4)(uVar7 >> 0x20);
          if ((uVar7 & 1) == 0) {
            uVar4 = 0;
            goto LAB_00e63d1c;
          }
        }
        else {
          if (uVar3 - 0x30 < 10) {
            local_30 = (undefined1 *)&local_48;
            FUN_012c751c(&local_28,iVar5,1);
            if (local_28 == 3 && local_24 == 0) goto LAB_00e63dbc;
            uVar7 = FUN_00fe3a04(&local_28,&local_48,iVar6);
            goto LAB_00e63dd4;
          }
          uVar1 = FUN_012c7788(iVar5,&local_30,&DAT_01c1ab40);
        }
        uVar1 = FUN_0127dee8(uVar1,iVar5);
        goto LAB_00e63d08;
      }
      uVar2 = uVar2 + 1;
      *(uint *)(iVar5 + 0x14) = uVar2;
    } while (*(uint *)(iVar5 + 0x10) != uVar2);
  }
  local_28 = 5;
  local_30 = (undefined1 *)&local_48;
  uVar1 = FUN_012c6b30(iVar5,&local_28);
LAB_00e63d08:
LAB_00e63d0c:
  uVar4 = 1;
  FUN_0196bf0c(iVar6,&local_48);
LAB_00e63d1c:
  if (local_48 == 4 || local_48 == 2) {
    FUN_019bb7e0(local_40,local_3c);
  }
  return CONCAT44(uVar1,uVar4);
}

