// FUN_01539b98 @ 01539b98 size=936 calls_out=12 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01539b98(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  bool bVar12;
  bool bVar13;
  int local_fc;
  undefined1 auStack_f8 [60];
  char local_bc;
  undefined1 auStack_b8 [64];
  uint local_78;
  int local_74;
  undefined4 local_70;
  int local_68;
  int local_64;
  int local_60;
  int iStack_5c;
  int iStack_58;
  int local_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int local_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  
  uVar1 = *(uint *)(param_2 + 8);
  iVar11 = *(int *)(param_2 + 4);
  uVar7 = 0xffffffff;
  iVar8 = uVar1 * 0x14;
  iVar6 = iVar11;
  iVar9 = iVar8;
  while (iVar9 != 0) {
    iVar2 = FUN_01577618(iVar6,param_3,param_6);
    uVar7 = uVar7 + 1;
    iVar9 = iVar9 + -0x14;
    iVar6 = iVar6 + 0x14;
    if (iVar2 != 0) {
      if (uVar1 <= uVar7) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar7,uVar1,&DAT_01cfb6c8);
      }
      do {
        if (iVar9 == 0) {
          FUN_015737d4(auStack_b8,iVar11 + uVar7 * 0x14,param_3,param_4,param_5,param_6);
          FUN_015661e4(param_1,auStack_b8);
          return;
        }
        iVar2 = FUN_01577618(iVar6,param_3,param_6);
        iVar6 = iVar6 + 0x14;
        iVar9 = iVar9 + -0x14;
      } while (iVar2 == 0);
      iVar6 = 0;
      local_60 = 0;
      local_fc = 4;
      local_64 = 4;
      local_68 = 0;
      do {
        if ((uVar7 == 0) || (iVar9 = FUN_01577618(iVar11,param_3,param_6), iVar9 != 0)) {
          FUN_015737d4(auStack_f8,iVar11,param_3,param_4,param_5,param_6);
          if (local_bc == '\0') {
            FUN_015012ac(auStack_f8);
          }
          else {
            if (iVar6 == local_68) {
              FUN_0155ab78(&local_68);
              local_fc = local_64;
            }
            FUN_01bed864(local_fc + iVar6 * 0x40,auStack_f8,0x40);
            iVar6 = iVar6 + 1;
            local_60 = iVar6;
          }
        }
        iVar11 = iVar11 + 0x14;
        uVar7 = uVar7 - 1;
        iVar8 = iVar8 + -0x14;
      } while (iVar8 != 0);
      puVar3 = (undefined4 *)thunk_FUN_01be5118(0x18);
      if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(4,0x18);
      }
      iVar8 = thunk_FUN_01be5118(0x21);
      if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,0x21);
      }
      FUN_01bed4e2(iVar8,&DAT_004a5bd0,0x21);
      puVar4 = (undefined4 *)thunk_FUN_01be5118(5);
      if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620();
      }
      *(undefined1 *)(puVar4 + 1) = 0x66;
      *puVar4 = 0x4f656e6f;
      *puVar3 = 5;
      puVar3[1] = puVar4;
      puVar3[2] = 5;
      puVar3[3] = 0x21;
      puVar3[4] = iVar8;
      puVar3[5] = 0x21;
      param_1[3] = local_68;
      param_1[4] = local_64;
      param_1[5] = local_60;
      param_1[6] = 0;
      *param_1 = 1;
      param_1[1] = puVar3;
      param_1[2] = 1;
      return;
    }
  }
  uVar10 = 0;
  bVar13 = 0x3fffffe < uVar1;
  bVar12 = uVar1 == 0x3ffffff;
  uVar7 = uVar1 * 0x40;
  if (uVar1 < 0x4000000) {
    bVar13 = 0x7ffffffb < uVar7;
    bVar12 = uVar7 == 0x7ffffffc;
  }
  if (!bVar13 || bVar12) {
    if (uVar7 == 0) {
      iVar8 = 4;
      local_78 = 0;
    }
    else {
      uVar10 = 4;
      iVar8 = FUN_01298504(uVar7,4);
      local_78 = uVar1;
      if (iVar8 == 0) goto LAB_01539dd4;
    }
    local_70 = 0;
    uVar7 = 0;
    local_74 = iVar8;
    if (uVar1 != 0) {
      uVar7 = 0;
      do {
        FUN_015737d4(&local_68,iVar11,param_3,param_4,param_5,param_6);
        piVar5 = (int *)(iVar8 + uVar7 * 0x40);
        iVar11 = iVar11 + 0x14;
        uVar7 = uVar7 + 1;
        *piVar5 = local_68;
        piVar5[1] = local_64;
        piVar5[2] = local_60;
        piVar5[3] = iStack_5c;
        piVar5[4] = iStack_58;
        piVar5[5] = local_54;
        piVar5[6] = iStack_50;
        piVar5[7] = iStack_4c;
        piVar5[8] = iStack_48;
        piVar5[9] = iStack_44;
        piVar5[10] = local_40;
        piVar5[0xb] = iStack_3c;
        piVar5[0xc] = iStack_38;
        piVar5[0xd] = iStack_34;
        piVar5[0xe] = iStack_30;
        piVar5[0xf] = iStack_2c;
      } while (uVar1 != uVar7);
      uVar7 = uVar1;
    }
    param_1[3] = local_78;
    param_1[4] = local_74;
    param_1[5] = uVar7;
    param_1[6] = 0;
    *param_1 = 0;
    param_1[1] = 4;
    param_1[2] = 0;
    return;
  }
LAB_01539dd4:
                    /* WARNING: Subroutine does not return */
  FUN_00664620(uVar10,uVar7);
}

