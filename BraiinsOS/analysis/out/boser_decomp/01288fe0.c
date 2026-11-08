// FUN_01288fe0 @ 01288fe0 size=1280 calls_out=13 calls_in=1
// strings: localtime | /etc

void FUN_01288fe0(undefined4 *param_1,byte *param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint uVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  uint local_d0;
  uint local_cc;
  uint local_c8;
  uint uStack_c4;
  uint uStack_c0;
  uint local_bc;
  uint uStack_b8;
  uint uStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  uint uStack_a8;
  undefined1 local_a4;
  uint local_a0;
  uint uStack_9c;
  uint uStack_98;
  uint uStack_94;
  uint local_90;
  uint local_8c;
  uint uStack_88;
  uint uStack_84;
  uint local_80;
  uint uStack_7c;
  uint uStack_78;
  undefined1 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  uint *local_60;
  undefined4 local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint uStack_48;
  uint local_44;
  uint uStack_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  undefined1 local_2c;
  char local_2b;
  undefined2 local_2a;
  
  if (param_3 == 0) {
    FUN_01288f84(param_1 + 1);
    uVar5 = 0;
LAB_01289370:
    *param_1 = uVar5;
  }
  else {
    if ((param_3 == 9) && (iVar3 = thunk_FUN_01bed842(param_2,"localtime",9), iVar3 == 0)) {
      FUN_019a6164(&local_58,"/etc",0xe);
      if (local_58 == 0x80000000) {
        *param_1 = 1;
        param_1[2] = local_54;
        param_1[3] = local_50;
        param_1[4] = 0x3b9aca06;
        return;
      }
      FUN_012847a4(param_1,local_54);
      FUN_0134bd64(local_58,local_54);
      return;
    }
    pbVar6 = param_2 + 1;
    uVar4 = (uint)*param_2;
    if (0x7fffffff < (uint)(int)(char)*param_2) {
      if (uVar4 < 0xe0) {
        uVar4 = param_2[1] & 0x3f | (uVar4 & 0x1f) << 6;
        pbVar6 = param_2 + 2;
      }
      else {
        uVar8 = param_2[2] & 0x3f | (param_2[1] & 0x3f) << 6;
        if (uVar4 < 0xf0) {
          uVar4 = uVar8 | (uVar4 & 0x1f) << 0xc;
          pbVar6 = param_2 + 3;
        }
        else {
          uVar4 = param_2[3] & 0x3f | uVar8 << 6 | (uVar4 & 7) << 0x12;
          pbVar6 = param_2 + 4;
        }
      }
    }
    pbVar10 = param_2 + param_3;
    if (uVar4 == 0x3a) {
      FUN_01289514(&local_58,pbVar6,(int)pbVar10 - (int)pbVar6);
      if (local_50 != 0x3b9aca10) {
        param_1[2] = local_58;
        param_1[3] = local_54;
        param_1[4] = local_50;
        param_1[5] = local_4c;
LAB_0128936c:
        uVar5 = 1;
        goto LAB_01289370;
      }
      local_d0 = local_58;
      FUN_01289750(param_1,&local_d0);
    }
    else {
      FUN_01289514(&local_58,param_2,param_3);
      if (local_50 != 0x3b9aca10) {
        if (local_50 == 0x3b9aca06) {
          FUN_0069d8a4(local_58 & 0xff,local_54);
        }
        if (param_3 == 0) {
          pbVar9 = (byte *)0x0;
          pbVar6 = (byte *)0x0;
          pbVar7 = param_2;
LAB_01289288:
          if (pbVar7 != pbVar10) {
            do {
              pbVar11 = pbVar10 + -1;
              uVar4 = (uint)(char)*pbVar11;
              if (0x7fffffff < uVar4) {
                pbVar11 = pbVar10 + -2;
                bVar1 = *pbVar11;
                if ((char)bVar1 < -0x40) {
                  pbVar11 = pbVar10 + -3;
                  bVar2 = *pbVar11;
                  if ((char)bVar2 < -0x40) {
                    pbVar11 = pbVar10 + -4;
                    uVar8 = (int)(char)bVar2 & 0x3fU | (*pbVar11 & 7) << 6;
                  }
                  else {
                    uVar8 = bVar2 & 0xf;
                  }
                  uVar8 = (int)(char)bVar1 & 0x3fU | uVar8 << 6;
                }
                else {
                  uVar8 = bVar1 & 0x1f;
                }
                uVar4 = uVar4 & 0x3f | uVar8 << 6;
              }
              if ((0x17 < uVar4 - 9) || ((1 << (uVar4 - 9 & 0xff) & 0x80001bU) == 0)) {
                pbVar9 = pbVar10 + ((int)pbVar9 - (int)pbVar7);
                break;
              }
              pbVar10 = pbVar11;
            } while (pbVar7 != pbVar11);
          }
        }
        else {
          pbVar6 = (byte *)0x0;
          pbVar9 = param_2;
          do {
            pbVar7 = pbVar9 + 1;
            uVar4 = (uint)*pbVar9;
            if (0x7fffffff < (uint)(int)(char)*pbVar9) {
              if (uVar4 < 0xe0) {
                uVar4 = pbVar9[1] & 0x3f | (uVar4 & 0x1f) << 6;
                pbVar7 = pbVar9 + 2;
              }
              else {
                uVar8 = pbVar9[2] & 0x3f | (pbVar9[1] & 0x3f) << 6;
                if (uVar4 < 0xf0) {
                  uVar4 = uVar8 | (uVar4 & 0x1f) << 0xc;
                  pbVar7 = pbVar9 + 3;
                }
                else {
                  uVar4 = pbVar9[3] & 0x3f | uVar8 << 6 | (uVar4 & 7) << 0x12;
                  pbVar7 = pbVar9 + 4;
                }
              }
            }
            pbVar9 = pbVar6 + ((int)pbVar7 - (int)pbVar9);
            if ((0x17 < uVar4 - 9) || ((1 << (uVar4 - 9 & 0xff) & 0x80001bU) == 0))
            goto LAB_01289288;
            pbVar6 = pbVar9;
            pbVar9 = pbVar7;
          } while (pbVar7 != pbVar10);
          pbVar6 = (byte *)0x0;
          pbVar9 = (byte *)0x0;
        }
        FUN_0128b87c(&local_58,param_2 + (int)pbVar6,(int)pbVar9 - (int)pbVar6,0);
        if (local_2b != '\x03') {
          local_d0 = local_58;
          local_cc = local_54;
          local_c8 = local_50;
          uStack_c4 = local_4c;
          uStack_c0 = uStack_48;
          local_bc = local_44;
          uStack_b8 = uStack_40;
          uStack_b4 = uStack_3c;
          uStack_b0 = uStack_38;
          uStack_ac = uStack_34;
          uStack_a8 = uStack_30;
          local_a4 = local_2c;
          local_a0 = local_58;
          uStack_9c = local_54;
          uStack_98 = local_50;
          uStack_94 = local_4c;
          local_90 = uStack_48;
          local_8c = local_44;
          uStack_88 = uStack_40;
          uStack_84 = uStack_3c;
          local_80 = uStack_38;
          uStack_7c = uStack_34;
          uStack_78 = uStack_30;
          local_74 = local_2c;
          local_68 = 0;
          local_6c = 8;
          local_70 = 0;
          if (local_2b == '\x02') {
            local_60 = (uint *)thunk_FUN_01be5118(0x10);
            if (local_60 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_0066439c(4,0x10);
            }
            local_64 = 1;
            *local_60 = local_a0;
            local_60[1] = uStack_9c;
            local_60[2] = uStack_98;
            local_60[3] = uStack_94;
          }
          else {
            local_60 = (uint *)thunk_FUN_01be5118(0x20);
            if (local_60 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_0066439c(4,0x20);
            }
            *local_60 = local_90;
            local_60[1] = local_8c;
            local_60[2] = uStack_88;
            local_60[3] = uStack_84;
            local_60[4] = local_80;
            local_60[5] = uStack_7c;
            local_60[6] = uStack_78;
            *(undefined1 *)(local_60 + 7) = local_74;
            local_64 = 2;
            *(undefined2 *)((int)local_60 + 0x1e) = local_2a;
            *(char *)((int)local_60 + 0x1d) = local_2b;
          }
          local_c8 = 0;
          local_d0 = 0;
          local_cc = 8;
          local_58 = local_a0;
          local_54 = uStack_9c;
          local_50 = uStack_98;
          local_4c = uStack_94;
          uStack_48 = local_90;
          local_44 = local_8c;
          uStack_40 = uStack_88;
          uStack_3c = uStack_84;
          uStack_38 = local_80;
          uStack_34 = uStack_7c;
          uStack_30 = uStack_78;
          local_2c = local_74;
          local_5c = local_64;
          FUN_01288ab0(param_1,&local_70,&local_64,&local_d0,&local_58);
          return;
        }
        param_1[2] = local_58;
        param_1[3] = local_54;
        param_1[4] = local_50;
        param_1[5] = local_4c;
        goto LAB_0128936c;
      }
      local_d0 = local_58;
      FUN_01289750(param_1,&local_d0);
    }
    FUN_01bf01d6(local_58);
  }
  return;
}

