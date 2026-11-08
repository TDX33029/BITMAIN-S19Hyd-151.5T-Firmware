// FUN_00e604c4 @ 00e604c4 size=1148 calls_out=9 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00e604c4(uint *param_1,undefined4 **param_2,uint **param_3)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  undefined4 ***pppuVar4;
  code *pcVar5;
  uint **ppuVar6;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  undefined4 uVar7;
  uint *puVar8;
  undefined4 ***pppuVar9;
  uint **ppuVar10;
  uint uVar11;
  uint **ppuVar12;
  undefined4 *puVar13;
  undefined4 ***pppuVar14;
  code *pcVar15;
  uint uVar16;
  bool bVar17;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 ***local_60;
  code *local_5c;
  uint local_58;
  undefined4 ***local_50;
  code *local_4c;
  uint local_48;
  uint ***local_40;
  code *local_3c;
  undefined4 ***local_38;
  undefined1 *local_34;
  uint **local_30;
  uint local_2c;
  uint local_28;
  
  local_30 = param_2;
  if (param_3 == (uint **)0x1) {
    local_3c = FUN_00feaea0;
    local_40 = &local_30;
    FUN_00664898(param_1,&DAT_00590e5f,&local_40);
  }
  else if (param_3 == (uint **)0x2) {
    local_40 = &local_30;
    local_3c = FUN_00feaea0;
    FUN_00664898(&local_50,&DAT_00590e5f,&local_40);
    local_60 = (undefined4 ***)((int)param_2 + 1);
    local_40 = (uint ***)&local_60;
    local_3c = FUN_00feaea0;
    FUN_00664898(&local_30,&DAT_00590e5f,&local_40);
    local_40 = (uint ***)&local_50;
    local_34 = &LAB_00632348;
    local_3c = (code *)&LAB_00632348;
    local_38 = &local_30;
    FUN_00664898(&local_60,&DAT_0057d4a2,&local_40);
    FUN_019bb7e0(local_30,local_2c);
    FUN_019bb7e0(local_50,local_4c);
    *param_1 = (uint)local_60;
    param_1[1] = (uint)local_5c;
    param_1[2] = local_58;
  }
  else {
    ppuVar12 = (uint **)((int)param_3 - 1);
    local_30 = (uint **)((int)param_2 + (int)ppuVar12);
    local_40 = &local_30;
    local_3c = FUN_00feaea0;
    FUN_00664898(&local_6c,&DAT_00590e5f,&local_40);
    ppuVar10 = param_3;
    if (ppuVar12 < param_3) {
      ppuVar10 = ppuVar12;
    }
    uVar7 = 0;
    iVar2 = (int)ppuVar10 * 0xc;
    if ((uint **)0xaaaaaaa < ppuVar10) {
LAB_00e60638:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar7,iVar2);
    }
    if (iVar2 == 0) {
      local_2c = 4;
      ppuVar6 = (uint **)0x0;
    }
    else {
      uVar7 = 4;
      local_2c = FUN_01298504(iVar2,4);
      ppuVar6 = ppuVar10;
      if (local_2c == 0) goto LAB_00e60638;
    }
    local_28 = 0;
    if (ppuVar12 < param_3) {
      param_3 = ppuVar12;
    }
    local_30 = ppuVar6;
    if (ppuVar6 < param_3) {
      FUN_006520b4(&local_30,0,param_3,4,0xc);
    }
    puVar8 = (uint *)(local_2c + local_28 * 0xc);
    uVar16 = local_28;
    do {
      local_4c = FUN_00feaea0;
      local_50 = &local_60;
      local_60 = (undefined4 ***)param_2;
      FUN_00664898(&local_40,&DAT_00590e5f,&local_50);
      uVar1 = local_2c;
      param_2 = (undefined4 **)((int)param_2 + 1);
      uVar16 = uVar16 + 1;
      ppuVar10 = (uint **)((int)ppuVar10 - 1);
      *puVar8 = (uint)local_40;
      puVar8[1] = (uint)local_3c;
      puVar8[2] = (uint)local_38;
      puVar8 = puVar8 + 3;
    } while (ppuVar10 != (uint **)0x0);
    local_50 = (undefined4 ***)local_30;
    local_4c = (code *)local_2c;
    local_48 = uVar16;
    local_28 = uVar16;
    if (uVar16 == 0) {
      local_58 = 0;
      local_5c = (code *)0x1;
      local_60 = (undefined4 ***)0x0;
    }
    else {
      iVar2 = uVar16 * 0xc;
      uVar11 = iVar2 - 0xc;
      pppuVar14 = (undefined4 ***)((uVar11 >> 2) * 0x55555556);
      uVar16 = local_2c;
      while (iVar2 != 0) {
        puVar8 = (uint *)(uVar16 + 8);
        iVar2 = iVar2 + -0xc;
        uVar16 = uVar16 + 0xc;
        bVar17 = CARRY4(*puVar8,(uint)pppuVar14);
        pppuVar14 = (undefined4 ***)(*puVar8 + (int)pppuVar14);
        if (bVar17) {
                    /* WARNING: Subroutine does not return */
          FUN_0130739c(&DAT_005324b9,0x35,&DAT_01d2f704);
        }
      }
      uVar7 = 0;
      if ((int)pppuVar14 < 0) {
LAB_00e6077c:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(uVar7,pppuVar14);
      }
      if (pppuVar14 == (undefined4 ***)0x0) {
        pcVar3 = (code *)0x1;
        pppuVar4 = (undefined4 ***)0x0;
      }
      else {
        uVar7 = 1;
        pcVar3 = (code *)FUN_01298504(pppuVar14,1);
        pppuVar4 = pppuVar14;
        if (pcVar3 == (code *)0x0) goto LAB_00e6077c;
      }
      pppuVar9 = *(undefined4 ****)(uVar1 + 8);
      pcVar15 = *(code **)(uVar1 + 4);
      local_38 = (undefined4 ***)0x0;
      local_40 = pppuVar4;
      local_3c = pcVar3;
      if (pppuVar4 < pppuVar9) {
        FUN_006520b4(&local_40,0,pppuVar9,1,1);
      }
      pppuVar4 = local_38;
      pcVar3 = local_3c;
      FUN_01bed4e2(local_3c + (int)local_38,pcVar15,pppuVar9);
      puVar13 = (undefined4 *)(uVar1 + 0x10);
      local_58 = (int)pppuVar14 - ((int)pppuVar4 + (int)pppuVar9);
      pcVar5 = pcVar3 + (int)pppuVar4 + (int)pppuVar9;
      uVar7 = extraout_r2;
      for (; uVar11 != 0; uVar11 = uVar11 - 0xc) {
        if (1 < local_58) {
          pcVar15 = (code *)(local_58 - 2);
          uVar7 = *puVar13;
          pcVar3 = (code *)puVar13[1];
          *(undefined2 *)pcVar5 = 0x202c;
        }
        if (1 >= local_58 || pcVar15 < pcVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb100(&DAT_0053349c,0x13,&DAT_01d2f6f4);
        }
        FUN_01bed4e2(pcVar5 + 2,uVar7,pcVar3);
        local_58 = (int)pcVar15 - (int)pcVar3;
        pcVar5 = pcVar5 + 2 + (int)pcVar3;
        puVar13 = puVar13 + 3;
        uVar7 = extraout_r2_00;
      }
      local_58 = (int)pppuVar14 - local_58;
      local_60 = local_40;
      local_5c = local_3c;
      local_38 = (undefined4 ***)local_58;
    }
    FUN_006a41c0(&local_50);
    local_38 = (undefined4 ***)&local_6c;
    local_34 = &LAB_00632348;
    local_3c = (code *)&LAB_00632348;
    local_40 = (uint ***)&local_60;
    FUN_00664898(&local_30,&DAT_00588fa3,&local_40);
    *param_1 = (uint)local_30;
    param_1[1] = local_2c;
    param_1[2] = local_28;
    FUN_019bb7e0(local_60,local_5c);
    FUN_019bb7e0(local_6c,local_68);
  }
  return;
}

