// FUN_00ed3f54 @ 00ed3f54 size=792 calls_out=7 calls_in=2
// strings: 

void FUN_00ed3f54(undefined4 *param_1,int param_2,undefined4 param_3)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint extraout_r1;
  undefined4 extraout_r3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  uint local_6c;
  uint local_68;
  int local_5c;
  int local_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  undefined4 local_38;
  uint local_34;
  byte local_30;
  byte local_2f;
  ushort local_2e;
  undefined4 local_2c;
  uint local_28;
  
  if (*(char *)(param_2 + 0x5a) == '\0') {
    iVar5 = param_2 + 0x48;
    if (*(char *)(param_2 + 0x59) != '\x01') goto LAB_00ed3fe0;
    bVar1 = *(byte *)(param_2 + 0x58);
    do {
      if ((bVar1 & 1) != 0) {
        FUN_0166558c(&local_48,param_2 + 0x10,iVar5);
        if (local_48 == 1) {
LAB_00ed40f8:
          *param_1 = 1;
          param_1[1] = 0;
          param_1[2] = local_44;
          param_1[3] = local_40;
          *(undefined1 *)(param_2 + 0x5a) = 1;
          return;
        }
        if (local_44 == 0) {
          if (*(int *)(param_2 + 0x4c) != 0) {
            FUN_015e79d4(&local_6c,0x28,&DAT_004089b1,0x19);
            local_44 = local_6c;
            local_40 = local_68;
            goto LAB_00ed40f8;
          }
          local_44 = 0;
          uVar6 = 0;
          *(undefined1 *)(param_2 + 0x59) = 0;
          local_3c = local_48;
          local_38 = extraout_r3;
        }
        else {
          uVar6 = 1;
        }
        param_1[1] = local_44;
        param_1[2] = local_40;
        *param_1 = uVar6;
        param_1[3] = local_3c;
        param_1[4] = local_38;
        return;
      }
      FUN_0166558c(&local_5c,param_2 + 0x10,iVar5);
      if (local_5c != 0) {
        *(undefined1 *)(param_2 + 0x5a) = 1;
        *param_1 = 1;
        param_1[1] = 0;
        param_1[2] = local_58;
        param_1[3] = local_54;
        return;
      }
      if (local_58 != 0) {
        param_1[3] = uStack_50;
        param_1[4] = uStack_4c;
        *param_1 = 1;
        param_1[1] = local_58;
        param_1[2] = local_54;
        return;
      }
      *(undefined1 *)(param_2 + 0x59) = 0;
LAB_00ed3fe0:
      iVar8 = *(int *)(param_2 + 0x4c);
      if (*(int *)(param_2 + 0x50) == iVar8) {
        FUN_00f5f538(iVar5,1);
        iVar8 = *(int *)(param_2 + 0x4c);
      }
      if (iVar8 == 0x7fffffff) {
LAB_00ed40a8:
        bVar1 = 1;
        if (*(char *)(param_2 + 0x58) == '\x01') {
          *param_1 = 0;
          return;
        }
      }
      else {
        iVar3 = *(int *)(param_2 + 0x50);
        if (iVar3 == iVar8) {
          FUN_00f5f538(iVar5,0x40);
          iVar8 = *(int *)(param_2 + 0x4c);
          iVar3 = *(int *)(param_2 + 0x50);
        }
        uVar4 = iVar3 - iVar8;
        uVar7 = *(int *)(param_2 + 0x48) + iVar8;
        local_3c = 0;
        local_40 = 0;
        local_48 = uVar7;
        local_44 = uVar4;
        local_34 = uVar7;
        FUN_01640de0(&local_30,param_2,param_3,&local_48);
        uVar2 = (uint)local_30;
        if (uVar2 != 4) {
          if (uVar2 == 5) {
            *param_1 = 2;
            return;
          }
          param_1[2] = (uint)local_2e << 0x10 | (uint)local_2f << 8 | uVar2;
          param_1[3] = local_2c;
          *param_1 = 1;
          param_1[1] = 0;
          *(undefined1 *)(param_2 + 0x5a) = 1;
          return;
        }
        if (local_44 < local_40) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa36c(0,local_40,local_44,&DAT_018acc90);
        }
        local_28 = local_48;
        if (uVar7 != local_48) {
          FUN_01446ae8(&local_34,&local_28,&DAT_018a4784);
          uVar2 = extraout_r1;
LAB_00ed425c:
          local_48 = uVar2;
          local_44 = uVar4;
                    /* WARNING: Subroutine does not return */
          FUN_00f600c0(&local_48);
        }
        uVar2 = local_40;
        if (uVar4 < local_40) goto LAB_00ed425c;
        *(uint *)(param_2 + 0x4c) = iVar8 + local_40;
        bVar1 = 0;
        if (local_40 == 0) goto LAB_00ed40a8;
      }
      *(undefined1 *)(param_2 + 0x59) = 1;
      *(byte *)(param_2 + 0x58) = bVar1;
    } while (*(char *)(param_2 + 0x5a) == '\0');
  }
  *param_1 = 0;
  *(undefined2 *)(param_2 + 0x59) = 0;
  return;
}

