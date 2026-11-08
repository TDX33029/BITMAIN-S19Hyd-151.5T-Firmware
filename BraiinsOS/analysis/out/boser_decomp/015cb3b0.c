// FUN_015cb3b0 @ 015cb3b0 size=604 calls_out=7 calls_in=2
// strings: Sent event to listener successfullySent status to the clientinvalid_type

void FUN_015cb3b0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined4 local_ac;
  undefined4 local_a8;
  int local_a4;
  char *local_a0;
  undefined4 uStack_9c;
  char *pcStack_98;
  undefined4 uStack_94;
  undefined *puStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  char *local_70;
  undefined4 local_6c;
  char *local_68;
  undefined4 local_64;
  undefined *local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  char **local_40;
  undefined1 *local_3c;
  char *local_38;
  undefined4 local_34;
  char *local_30;
  undefined4 local_2c;
  undefined *local_28;
  
  FUN_00664bdc(&local_ac);
  if (param_1[3] != 0) {
    uVar2 = FUN_01adafd4(param_1[4],param_1[5],param_1[6],param_1[7],local_a8,local_a4);
    uVar1 = uVar2 >> 0x19;
    iVar7 = *param_1;
    uVar8 = param_1[1];
    iVar9 = 0;
    while( true ) {
      uVar2 = uVar8 & uVar2;
      uVar6 = *(uint *)(iVar7 + uVar2);
      uVar3 = uVar6 ^ uVar1 * 0x1010101;
      for (uVar3 = ~uVar3 & 0x80808080 & uVar3 + 0xfefefeff; uVar3 != 0; uVar3 = uVar3 - 1 & uVar3)
      {
        uVar4 = uVar2 + ((uint)LZCOUNT(uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 |
                                       (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18) >> 3) & uVar8;
        iVar5 = iVar7 + -0x28 + uVar4 * -0x28;
        if ((local_a4 == *(int *)(iVar5 + 8)) &&
           (iVar5 = thunk_FUN_01bed842(local_a8,*(undefined4 *)(iVar5 + 4),local_a4), iVar5 == 0)) {
          FUN_015ebf54(&local_a0,*(undefined4 *)(iVar7 + uVar4 * -0x28 + -0x18),param_4);
          if (local_a0 == (char *)0x5) {
            if (4 < DAT_01d51b00) {
              local_64 = 0x17;
              local_6c = 0x17;
              local_60 = &DAT_01cfc8b8;
              local_68 = "m";
              local_70 = "m";
              FUN_015fb650("Sent event to listener successfullySent status to the clientinvalid_type"
                           ,0x47,5,&local_70);
            }
          }
          else {
            local_70 = local_a0;
            local_6c = uStack_9c;
            local_68 = pcStack_98;
            local_64 = uStack_94;
            local_60 = puStack_90;
            uStack_5c = uStack_8c;
            local_58 = local_88;
            uStack_54 = uStack_84;
            uStack_50 = uStack_80;
            uStack_4c = uStack_7c;
            uStack_48 = uStack_78;
            uStack_44 = uStack_74;
            if (3 < DAT_01d51b00) {
              local_3c = &LAB_015eeb70;
              local_28 = &DAT_01cfc8c8;
              local_2c = 0x17;
              local_30 = "m";
              local_34 = 0x17;
              local_38 = "m";
              local_40 = &local_70;
              FUN_015fb650(&DAT_005bd2a9,&local_40,4,&local_38);
            }
            FUN_015c3a10(&local_70);
          }
          FUN_0134bd64(local_ac,local_a8);
          return;
        }
      }
      if ((uVar6 & 0x80808080 & uVar6 << 1) != 0) break;
      iVar9 = iVar9 + 4;
      uVar2 = uVar2 + iVar9;
    }
  }
  FUN_0134bd64(local_ac,local_a8);
  FUN_015c3a10(param_4);
  return;
}

