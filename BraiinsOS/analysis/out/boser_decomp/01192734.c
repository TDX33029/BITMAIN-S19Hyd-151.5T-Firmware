// FUN_01192734 @ 01192734 size=348 calls_out=6 calls_in=0
// strings: 

void FUN_01192734(undefined1 *param_1,int *param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int local_48;
  int iStack_44;
  int local_40;
  int local_3c;
  int iStack_38;
  undefined1 *local_34;
  int local_30;
  undefined4 local_2c [3];
  
  local_34 = (undefined1 *)&local_48;
  local_48 = *param_2;
  iStack_44 = param_2[1];
  local_40 = param_2[2];
  local_3c = param_2[3];
  iStack_38 = param_2[4];
  iVar5 = param_2[5];
  iVar6 = param_2[6];
  uVar3 = *(uint *)(iVar5 + 0x14);
  local_30 = iVar6;
  if (uVar3 < *(uint *)(iVar5 + 0x10)) {
    do {
      uVar4 = (uint)*(byte *)(*(int *)(iVar5 + 0xc) + uVar3);
      if ((0x17 < uVar4 - 9) || ((1 << (uVar4 - 9 & 0xff) & 0x800013U) == 0)) {
        if (uVar4 == 0x66) {
          *(uint *)(iVar5 + 0x14) = uVar3 + 1;
          iVar5 = FUN_012c6b8c(iVar5,&DAT_0056efac,4);
          if (iVar5 != 0) goto LAB_011927c0;
          uVar1 = 0;
        }
        else {
          if (uVar4 != 0x74) {
            local_34 = (undefined1 *)&local_48;
            uVar2 = FUN_012c7788(iVar5,&local_34,&DAT_01c1cc58);
            iVar5 = FUN_0127dee8(uVar2,iVar5);
            goto LAB_011927c0;
          }
          *(uint *)(iVar5 + 0x14) = uVar3 + 1;
          local_34 = (undefined1 *)&local_48;
          iVar5 = FUN_012c6b8c(iVar5,"rue",3);
          if (iVar5 != 0) goto LAB_011927c0;
          uVar1 = 1;
        }
        param_1[1] = uVar1;
        uVar1 = 0;
        goto LAB_011927d4;
      }
      uVar3 = uVar3 + 1;
      *(uint *)(iVar5 + 0x14) = uVar3;
    } while (*(uint *)(iVar5 + 0x10) != uVar3);
  }
  local_2c[0] = 5;
  local_34 = (undefined1 *)&local_48;
  iVar5 = FUN_012c6b30(iVar5,local_2c);
LAB_011927c0:
  FUN_0196bf0c(iVar6,&local_48);
  *(int *)(param_1 + 4) = iVar5;
  uVar1 = 1;
LAB_011927d4:
  *param_1 = uVar1;
  if (local_48 == 4 || local_48 == 2) {
    FUN_019bb7e0(local_40,local_3c);
  }
  return;
}

