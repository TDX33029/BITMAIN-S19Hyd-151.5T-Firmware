// FUN_01a3bee8 @ 01a3bee8 size=760 calls_out=12 calls_in=9
// strings: 

void FUN_01a3bee8(undefined4 *param_1,int *param_2,int param_3)

{
  undefined4 **ppuVar1;
  undefined4 **ppuVar2;
  undefined4 **ppuVar3;
  undefined4 **extraout_r1;
  uint uVar4;
  undefined4 uVar5;
  undefined4 **ppuVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined4 **ppuVar11;
  uint local_60;
  uint local_5c;
  int local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  uint **local_48;
  undefined1 *local_44;
  uint **local_40;
  undefined1 *local_3c;
  undefined4 **local_38;
  uint local_34;
  undefined4 **local_30;
  undefined4 **local_2c;
  undefined4 local_28;
  
  if (param_2[7] == 1) {
    local_5c = param_2[8];
LAB_01a3bf68:
    if ((local_5c <= *(uint *)(param_3 + 4)) &&
       (FUN_01283fd8(&local_58,param_3,local_5c), local_58 != 0)) {
      uVar5 = 0;
      uVar4 = param_2[3] + param_2[4];
      uVar8 = *(uint *)(param_3 + 4);
      iVar10 = *(int *)(param_3 + 8);
      param_2[7] = 0;
      uVar9 = param_2[1];
      if ((uint)param_2[1] <= uVar4) {
        uVar9 = uVar4;
      }
      if (*param_2 == 0) {
        uVar9 = uVar4;
      }
      uVar4 = uVar9 - uVar8;
      if (uVar9 < uVar8) {
        uVar4 = 0;
      }
      if (iVar10 - uVar8 < uVar4) {
        FUN_01283c9c(param_3);
      }
      param_1[1] = local_58;
      param_1[2] = uStack_54;
      param_1[3] = uStack_50;
      param_1[4] = uStack_4c;
      goto LAB_01a3c100;
    }
  }
  else {
    uVar4 = param_2[3];
    ppuVar3 = (undefined4 **)param_2[4];
    puVar7 = &local_60;
    iVar10 = *param_2;
    ppuVar11 = (undefined4 **)param_2[1];
    uVar9 = 0;
    ppuVar6 = (undefined4 **)(uVar4 + (int)ppuVar3);
    ppuVar1 = *(undefined4 ***)(param_3 + 4);
    ppuVar2 = ppuVar6;
    if (ppuVar6 < ppuVar11) {
      ppuVar2 = ppuVar11;
    }
    if (iVar10 == 0) {
      ppuVar2 = ppuVar6;
    }
    if (ppuVar2 <= ppuVar1) {
      local_40 = (uint **)param_3;
      if (ppuVar1 < ppuVar3) {
        local_30 = ppuVar3;
        local_2c = ppuVar1;
                    /* WARNING: Subroutine does not return */
        FUN_01284540(&local_30);
      }
      local_44 = (undefined1 *)0x0;
      local_48 = ppuVar3;
      if ((char)param_2[6] == '\0') {
        local_34 = 0;
        local_38 = (undefined4 **)0x0;
        if (8 < uVar4) goto LAB_01a3c178;
        FUN_01a3c1f0(&local_30,&local_48,&local_38);
        if (local_30 != (undefined4 **)0x0) goto LAB_01a3c1c0;
        ppuVar2 = local_38;
        uVar9 = local_34;
      }
      else {
        if (8 < uVar4) {
LAB_01a3c178:
          FUN_01284588(8,uVar4);
          local_30 = extraout_r1;
          goto LAB_01a3c184;
        }
        local_34 = 0;
        local_38 = (undefined4 **)0x0;
        FUN_01a3c1f0(&local_30,&local_48,(int)&local_30 - uVar4);
        if (local_30 != (undefined4 **)0x0) {
LAB_01a3c1c0:
          uVar5 = FUN_01a3c2cc(local_2c,local_28);
          FUN_012840cc(&local_58);
                    /* WARNING: Subroutine does not return */
          FUN_01be040c(uVar5);
        }
        ppuVar2 = (undefined4 **)
                  (local_34 << 0x18 | (local_34 >> 8 & 0xff) << 0x10 |
                   (local_34 >> 0x10 & 0xff) << 8 | local_34 >> 0x18);
        uVar9 = (int)local_38 << 0x18 | ((uint)local_38 >> 8 & 0xff) << 0x10 |
                ((uint)local_38 >> 0x10 & 0xff) << 8 | (uint)local_38 >> 0x18;
      }
      ppuVar1 = (undefined4 **)(param_2[2] - (int)ppuVar2);
      if ((uint)(ppuVar2 <= (undefined4 **)param_2[2]) <= -uVar9) {
        FUN_01a3b320(puVar7,0x15);
LAB_01a3c0f4:
        uVar5 = 1;
        param_1[1] = local_60;
        param_1[2] = local_5c;
        goto LAB_01a3c100;
      }
      uVar9 = param_2[5];
      if ((int)uVar9 < 0) {
        ppuVar1 = (undefined4 **)-uVar9;
        if (ppuVar2 < ppuVar1) goto LAB_01a3c0dc;
      }
      else if (CARRY4(uVar9,(uint)ppuVar2)) {
LAB_01a3c0dc:
        FUN_019a18a8(puVar7,0x14,&DAT_0052ce76,0x2f);
        goto LAB_01a3c0f4;
      }
      uVar9 = uVar9 + (int)ppuVar2;
      local_30 = *(undefined4 ***)(param_3 + 4);
      local_38 = ppuVar6;
      if (iVar10 != 0) {
        local_38 = ppuVar11;
      }
      if (local_30 < local_38) {
LAB_01a3c184:
        local_40 = (uint **)&local_30;
        local_48 = (uint **)&local_38;
        local_3c = &LAB_01a6a304;
        local_44 = &LAB_01a6a304;
                    /* WARNING: Subroutine does not return */
        FUN_012fb100(&DAT_005ac267,&local_48,&DAT_01d2bbe0);
      }
      FUN_01283ef4(param_3,local_38,ppuVar1);
      uVar4 = *(uint *)(param_3 + 4);
      uVar8 = uVar9 - uVar4;
      if (uVar9 < uVar4) {
        uVar8 = 0;
      }
      if (*(int *)(param_3 + 8) - uVar4 < uVar8) {
        FUN_01283c9c(param_3);
      }
      puVar7 = &local_5c;
      local_60 = 1;
    }
    *puVar7 = uVar9;
    if (local_60 == 1) {
      param_2[7] = 1;
      param_2[8] = local_5c;
      goto LAB_01a3bf68;
    }
  }
  uVar5 = 0;
  param_1[1] = 0;
LAB_01a3c100:
  *param_1 = uVar5;
  return;
}

