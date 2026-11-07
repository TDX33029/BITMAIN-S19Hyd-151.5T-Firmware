// FUN_015a8be8 @ 015a8be8 size=580 calls_out=5 calls_in=3
// strings: Sent event to listener successfullySent status to the clientinvalid_type

void FUN_015a8be8(int *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  char *local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  char *local_60;
  undefined4 local_5c;
  char *local_58;
  undefined4 local_54;
  undefined *local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  char **local_40;
  undefined1 *local_3c;
  char *local_38;
  undefined4 local_34;
  char *local_30;
  undefined4 local_2c;
  undefined *local_28;
  
  if (param_1[3] != 0) {
    uVar2 = FUN_01a9c24c(param_1[4],param_1[5],param_1[6],param_1[7],param_2,param_3);
    uVar1 = uVar2 >> 0x19;
    iVar8 = *param_1;
    uVar7 = param_1[1];
    iVar9 = 0;
    while( true ) {
      uVar2 = uVar7 & uVar2;
      uVar5 = *(uint *)(iVar8 + uVar2);
      uVar3 = uVar5 ^ uVar1 * 0x1010101;
      for (uVar3 = ~uVar3 & 0x80808080 & uVar3 + 0xfefefeff; uVar3 != 0; uVar3 = uVar3 - 1 & uVar3)
      {
        uVar6 = uVar2 + ((uint)LZCOUNT(uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 |
                                       (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18) >> 3) & uVar7;
        iVar4 = iVar8 + -0x10 + uVar6 * -0x10;
        if ((param_3 == *(int *)(iVar4 + 8)) &&
           (iVar4 = thunk_FUN_01bed842(param_2,*(undefined4 *)(iVar4 + 4),param_3), iVar4 == 0)) {
          FUN_015ecfec(&local_80,*(undefined4 *)(iVar8 + uVar6 * -0x10 + -4),param_4);
          if (local_80 == (char *)0x5) {
            if (4 < DAT_01d51b00) {
              local_54 = 0x17;
              local_5c = 0x17;
              local_50 = &DAT_01cfc848;
              local_58 = "m";
              local_60 = "m";
              FUN_015fb650("Sent event to listener successfullySent status to the clientinvalid_type"
                           ,0x47,5,&local_60);
            }
          }
          else {
            local_60 = local_80;
            local_5c = uStack_7c;
            local_58 = (char *)uStack_78;
            local_54 = local_74;
            local_50 = (undefined *)uStack_70;
            uStack_4c = uStack_6c;
            uStack_48 = uStack_68;
            if (3 < DAT_01d51b00) {
              local_3c = &LAB_015eeba0;
              local_28 = &DAT_01cfc858;
              local_2c = 0x17;
              local_30 = "m";
              local_34 = 0x17;
              local_38 = "m";
              local_40 = &local_60;
              FUN_015fb650(&DAT_005bd2a9,&local_40,4,&local_38);
            }
            FUN_015a8e68(&local_60);
          }
          return;
        }
      }
      if ((uVar5 & 0x80808080 & uVar5 << 1) != 0) break;
      iVar9 = iVar9 + 4;
      uVar2 = uVar2 + iVar9;
    }
  }
  FUN_015a8e68(param_4);
  return;
}

