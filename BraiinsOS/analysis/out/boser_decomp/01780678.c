// FUN_01780678 @ 01780678 size=748 calls_out=7 calls_in=1
// strings: 

void FUN_01780678(undefined4 *param_1,int param_2,undefined1 *param_3,uint param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined4 local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  
  if (param_4 != 0) {
    iVar7 = param_2 + 0x410;
    do {
      if (*(int *)(param_2 + 0x400) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01979f74(&DAT_005092a4,0x28,&DAT_01d1a740);
      }
      if (*(int *)(param_2 + 0x408) == 0) {
        uVar6 = *(uint *)(param_2 + 0x404);
        if (uVar6 == 0) {
          if (param_4 < 3) {
            FUN_01bed4e2(iVar7,param_3,param_4);
            uVar6 = param_4;
            uVar8 = param_4;
            goto LAB_017807c8;
          }
          uVar5 = 0x300;
          uVar10 = 0;
          iVar9 = 0;
          uVar8 = param_4;
          puVar3 = param_3;
LAB_01780804:
          uVar8 = ((uint)((ulonglong)uVar8 * 0xaaaaaaab >> 0x20) & 0xfffffffe) + uVar8 / 3;
          if (uVar5 < uVar8) {
            uVar8 = uVar5;
          }
          iVar1 = FUN_00735f14(*(undefined4 *)(param_2 + 0x40c),puVar3,uVar8,param_2 + iVar9,
                               0x400 - iVar9);
          FUN_01780990(&local_30,param_2,iVar1 + iVar9);
          if ((char)local_30 == '\x04') {
            uVar8 = uVar8 + uVar10;
          }
          else {
            uVar8 = local_2c;
            if ((local_30 & 0xff) != 4) {
              *(uint *)(param_2 + 0x404) = uVar6;
              local_38 = local_30;
              local_34 = local_2c;
              goto LAB_017806f0;
            }
          }
          local_38 = CONCAT31(local_38._1_3_,4);
          local_34 = uVar8;
LAB_01780884:
          local_34 = uVar8;
          if (uVar8 == 0) goto LAB_017808dc;
        }
        else {
          if (2 < uVar6 + param_4) {
            if (3 < uVar6) {
                    /* WARNING: Subroutine does not return */
              FUN_012faff4(uVar6,3,3,&DAT_01d1a720);
            }
            uVar10 = 3 - uVar6;
            if (param_4 < uVar10) {
                    /* WARNING: Subroutine does not return */
              FUN_012faff4(0,uVar10,param_4,&DAT_01d1a730);
            }
            FUN_01bed4e2(iVar7 + uVar6,param_3,uVar10);
            FUN_00735f14(*(undefined4 *)(param_2 + 0x40c),iVar7,3,param_2,0x400);
            *(undefined4 *)(param_2 + 0x404) = 0;
            iVar9 = 4;
            uVar5 = 0x2fd;
            uVar8 = param_4 - uVar10;
            puVar3 = param_3 + uVar10;
            goto LAB_01780804;
          }
          if (2 < uVar6) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb12c(uVar6,3,&DAT_01d1a710);
          }
          *(undefined1 *)(iVar7 + uVar6) = *param_3;
          uVar6 = uVar6 + 1;
          uVar8 = 1;
LAB_017807c8:
          *(uint *)(param_2 + 0x404) = uVar6;
        }
        if (param_4 < uVar8) {
                    /* WARNING: Subroutine does not return */
          FUN_012faff4(uVar8,param_4,param_4,&DAT_01d2e7d0);
        }
        param_3 = param_3 + uVar8;
        param_4 = param_4 - uVar8;
      }
      else {
        FUN_01780990(&local_30,param_2);
        if ((char)local_30 == '\x04') {
          local_38 = CONCAT31(local_38._1_3_,4);
          local_34 = 0;
LAB_017808dc:
          puVar2 = &DAT_01d2e7c8;
          goto LAB_017808ec;
        }
        local_34 = local_2c;
        local_38 = local_30;
        uVar8 = local_2c;
        if ((local_30 & 0xff) == 4) goto LAB_01780884;
LAB_017806f0:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(local_30 & 0xff) {
        case 0:
          if (local_2c != 4) goto LAB_017808e8;
          goto LAB_017807e8;
        case 1:
          local_38._1_1_ = (char)(local_30 >> 8);
          break;
        default:
          local_38._1_1_ = *(char *)(local_2c + 8);
        }
        if (local_38._1_1_ != '#') {
LAB_017808e8:
          puVar2 = &local_38;
LAB_017808ec:
          uVar4 = puVar2[1];
          *param_1 = *puVar2;
          param_1[1] = uVar4;
          return;
        }
LAB_017807e8:
        local_38 = local_30;
        local_34 = local_2c;
        FUN_0069263c();
      }
    } while (param_4 != 0);
  }
  *(undefined1 *)param_1 = 4;
  return;
}

