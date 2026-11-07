// FUN_00e638f8 @ 00e638f8 size=392 calls_out=8 calls_in=0
// strings: 

void FUN_00e638f8(undefined4 *param_1,int *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  int local_50;
  int iStack_4c;
  int local_48;
  int local_44;
  int iStack_40;
  undefined1 *local_38;
  int local_34;
  int local_30;
  int local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  
  local_38 = (undefined1 *)&local_50;
  local_50 = *param_2;
  iStack_4c = param_2[1];
  local_48 = param_2[2];
  local_44 = param_2[3];
  iStack_40 = param_2[4];
  iVar4 = param_2[5];
  iVar5 = param_2[6];
  uVar2 = *(uint *)(iVar4 + 0x14);
  local_34 = iVar5;
  if (uVar2 < *(uint *)(iVar4 + 0x10)) {
    do {
      uVar3 = (uint)*(byte *)(*(int *)(iVar4 + 0xc) + uVar2);
      if ((0x17 < uVar3 - 9) || ((1 << (uVar3 - 9 & 0xff) & 0x800013U) == 0)) {
        if (uVar3 == 0x2d) {
          *(uint *)(iVar4 + 0x14) = uVar2 + 1;
          local_38 = (undefined1 *)&local_50;
          FUN_012c751c(&local_30,iVar4,0);
        }
        else {
          if (9 < uVar3 - 0x30) {
            uVar1 = FUN_012c7788(iVar4,&local_38,&DAT_01c1ab10);
            uVar1 = FUN_0127dee8(uVar1,iVar4);
            goto LAB_00e63980;
          }
          local_38 = (undefined1 *)&local_50;
          FUN_012c751c(&local_30,iVar4,1);
        }
        if (local_30 == 3 && local_2c == 0) {
          uVar1 = local_28;
          goto LAB_00e63984;
        }
        if (local_30 == 0) {
          uVar6 = CONCAT44(uStack_24,local_28);
        }
        else if (local_30 == 1) {
          uVar6 = FUN_01bf0e80(local_28,uStack_24);
        }
        else {
          uVar6 = FUN_01bf0cac(local_28,uStack_24);
        }
        uVar1 = 0;
        *(undefined8 *)(param_1 + 2) = uVar6;
        goto LAB_00e63998;
      }
      uVar2 = uVar2 + 1;
      *(uint *)(iVar4 + 0x14) = uVar2;
    } while (*(uint *)(iVar4 + 0x10) != uVar2);
  }
  local_30 = 5;
  local_38 = (undefined1 *)&local_50;
  uVar1 = FUN_012c6b30(iVar4,&local_30);
LAB_00e63980:
LAB_00e63984:
  FUN_0196bf0c(iVar5,&local_50);
  param_1[1] = uVar1;
  uVar1 = 1;
LAB_00e63998:
  *param_1 = uVar1;
  if (local_50 == 4 || local_50 == 2) {
    FUN_019bb7e0(local_48,local_44);
  }
  return;
}

