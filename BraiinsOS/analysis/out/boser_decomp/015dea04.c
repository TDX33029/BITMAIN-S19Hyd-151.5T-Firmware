// FUN_015dea04 @ 015dea04 size=912 calls_out=7 calls_in=2
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_015dea04(int *param_1,int param_2,uint ***param_3)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  uint ***pppuVar4;
  char *pcVar5;
  uint uVar6;
  uint ***pppuVar7;
  uint ***pppuVar8;
  uint ***pppuVar9;
  uint local_90;
  undefined *local_8c;
  int local_88;
  int local_84;
  int local_80;
  uint ***local_7c;
  uint ***local_78;
  uint ***local_74;
  char ****local_70;
  code *local_6c;
  char ****local_68;
  code *local_64;
  char ****local_60;
  code *local_5c;
  uint ****local_58;
  code *local_54;
  uint ***local_50;
  uint local_4c;
  uint ***pppuStack_48;
  uint ***local_40;
  undefined4 local_3c;
  char *local_38;
  undefined4 local_34;
  undefined *local_30;
  char ****local_2c;
  undefined1 *local_28;
  
  pppuVar8 = (uint ***)0x0;
  local_80 = 0;
  local_84 = 4;
  local_88 = 0;
  if (param_3 != (uint ***)0x0) {
    while (pppuVar7 = (uint ***)(uint)*(byte *)((int)pppuVar8 + param_2), pppuVar7 != (uint ***)0x0)
    {
      local_7c = (uint ***)((int)pppuVar8 + 1);
      pppuVar8 = (uint ***)((int)local_7c + (int)pppuVar7);
      local_78 = pppuVar7;
      local_74 = pppuVar8;
      if (param_3 < pppuVar8) {
        if (4 < DAT_01d51b00) {
          local_60 = (char ****)&local_74;
          local_58 = (uint ****)&local_2c;
          local_30 = &DAT_01cfd2f8;
          local_68 = (char ****)&local_78;
          local_70 = (char ****)&local_7c;
          local_54 = FUN_012fd02c;
          local_5c = FUN_012fd02c;
          local_64 = FUN_012fd02c;
          local_6c = FUN_012fd02c;
          local_34 = 0x13;
          local_3c = 0x13;
          local_38 = "m";
          local_40 = (uint ***)0x4b3c6f;
          local_2c = (char ****)param_3;
          FUN_015fb650(&DAT_005b55c0,&local_70,5,&local_40);
        }
        break;
      }
      pcVar5 = (char *)((int)local_7c + param_2);
      pppuVar9 = (uint ***)0x0;
      do {
        if (pcVar5[(int)pppuVar9] == '=') {
          uVar2 = 1;
          local_8c = (undefined *)0x1;
          pppuVar4 = (uint ***)0x0;
          if (pppuVar9 != (uint ***)0x0) {
            uVar2 = FUN_01298504(pppuVar9,1);
            if (uVar2 == 0) {
              pppuVar7 = pppuVar9;
              goto LAB_015ded7c;
            }
            pppuVar4 = pppuVar9;
          }
          FUN_01bed4e2(uVar2,pcVar5,pppuVar9);
          local_90 = (int)pppuVar7 - (int)((int)pppuVar9 + 1U);
          uVar6 = 0;
          if (local_90 != 0) {
            local_8c = (undefined *)FUN_01298504(local_90,1);
            if (local_8c == (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00664620(1,local_90);
            }
            uVar6 = local_90;
          }
          FUN_01bed4e2(local_8c,pcVar5 + (int)((int)pppuVar9 + 1U),local_90);
          goto LAB_015deb74;
        }
        pppuVar9 = (uint ***)((int)pppuVar9 + 1);
      } while (pppuVar7 != pppuVar9);
      uVar2 = FUN_01298504(pppuVar7,1);
      if (uVar2 == 0) {
LAB_015ded7c:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,pppuVar7);
      }
      FUN_01bed4e2(uVar2,pcVar5,pppuVar7);
      uVar6 = 0x80000000;
      pppuVar4 = pppuVar7;
      pppuVar9 = pppuVar7;
LAB_015deb74:
      local_50 = pppuVar4;
      local_4c = uVar2;
      pppuStack_48 = pppuVar9;
      FUN_012fbd94(&local_70,uVar2,pppuVar9);
      iVar1 = local_80;
      if (local_70 == (char ****)0x0) {
        local_70 = (char ****)local_50;
        local_6c = (code *)local_4c;
        local_60 = (char ****)local_8c;
        local_68 = (char ****)pppuVar9;
        local_64 = (code *)uVar6;
        local_5c = (code *)local_90;
        if (local_80 == local_88) {
          FUN_015f5b18(&local_88);
        }
        puVar3 = (uint *)(local_84 + iVar1 * 0x18);
        *puVar3 = (uint)local_70;
        puVar3[1] = (uint)local_6c;
        puVar3[2] = (uint)local_68;
        puVar3[3] = (uint)local_64;
        puVar3[4] = (uint)local_60;
        puVar3[5] = (uint)local_5c;
        local_80 = iVar1 + 1;
      }
      else {
        local_3c = *(undefined4 *)((uint)&local_50 | 4);
        local_40 = pppuVar4;
        if (4 < DAT_01d51b00) {
          local_2c = (char ****)&local_40;
          local_28 = &LAB_006667bc;
          local_64 = (code *)0x13;
          local_60 = (char ****)&DAT_01cfd2e8;
          local_6c = (code *)0x13;
          local_68 = (char ****)0x4b3c6f;
          local_70 = (char ****)0x4b3c6f;
          FUN_015fb650(&DAT_005a0317,&local_2c,5,&local_70);
        }
        FUN_0134bd64(local_40,local_3c);
        if (uVar6 != 0x80000000) {
          local_7c = pppuVar8;
          FUN_0134bd64(uVar6,local_8c);
        }
      }
      if (param_3 <= pppuVar8) break;
    }
  }
  *param_1 = local_88;
  param_1[1] = local_84;
  param_1[2] = local_80;
  return;
}

