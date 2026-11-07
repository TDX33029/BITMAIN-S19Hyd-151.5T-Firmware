// FUN_010bd4e4 @ 010bd4e4 size=340 calls_out=7 calls_in=0
// strings: 

void FUN_010bd4e4(int *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int local_58;
  int iStack_54;
  int local_50;
  int local_4c;
  int iStack_48;
  int *local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  undefined4 local_24;
  
  local_40 = &local_58;
  local_58 = *param_2;
  iStack_54 = param_2[1];
  local_50 = param_2[2];
  local_4c = param_2[3];
  iStack_48 = param_2[4];
  iVar5 = param_2[5];
  iVar6 = param_2[6];
  uVar2 = *(uint *)(iVar5 + 0x14);
  local_3c = iVar6;
  if (uVar2 < *(uint *)(iVar5 + 0x10)) {
    do {
      uVar3 = (uint)*(byte *)(*(int *)(iVar5 + 0xc) + uVar2);
      uVar4 = uVar3 - 9;
      if ((0x17 < uVar4) || ((1 << (uVar4 & 0xff) & 0x800013U) == 0)) {
        if (uVar3 == 0x22) {
          *(undefined4 *)(iVar5 + 8) = 0;
          *(uint *)(iVar5 + 0x14) = uVar2 + 1;
          FUN_01968828(&local_2c,iVar5 + 0xc,iVar5);
          iVar1 = local_28;
          if (local_2c == 2) goto LAB_010bd570;
          FUN_00dec280(&local_38,&local_58,iVar6,local_28,local_24);
          if (local_38 != -0x80000000) {
            *param_1 = local_38;
            param_1[1] = local_34;
            param_1[2] = local_30;
            goto LAB_010bd584;
          }
        }
        else {
          local_34 = FUN_012c7788(iVar5,&local_40,&DAT_01c1cb68);
        }
        iVar1 = FUN_0127dee8(local_34,iVar5);
        goto LAB_010bd56c;
      }
      uVar2 = uVar2 + 1;
      *(uint *)(iVar5 + 0x14) = uVar2;
    } while (*(uint *)(iVar5 + 0x10) != uVar2);
  }
  local_2c = 5;
  iVar1 = FUN_012c6b30(iVar5,&local_2c);
LAB_010bd56c:
LAB_010bd570:
  FUN_0196bf0c(iVar6,&local_58);
  *param_1 = -0x80000000;
  param_1[1] = iVar1;
LAB_010bd584:
  if (local_58 == 4 || local_58 == 2) {
    FUN_019bb7e0(local_50,local_4c);
  }
  return;
}

