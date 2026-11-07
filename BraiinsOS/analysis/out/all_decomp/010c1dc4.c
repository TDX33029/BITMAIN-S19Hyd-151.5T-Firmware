// FUN_010c1dc4 @ 010c1dc4 size=820 calls_out=5 calls_in=1
// strings: keep_alive expects last_read_atkeep-alive timed outhyper_util::client::legacy::connect::http/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hyper-util-0.1.20/src/client/legacy/connect/http.rs | You must supply a timer.&mut [u8].write() cannot errorIncompleteMessageHeaderTimeoutBodyWriteHttp2

void FUN_010c1dc4(uint *param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  undefined1 *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 *puVar9;
  bool bVar10;
  uint local_58;
  uint uStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  uint local_40;
  uint local_3c;
  int local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  puVar9 = (undefined1 *)param_1[10];
  if (puVar9 < &DAT_3b9aca00) {
    uVar4 = param_1[9];
    uVar7 = param_1[8];
    iVar1 = (**(code **)(param_1[0xd] + 0xc))(param_1[0xc],param_2);
    if (iVar1 == 0) {
      if (*(undefined1 **)(param_4 + 0x30) == &DAT_3b9aca00) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74b8("keep_alive expects last_read_atkeep-alive timed outhyper_util::client::legacy::connect::http/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hyper-util-0.1.20/src/client/legacy/connect/http.rs"
                     ,0x1f,&DAT_01884cf0);
      }
      uVar5 = param_1[1];
      uVar6 = *(uint *)(param_4 + 0x2c);
      uVar2 = *(uint *)(param_4 + 0x28) + *param_1;
      uVar8 = uVar6 + uVar5 + (uint)CARRY4(*(uint *)(param_4 + 0x28),*param_1);
      if ((int)uVar5 < 0 == (int)((uVar6 ^ uVar8) & ~(uVar6 ^ uVar5)) < 0) {
        puVar3 = *(undefined1 **)(param_4 + 0x30) + param_1[2];
        if (&DAT_3b9aca00 <= puVar3) {
          bVar10 = 0xfffffffe < uVar2;
          uVar2 = uVar2 + 1;
          uVar5 = uVar8 + bVar10;
          if ((int)((uVar8 ^ uVar5) & ~uVar8) < 0) goto LAB_010c1eb0;
          puVar3 = puVar3 + -1000000000;
          uVar8 = uVar5;
        }
        if (uVar2 == uVar7 && uVar8 == uVar4) {
          if (puVar9 < puVar3) goto LAB_010c1f6c;
        }
        else if ((int)(uVar4 - (uVar8 + (uVar7 < uVar2))) < 0 !=
                 (SBORROW4(uVar4,uVar8) != SBORROW4(uVar4 - uVar8,(uint)(uVar7 < uVar2)))) {
LAB_010c1f6c:
          param_2 = (int *)*param_2;
          param_1[10] = (uint)&DAT_3b9aca00;
                    /* WARNING: Could not recover jumptable at 0x010c1f88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*param_2 + 8))(param_2[1]);
          return;
        }
        if ((param_3 != 0) && ((param_1[0x10] & 1) == 0)) {
          return;
        }
        FUN_0102804c(&local_58,*(undefined4 *)(param_4 + 0x40));
        if ((char)local_58 == '\x05') {
          if (*(int *)(param_4 + 0x38) == 0) {
            FUN_015f3b0c(&local_40,1);
          }
          else {
            (**(code **)(*(int *)(param_4 + 0x3c) + 0x14))
                      (&local_40,
                       *(int *)(param_4 + 0x38) +
                       (*(int *)(*(int *)(param_4 + 0x3c) + 8) - 1U & 0xfffffff8) + 8);
          }
          *(int *)(param_4 + 0x10) = local_38;
          *(uint *)(param_4 + 8) = local_40;
          *(uint *)(param_4 + 0xc) = local_3c;
        }
        else {
          local_40 = local_58;
          local_3c = uStack_54;
          local_38 = iStack_50;
          uStack_34 = uStack_4c;
          uStack_30 = uStack_48;
          uStack_2c = uStack_44;
          FUN_014ed8bc();
        }
        uVar4 = param_1[0xe];
        uVar7 = param_1[0xf];
        param_1[10] = 0x3b9aca02;
        if (uVar4 == 0) {
          FUN_015f3b0c(&local_40,1);
        }
        else {
          (**(code **)(uVar7 + 0x14))(&local_40,uVar4 + (*(int *)(uVar7 + 8) - 1U & 0xfffffff8) + 8)
          ;
        }
        uVar5 = param_1[5];
        uVar2 = local_40 + param_1[4];
        uVar8 = local_3c + uVar5 + (uint)CARRY4(local_40,param_1[4]);
        if ((int)uVar5 < 0 == (int)((local_3c ^ uVar8) & ~(local_3c ^ uVar5)) < 0) {
          puVar9 = (undefined1 *)(param_1[6] + local_38);
          if (&DAT_3b9aca00 <= puVar9) {
            bVar10 = 0xfffffffe < uVar2;
            uVar2 = uVar2 + 1;
            uVar5 = uVar8 + bVar10;
            if ((int)((uVar8 ^ uVar5) & ~uVar8) < 0) goto LAB_010c1eb0;
            puVar9 = puVar9 + -1000000000;
            uVar8 = uVar5;
          }
          if (uVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa478("You must supply a timer.&mut [u8].write() cannot errorIncompleteMessageHeaderTimeoutBodyWriteHttp2"
                         ,0x31,&DAT_01884b94,uVar8);
          }
          (**(code **)(uVar7 + 0x18))
                    (uVar4 + (*(int *)(uVar7 + 8) - 1U & 0xfffffff8) + 8,param_1 + 0xc,uVar2,uVar8,
                     puVar9);
          return;
        }
      }
LAB_010c1eb0:
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8(&DAT_00410edf,0x28,&DAT_018ab600);
    }
  }
  return;
}

