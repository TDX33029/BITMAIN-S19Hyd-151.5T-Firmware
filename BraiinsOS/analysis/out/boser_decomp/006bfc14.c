// FUN_006bfc14 @ 006bfc14 size=1412 calls_out=17 calls_in=1
// strings:  Did you mean

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_006bfc14(undefined4 *param_1,int *param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int extraout_r2;
  undefined4 *puVar5;
  int ***pppiVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 ***pppuVar9;
  int iVar10;
  int *piVar11;
  undefined4 ***pppuVar12;
  undefined4 uVar13;
  int *piVar14;
  int *local_90;
  int local_8c;
  undefined4 ***local_84;
  uint local_74;
  int *local_70;
  uint local_6c;
  int *piStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 ***local_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  int *local_44;
  undefined4 ***local_40;
  undefined4 ***local_3c;
  int ***local_38;
  undefined4 ***local_34;
  undefined4 ***local_30;
  undefined4 uStack_2c;
  undefined1 uStack_25;
  
  piVar11 = (int *)0x0;
  if (*param_2 != 0) {
    piVar11 = param_2;
  }
  local_6c = 0;
  local_90 = (int *)0x4;
  local_70 = (int *)0x4;
  local_74 = 0;
  iVar1 = thunk_FUN_01bee35a(0,param_2,0x2c0);
  puVar5 = (undefined4 *)(iVar1 + extraout_r2);
  if (*(char *)(puVar5 + 4) == '\0') {
    FUN_019ae6ac(&local_38);
    *puVar5 = local_38;
    puVar5[1] = local_34;
    puVar5[2] = local_30;
    puVar5[3] = uStack_2c;
    *(undefined1 *)(puVar5 + 4) = 1;
  }
  pppuVar12 = (undefined4 ***)*puVar5;
  iStack_54 = puVar5[1];
  uStack_50 = puVar5[2];
  uStack_4c = puVar5[3];
  iVar10 = iStack_54 + (uint)((undefined4 ***)0xfffffffe < pppuVar12);
  *puVar5 = (undefined1 *)((int)pppuVar12 + 1);
  puVar5[1] = iVar10;
  piStack_68 = &DAT_0056d238;
  uStack_64 = 0;
  uStack_60 = 0;
  uStack_5c = 0;
  iVar1 = 0;
  local_8c = -0xc;
  uVar7 = 0;
  local_58 = pppuVar12;
  do {
    piVar14 = local_70;
    if (iVar1 == 0) goto LAB_006bfd18;
    for (; iVar1 == iVar10; iVar10 = *(int *)(iVar10 + 0x18) * 0x6c + iVar1) {
LAB_006bfd18:
      if (piVar11 == (int *)0x0) {
        if (uVar7 == 0) {
          pppiVar6 = (undefined4 ***)0x80000000;
        }
        else {
          local_40 = (undefined4 ***)&piStack_68;
          local_38 = (int ***)&local_40;
          if (uVar7 != 1) {
            if (uVar7 < 0x15) {
              piVar11 = local_70;
              do {
                piVar11 = piVar11 + 3;
                FUN_006c6010(piVar14,piVar11,&local_40);
                local_8c = local_8c + -0xc;
              } while (local_8c != 0);
            }
            else {
              FUN_006e3d40(local_70,uVar7,&local_38);
            }
          }
          iVar1 = 0;
          piVar11 = piVar14 + 2;
          do {
            uVar7 = uVar7 - 1;
            iVar10 = iVar1 + *piVar11;
            iVar1 = iVar10 + 5;
            piVar11 = piVar11 + 3;
          } while (uVar7 != 0);
          pppuVar12 = (undefined4 ***)(iVar10 + 0x12);
          uVar8 = 0;
          if ((int)pppuVar12 < 0) {
LAB_006bfe80:
                    /* WARNING: Subroutine does not return */
            FUN_00664620(uVar8,pppuVar12);
          }
          if (pppuVar12 == (undefined4 ***)0x0) {
            local_38 = (undefined4 ***)0x0;
            local_34 = (undefined4 ***)0x1;
LAB_006bfef8:
            local_30 = (undefined4 ***)0x0;
            FUN_0132b898(&local_38,0,0xd,1,1);
          }
          else {
            uVar8 = 1;
            pppuVar9 = (undefined4 ***)FUN_01298504(pppuVar12,1);
            if (pppuVar9 == (undefined4 ***)0x0) goto LAB_006bfe80;
            local_30 = (undefined4 ***)0x0;
            local_38 = pppuVar12;
            local_34 = pppuVar9;
            if (pppuVar12 < (undefined4 ***)0xd) goto LAB_006bfef8;
          }
          pppuVar9 = local_30;
          pppuVar12 = local_34;
          pppiVar6 = local_38;
          FUN_01bed4e2((undefined1 *)((int)local_34 + (int)local_30)," Did you mean",0xd);
          local_30 = (undefined4 ***)((int)pppuVar9 + 0xd);
          if (pppiVar6 == local_30) {
            FUN_0132b898(&local_38,pppiVar6,1,1,1);
            pppuVar12 = local_34;
          }
          *(undefined1 *)((int)pppuVar12 + (int)local_30) = 0x20;
          local_30 = (undefined4 ***)((int)pppuVar9 + 0xe);
          if (local_6c != 0) {
            iVar1 = local_6c * 0xc;
            iVar10 = 0;
            piVar11 = local_70;
            do {
              local_44 = piVar11;
              if (iVar10 != 0) {
                if ((uint)((int)local_38 - (int)local_30) < 2) {
                  FUN_0132b898(&local_38,local_30,2,1,1);
                }
                *(undefined2 *)((int)local_34 + (int)local_30) = 0x202c;
                local_30 = (undefined4 ***)((int)local_30 + 2);
              }
              local_3c = (undefined4 ***)&LAB_0193a90c;
              local_40 = (undefined4 ***)&local_44;
              iVar4 = FUN_012fa178(&local_38,&DAT_01d05f88,&DAT_00599e95,&local_40);
              if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
                FUN_013073dc(&DAT_00533467,0x2b,&uStack_25,&DAT_01c05fb4,&DAT_01c05f4c);
              }
              piVar11 = piVar11 + 3;
              iVar10 = iVar10 + -1;
              iVar1 = iVar1 + -0xc;
            } while (iVar1 != 0);
          }
          pppuVar12 = local_30;
          if (local_38 == local_30) {
            FUN_0132b898(&local_38,local_30,1,1,1);
          }
          *(undefined1 *)((int)local_34 + (int)local_30) = 0x3f;
          local_3c = (undefined4 ***)((int)pppuVar12 + 1);
          local_30 = local_3c;
          local_40 = local_34;
          pppiVar6 = local_38;
        }
        FUN_006b40cc(&piStack_68);
        FUN_006a41c0(&local_74);
        if (pppiVar6 == (undefined4 ***)0x80000000) {
          pppiVar6 = (undefined4 ***)0x0;
          param_1[1] = 1;
          param_1[2] = 0;
        }
        else {
          param_1[1] = local_40;
          param_1[2] = local_3c;
        }
        *param_1 = pppiVar6;
        return;
      }
      iVar10 = *piVar11;
      piVar11 = (int *)0x0;
      iVar1 = *(int *)(iVar10 + 0x14);
    }
    pppuVar9 = *(undefined4 ****)(iVar1 + 8);
    uVar8 = 0;
    if ((int)pppuVar9 < 0) goto LAB_006c0180;
    uVar13 = *(undefined4 *)(iVar1 + 4);
    if (pppuVar9 == (undefined4 ***)0x0) {
      pppuVar12 = (undefined4 ***)0x1;
      local_84 = (undefined4 ***)0x0;
    }
    else {
      uVar8 = 1;
      pppuVar12 = (undefined4 ***)FUN_01298504(pppuVar9,1);
      if (pppuVar12 == (undefined4 ***)0x0) {
        pppuVar12 = pppuVar9;
LAB_006c0180:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(uVar8,pppuVar12);
      }
      local_84 = pppuVar9;
    }
    FUN_01bed4e2(pppuVar12,uVar13,pppuVar9);
    uVar2 = FUN_006cd114(param_3,param_4,pppuVar12,pppuVar9);
    iVar1 = iVar1 + 0x6c;
    uVar3 = param_4 >> 1;
    if (param_4 >> 1 < (uint)pppuVar9 >> 1) {
      uVar3 = (uint)pppuVar9 >> 1;
    }
    if (uVar3 < 2) {
      uVar3 = 1;
    }
    if (uVar2 < uVar3) {
      FUN_006666fc(&local_38,pppuVar12,pppuVar9);
      if (uVar7 == local_74) {
        FUN_019abd3c(&local_74);
        local_90 = local_70;
      }
      piVar14 = local_90 + uVar7 * 3;
      *piVar14 = (int)local_38;
      piVar14[1] = (int)local_34;
      piVar14[2] = (int)local_30;
      local_38 = local_84;
      local_6c = uVar7 + 1;
      local_34 = pppuVar12;
      local_30 = pppuVar9;
      FUN_006e5cd0(&piStack_68,&local_38,uVar2);
      local_8c = local_8c + 0xc;
      uVar7 = uVar7 + 1;
    }
    else {
      FUN_019bb7e0(local_84,pppuVar12);
    }
  } while( true );
}

