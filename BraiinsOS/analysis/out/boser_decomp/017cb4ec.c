// FUN_017cb4ec @ 017cb4ec size=1192 calls_out=13 calls_in=4
// strings: bytes remaining on stream | filled must not become larger than initialized

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_017cb4ec(undefined4 *param_1,int *param_2,undefined4 param_3)

{
  byte bVar1;
  undefined4 uVar2;
  uint *puVar3;
  undefined1 uVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  bool bVar11;
  uint *unaff_r10;
  int iVar12;
  uint *local_88;
  uint *local_84;
  uint *local_80;
  uint *puStack_7c;
  undefined1 local_70 [12];
  int local_64;
  int local_60;
  int local_5c;
  uint local_58;
  uint local_54;
  undefined4 *local_50;
  uint *local_4c;
  uint local_48;
  uint local_44;
  uint *local_38;
  uint *local_34;
  uint *local_30;
  uint *local_2c;
  uint uStack_28;
  
  piVar5 = param_2 + 1;
  if (*param_2 == 0) {
    FUN_017ea748(param_1,piVar5,param_3);
    return;
  }
  if (*param_2 == 1) {
    iVar12 = *piVar5;
    if (*(char *)(iVar12 + 0xb2) == '\0') {
      iVar9 = iVar12 + 0xa0;
      bVar1 = *(byte *)(iVar12 + 0xb1);
      do {
        if ((bVar1 & 1) != 0) {
          if (*(char *)(iVar12 + 0xb0) != '\0') {
            if (*(int *)(iVar12 + 0xa4) != 0) {
              FUN_01283fd8(&local_34,iVar9);
              if (local_34 != (uint *)0x0) {
                uVar7 = uStack_28;
                goto LAB_017cb820;
              }
              if (*(int *)(iVar12 + 0xa4) != 0) {
                FUN_019a18a8(&local_4c,0x28,"bytes remaining on stream",0x19);
                *(undefined1 *)(iVar12 + 0xb2) = 1;
                goto LAB_017cb8e4;
              }
            }
            *(undefined1 *)(iVar12 + 0xb1) = 0;
            goto LAB_017cb534;
          }
          if (*(int *)(iVar12 + 0xa4) == 0) {
            local_34 = (uint *)0x0;
          }
          else {
            FUN_01283fd8(&local_34,iVar9);
          }
          if (local_34 != (uint *)0x0) {
            uVar7 = uStack_28;
LAB_017cb820:
            if ((uVar7 & 1) == 0) {
              local_50 = &DAT_01d2e520;
              local_44 = uVar7;
            }
            else {
              local_60 = (int)local_34 - (uVar7 >> 5);
              local_5c = (int)local_30 + (uVar7 >> 5);
              local_64 = (int)local_2c + (uVar7 >> 5);
              local_80 = local_30;
              puStack_7c = local_2c;
              FUN_01283524(&local_50,&local_64);
              local_58 = uVar7 >> 5;
              if (local_48 < uVar7 >> 5) {
                local_30 = &local_54;
                local_54 = local_48;
                local_2c = (uint *)&LAB_01a6a304;
                local_34 = (uint *)&LAB_01a6a304;
                local_38 = &local_58;
                    /* WARNING: Subroutine does not return */
                FUN_012fb100(&DAT_005ac267,&local_38,&DAT_01d2e534);
              }
              local_30 = (uint *)(local_48 - local_58);
              local_34 = (uint *)((int)local_4c + local_58);
            }
            param_1[1] = local_50;
            *param_1 = 1;
            param_1[2] = local_34;
            param_1[3] = local_30;
            param_1[4] = local_44;
            return;
          }
          *(undefined1 *)(iVar12 + 0xb1) = 0;
        }
        iVar8 = *(int *)(iVar12 + 0xa4);
        if (*(int *)(iVar12 + 0xa8) == iVar8) {
          FUN_01283c9c(iVar9,1);
          iVar8 = *(int *)(iVar12 + 0xa4);
        }
        bVar11 = false;
        puVar10 = (uint *)0x0;
        if (iVar8 == 0x7fffffff) {
LAB_017cb71c:
          unaff_r10 = puVar10;
        }
        else {
          iVar6 = *(int *)(iVar12 + 0xa8);
          if (iVar6 == iVar8) {
            FUN_01283c9c(iVar9,0x40);
            iVar8 = *(int *)(iVar12 + 0xa4);
            iVar6 = *(int *)(iVar12 + 0xa8);
          }
          puVar10 = (uint *)(iVar6 - iVar8);
          if (puVar10 == (uint *)0x0) {
            puVar10 = (uint *)0x0;
LAB_017cb714:
            *(int *)(iVar12 + 0xa4) = iVar8 + (int)puVar10;
            goto LAB_017cb71c;
          }
          local_2c = (uint *)0x0;
          local_38 = (uint *)(*(int *)(iVar12 + 0xa0) + iVar8);
          local_30 = (uint *)0x0;
          local_34 = puVar10;
          FUN_006a060c(&local_50,iVar12 + 0x90,iVar12 + 0x38,&DAT_01d1c578,iVar12,FUN_017f0d48,
                       FUN_017f0e90,param_3,&local_38);
          if (local_2c < local_30) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb100("filled must not become larger than initialized",0x5d,&DAT_01d1cf14);
          }
          uVar7 = (uint)local_50 & 0xff;
          if (uVar7 == 4) {
LAB_017cb6fc:
            if (puVar10 < local_30) {
                    /* WARNING: Subroutine does not return */
              FUN_012faff4(0,local_30,puVar10,&DAT_01d2e4e0);
            }
            puVar3 = (uint *)(*(int *)(iVar12 + 0xa8) - iVar8);
            puVar10 = local_30;
            if (puVar3 < local_30) {
              local_38 = local_30;
              local_34 = puVar3;
                    /* WARNING: Subroutine does not return */
              FUN_01284540(&local_38);
            }
            goto LAB_017cb714;
          }
          if (uVar7 != 5) {
            if (uVar7 == 4) {
              if (((uint)local_50 & 0x100) == 0) goto LAB_017cb6fc;
            }
            else {
              *(undefined1 *)(iVar12 + 0xb2) = 1;
              puVar10 = local_4c;
              if (uVar7 == 4) goto LAB_017cb71c;
              if (uVar7 != 5) {
LAB_017cb8e4:
                uVar2 = FUN_017f0b24(local_70);
                *param_1 = 1;
                param_1[1] = 0;
                param_1[2] = uVar2;
                return;
              }
            }
          }
          bVar11 = true;
        }
        if (bVar11) {
          uVar2 = 2;
          goto LAB_017cb538;
        }
        uVar4 = 0;
        if ((unaff_r10 == (uint *)0x0) && (uVar4 = 1, *(char *)(iVar12 + 0xb0) != '\0'))
        goto LAB_017cb534;
        bVar1 = 1;
        *(undefined1 *)(iVar12 + 0xb1) = 1;
        *(undefined1 *)(iVar12 + 0xb0) = uVar4;
      } while (*(char *)(iVar12 + 0xb2) == '\0');
    }
    *(undefined2 *)(iVar12 + 0xb1) = 0;
LAB_017cb534:
    uVar2 = 0;
LAB_017cb538:
    *param_1 = uVar2;
  }
  else {
    FUN_017da578(&local_38,*piVar5,param_3);
    if (local_38 == (uint *)0x3) {
      local_88 = local_34;
      local_84 = local_30;
      uVar2 = FUN_017f0b24(&local_88);
      *param_1 = 1;
      param_1[1] = 0;
      param_1[2] = uVar2;
    }
    else if (local_38 == (uint *)0x4) {
      *param_1 = 2;
    }
    else {
      FUN_017cba24(param_2);
      *param_2 = (int)local_38;
      param_2[1] = (int)local_34;
      param_2[2] = (int)local_30;
      param_2[3] = (int)local_2c;
      param_2[4] = uStack_28;
      FUN_017cb4ec(param_1,param_2,param_3);
    }
  }
  return;
}

