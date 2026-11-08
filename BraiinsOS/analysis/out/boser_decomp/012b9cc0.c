// FUN_012b9cc0 @ 012b9cc0 size=672 calls_out=10 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_012b9cc0(uint *param_1,undefined4 param_2,undefined4 param_3,int *param_4,int *param_5)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 extraout_s1;
  double dVar11;
  int local_8c;
  undefined4 local_7c;
  int local_78;
  uint local_74;
  undefined8 local_70;
  int local_68;
  int local_64;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  
  local_74 = 0;
  local_7c = 0;
  local_78 = 8;
  uVar3 = local_74;
  do {
    do {
      do {
        piVar1 = param_4;
        local_74 = uVar3;
        if (piVar1 == param_5) {
          uVar5 = 0;
          local_4c = local_78 + uVar3 * 0x18;
          local_58 = local_78;
          local_54 = local_78;
          local_50 = local_7c;
          if (uVar3 == 0) {
            uVar4 = 4;
            local_48 = 0;
          }
          else {
            uVar4 = FUN_01298504(uVar3 * 0xc,4);
            local_48 = uVar3;
            if (uVar4 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00664620(4,uVar3 * 0xc);
            }
          }
          iVar2 = local_4c;
          local_40 = 0;
          local_70 = (double)CONCAT44(local_54,local_58);
          local_68 = local_50;
          local_64 = local_4c;
          local_44 = uVar4;
          if (local_54 != local_4c) {
            uVar5 = 0;
            iVar6 = local_54;
            do {
              FUN_01bed864(uVar4,iVar6 + 8,0xc);
              iVar6 = iVar6 + 0x18;
              uVar4 = uVar4 + 0xc;
              uVar5 = uVar5 + 1;
            } while (iVar6 != iVar2);
            local_70 = (double)CONCAT44(iVar6,(undefined4)local_70);
          }
          local_40 = uVar5;
          FUN_012ba324(&local_70);
          *param_1 = local_48;
          param_1[1] = local_44;
          param_1[2] = local_40;
          return;
        }
        param_4 = piVar1 + 4;
      } while (*piVar1 != 1);
      FUN_006643f0(&local_70,piVar1[1],piVar1[2]);
      FUN_0160ec7c(&local_58,&local_70);
      iVar8 = local_50;
      iVar6 = local_54;
      iVar2 = local_58;
      uVar3 = local_74;
    } while (local_58 == -0x80000000);
    uVar10 = FUN_019bb830(param_2,param_3,local_54,local_50);
    dVar11 = (double)CONCAT44(extraout_s1,uVar10);
    if (0.7 < dVar11) {
      iVar7 = 0;
      if (iVar8 < 0) {
LAB_012b9f58:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(iVar7,local_8c);
      }
      iVar9 = 0;
      if (iVar8 == 0) {
        local_8c = 1;
      }
      else {
        iVar7 = 1;
        local_8c = FUN_01298504(iVar8,1);
        if (local_8c == 0) {
          local_8c = iVar8;
          goto LAB_012b9f58;
        }
        iVar7 = iVar8;
      }
      FUN_01bed4e2(local_8c,iVar6,iVar8);
      if (local_74 == 0) {
        iVar9 = 0;
      }
      else {
        if (local_74 != 1) {
          iVar9 = 0;
          uVar3 = local_74;
          do {
            iVar8 = iVar9 + (uVar3 >> 1);
            uVar3 = uVar3 - (uVar3 >> 1);
            if (*(double *)(local_78 + iVar8 * 0x18) <= dVar11) {
              iVar9 = iVar8;
            }
          } while (1 < uVar3);
        }
        if (*(double *)(local_78 + iVar9 * 0x18) <= dVar11) {
          iVar9 = iVar9 + 1;
        }
      }
      local_70 = dVar11;
      local_68 = iVar7;
      local_64 = local_8c;
      FUN_01298e08(&local_7c,iVar9,&local_70);
    }
    FUN_0134bd64(iVar2,iVar6);
    uVar3 = local_74;
  } while( true );
}

