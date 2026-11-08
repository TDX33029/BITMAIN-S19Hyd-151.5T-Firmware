// FUN_01184e78 @ 01184e78 size=616 calls_out=9 calls_in=1
// strings: 

undefined8 FUN_01184e78(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint extraout_r2;
  uint extraout_r2_00;
  uint uVar6;
  uint extraout_r3;
  uint extraout_r3_00;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint local_230 [128];
  uint local_30;
  uint local_2c;
  
  if ((*(char *)(param_1 + 0x16c) != '\x01') || (*(int *)(param_1 + 0x160) == 0)) {
    uVar8 = *(uint *)(param_1 + 0x130);
    uVar9 = *(uint *)(param_1 + 0x134);
    FUN_0170f924(local_230);
    iVar1 = FUN_01857c8c(local_230);
    if ((uVar8 - uVar9) + iVar1 != 0) {
      if (*(char *)(param_1 + 0x14c) == '\x01') {
        do {
          iVar1 = 0;
          do {
            local_230[iVar1 * 2] = 1;
            iVar3 = iVar1 + 1;
            local_230[iVar1 * 2 + 1] = 0;
            iVar1 = iVar3;
          } while (iVar3 != 0x40);
          uVar8 = FUN_00eab9c4(param_1 + 0x128,local_230);
          if (0x40 < uVar8) {
                    /* WARNING: Subroutine does not return */
            FUN_012faff4(0,uVar8,0x40,&DAT_01d20ae8);
          }
          FUN_019dfc70(&local_30,param_1 + 0x100,param_2,local_230,uVar8);
          uVar8 = local_2c;
          uVar6 = extraout_r2;
          uVar7 = extraout_r3;
          if ((char)local_30 == '\x05') goto LAB_01185040;
          uVar5 = local_30 & 0xff;
          if (uVar5 != 4) {
            uVar6 = local_30 >> 8 | local_2c << 0x18;
            uVar7 = local_2c >> 8;
            goto LAB_01185064;
          }
          FUN_00eabb28(param_1 + 0x128,local_2c);
          iVar10 = *(int *)(param_1 + 0x130);
          iVar3 = *(int *)(param_1 + 0x134);
          FUN_0170f924(local_230,param_1 + 0x138);
          iVar1 = FUN_01857c8c(local_230);
          if ((iVar10 - iVar3) + iVar1 == 0) goto LAB_01184ed0;
        } while (uVar8 != 0);
      }
      else {
        do {
          if (uVar8 < uVar9) {
                    /* WARNING: Subroutine does not return */
            FUN_012faff4(uVar9,uVar8,uVar8,&DAT_01d20b48);
          }
          FUN_019dfa94(local_230,*(undefined4 *)(param_1 + 0x108),*(undefined4 *)(param_1 + 0x10c),
                       param_2,*(int *)(param_1 + 300) + uVar9,uVar8 - uVar9);
          uVar6 = extraout_r2_00;
          uVar7 = extraout_r3_00;
          if ((char)local_230[0] == '\x05') goto LAB_01185040;
          uVar5 = local_230[0] & 0xff;
          if (uVar5 != 4) {
            uVar7 = local_230[1] >> 8;
            uVar6 = local_230[0] >> 8 | local_230[1] << 0x18;
            goto LAB_01185064;
          }
          uVar9 = uVar9 + local_230[1];
          *(uint *)(param_1 + 0x134) = uVar9;
          if (uVar8 == uVar9) {
            *(undefined4 *)(param_1 + 0x130) = 0;
            *(undefined4 *)(param_1 + 0x134) = 0;
            goto LAB_01184ed0;
          }
        } while (local_230[1] != 0);
      }
      uVar7 = 0;
      uVar6 = 0x17;
      uVar5 = 1;
      goto LAB_0118507c;
    }
  }
LAB_01184ed0:
  FUN_01182fb4(param_1,param_2);
  uVar4 = 0;
  goto LAB_01184ee0;
LAB_01185040:
  uVar5 = 5;
LAB_01185064:
  uVar2 = 1;
  if (uVar5 == 5) {
    uVar4 = 5;
    goto LAB_01184ee4;
  }
  if (uVar5 == 4) goto LAB_01184ed0;
LAB_0118507c:
  local_230[0] = uVar5 | uVar6 << 8;
  local_230[1] = uVar7 << 8 | uVar6 >> 0x18;
  uVar4 = FUN_01854058(local_230);
LAB_01184ee0:
  uVar2 = 0;
LAB_01184ee4:
  return CONCAT44(uVar4,uVar2);
}

