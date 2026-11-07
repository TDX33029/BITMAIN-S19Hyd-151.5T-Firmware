// FUN_01209080 @ 01209080 size=1064 calls_out=12 calls_in=2
// strings: filled overflow | filled must not become larger than initialized

void FUN_01209080(uint *param_1,int *param_2,undefined4 *param_3,int *param_4)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int *unaff_r4;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  uint local_110;
  uint local_10c;
  uint local_108;
  int local_104;
  undefined1 auStack_100 [80];
  undefined4 local_b0;
  int local_ac;
  undefined4 local_90;
  byte local_48;
  undefined4 local_44;
  uint local_34;
  uint *local_30;
  code *local_2c;
  
  if (*param_2 == 2) {
    iVar2 = param_2[3];
    bVar7 = iVar2 == 0;
    if (!bVar7) {
      unaff_r4 = (int *)(iVar2 * 0xd8 + param_2[2] + -0xd8);
      bVar7 = unaff_r4 == (int *)0x0;
    }
    if (!bVar7) {
      uVar6 = param_4[1];
      uVar4 = param_4[2];
      do {
        iVar2 = iVar2 + -1;
        if (uVar6 < uVar4) {
                    /* WARNING: Subroutine does not return */
          FUN_012faff4(0,uVar4,uVar6,&DAT_01d2e4e0);
        }
        if (*unaff_r4 == 7 && unaff_r4[1] == 0) {
          FUN_01348c70(&local_110,unaff_r4 + 2,*param_3,param_4);
          if ((char)local_110 == '\x05') {
LAB_012093d0:
            uVar1 = 5;
            goto LAB_012090c8;
          }
          if ((local_110 & 0xff) != 4) {
            *param_1 = local_110;
            param_1[1] = local_10c;
            return;
          }
          uVar6 = param_4[1];
          uVar3 = param_4[2];
        }
        else if (uVar6 - uVar4 == 0) {
          uVar3 = uVar4;
        }
        else {
          uVar5 = param_4[3];
          if (uVar6 < uVar5) {
                    /* WARNING: Subroutine does not return */
            FUN_012faff4(0,uVar5,uVar6,&DAT_01d292b4);
          }
          local_104 = uVar5 - uVar4;
          local_108 = 0;
          local_110 = *param_4 + uVar4;
          local_10c = uVar6 - uVar4;
          FUN_006a060c(&local_30,unaff_r4 + 0x32,unaff_r4 + 0x1c,&DAT_01c237a8,unaff_r4,FUN_0121b214
                       ,&LAB_0121b304,param_3,&local_110);
          uVar3 = local_104 + uVar4;
          if (uVar5 < uVar3) {
            param_4[3] = uVar3;
            uVar5 = uVar3;
          }
          uVar3 = local_108 + uVar4;
          if (CARRY4(local_108,uVar4)) {
                    /* WARNING: Subroutine does not return */
            FUN_0130739c("filled overflow",0xf,&DAT_01d1cf14);
          }
          if (uVar5 < uVar3) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb100("filled must not become larger than initialized",0x5d,&DAT_01d1cf14);
          }
          param_4[2] = uVar3;
          if (((uint)local_30 & 0xff) == 5) goto LAB_012093d0;
          if (((uint)local_30 & 0xff) != 4) {
            *param_1 = (uint)local_30;
            param_1[1] = (uint)local_2c;
            return;
          }
        }
        if (uVar6 < uVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_012faff4(0,uVar3,uVar6,&DAT_01d2e4e0);
        }
        if (uVar4 != uVar3) break;
        param_2[3] = iVar2;
        FUN_01bed4e2(&local_110,unaff_r4,0xd8);
        if ((local_110 & 0xf) != 8) {
          if (local_110 == 7) {
            FUN_00b6fd3c(&local_108);
          }
          else {
            FUN_00b6fd3c(auStack_100);
            if (local_ac != 0) {
              thunk_FUN_01be4678(local_b0);
            }
            thunk_FUN_01be4678(local_90);
            if (local_48 < 4) {
              FUN_0069d8a4(local_48,local_44);
            }
          }
        }
        if ((iVar2 == 0) || (unaff_r4 = unaff_r4 + -0x36, unaff_r4 == (int *)0x0)) break;
      } while( true );
    }
    uVar1 = 4;
LAB_012090c8:
    *(undefined1 *)param_1 = uVar1;
    return;
  }
  if ((char)param_2[6] == '\0') {
    uVar4 = param_4[2];
    if ((uint)param_4[1] < uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(0,uVar4,param_4[1],&DAT_01d2e4e0);
    }
    FUN_019de6b8(&local_110,param_2[2],param_2[3],param_3,param_4);
    if ((char)local_110 != '\x05') {
      if ((local_110 & 0xff) != 4) goto LAB_012093bc;
      uVar6 = param_4[2];
      if ((uint)param_4[1] < uVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(0,uVar6,param_4[1],&DAT_01d2e4e0);
      }
      if (uVar4 == uVar6) {
        *(undefined1 *)(param_2 + 6) = 1;
        goto LAB_012090e0;
      }
      goto LAB_012093c8;
    }
  }
  else {
LAB_012090e0:
    (**(code **)(param_2[5] + 0xc))(&local_110,param_2[4],param_3);
    if ((char)local_110 != '\x05') {
      if ((local_110 & 0xff) != 4) {
LAB_012093bc:
        *param_1 = local_110;
        param_1[1] = local_10c;
        return;
      }
      local_34 = local_10c;
      if (local_10c != 0) {
        local_2c = FUN_019baa50;
        local_30 = &local_34;
        FUN_00664898(&local_110,&DAT_005841ca,&local_30);
        FUN_00768b9c(param_1,&local_110);
        return;
      }
LAB_012093c8:
      uVar1 = 4;
      goto LAB_01209198;
    }
  }
  uVar1 = 5;
LAB_01209198:
  *(undefined1 *)param_1 = uVar1;
  return;
}

