// FUN_00710744 @ 00710744 size=668 calls_out=9 calls_in=1
// strings: multipart | form-dataaxum::extract::path/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/axum-0.8.4/src/extract/path/mod.rsevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/axum-0.8.4/src/extract/path/mod.rs:453event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/axum-0.8.4/src/serve/mod.rs:369

void FUN_00710744(uint *param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  undefined4 local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  undefined4 local_40;
  uint uStack_3c;
  uint uStack_38;
  uint local_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  
  local_50 = 0;
  local_4c = 0x1d;
  local_48 = 0;
  local_44 = 0;
  iVar2 = FUN_0160ab20(param_2);
  if (iVar2 != 0) {
    iVar3 = 0;
    do {
      if (*(int *)(iVar2 + 8) == iVar3) {
        FUN_015fd1c8(&local_50,*(int *)(iVar2 + 4),*(int *)(iVar2 + 8));
        uVar8 = local_44;
        uVar1 = local_48;
        uVar9 = local_50;
        if (local_50 != 2) {
          local_70 = local_40;
          local_6c = uStack_3c;
          local_68 = uStack_38;
          local_64 = local_34;
          local_60 = uStack_30;
          local_5c = uStack_2c;
          local_58 = uStack_28;
          local_7c = local_4c;
          if ((uStack_38 & 1) == 0) {
            uVar7 = uStack_30;
            uVar5 = local_34;
          }
          else {
            uVar7 = uStack_2c;
            uVar5 = uStack_30;
          }
          local_74 = local_44;
          local_78 = local_48;
          local_80 = local_50;
          if (uStack_28 != 0) {
            puVar4 = &DAT_01c1b088;
            if (uStack_28 < uVar7) {
              if (-0x41 < *(char *)(uVar5 + uStack_28)) goto LAB_00710868;
            }
            else if (uStack_28 == uVar7) {
LAB_00710868:
              if ((uStack_28 == 9) && (iVar2 = thunk_FUN_01bed842(uVar5,"multipart",9), iVar2 == 0))
              {
                if ((uVar9 & 1) == 0) {
                  uVar9 = 1;
                  if ((int)uVar1 < 0) {
                    uVar9 = uVar1 ^ 0x80000000;
                  }
                  uStack_28 = uVar8;
                  if ((uVar9 != 0) && (uStack_28 = uVar7, uVar9 == 1)) {
                    uStack_28 = local_6c;
                  }
                }
                else {
                  uStack_28 = local_7c;
                }
                uVar6 = 10;
                puVar4 = &DAT_01c1b098;
                if (uStack_28 < 10) goto LAB_00710908;
                if (uVar7 < 0xb) {
                  if (uVar7 != 10) goto LAB_00710908;
                }
                else if (*(char *)(uVar5 + 10) < -0x40) goto LAB_00710908;
                if (uStack_28 < uVar7) {
                  if (*(char *)(uVar5 + uStack_28) < -0x40) goto LAB_00710908;
                }
                else if (uStack_28 != uVar7) goto LAB_00710908;
                if ((uStack_28 == 0x13) &&
                   (iVar2 = thunk_FUN_01bed842(uVar5 + 10,
                                               "form-dataaxum::extract::path/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/axum-0.8.4/src/extract/path/mod.rsevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/axum-0.8.4/src/extract/path/mod.rs:453event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/axum-0.8.4/src/serve/mod.rs:369"
                                               ,9), iVar2 == 0)) {
                  FUN_0070dce8(&local_50,&local_80);
                  uVar1 = local_4c;
                  uVar9 = local_50;
                  if ((char)local_48 != '\x02') {
                    uVar8 = 0;
                    if ((int)local_4c < 0) {
LAB_00710984:
                    /* WARNING: Subroutine does not return */
                      FUN_00664620(uVar8,uVar1);
                    }
                    if (local_4c == 0) {
                      uVar5 = 1;
                    }
                    else {
                      uVar8 = 1;
                      uVar5 = FUN_01298504(local_4c,1);
                      if (uVar5 == 0) goto LAB_00710984;
                      uVar8 = uVar1;
                    }
                    FUN_01bed4e2(uVar5,uVar9,uVar1);
                    FUN_017cc7b0(&local_80);
                    *param_1 = uVar8;
                    param_1[1] = uVar5;
                    param_1[2] = uVar1;
                    return;
                  }
                }
              }
              goto LAB_0071095c;
            }
            uVar6 = 0;
LAB_00710908:
                    /* WARNING: Subroutine does not return */
            FUN_012fb514(uVar5,uVar7,uVar6,uStack_28,puVar4);
          }
LAB_0071095c:
          FUN_017cc7b0(&local_80);
        }
        break;
      }
      uVar9 = (uint)*(byte *)(*(int *)(iVar2 + 4) + iVar3);
      iVar3 = iVar3 + 1;
    } while ((uVar9 == 9) || (uVar9 - 0x20 < 0x5f));
  }
  *param_1 = 0x80000000;
  return;
}

