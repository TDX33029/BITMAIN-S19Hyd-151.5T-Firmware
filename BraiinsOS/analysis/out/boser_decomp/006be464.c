// FUN_006be464 @ 006be464 size=1332 calls_out=17 calls_in=2
// strings: 

void FUN_006be464(int *param_1,undefined4 param_2,undefined4 *param_3,int param_4,undefined4 param_5
                 ,undefined4 param_6)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  uint ****ppppuVar10;
  undefined4 uVar11;
  uint *puVar12;
  uint ***pppuVar13;
  uint *puVar14;
  uint **ppuVar15;
  uint **ppuVar16;
  uint **ppuVar17;
  uint uVar18;
  uint ***pppuVar19;
  undefined4 *puVar20;
  uint uVar21;
  undefined8 uVar22;
  int local_70;
  uint **local_68;
  uint **local_64;
  uint ***local_60;
  uint ***local_5c;
  uint ***local_58;
  undefined4 local_54;
  undefined4 *local_50;
  undefined4 local_4c;
  uint ****local_48;
  undefined8 local_44;
  code *local_3c;
  uint ***local_38;
  undefined1 *local_34;
  uint ****local_30;
  code *local_2c;
  undefined4 local_28;
  
  iVar3 = FUN_006e5ac4(param_6);
  if (iVar3 != 0) {
    return;
  }
  FUN_006e63d8(param_6,param_2);
  if (param_1[0xb] != 0) {
    uVar4 = FUN_006c4c10(param_1[0xc],param_1[0xd],param_1[0xe],param_1[0xf],param_2);
    iVar3 = param_1[8];
    uVar21 = param_1[9];
    uVar1 = uVar4 >> 0x19;
    local_70 = 0;
    while( true ) {
      uVar4 = uVar21 & uVar4;
      uVar18 = *(uint *)(iVar3 + uVar4);
      uVar5 = uVar18 ^ uVar1 * 0x1010101;
      uVar5 = ~uVar5 & 0x80808080 & uVar5 + 0xfefefeff;
      while (uVar5 != 0) {
        uVar6 = uVar4 + ((uint)LZCOUNT(uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                                       (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18) >> 3) & uVar21;
        iVar7 = FUN_006bcafc(param_2,iVar3 + -0x18 + uVar6 * -0x18);
        uVar5 = uVar5 - 1 & uVar5;
        if (iVar7 != 0) {
          iVar3 = iVar3 + uVar6 * -0x18;
          iVar7 = *(int *)(iVar3 + -4);
          if (iVar7 == 0) goto LAB_006be7e8;
          ppuVar15 = *(uint ***)(iVar3 + -8);
          ppuVar16 = ppuVar15;
          goto LAB_006be5bc;
        }
      }
      if ((uVar18 & 0x80808080 & uVar18 << 1) != 0) break;
      local_70 = local_70 + 4;
      uVar4 = uVar4 + local_70;
    }
  }
  goto LAB_006be7e8;
LAB_006be5bc:
  do {
    ppuVar17 = ppuVar16 + 7;
    puVar9 = param_3;
    local_68 = ppuVar16;
    local_64 = ppuVar16 + 4;
    for (iVar3 = param_4 << 2; iVar3 != 0; iVar3 = iVar3 + -4) {
      puVar20 = (undefined4 *)*puVar9;
      if ((uint *)puVar20[5] == ppuVar16[1]) {
        iVar8 = thunk_FUN_01bed842(puVar20[4] + 8,*ppuVar16);
        if (iVar8 == 0) {
          iVar3 = 0;
          if (*(char *)(puVar20 + 0x18) != '\0') {
            iVar3 = puVar20[0xc];
          }
          if (*(char *)(puVar20 + 0x18) != '\0' && iVar3 != -0x7ffffff9) {
            ppppuVar10 = (uint ****)&local_48;
            local_2c = FUN_006fc3e0;
            local_30 = (uint ****)(puVar20 + 0x16);
            FUN_00664898(ppppuVar10,&DAT_0057a667,&local_30);
          }
          else {
            local_28 = 0;
            ppppuVar10 = (uint ****)&local_30;
            local_30 = (uint ****)0x0;
            local_3c = (code *)0x0;
            local_2c = (code *)0x1;
            local_44._4_4_ = (uint ***)0x60000020;
            local_44._0_4_ = (code *)&DAT_01c05e3c;
            local_48 = ppppuVar10;
            iVar3 = FUN_006fc3e0(puVar20 + 0x16,&local_48);
            if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_013073dc(&DAT_00533383,0x37,&local_54,&DAT_01c05e54,&DAT_01d30334);
            }
          }
          local_60 = *ppppuVar10;
          pppuVar13 = ppppuVar10[1];
          pppuVar19 = ppppuVar10[2];
          uVar2 = *(undefined8 *)(ppppuVar10 + 1);
          local_5c = pppuVar13;
          local_58 = pppuVar19;
          uVar22 = FUN_00700b3c(pppuVar13,pppuVar19,0x21);
          if ((int)uVar22 == 0) {
            uVar22 = FUN_006a4c58(pppuVar13,pppuVar19);
            if ((int)uVar22 == 0) {
              local_48 = (uint ****)0x2;
            }
            else {
              local_48 = (uint ****)0x0;
              uVar2 = uVar22;
            }
          }
          else {
            local_48 = (uint ****)&DAT_00000001;
            uVar2 = uVar22;
          }
          local_44 = uVar2;
          iVar3 = FUN_006bea0c(ppuVar16 + 4,&local_48);
          if (iVar3 == 0) {
            puVar9 = (undefined4 *)thunk_FUN_01be5118(0x10);
            if (puVar9 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_0066439c(4,0x10);
            }
            uVar11 = puVar20[1];
            puVar12 = ppuVar16[2];
            puVar14 = ppuVar16[3];
            *puVar9 = *puVar20;
            puVar9[1] = uVar11;
            puVar9[2] = puVar12;
            puVar9[3] = puVar14;
            local_4c = 2;
            local_54 = 2;
            local_34 = &LAB_00632348;
            local_38 = (uint ***)&local_60;
            local_3c = FUN_006b15ac;
            local_44._4_4_ = &local_64;
            local_44._0_4_ = (code *)&LAB_01963050;
            local_48 = (uint ****)&local_68;
            local_50 = puVar9;
            FUN_00664898(&local_30,&DAT_005b22af,&local_48);
            local_48 = local_30;
            local_44._0_4_ = local_2c;
            local_44._4_4_ = (uint ***)local_28;
            FUN_006d6c3c(param_5,&local_54,&local_48);
          }
          FUN_019bb7e0(local_60,local_5c);
          break;
        }
      }
      puVar9 = puVar9 + 1;
    }
    ppuVar16 = ppuVar17;
  } while (ppuVar17 != ppuVar15 + iVar7 * 7);
LAB_006be7e8:
  if (param_1[3] != 0) {
    uVar4 = FUN_006c4c10(param_1[4],param_1[5],param_1[6],param_1[7],param_2);
    uVar1 = uVar4 >> 0x19;
    iVar3 = *param_1;
    uVar21 = param_1[1];
    local_70 = 0;
    while( true ) {
      uVar4 = uVar21 & uVar4;
      uVar18 = *(uint *)(iVar3 + uVar4);
      uVar5 = uVar18 ^ uVar1 * 0x1010101;
      uVar5 = ~uVar5 & 0x80808080 & uVar5 + 0xfefefeff;
      while (uVar5 != 0) {
        uVar6 = uVar4 + ((uint)LZCOUNT(uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                                       (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18) >> 3) & uVar21;
        iVar7 = FUN_006bcafc(param_2,iVar3 + -0x30 + uVar6 * -0x30);
        uVar5 = uVar5 - 1 & uVar5;
        if (iVar7 != 0) {
          iVar3 = iVar3 + uVar6 * -0x30;
          local_48 = *(uint *****)(iVar3 + -0x20);
          local_38 = *(uint ****)(iVar3 + -0x14);
          local_3c = (code *)((int)local_48 + *(int *)(iVar3 + -0x1c) + 1);
          local_44._4_4_ = (uint ***)(local_48 + 1);
          local_44._0_4_ = (code *)(~(uint)*local_48 & 0x80808080);
          while (puVar9 = (undefined4 *)FUN_006e54e8(&local_48), puVar9 != (undefined4 *)0x0) {
            local_2c = (code *)*puVar9;
            local_28 = puVar9[1];
            local_30 = (uint ****)&DAT_00000001;
            FUN_006be464(param_1,&local_30,param_3,param_4,param_5,param_6);
          }
          return;
        }
      }
      if ((uVar18 & 0x80808080 & uVar18 << 1) != 0) break;
      local_70 = local_70 + 4;
      uVar4 = uVar4 + local_70;
    }
  }
  return;
}

