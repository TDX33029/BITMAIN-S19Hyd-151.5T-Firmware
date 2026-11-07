// FUN_00a89440 @ 00a89440 size=1148 calls_out=19 calls_in=0
// strings: Unable to allocate another spanevent open/boser/boser-unix/src/telemetry.rs:116

/* WARNING: Restarted to delay deadcode elimination for space: stack */

ulonglong FUN_00a89440(int param_1,uint **param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined1 uVar2;
  byte bVar3;
  uint ***pppuVar4;
  uint *puVar5;
  undefined4 uVar6;
  int iVar7;
  uint **extraout_r1;
  uint **ppuVar8;
  uint uVar9;
  int extraout_r2;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint ***pppuVar13;
  uint **ppuVar14;
  int iVar15;
  undefined8 uVar16;
  ulonglong uVar17;
  int local_d8;
  uint local_d4;
  uint **local_cc;
  uint ***local_c8;
  uint local_c4;
  uint ***local_c0;
  code *pcStack_bc;
  uint ***pppuStack_b8;
  int local_b4;
  uint ***local_b0;
  code *local_ac;
  uint ***local_a8;
  code *local_a4;
  uint ***local_a0;
  uint ****local_9c;
  uint ***local_98;
  code *local_94;
  uint ***local_90;
  undefined4 *local_84;
  undefined4 local_80;
  uint *local_7c;
  uint *local_78;
  undefined4 **local_74;
  undefined *local_70;
  undefined *local_6c;
  undefined4 *local_68;
  undefined4 local_64;
  uint *local_60;
  uint *local_5c;
  undefined4 local_58;
  undefined4 ***local_54;
  undefined4 local_50;
  undefined4 **local_4c;
  uint ***local_48;
  code *local_44;
  uint ***local_40;
  code *local_3c;
  uint ***local_38;
  uint **local_34;
  int local_2c;
  uint ***local_28;
  
  ppuVar14 = (uint **)(param_1 + 0x428);
  if (((uint)*param_2 & 3) == 0) {
    uVar16 = 0;
    ppuVar8 = param_2;
  }
  else {
    if (*param_2 == (uint *)0x1) {
      FUN_01ab9984(&local_b0,ppuVar14);
      param_3 = 0;
      param_4 = 0;
      uVar16 = 0;
      ppuVar8 = extraout_r1;
      if (local_b0 != (uint ***)0x0) goto LAB_00a894b8;
      pppuVar13 = (uint ***)&local_a8;
    }
    else {
      pppuVar13 = (uint ***)(param_2 + 2);
    }
    uVar16 = FUN_01ab985c(ppuVar14,pppuVar13,param_3,param_4);
    ppuVar8 = (uint **)((ulonglong)uVar16 >> 0x20);
  }
LAB_00a894b8:
  uVar17 = FUN_01ab3a74(ppuVar14,ppuVar8,(int)uVar16,(int)((ulonglong)uVar16 >> 0x20),param_2[4]);
  if ((uVar17 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0130739c("Unable to allocate another spanevent open/boser/boser-unix/src/telemetry.rs:116",
                 0x1f,&DAT_01c23d44);
  }
  uVar16 = thunk_FUN_01bee35a((int)uVar17,(int)(uVar17 >> 0x20),0x60);
  uVar9 = (uint)((ulonglong)uVar16 >> 0x20);
  puVar5 = (uint *)((int)uVar16 + extraout_r2);
  uVar10 = *puVar5;
  iVar15 = uVar9 + 1;
  pppuVar13 = *(uint ****)(param_1 + 0x420);
  uVar12 = *(uint *)(param_1 + 0x424);
  uVar11 = puVar5[1];
  uVar1 = (uint)(0xfffffffe < uVar9);
  if ((uVar10 & (uint)pppuVar13) != 0 || (uVar11 & uVar12) != 0) {
    if (((uint)pppuVar13 & uVar12) != 0xffffffff) {
      uVar11 = uVar11 & ~uVar12;
      uVar10 = uVar10 & ~(uint)pppuVar13;
    }
    *puVar5 = uVar10;
    puVar5[1] = uVar11;
LAB_00a89878:
    return (ulonglong)CONCAT14(0xfffffffe < uVar9,iVar15);
  }
  local_d8 = iVar15;
  local_d4 = uVar1;
  FUN_012674d8(param_1,param_2,&local_d8);
  local_cc = param_2;
  FUN_01ab9f1c(&local_48,ppuVar14,iVar15,uVar1);
  pppuVar4 = local_40;
  if (local_34 != (uint **)0x0) {
    local_b0 = local_48;
    local_ac = local_44;
    local_a8 = local_40;
    local_a4 = local_3c;
    local_a0 = local_38;
    local_9c = (uint ****)local_34;
    if (((uint)*local_40 & (uint)pppuVar13) == 0 && ((uint)local_40[1] & uVar12) == 0) {
      local_48 = local_40;
      local_44 = local_3c;
      local_40 = local_38;
      local_c0 = pppuVar4;
      pcStack_bc = local_3c;
      pppuStack_b8 = local_38;
      local_b4 = (int)local_34;
      local_c8 = pppuVar13;
      local_c4 = uVar12;
      uVar16 = FUN_01ab96a8();
      uVar6 = (undefined4)uVar16;
      uVar11 = (uint)((ulonglong)uVar16 >> 0x20) & 1;
      iVar7 = FUN_01ab8994(uVar6);
      if (iVar7 == 0) {
        uVar2 = *(undefined1 *)(param_1 + 0x41e);
        local_ac = (code *)&DAT_01d2f100;
        local_b0 = (uint ***)&local_48;
        local_40 = (uint ***)0x0;
        local_44 = (code *)0x1;
        local_48 = (uint ***)0x0;
        local_3c = (code *)((uint)local_3c & 0xffffff00);
        local_a4 = (code *)CONCAT22(local_a4._2_2_,1);
        local_a8 = (uint ***)CONCAT31(local_a8._1_3_,uVar2);
        FUN_01aacd68(param_2[5],&local_b0,&DAT_01d2f1d8);
        if (((uint)local_a4 & 0x100) == 0) {
          local_3c = (code *)CONCAT31(local_3c._1_3_,uVar2);
          local_b0 = local_48;
          local_ac = local_44;
          local_a8 = local_40;
          local_a4 = local_3c;
          FUN_01ab8828(uVar6,&local_b0);
        }
        else {
          local_b0 = &local_cc;
          local_ac = FUN_01ab2740;
          FUN_019a896c(&DAT_0057df62,&local_b0);
          FUN_0134bd64(local_48,local_44);
        }
      }
      bVar3 = *(byte *)(param_1 + 0x41d);
      if (((*(char *)(param_1 + 0x41c) == '\x01') && ((bVar3 & 8) != 0)) &&
         (iVar7 = FUN_01ab8a24(uVar6), iVar7 == 0)) {
        FUN_019ac130(&local_48,1);
        local_b0 = (uint ***)0x0;
        local_a0 = (uint ***)0x0;
        local_9c = (uint ****)0x0;
        local_ac = (code *)0x0;
        local_a8 = (uint ***)0x0;
        local_a4 = (code *)0x0;
        local_98 = local_48;
        local_94 = local_44;
        local_90 = local_40;
        FUN_01ab83f4(uVar6,&local_b0);
      }
      if ((bVar3 & 1) == 0) {
        FUN_01ac2a34(uVar6,uVar11);
        FUN_01ab4580(&local_c0);
      }
      else {
        local_34 = pppuVar4[0xc];
        local_7c = local_34[9];
        local_78 = local_34[10];
        local_6c = &DAT_01d2f070;
        local_74 = &local_68;
        local_58 = 0;
        local_44 = (code *)0x0;
        local_48 = (uint ***)0x2;
        local_38 = (uint ***)&local_54;
        local_4c = &local_84;
        local_54 = &local_74;
        local_80 = 1;
        local_84 = &DAT_01d2f7e0;
        local_70 = &DAT_01d2f068;
        local_64 = 1;
        local_68 = &DAT_01d2f7e0;
        local_50 = 1;
        local_60 = local_7c;
        local_5c = local_78;
        local_40 = (uint ***)iVar15;
        local_3c = (code *)uVar1;
        FUN_01ac2a34(uVar6,uVar11);
        local_b0 = local_c8;
        local_ac = (code *)local_c4;
        local_a8 = local_c0;
        local_a4 = pcStack_bc;
        local_a0 = pppuStack_b8;
        local_9c = (uint ****)local_b4;
        FUN_01ab4580(&local_a8);
        local_28 = (uint ***)&local_48;
        local_9c = &local_28;
        local_a0 = (uint ***)&local_2c;
        local_b0 = pppuVar13;
        local_ac = (code *)uVar12;
        local_a8 = (uint ***)ppuVar14;
        local_2c = param_1 + 0x410;
        FUN_01ab23ec(&local_b0);
      }
      goto LAB_00a89878;
    }
    FUN_01ab4580();
  }
                    /* WARNING: Subroutine does not return */
  FUN_0130739c(&DAT_00531972,0x1d,&DAT_01d2f058);
}

