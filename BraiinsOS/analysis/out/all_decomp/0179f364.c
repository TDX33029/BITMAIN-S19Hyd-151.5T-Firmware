// FUN_0179f364 @ 0179f364 size=1532 calls_out=6 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0179f364(int param_1,undefined4 param_2,uint param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 *param_6,int param_7,undefined4 param_8,uint param_9,uint param_10,
                 undefined4 param_11)

{
  uint extraout_r1;
  uint *puVar1;
  uint *puVar2;
  uint extraout_r1_00;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  uint *puVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  bool bVar13;
  ulonglong uVar14;
  undefined1 *local_104;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined1 auStack_dc [4];
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 local_58;
  uint local_2c;
  
  local_2c = DAT_018ddaf8;
  if (param_6 == (undefined4 *)0x0) {
    uVar14 = FUN_0179a2f0(param_1,param_7,param_9,param_10,param_3,0,param_11);
    if (0xffffff88 < (uint)uVar14) goto LAB_0179f488;
    uVar14 = FUN_0179f1b8(*(undefined4 *)(param_1 + 0x860),param_1 + 0x868,param_1 + 800,
                          param_1 + 0x224,param_1 + 0xbc,param_2,param_3,param_4,param_5,0,
                          *(undefined4 *)(param_1 + 0x948));
  }
  else {
    param_3 = param_6[1];
    if (((param_3 != 0) &&
        (((CARRY4(param_10 - (param_9 < 0x20000),(uint)(0xfffdfffe < param_9 - 0x20000)) ||
          (uVar3 = (uint)((ulonglong)param_3 * 6 >> 0x20),
          param_10 <= uVar3 && (uint)((uint)((ulonglong)param_3 * 6) <= param_9) <= param_10 - uVar3
          )) || (param_6[0x4c9] == 0)))) && (iVar4 = *(int *)(param_7 + 0x3c), iVar4 != 3)) {
      local_d8 = *(undefined4 *)(param_7 + 4);
      iVar8 = param_6[0x44];
      if (param_6[0x2b] != 0) {
        FUN_016dd1aa(auStack_dc,param_7,0xb0);
        uVar5 = *(undefined4 *)(param_7 + 0x84);
        uVar3 = param_6[0x40] - 2;
        if (uVar3 < 6) {
          uVar3 = 6;
        }
        uVar10 = param_6[0x40];
        if (iVar8 - 3U < 3) {
          uVar10 = uVar3;
        }
        local_f8 = param_6[0x3e];
        uStack_f4 = param_6[0x3f];
        local_ec = param_6[0x41];
        local_e8 = param_6[0x42];
        uStack_e4 = param_6[0x43];
        uStack_e0 = param_6[0x44];
LAB_0179f540:
        local_104 = auStack_dc;
        FUN_01798644(&local_d8,local_f8,uStack_f4,uVar10,local_ec,local_e8,uStack_e4,uStack_e0,
                     param_9,param_10,param_3,1,uVar5);
        local_58 = param_6[0x4ca];
        uVar14 = FUN_0179a2f0(param_1,local_104,param_9,param_10,0,0,param_11);
        if ((uint)uVar14 < 0xffffff89) {
          uVar3 = param_6[0x10] - param_6[0x11];
          if (uVar3 != param_6[0x13]) {
            *(undefined4 **)(param_1 + 0x91c) = param_6 + 0x10;
            uVar10 = *(uint *)(param_1 + 0x874);
            if (*(uint *)(param_1 + 0x874) < uVar3) {
              *(uint *)(param_1 + 0x878) = uVar3;
              *(uint *)(param_1 + 0x874) = uVar3;
              *(uint *)(param_1 + 0x868) = *(int *)(param_1 + 0x86c) + uVar3;
              uVar10 = uVar3;
            }
            *(uint *)(param_1 + 0x880) = uVar10;
          }
          uVar5 = param_6[1];
          *(undefined4 *)(param_1 + 0x21c) = param_6[0x4c8];
          *(undefined4 *)(param_1 + 0x220) = uVar5;
          FUN_016dd1aa(*(undefined4 *)(param_1 + 0x860),param_6 + 0x48,0x11f4);
          uVar14 = (ulonglong)extraout_r1 << 0x20;
        }
        goto LAB_0179f488;
      }
      if (param_10 == 0xffffffff && param_9 == 0xffffffff ||
          -param_10 < (uint)(param_9 <= *(uint *)(&DAT_00450fd4 + iVar8 * 4))) {
        if (iVar4 != 2) {
LAB_0179f6e0:
          if (*(int *)(param_7 + 0x30) == 0) {
            FUN_016dd1aa(auStack_dc,param_7,0xb0);
            uVar5 = *(undefined4 *)(param_7 + 0x84);
            uVar10 = param_6[0x40];
            local_f8 = param_6[0x3e];
            uStack_f4 = param_6[0x3f];
            local_ec = param_6[0x41];
            local_e8 = param_6[0x42];
            uStack_e4 = param_6[0x43];
            uStack_e0 = param_6[0x44];
            goto LAB_0179f540;
          }
        }
      }
      else if (iVar4 == 1) goto LAB_0179f6e0;
      FUN_016dd1aa(auStack_dc,param_7,0xb0);
      uStack_d4 = param_6[0x3f];
      uStack_d0 = param_6[0x40];
      uStack_cc = param_6[0x41];
      local_c8 = param_6[0x42];
      uStack_c4 = param_6[0x43];
      uStack_c0 = param_6[0x44];
      local_58 = param_6[0x4ca];
      uVar14 = FUN_0179a2f0(param_1,auStack_dc,param_9,param_10,0,1,param_11);
      if (0xffffff88 < (uint)uVar14) goto LAB_0179f488;
      uVar10 = param_6[0x40];
      *(undefined4 *)(param_1 + 0x234) = *(undefined4 *)(param_1 + 0x22c);
      iVar4 = param_6[0x44];
      uVar3 = 1 << (uVar10 & 0xff);
      if (iVar4 == 1) {
        uVar11 = 0;
LAB_0179f8f4:
        puVar12 = (uint *)(param_6[0x27] + -4);
        uVar10 = 0;
        puVar1 = (uint *)(*(int *)(param_1 + 0x8c4) + -4);
        do {
          puVar12 = puVar12 + 1;
          uVar10 = uVar10 + 1;
          puVar1 = puVar1 + 1;
          *puVar1 = *puVar12 >> 8;
        } while (uVar10 < uVar3);
      }
      else {
        if (iVar4 - 3U < 3) {
          uVar11 = (uint)(param_6[0x4ca] != 1);
          if (param_6[0x4ca] != 1) {
            uVar11 = 1 << (param_6[0x3f] & 0xff);
          }
        }
        else {
          uVar11 = 1 << (param_6[0x3f] & 0xff);
          if (iVar4 == 2) goto LAB_0179f8f4;
        }
        FUN_016dd1aa(*(int *)(param_1 + 0x8c4),param_6[0x27],4 << (uVar10 & 0xff));
      }
      iVar4 = param_6[0x44];
      if (*(int *)(param_1 + 0xd8) == 1) {
LAB_0179f85c:
        bVar13 = iVar4 - 3U == 2;
        if (iVar4 - 3U < 3) {
          bVar13 = param_6[0x4ca] == 1;
        }
        if (bVar13) {
          FUN_016dd1aa(*(undefined4 *)(param_1 + 0x890),param_6[0x1a],uVar3);
          uVar5 = param_6[0x25];
          *(undefined4 *)(param_1 + 0x8b8) = param_6[0x24];
          *(undefined4 *)(param_1 + 0x8bc) = uVar5;
        }
      }
      else {
        uVar10 = *(int *)(param_1 + 0xd8) - 3;
        bVar13 = uVar10 == 2;
        if (uVar10 < 3) {
          bVar13 = *(int *)(param_1 + 0x140) == 1;
        }
        if (bVar13) goto LAB_0179f85c;
        puVar1 = (uint *)param_6[0x29];
        if (1 < iVar4 - 1U) {
          FUN_016dd1aa(*(int *)(param_1 + 0x8cc),puVar1,uVar11 << 2);
LAB_0179f858:
          iVar4 = param_6[0x44];
          goto LAB_0179f85c;
        }
        if (uVar11 != 0) {
          puVar6 = (uint *)(*(int *)(param_1 + 0x8cc) + -4);
          puVar12 = puVar1;
          do {
            puVar2 = puVar12 + 1;
            puVar6 = puVar6 + 1;
            *puVar6 = *puVar12 >> 8;
            puVar12 = puVar2;
          } while (puVar2 != puVar1 + uVar11);
          goto LAB_0179f858;
        }
      }
      iVar4 = 0;
      if (*(uint *)(param_1 + 0x888) != 0) {
        iVar4 = 4 << (*(uint *)(param_1 + 0x888) & 0xff);
      }
      FUN_016dd606(*(undefined4 *)(param_1 + 0x8c8),0,iVar4);
      if (*(uint *)(param_1 + 0x234) < *(uint *)(param_1 + 0x230)) {
        *(uint *)(param_1 + 0x234) = *(uint *)(param_1 + 0x230);
      }
      uVar5 = param_6[0x11];
      uVar7 = param_6[0x12];
      uVar9 = param_6[0x13];
      *(undefined4 *)(param_1 + 0x868) = param_6[0x10];
      *(undefined4 *)(param_1 + 0x86c) = uVar5;
      *(undefined4 *)(param_1 + 0x870) = uVar7;
      *(undefined4 *)(param_1 + 0x874) = uVar9;
      uVar5 = param_6[0x15];
      *(undefined4 *)(param_1 + 0x878) = param_6[0x14];
      *(undefined4 *)(param_1 + 0x87c) = uVar5;
      uVar5 = param_6[0x16];
      *(undefined4 *)(param_1 + 0x884) = param_6[0x17];
      *(undefined4 *)(param_1 + 0x880) = uVar5;
      uVar5 = param_6[0x4c8];
      *(undefined4 *)(param_1 + 0x220) = param_6[1];
      *(undefined4 *)(param_1 + 0x21c) = uVar5;
      FUN_016dd1aa(*(undefined4 *)(param_1 + 0x860),param_6 + 0x48,0x11f4);
      uVar14 = (ulonglong)extraout_r1_00 << 0x20;
      goto LAB_0179f488;
    }
    uVar14 = FUN_0179a2f0(param_1,param_7,param_9,param_10,param_3,0,param_11);
    if (0xffffff88 < (uint)uVar14) goto LAB_0179f488;
    uVar14 = FUN_0179f1b8(*(undefined4 *)(param_1 + 0x860),param_1 + 0x868,param_1 + 800,
                          param_1 + 0x224,param_1 + 0xbc,*param_6,param_6[1],param_6[2],param_5,0,
                          *(undefined4 *)(param_1 + 0x948));
  }
  if ((uint)uVar14 < 0xffffff89) {
    *(uint *)(param_1 + 0x21c) = (uint)uVar14;
    uVar14 = uVar14 & 0xffffffff00000000;
    *(uint *)(param_1 + 0x220) = param_3;
  }
LAB_0179f488:
  if ((local_2c ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78((int)uVar14,(int)(uVar14 >> 0x20),local_2c ^ DAT_018ddaf8,0);
  }
  return;
}

