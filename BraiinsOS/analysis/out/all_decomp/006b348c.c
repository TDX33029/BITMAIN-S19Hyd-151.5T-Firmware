// FUN_006b348c @ 006b348c size=808 calls_out=8 calls_in=0
// strings: 

void FUN_006b348c(undefined4 *param_1,undefined4 param_2,undefined4 *param_3)

{
  bool bVar1;
  byte bVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined1 *puVar7;
  int iVar8;
  uint local_70;
  int local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 local_5c;
  uint local_58;
  int local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  uint local_40;
  undefined1 *local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  piVar3 = (int *)FUN_007853dc(param_2,*param_3);
  if (piVar3 == (int *)0x0) {
    *param_1 = 3;
  }
  else {
    iVar6 = *piVar3;
    if ((*(uint *)(iVar6 + 8) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_01871438);
    }
    if (*(char *)(iVar6 + 0x106) == '\0') {
      iVar8 = iVar6 + 0xf4;
      if (*(char *)(iVar6 + 0x105) != '\x01') goto LAB_006b35e8;
      bVar2 = *(byte *)(iVar6 + 0x104);
      do {
        if ((bVar2 & 1) != 0) {
          FUN_0079e850(&local_40,iVar6 + 0x20,iVar8);
          local_50 = local_38;
          uStack_4c = uStack_34;
          uStack_48 = uStack_30;
          uStack_44 = uStack_2c;
          if ((local_40 & 1) == 0) {
            if (local_3c == (undefined1 *)0x80000000) {
              if (*(int *)(iVar6 + 0xf8) != 0) {
                puVar7 = &DAT_80000008;
                FUN_015e79d4(&local_38,0x28,&DAT_004089b1,0x19);
                goto LAB_006b3740;
              }
              *(undefined1 *)(iVar6 + 0x105) = 0;
              uVar4 = 2;
              local_3c = (undefined1 *)0x80000000;
            }
            else {
              uVar4 = 0;
            }
            local_40 = 0;
            *param_1 = uVar4;
            param_1[1] = local_3c;
            local_68 = local_38;
            uStack_64 = uStack_34;
            uStack_60 = uStack_30;
            local_5c = uStack_2c;
LAB_006b37b8:
            param_1[2] = local_68;
            param_1[3] = uStack_64;
            param_1[4] = uStack_60;
            param_1[5] = local_5c;
          }
          else {
            puVar7 = local_3c;
LAB_006b3740:
            local_40 = 1;
            *(undefined1 *)(iVar6 + 0x106) = 1;
            *param_1 = 1;
            param_1[1] = puVar7;
            param_1[2] = local_38;
            param_1[3] = uStack_34;
            param_1[4] = uStack_30;
            param_1[5] = uStack_2c;
            local_3c = puVar7;
          }
          goto LAB_006b34e8;
        }
        FUN_0079e850(&local_70,iVar6 + 0x20,iVar8);
        if ((local_70 & 1) != 0) {
          *(undefined1 *)(iVar6 + 0x106) = 1;
          *param_1 = 1;
          param_1[1] = local_6c;
          param_1[2] = local_68;
          param_1[3] = uStack_64;
          param_1[4] = uStack_60;
          param_1[5] = local_5c;
          goto LAB_006b34e8;
        }
        if (local_6c != -0x80000000) {
          *param_1 = 0;
          param_1[1] = local_6c;
          goto LAB_006b37b8;
        }
        *(undefined1 *)(iVar6 + 0x105) = 0;
LAB_006b35e8:
        if (*(int *)(iVar6 + 0xfc) == *(int *)(iVar6 + 0xf8)) {
          FUN_00f5f538(iVar8,1);
        }
        FUN_00753ed0(&local_58,iVar6 + 0x10,param_3,iVar8);
        if ((local_58 & 0xff) != 4) {
          if ((local_58 & 0xff) == 5) {
            uVar4 = 3;
            goto LAB_006b34e4;
          }
          *(undefined1 *)(iVar6 + 0x106) = 1;
          *param_1 = 1;
          param_1[1] = &DAT_80000008;
          param_1[2] = local_58;
          param_1[3] = local_54;
          goto LAB_006b34e8;
        }
        bVar2 = 0;
        if ((local_54 == 0) && (bVar2 = 1, *(char *)(iVar6 + 0x104) == '\x01')) goto LAB_006b34e0;
        *(undefined1 *)(iVar6 + 0x105) = 1;
        *(byte *)(iVar6 + 0x104) = bVar2;
      } while (*(char *)(iVar6 + 0x106) == '\0');
    }
    *(undefined2 *)(iVar6 + 0x105) = 0;
LAB_006b34e0:
    uVar4 = 2;
LAB_006b34e4:
    *param_1 = uVar4;
LAB_006b34e8:
    DataMemoryBarrier(0xb);
    puVar5 = (undefined4 *)(*piVar3 + 0x108);
    do {
      piVar3 = (int *)*puVar5;
      bVar1 = (bool)hasExclusiveAccess(puVar5);
    } while (!bVar1);
    *puVar5 = 0;
    DataMemoryBarrier(0xb);
    if (piVar3 != (int *)&DAT_00000001) {
      if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa464(&DAT_00350078,0x16,&DAT_01871418);
      }
      (**(code **)(*piVar3 + 4))(piVar3[1]);
      thunk_FUN_016d3fb4(piVar3);
      return;
    }
  }
  return;
}

