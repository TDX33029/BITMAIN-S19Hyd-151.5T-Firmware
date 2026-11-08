// FUN_00f70734 @ 00f70734 size=3988 calls_out=5 calls_in=4
// strings: 

void FUN_00f70734(uint *param_1,undefined4 *param_2,uint param_3)

{
  byte bVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  uint uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  uint uVar29;
  int iVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  int iVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  uint uVar46;
  undefined4 *puVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined4 *puVar50;
  int iVar51;
  uint uVar52;
  undefined4 uVar53;
  undefined4 *puVar54;
  undefined4 *puVar55;
  uint uVar56;
  uint uVar57;
  bool bVar58;
  bool bVar59;
  undefined8 uVar60;
  uint local_1b0;
  uint local_190;
  undefined4 *local_178;
  uint local_174;
  undefined4 local_168;
  uint local_164;
  uint local_154;
  undefined4 *local_138;
  uint local_120;
  undefined4 *local_110;
  undefined4 *local_100;
  undefined4 *local_f0;
  uint local_d8;
  uint local_d4;
  uint local_bc;
  undefined4 *local_b8;
  undefined4 local_b4;
  int local_b0;
  undefined4 local_ac;
  undefined4 *local_a8;
  int local_a4;
  int local_a0;
  uint local_80;
  int local_78;
  uint local_70;
  undefined4 *local_6c;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  uVar60 = CONCAT44(local_ac,local_b4);
  iVar30 = param_3 * 0x134;
  if (0x6a63bd < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4();
  }
  if (iVar30 == 0) {
    *param_1 = 0;
    param_1[1] = 4;
    param_1[2] = param_3;
    return;
  }
  uVar5 = thunk_FUN_016d4a50(iVar30);
  if (uVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(4,iVar30);
  }
  if (param_3 != 0) {
    puVar55 = param_2 + param_3 * 0x4d;
    local_78 = 0;
    uVar29 = param_3;
    do {
      if (param_2 == puVar55) break;
      iVar51 = -0x80000000;
      uVar31 = param_2[0x45];
      uVar32 = param_2[0x46];
      iVar6 = -0x80000000;
      if (param_2[0x3f] != -0x80000000) {
        iVar6 = param_2[0x41];
        uVar49 = param_2[0x40];
        if (iVar6 == 0) {
          local_a0 = 1;
        }
        else {
          local_a0 = thunk_FUN_016d4a50(iVar6);
          if (local_a0 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(1,iVar6);
          }
        }
        FUN_016dd1aa(local_a0,uVar49,iVar6);
        iVar30 = iVar6;
      }
      if (param_2[0x42] != -0x80000000) {
        iVar51 = param_2[0x44];
        uVar49 = param_2[0x43];
        if (iVar51 == 0) {
          local_a4 = 1;
        }
        else {
          local_a4 = thunk_FUN_016d4a50(iVar51);
          if (local_a4 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(1,iVar51);
          }
        }
        FUN_016dd1aa(local_a4,uVar49,iVar51);
        local_b0 = iVar51;
      }
      uVar46 = param_2[10];
      bVar1 = *(byte *)(param_2 + 0x4c);
      local_70 = 5;
      if ((uVar46 != 5) && (local_70 = uVar46, 3 < uVar46)) {
        uVar60 = (**(code **)(param_2[0xc] + 0x1c))(param_2[0xb]);
      }
      local_ac = (undefined4)((ulonglong)uVar60 >> 0x20);
      local_b4 = (undefined4)uVar60;
      uVar49 = 0;
      uVar46 = param_2[0x11];
      bVar59 = 0x1ffffffe < uVar46;
      bVar58 = uVar46 == 0x1fffffff;
      puVar50 = (undefined4 *)(uint)bVar1;
      if (uVar46 < 0x20000000) {
        puVar50 = (undefined4 *)(uVar46 << 3);
        bVar59 = (undefined4 *)0x7ffffffb < puVar50;
        bVar58 = puVar50 == (undefined4 *)0x7ffffffc;
        local_a8 = (undefined4 *)(uint)bVar1;
      }
      if (bVar59 && !bVar58) {
LAB_00f71594:
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(uVar49,local_6c);
      }
      uVar49 = 0;
      if (puVar50 == (undefined4 *)0x0) {
        local_6c = (undefined4 *)&DAT_00000004;
        uVar7 = 0;
      }
      else {
        puVar47 = (undefined4 *)param_2[0x10];
        local_6c = (undefined4 *)thunk_FUN_016d4a50(puVar50);
        if (local_6c == (undefined4 *)0x0) {
          uVar49 = 4;
          local_6c = puVar50;
          goto LAB_00f71594;
        }
        if (uVar46 != 0) {
          uVar7 = 0;
          do {
            if (puVar50 == (undefined4 *)0x0) break;
            puVar50 = puVar50 + -2;
            uVar39 = *puVar47;
            uVar43 = puVar47[1];
            puVar47 = puVar47 + 2;
            iVar37 = uVar7 * 2;
            local_6c[iVar37] = uVar39;
            uVar7 = uVar7 + 1;
            (local_6c + iVar37)[1] = uVar43;
          } while (uVar46 != uVar7);
        }
        uVar7 = uVar46;
      }
      uVar57 = param_2[0x14];
      bVar59 = 0x1ffffffe < uVar57;
      bVar58 = uVar57 == 0x1fffffff;
      uVar56 = uVar5;
      if (uVar57 < 0x20000000) {
        uVar56 = uVar57 << 3;
        bVar59 = 0x7ffffffb < uVar56;
        bVar58 = uVar56 == 0x7ffffffc;
      }
      if (bVar59 && !bVar58) {
LAB_00f715a8:
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(uVar49,local_80);
      }
      uVar39 = 0;
      uVar49 = param_2[0x47];
      if (uVar56 == 0) {
        local_80 = 4;
        uVar9 = 0;
      }
      else {
        puVar50 = (undefined4 *)param_2[0x13];
        local_80 = thunk_FUN_016d4a50(uVar56,local_80);
        if (local_80 == 0) {
          uVar49 = 4;
          local_80 = uVar56;
          goto LAB_00f715a8;
        }
        uVar9 = uVar57;
        if (uVar57 != 0) {
          uVar8 = 0;
          do {
            if (uVar56 == 0) break;
            uVar43 = puVar50[1];
            puVar47 = (undefined4 *)(local_80 + uVar8 * 8);
            *puVar47 = *puVar50;
            uVar8 = uVar8 + 1;
            uVar56 = uVar56 - 8;
            puVar50 = puVar50 + 2;
            puVar47[1] = uVar43;
          } while (uVar57 != uVar8);
        }
      }
      uVar56 = param_2[0x17];
      bVar59 = 0x1ffffffe < uVar56;
      bVar58 = uVar56 == 0x1fffffff;
      if (uVar56 < 0x20000000) {
        puVar50 = (undefined4 *)(uVar56 << 3);
        bVar59 = (undefined4 *)0x7ffffffb < puVar50;
        bVar58 = puVar50 == (undefined4 *)0x7ffffffc;
      }
      if (bVar59 && !bVar58) {
LAB_00f715c4:
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(uVar39,local_b8);
      }
      if (puVar50 == (undefined4 *)0x0) {
        local_b8 = (undefined4 *)&DAT_00000004;
        uVar8 = 0;
      }
      else {
        puVar47 = (undefined4 *)param_2[0x16];
        local_b8 = (undefined4 *)thunk_FUN_016d4a50(puVar50);
        if (local_b8 == (undefined4 *)0x0) {
          uVar39 = 4;
          local_b8 = puVar50;
          goto LAB_00f715c4;
        }
        uVar8 = uVar56;
        if (uVar56 != 0) {
          uVar10 = 0;
          do {
            if (puVar50 == (undefined4 *)0x0) break;
            uVar39 = puVar47[1];
            iVar37 = uVar10 * 2;
            local_b8[iVar37] = *puVar47;
            uVar10 = uVar10 + 1;
            puVar50 = puVar50 + -2;
            puVar47 = puVar47 + 2;
            (local_b8 + iVar37)[1] = uVar39;
          } while (uVar56 != uVar10);
        }
      }
      uVar39 = 0;
      uVar40 = param_2[0x1a];
      bVar59 = 0xffffffe < uVar40;
      bVar58 = uVar40 == 0xfffffff;
      uVar10 = uVar5;
      if (uVar40 < 0x10000000) {
        uVar10 = uVar40 << 4;
        bVar59 = 0x7ffffffb < uVar10;
        bVar58 = uVar10 == 0x7ffffffc;
      }
      if (bVar59 && !bVar58) {
LAB_00f715dc:
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(uVar39,local_d4);
      }
      if (uVar10 == 0) {
        local_d4 = 4;
        uVar34 = 0;
      }
      else {
        puVar50 = (undefined4 *)param_2[0x19];
        local_d4 = thunk_FUN_016d4a50(uVar10,local_d4);
        if (local_d4 == 0) {
          uVar39 = 4;
          local_d4 = uVar10;
          goto LAB_00f715dc;
        }
        uVar34 = uVar40;
        if (uVar40 != 0) {
          uVar11 = 0;
          uVar33 = uVar40;
          do {
            if (uVar10 == uVar11) break;
            uVar39 = *puVar50;
            uVar43 = puVar50[1];
            uVar48 = puVar50[2];
            uVar53 = puVar50[3];
            puVar50 = puVar50 + 4;
            uVar33 = uVar33 - 1;
            puVar47 = (undefined4 *)(local_d4 + uVar11);
            *puVar47 = uVar39;
            uVar11 = uVar11 + 0x10;
            puVar47[1] = uVar43;
            puVar47[2] = uVar48;
            puVar47[3] = uVar53;
          } while (uVar33 != 0);
        }
      }
      uVar39 = 0;
      uVar33 = param_2[0x1d];
      bVar59 = 0xffffffe < uVar33;
      bVar58 = uVar33 == 0xfffffff;
      if (uVar33 < 0x10000000) {
        uVar10 = uVar33 << 4;
        bVar59 = 0x7ffffffb < uVar10;
        bVar58 = uVar10 == 0x7ffffffc;
      }
      if (bVar59 && !bVar58) {
LAB_00f71600:
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(uVar39,local_bc);
      }
      if (uVar10 == 0) {
        local_bc = 4;
        uVar11 = 0;
      }
      else {
        puVar50 = (undefined4 *)param_2[0x1c];
        local_bc = thunk_FUN_016d4a50(uVar10);
        if (local_bc == 0) {
          uVar39 = 4;
          local_bc = uVar10;
          goto LAB_00f71600;
        }
        uVar11 = uVar33;
        if (uVar33 != 0) {
          uVar12 = 0;
          uVar35 = uVar33;
          do {
            if (uVar10 == uVar12) break;
            uVar35 = uVar35 - 1;
            uVar39 = *puVar50;
            uVar43 = puVar50[1];
            uVar53 = puVar50[2];
            uVar48 = puVar50[3];
            puVar50 = puVar50 + 4;
            puVar47 = (undefined4 *)(local_bc + uVar12);
            *puVar47 = uVar39;
            uVar12 = uVar12 + 0x10;
            puVar47[1] = uVar43;
            puVar47[2] = uVar53;
            puVar47[3] = uVar48;
          } while (uVar35 != 0);
        }
      }
      uVar39 = 0;
      uVar35 = param_2[0x20];
      bVar59 = 0xffffffe < uVar35;
      bVar58 = uVar35 == 0xfffffff;
      if (uVar35 < 0x10000000) {
        uVar10 = uVar35 << 4;
        bVar59 = 0x7ffffffb < uVar10;
        bVar58 = uVar10 == 0x7ffffffc;
      }
      if (bVar59 && !bVar58) {
LAB_00f7161c:
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(uVar39,local_d8);
      }
      if (uVar10 == 0) {
        local_d8 = 4;
        uVar12 = 0;
      }
      else {
        puVar50 = (undefined4 *)param_2[0x1f];
        local_d8 = thunk_FUN_016d4a50(uVar10);
        if (local_d8 == 0) {
          uVar39 = 4;
          local_d8 = uVar10;
          goto LAB_00f7161c;
        }
        uVar12 = uVar35;
        if (uVar35 != 0) {
          uVar13 = 0;
          uVar36 = uVar35;
          do {
            if (uVar10 == uVar13) break;
            uVar36 = uVar36 - 1;
            uVar39 = *puVar50;
            uVar43 = puVar50[1];
            uVar53 = puVar50[2];
            uVar48 = puVar50[3];
            puVar50 = puVar50 + 4;
            puVar47 = (undefined4 *)(local_d8 + uVar13);
            *puVar47 = uVar39;
            uVar13 = uVar13 + 0x10;
            puVar47[1] = uVar43;
            puVar47[2] = uVar53;
            puVar47[3] = uVar48;
          } while (uVar36 != 0);
        }
      }
      uVar39 = 0;
      uVar10 = param_2[0x23];
      bVar59 = 0x1ffffffe < uVar10;
      bVar58 = uVar10 == 0x1fffffff;
      if (uVar10 < 0x20000000) {
        puVar50 = (undefined4 *)(uVar10 << 3);
        bVar59 = (undefined4 *)0x7ffffffb < puVar50;
        bVar58 = puVar50 == (undefined4 *)0x7ffffffc;
      }
      if (bVar59 && !bVar58) {
LAB_00f71658:
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(uVar39,local_f0);
      }
      if (puVar50 == (undefined4 *)0x0) {
        local_f0 = (undefined4 *)&DAT_00000004;
        uVar36 = 0;
      }
      else {
        puVar47 = (undefined4 *)param_2[0x22];
        local_f0 = (undefined4 *)thunk_FUN_016d4a50(puVar50);
        if (local_f0 == (undefined4 *)0x0) {
          uVar39 = 4;
          local_f0 = puVar50;
          goto LAB_00f71658;
        }
        uVar36 = uVar10;
        if (uVar10 != 0) {
          uVar13 = 0;
          do {
            if (puVar50 == (undefined4 *)0x0) break;
            puVar50 = puVar50 + -2;
            uVar39 = *puVar47;
            uVar43 = puVar47[1];
            puVar47 = puVar47 + 2;
            iVar37 = uVar13 * 2;
            local_f0[iVar37] = uVar39;
            uVar13 = uVar13 + 1;
            (local_f0 + iVar37)[1] = uVar43;
          } while (uVar10 != uVar13);
        }
      }
      uVar39 = 0;
      uVar13 = param_2[0x26];
      bVar59 = 0x1ffffffe < uVar13;
      bVar58 = uVar13 == 0x1fffffff;
      if (uVar13 < 0x20000000) {
        puVar50 = (undefined4 *)(uVar13 << 3);
        bVar59 = (undefined4 *)0x7ffffffb < puVar50;
        bVar58 = puVar50 == (undefined4 *)0x7ffffffc;
        local_120 = uVar13;
      }
      if (bVar59 && !bVar58) {
LAB_00f71674:
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(uVar39,local_100);
      }
      if (puVar50 == (undefined4 *)0x0) {
        local_100 = (undefined4 *)&DAT_00000004;
        uVar13 = 0;
      }
      else {
        puVar47 = (undefined4 *)param_2[0x25];
        local_100 = (undefined4 *)thunk_FUN_016d4a50(puVar50);
        if (local_100 == (undefined4 *)0x0) {
          uVar39 = 4;
          local_100 = puVar50;
          goto LAB_00f71674;
        }
        uVar13 = local_120;
        if (local_120 != 0) {
          uVar14 = 0;
          do {
            if (puVar50 == (undefined4 *)0x0) break;
            puVar50 = puVar50 + -2;
            uVar39 = *puVar47;
            uVar43 = puVar47[1];
            puVar47 = puVar47 + 2;
            iVar37 = uVar14 * 2;
            local_100[iVar37] = uVar39;
            uVar14 = uVar14 + 1;
            (local_100 + iVar37)[1] = uVar43;
          } while (local_120 != uVar14);
        }
      }
      uVar39 = 0;
      uVar14 = param_2[0x29];
      puVar50 = local_110;
      if (0xaaaaaaa < uVar14) {
LAB_00f7168c:
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(uVar39,puVar50);
      }
      uVar39 = param_2[0xd];
      uVar43 = param_2[0x48];
      uVar48 = param_2[0x49];
      puVar50 = (undefined4 *)(uVar14 * 0xc);
      if (puVar50 == (undefined4 *)0x0) {
        local_110 = (undefined4 *)&DAT_00000004;
        uVar42 = 0;
      }
      else {
        puVar47 = (undefined4 *)param_2[0x28];
        local_110 = (undefined4 *)thunk_FUN_016d4a50(puVar50);
        if (local_110 == (undefined4 *)0x0) {
          uVar39 = 4;
          goto LAB_00f7168c;
        }
        uVar42 = uVar14;
        if (uVar14 != 0) {
          iVar37 = 0;
          uVar41 = uVar14;
          do {
            if (uVar14 * -0xc == iVar37) break;
            uVar41 = uVar41 - 1;
            uVar53 = *puVar47;
            puVar50 = (undefined4 *)puVar47[1];
            uVar2 = *(undefined1 *)(puVar47 + 2);
            puVar47 = puVar47 + 3;
            puVar54 = (undefined4 *)((int)local_110 - iVar37);
            *puVar54 = uVar53;
            iVar37 = iVar37 + -0xc;
            *(undefined1 *)(puVar54 + 2) = uVar2;
            puVar54[1] = puVar50;
          } while (uVar41 != 0);
        }
      }
      uVar53 = 0;
      uVar41 = param_2[0x2c];
      bVar59 = 0x1ffffffe < uVar41;
      bVar58 = uVar41 == 0x1fffffff;
      if (uVar41 < 0x20000000) {
        puVar50 = (undefined4 *)(uVar41 << 3);
        bVar59 = (undefined4 *)0x7ffffffb < puVar50;
        bVar58 = puVar50 == (undefined4 *)0x7ffffffc;
      }
      if (bVar59 && !bVar58) {
LAB_00f716ac:
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(uVar53,local_138);
      }
      uVar52 = param_2[0x2b];
      uVar53 = 0;
      if (puVar50 == (undefined4 *)0x0) {
        local_138 = (undefined4 *)&DAT_00000004;
        uVar15 = 0;
      }
      else {
        local_138 = (undefined4 *)thunk_FUN_016d4a50(puVar50);
        if (local_138 == (undefined4 *)0x0) {
          uVar53 = 4;
          local_138 = puVar50;
          goto LAB_00f716ac;
        }
        uVar15 = uVar41;
      }
      FUN_016dd1aa(local_138,uVar52,puVar50);
      uVar16 = param_2[0x2f];
      bVar59 = 0x1ffffffe < uVar16;
      bVar58 = uVar16 == 0x1fffffff;
      if (uVar16 < 0x20000000) {
        uVar52 = uVar16 << 3;
        bVar59 = 0x7ffffffb < uVar52;
        bVar58 = uVar52 == 0x7ffffffc;
      }
      if (bVar59 && !bVar58) {
LAB_00f716c4:
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(uVar53,local_154);
      }
      uVar53 = param_2[1];
      uVar38 = *param_2;
      local_168 = 0;
      if (uVar52 == 0) {
        local_154 = 4;
        local_174 = 0;
      }
      else {
        puVar50 = (undefined4 *)param_2[0x2e];
        local_154 = thunk_FUN_016d4a50(uVar52);
        if (local_154 == 0) {
          uVar53 = 4;
          local_154 = uVar52;
          goto LAB_00f716c4;
        }
        local_174 = uVar16;
        if (uVar16 != 0) {
          uVar17 = 0;
          do {
            if (uVar52 == 0) break;
            uVar44 = puVar50[1];
            puVar47 = (undefined4 *)(local_154 + uVar17 * 8);
            *puVar47 = *puVar50;
            uVar17 = uVar17 + 1;
            uVar52 = uVar52 - 8;
            puVar50 = puVar50 + 2;
            puVar47[1] = uVar44;
          } while (uVar16 != uVar17);
        }
      }
      uVar17 = param_2[0x32];
      bVar59 = 0x1ffffffe < uVar17;
      bVar58 = uVar17 == 0x1fffffff;
      if (uVar17 < 0x20000000) {
        uVar52 = uVar17 << 3;
        bVar59 = 0x7ffffffb < uVar52;
        bVar58 = uVar52 == 0x7ffffffc;
      }
      if (bVar59 && !bVar58) {
LAB_00f716e0:
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(local_168,local_164);
      }
      uVar44 = param_2[2];
      uVar18 = param_2[3];
      uVar19 = param_2[4];
      uVar20 = param_2[0xe];
      if (uVar52 == 0) {
        local_164 = 4;
        local_190 = 0;
      }
      else {
        puVar50 = (undefined4 *)param_2[0x31];
        local_164 = thunk_FUN_016d4a50(uVar52);
        if (local_164 == 0) {
          local_168 = 4;
          local_164 = uVar52;
          goto LAB_00f716e0;
        }
        local_190 = uVar17;
        if (uVar17 != 0) {
          uVar21 = 0;
          do {
            if (uVar52 == 0) break;
            uVar45 = puVar50[1];
            puVar47 = (undefined4 *)(local_164 + uVar21 * 8);
            *puVar47 = *puVar50;
            uVar21 = uVar21 + 1;
            uVar52 = uVar52 - 8;
            puVar50 = puVar50 + 2;
            puVar47[1] = uVar45;
          } while (uVar17 != uVar21);
        }
      }
      FUN_00f71ae4(&local_50,param_2[0x34],param_2[0x35]);
      uVar52 = param_2[0x38];
      uVar45 = 0;
      bVar59 = 0x1ffffffe < uVar52;
      bVar58 = uVar52 == 0x1fffffff;
      if (uVar52 < 0x20000000) {
        puVar50 = (undefined4 *)(uVar52 << 3);
        bVar59 = (undefined4 *)0x7ffffffb < puVar50;
        bVar58 = puVar50 == (undefined4 *)0x7ffffffc;
      }
      if (bVar59 && !bVar58) {
LAB_00f716f8:
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(uVar45,local_178);
      }
      if (puVar50 == (undefined4 *)0x0) {
        local_178 = (undefined4 *)&DAT_00000004;
        local_1b0 = 0;
      }
      else {
        puVar47 = (undefined4 *)param_2[0x37];
        local_178 = (undefined4 *)thunk_FUN_016d4a50(puVar50);
        if (local_178 == (undefined4 *)0x0) {
          uVar45 = 4;
          local_178 = puVar50;
          goto LAB_00f716f8;
        }
        local_1b0 = uVar52;
        if (uVar52 != 0) {
          uVar21 = 0;
          do {
            bVar58 = puVar50 != (undefined4 *)0x0;
            if (bVar58) {
              uVar45 = puVar47[1];
              iVar37 = uVar21 * 2;
              local_178[iVar37] = *puVar47;
              puVar50 = puVar50 + -2;
              puVar47 = puVar47 + 2;
              uVar21 = uVar21 + 1;
              (local_178 + iVar37)[1] = uVar45;
            }
          } while (bVar58 && uVar52 != uVar21);
        }
      }
      uVar22 = param_2[5];
      uVar23 = param_2[6];
      uVar24 = param_2[7];
      uVar25 = param_2[8];
      uVar26 = param_2[9];
      uVar27 = param_2[0x4a];
      uVar28 = param_2[0x4b];
      FUN_00f71d34(&local_40,param_2 + 0x39);
      uVar4 = uStack_38;
      uVar3 = uStack_3c;
      uVar45 = local_40;
      uVar29 = uVar29 - 1;
      param_2 = param_2 + 0x4d;
      local_40 = local_50;
      uStack_3c = uStack_4c;
      uStack_38 = uStack_48;
      puVar50 = (undefined4 *)(uVar5 + local_78 * 0x134);
      *puVar50 = uVar38;
      puVar50[4] = uVar19;
      puVar50[3] = uVar18;
      puVar50[0x31] = local_164;
      puVar50[0x29] = uVar14;
      puVar50[0x2a] = uVar15;
      puVar50[0x2b] = local_138;
      puVar50[0x2c] = uVar41;
      puVar50[0x2d] = local_174;
      puVar50[0x2e] = local_154;
      puVar50[0x2f] = uVar16;
      puVar50[0x30] = local_190;
      puVar50[0x21] = uVar36;
      puVar50[0x22] = local_f0;
      puVar50[0x23] = uVar10;
      puVar50[0x24] = uVar13;
      puVar50[0x25] = local_100;
      puVar50[0x26] = local_120;
      puVar50[0x27] = uVar42;
      puVar50[0x28] = local_110;
      puVar50[0x19] = local_d4;
      puVar50[0x1a] = uVar40;
      puVar50[0x32] = uVar17;
      puVar50[0x1b] = uVar11;
      puVar50[0x1c] = local_bc;
      puVar50[10] = local_70;
      puVar50[0x1d] = uVar33;
      puVar50[0xb] = local_b4;
      puVar50[0x1e] = uVar12;
      puVar50[0xc] = local_ac;
      puVar50[0x1f] = local_d8;
      puVar50[0xd] = uVar39;
      puVar50[0x20] = uVar35;
      puVar50[0xe] = uVar20;
      puVar50[0x12] = uVar9;
      puVar50[0xf] = uVar7;
      puVar50[0x13] = local_80;
      puVar50[0x10] = local_6c;
      puVar50[0x14] = uVar57;
      puVar50[8] = uVar25;
      puVar50[0x15] = uVar8;
      puVar50[7] = uVar24;
      puVar50[0x16] = local_b8;
      puVar50[6] = uVar23;
      puVar50[0x17] = uVar56;
      puVar50[5] = uVar22;
      puVar50[0x18] = uVar34;
      puVar50[2] = uVar44;
      puVar50[9] = uVar26;
      puVar50[1] = uVar53;
      puVar50[0x36] = local_1b0;
      puVar50[0x37] = local_178;
      puVar50[0x33] = local_50;
      puVar50[0x34] = uStack_4c;
      puVar50[0x35] = uStack_48;
      puVar50[0x11] = uVar46;
      puVar50[0x38] = uVar52;
      puVar50[0x39] = uVar45;
      puVar50[0x3a] = uVar3;
      puVar50[0x3b] = uVar4;
      puVar50[0x3c] = uStack_34;
      puVar50[0x3d] = uStack_30;
      puVar50[0x3e] = uStack_2c;
      *(char *)(puVar50 + 0x4c) = (char)local_a8;
      puVar50[0x47] = uVar49;
      puVar50[0x48] = uVar43;
      puVar50[0x49] = uVar48;
      puVar50[0x4a] = uVar27;
      puVar50[0x4b] = uVar28;
      puVar50[0x3f] = iVar6;
      puVar50[0x40] = local_a0;
      puVar50[0x42] = iVar51;
      puVar50[0x43] = local_a4;
      puVar50[0x44] = local_b0;
      puVar50[0x45] = uVar31;
      puVar50[0x41] = iVar30;
      puVar50[0x46] = uVar32;
      local_78 = local_78 + 1;
    } while (uVar29 != 0);
  }
  *param_1 = param_3;
  param_1[1] = uVar5;
  param_1[2] = param_3;
  return;
}

