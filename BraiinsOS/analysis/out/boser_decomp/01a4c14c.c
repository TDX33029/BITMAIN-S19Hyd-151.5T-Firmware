// FUN_01a4c14c @ 01a4c14c size=788 calls_out=12 calls_in=2
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01a4c14c(undefined4 *param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int local_e8;
  int local_e4;
  int local_e0;
  int local_d8;
  int iStack_d4;
  int iStack_d0;
  int local_c8;
  int local_c4;
  int local_c0;
  int *local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  int *local_70;
  undefined1 *local_6c;
  int **local_68;
  undefined1 *local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  iVar9 = param_2 + param_3 * 0xc0;
  param_3 = param_3 * 0xc0;
  iVar8 = param_2;
  do {
    iVar8 = iVar8 + 0xc0;
    if (param_3 == 0) {
      local_e0 = 0;
      local_e4 = 4;
      local_e8 = 0;
LAB_01a4c3e8:
      *param_1 = 2;
LAB_01a4c438:
      FUN_01a4c510(&local_e8);
      return;
    }
    FUN_01a4a024(&local_70,param_4,param_5,param_2 + 0x70);
    piVar3 = local_70;
    if (local_70 != (int *)&DAT_80000000) {
      FUN_01bed4e2((uint)&local_b8 | 4,&local_6c,0x44);
      local_b8 = piVar3;
      iVar4 = thunk_FUN_01be5118(0x120);
      if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(4,0x120);
      }
      FUN_01bed4e2(iVar4,&local_b8,0x48);
      iVar7 = 1;
      local_c8 = 4;
      local_c0 = 1;
      local_c4 = iVar4;
      while( true ) {
        iVar2 = local_c0;
        iVar1 = local_c4;
        if (iVar8 == iVar9) break;
        FUN_01a4a024(&local_70,param_4,param_5,iVar8 + 0x70);
        piVar3 = local_70;
        if (local_70 == (int *)&DAT_80000000) {
          iVar8 = iVar8 + 0xc0;
        }
        else {
          FUN_01bed4e2((uint)&local_b8 | 4,&local_6c,0x44);
          local_b8 = piVar3;
          if (iVar7 == local_c8) {
            FUN_006520b4(&local_c8,iVar7,1,4,0x48);
            iVar4 = local_c4;
          }
          iVar8 = iVar8 + 0xc0;
          FUN_01bed4e2(iVar4 + iVar7 * 0x48,&local_b8,0x48);
          iVar7 = iVar7 + 1;
          local_c0 = iVar7;
        }
      }
      local_e8 = local_c8;
      local_e4 = local_c4;
      local_e0 = local_c0;
      if (local_c0 != 0) {
        iVar8 = local_c0 * 8;
        iVar9 = FUN_01298504(iVar8,4);
        if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00664620(4,iVar8);
        }
        iVar4 = 0;
        do {
          iVar7 = iVar1 + iVar4 * 9;
          uVar6 = *(undefined4 *)(iVar7 + 8);
          puVar5 = (undefined4 *)(iVar9 + iVar4);
          *puVar5 = *(undefined4 *)(iVar7 + 4);
          iVar4 = iVar4 + 8;
          puVar5[1] = uVar6;
        } while (iVar8 != iVar4);
        FUN_01a5d8fc(&local_c8,iVar9,iVar2,&DAT_00533bc1,2);
        FUN_01a5d8fc(&local_b8,param_4,param_5,&DAT_00533bc1,2);
        local_64 = &LAB_00632348;
        local_6c = &LAB_00632348;
        local_70 = &local_c8;
        local_68 = &local_b8;
        FUN_00664898(&local_d8,&DAT_005b9080,&local_70);
        FUN_0134bd64(local_b8,local_b4);
        FUN_0134bd64(local_c8,local_c4);
        FUN_0134aee0(iVar2,iVar9,4,8);
        local_c8 = local_d8;
        local_c4 = iStack_d4;
        local_c0 = iStack_d0;
        local_b8 = (int *)0x0;
        if ((*(uint *)(iVar1 + 0xc) != 0x80000003) && (0x80000001 < *(uint *)(iVar1 + 0xc))) {
          local_b4 = *(undefined4 *)(iVar1 + 0x10);
          local_b0 = *(undefined4 *)(iVar1 + 0x14);
          local_b8 = (int *)&DAT_00000001;
        }
        FUN_01a4c080(&local_70,&local_c8,&local_b8);
        *param_1 = local_70;
        param_1[1] = local_6c;
        param_1[2] = local_68;
        param_1[3] = local_64;
        param_1[4] = uStack_60;
        param_1[5] = uStack_5c;
        param_1[6] = local_58;
        param_1[7] = uStack_54;
        param_1[8] = uStack_50;
        param_1[9] = uStack_4c;
        param_1[10] = uStack_48;
        param_1[0xb] = uStack_44;
        goto LAB_01a4c438;
      }
      goto LAB_01a4c3e8;
    }
    param_2 = param_2 + 0xc0;
    param_3 = param_3 + -0xc0;
  } while( true );
}

