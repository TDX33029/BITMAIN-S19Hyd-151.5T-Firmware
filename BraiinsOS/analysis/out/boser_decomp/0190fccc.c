// FUN_0190fccc @ 0190fccc size=568 calls_out=5 calls_in=0
// strings: 

void FUN_0190fccc(int *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined *puVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 local_c8;
  int local_c4;
  uint local_c0;
  uint local_bc;
  uint local_b8;
  int local_b0;
  int local_ac;
  int iStack_a8;
  int iStack_a4;
  int iStack_a0;
  int iStack_9c;
  int iStack_98;
  int local_94;
  int iStack_90;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  int iStack_80;
  int local_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  int local_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  undefined1 auStack_48 [36];
  
  FUN_018f3024(&local_c8);
  iVar1 = *param_2;
  (**(code **)(*(int *)(iVar1 + 0x14) + 0x14))(&local_bc,*(undefined4 *)(iVar1 + 0x10));
  iVar6 = local_c4;
  if (local_c0 < local_bc) {
    puVar7 = &DAT_01d23e90;
  }
  else if (local_c0 - local_bc < local_bc) {
    puVar7 = &DAT_01d23ea0;
  }
  else {
    uVar2 = (local_c0 - local_bc) - local_bc;
    if (uVar2 < local_b8) {
      puVar7 = &DAT_01d23eb0;
    }
    else {
      uVar2 = uVar2 - local_b8;
      if (local_b8 <= uVar2) {
        uVar9 = *(undefined4 *)(iVar1 + 0x10);
        iVar10 = *(int *)(iVar1 + 0x14);
        FUN_019316f8(&local_b0,local_c4,local_bc);
        iVar5 = uVar2 - local_b8;
        iVar8 = iVar6 + local_bc + local_bc;
        iVar3 = iVar8 + local_b8;
        iVar4 = iVar3 + local_b8;
        (**(code **)(iVar10 + 0x18))(&local_7c,uVar9,&local_b0,iVar8,local_b8,iVar4,iVar5);
        if (local_7c == 3) {
          FUN_018f663c(param_1 + 2);
          *param_1 = 3;
        }
        else {
          local_ac = local_78;
          iStack_a8 = iStack_74;
          iStack_a4 = iStack_70;
          iStack_a0 = iStack_6c;
          iStack_9c = iStack_68;
          iStack_98 = iStack_64;
          local_94 = local_60;
          iStack_90 = iStack_5c;
          iStack_8c = iStack_58;
          iStack_88 = iStack_54;
          iStack_84 = iStack_50;
          iStack_80 = iStack_4c;
          local_b0 = local_7c;
          uVar9 = *(undefined4 *)(iVar1 + 0x10);
          iVar1 = *(int *)(iVar1 + 0x14);
          FUN_019316f8(auStack_48,iVar6 + local_bc,local_bc);
          (**(code **)(iVar1 + 0x18))(&local_7c,uVar9,auStack_48,iVar3,local_b8,iVar4,iVar5);
          if (local_7c == 3) {
            FUN_018f663c(param_1 + 2);
            *param_1 = 3;
            iVar6 = 0;
            do {
              auStack_48[iVar6 + -100] = 0;
              iVar6 = iVar6 + 1;
            } while (iVar6 != 0x20);
            iVar6 = local_c4;
          }
          else {
            param_1[0xe] = local_78;
            param_1[0xf] = iStack_74;
            param_1[0x10] = iStack_70;
            param_1[0x11] = iStack_6c;
            param_1[0x12] = iStack_68;
            param_1[0x13] = iStack_64;
            param_1[0x14] = local_60;
            param_1[0x15] = iStack_5c;
            param_1[0x16] = iStack_58;
            param_1[0x17] = iStack_54;
            param_1[0x18] = iStack_50;
            param_1[0x19] = iStack_4c;
            param_1[1] = local_ac;
            param_1[2] = iStack_a8;
            param_1[3] = iStack_a4;
            param_1[4] = iStack_a0;
            param_1[5] = iStack_9c;
            param_1[6] = iStack_98;
            param_1[7] = local_94;
            param_1[8] = iStack_90;
            param_1[9] = iStack_8c;
            param_1[10] = iStack_88;
            param_1[0xb] = iStack_84;
            param_1[0xc] = iStack_80;
            param_1[0xd] = local_7c;
            *param_1 = local_b0;
          }
        }
        FUN_0134bd64(local_c8,iVar6);
        return;
      }
      puVar7 = &DAT_01d23ec0;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012fb100(&DAT_0053349c,0x13,puVar7);
}

