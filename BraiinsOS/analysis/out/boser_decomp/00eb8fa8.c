// FUN_00eb8fa8 @ 00eb8fa8 size=812 calls_out=8 calls_in=2
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00eb8fa8(undefined4 *param_1,uint *param_2,undefined4 param_3)

{
  undefined1 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  uint local_240;
  uint local_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 local_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 local_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  uint local_1a0;
  uint local_19c;
  undefined1 auStack_198 [128];
  undefined4 *local_118;
  undefined *local_114;
  uint local_110;
  uint local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 local_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  uint local_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  uint local_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  uVar2 = *param_2;
  uVar4 = param_2[1];
  do {
    iVar5 = 0;
    if ((uint)(uVar2 < 4) <= -uVar4) {
      iVar5 = uVar2 - 3;
    }
    if (iVar5 != 0) {
      if (iVar5 != 1) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb100(&DAT_0050d9a7,0x2b,&DAT_01d1de44);
      }
      (**(code **)(param_2[3] + 0xc))(&local_110,param_2[2],param_3);
      if (local_110 != 4 || local_10c != 0) {
        if (local_110 == 3 && local_10c == 0) {
          param_1[1] = 0;
          param_1[2] = local_108;
          param_1[3] = local_104;
          *param_1 = 3;
          return;
        }
        local_230 = local_100;
        uStack_22c = uStack_fc;
        uStack_228 = uStack_f8;
        uStack_224 = uStack_f4;
        uStack_220 = uStack_f0;
        local_21c = local_ec;
        uStack_218 = uStack_e8;
        uStack_214 = uStack_e4;
        uStack_210 = uStack_e0;
        uStack_20c = uStack_dc;
        local_208 = local_d8;
        uStack_204 = uStack_d4;
        uStack_200 = uStack_d0;
        uStack_1fc = uStack_cc;
        uStack_1f8 = uStack_c8;
        uStack_1f4 = uStack_c4;
        local_240 = local_110;
        local_23c = local_10c;
        uStack_238 = local_108;
        uStack_234 = local_104;
        FUN_00eb9364(param_2);
        *param_2 = 5;
        param_2[1] = 0;
        FUN_01bed4e2(param_1,&local_240,0x50);
        return;
      }
LAB_00eb91dc:
      *param_1 = 4;
      param_1[1] = 0;
      return;
    }
    (**(code **)(param_2[0x2b] + 0xc))(&local_110,param_2[0x2a],param_3);
    if (local_110 != 0) goto LAB_00eb91dc;
    if (local_10c != 0) {
      *param_1 = 3;
      param_1[1] = 0;
      param_1[2] = local_10c;
      param_1[3] = local_108;
      return;
    }
    uVar2 = *param_2;
    uVar4 = param_2[1];
    *param_2 = 3;
    param_2[1] = 0;
    if (uVar2 == 3 && uVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0130739c(&DAT_0050d999,0xe,&DAT_01d1de34);
    }
    FUN_01bed4e2(&local_240,param_2 + 2,0xa0);
    local_110 = uVar2;
    local_10c = uVar4;
    FUN_01bed4e2(&local_108,param_2 + 2,0xa0);
    local_68 = param_2[0x22];
    uStack_64 = param_2[0x23];
    uStack_60 = param_2[0x24];
    uStack_5c = param_2[0x25];
    local_58 = param_2[0x26];
    uStack_54 = param_2[0x27];
    uStack_50 = param_2[0x28];
    uStack_4c = param_2[0x29];
    uVar1 = (undefined1)local_68;
    if ((local_68 & 0xff) == 0) {
LAB_00eb913c:
      puVar3 = (undefined4 *)0x0;
      FUN_009d5b68(&local_68);
    }
    else {
      if ((local_68 & 0xff) == 1) {
        if (local_58 == 0 && uStack_54 == 0) goto LAB_00eb913c;
      }
      else {
        iVar5 = FUN_0137c924(&uStack_60);
        if (iVar5 != 0) goto LAB_00eb913c;
      }
      FUN_01bed4e2((uint)&local_48 | 1,(uint)&local_68 | 1,0x1f);
      local_48 = CONCAT31(local_48._1_3_,uVar1);
      puVar3 = (undefined4 *)thunk_FUN_01be5118(0x20);
      if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(8,0x20);
      }
      *puVar3 = local_48;
      puVar3[1] = uStack_44;
      puVar3[2] = uStack_40;
      puVar3[3] = uStack_3c;
      puVar3[4] = local_38;
      puVar3[5] = uStack_34;
      puVar3[6] = uStack_30;
      puVar3[7] = uStack_2c;
    }
    local_1a0 = uVar2;
    local_19c = uVar4;
    FUN_01bed4e2(auStack_198,&local_240,0x80);
    local_114 = &DAT_01d2d88c;
    local_118 = puVar3;
    uVar6 = (**(code **)(param_2[0x2b] + 0x10))(param_2[0x2a],&local_1a0);
    FUN_00eb9364(param_2);
    uVar2 = 4;
    uVar4 = 0;
    *param_2 = 4;
    param_2[1] = 0;
    *(undefined8 *)(param_2 + 2) = uVar6;
  } while( true );
}

