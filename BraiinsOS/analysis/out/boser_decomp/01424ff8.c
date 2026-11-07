// FUN_01424ff8 @ 01424ff8 size=668 calls_out=4 calls_in=1
// strings: overflow when adding duration to instant | keep_alive expects last_read_atevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hyper-0.14.31/src/proto/h2/ping.rs:377event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hyper-0.14.31/src/proto/h2/ping.rs:380

void FUN_01424ff8(uint *param_1,int *param_2,int param_3,int param_4)

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
  uint local_38;
  uint local_34;
  int local_30;
  
  puVar9 = (undefined1 *)param_1[10];
  if (puVar9 < &DAT_3b9aca00) {
    uVar4 = param_1[9];
    uVar8 = param_1[8];
    iVar1 = (**(code **)(param_1[0xd] + 0xc))(param_1[0xc],param_2);
    if (iVar1 == 0) {
      if (*(undefined1 **)(param_4 + 0x30) == &DAT_3b9aca00) {
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("keep_alive expects last_read_atevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hyper-0.14.31/src/proto/h2/ping.rs:377event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hyper-0.14.31/src/proto/h2/ping.rs:380"
                     ,0x1f,&DAT_01cf49a0);
      }
      uVar5 = param_1[1];
      uVar6 = *(uint *)(param_4 + 0x2c);
      uVar7 = *(uint *)(param_4 + 0x28) + *param_1;
      uVar2 = uVar6 + uVar5 + (uint)CARRY4(*(uint *)(param_4 + 0x28),*param_1);
      if ((int)uVar5 < 0 != (int)((uVar6 ^ uVar2) & ~(uVar6 ^ uVar5)) < 0) {
LAB_014250e4:
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("overflow when adding duration to instant",0x28,&DAT_01d281d4);
      }
      puVar3 = *(undefined1 **)(param_4 + 0x30) + param_1[2];
      if (&DAT_3b9aca00 <= puVar3) {
        bVar10 = 0xfffffffe < uVar7;
        uVar7 = uVar7 + 1;
        uVar5 = uVar2 + bVar10;
        if ((int)((uVar2 ^ uVar5) & ~uVar2) < 0) goto LAB_014250e4;
        puVar3 = puVar3 + -1000000000;
        uVar2 = uVar5;
      }
      bVar10 = (int)(uVar4 - (uVar2 + (uVar8 < uVar7))) < 0 !=
               (SBORROW4(uVar4,uVar2) != SBORROW4(uVar4 - uVar2,(uint)(uVar8 < uVar7)));
      if (uVar7 == uVar8 && uVar2 == uVar4) {
        bVar10 = puVar9 < puVar3;
      }
      if (bVar10) {
        param_2 = (int *)*param_2;
        param_1[10] = (uint)&DAT_3b9aca00;
                    /* WARNING: Could not recover jumptable at 0x01425168. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_2 + 8))(param_2[1]);
        return;
      }
      if ((param_3 == 0) || ((param_1[0x10] & 1) != 0)) {
        FUN_01425390(param_4);
        uVar2 = param_1[0xe];
        uVar5 = param_1[0xf];
        param_1[10] = 0x3b9aca02;
        FUN_01421a04(&local_38,uVar2,uVar5);
        uVar6 = param_1[5];
        uVar8 = local_38 + param_1[4];
        uVar4 = local_34 + uVar6 + (uint)CARRY4(local_38,param_1[4]);
        if ((int)uVar6 < 0 != (int)((local_34 ^ uVar4) & ~(local_34 ^ uVar6)) < 0)
        goto LAB_014250e4;
        puVar9 = (undefined1 *)(param_1[6] + local_30);
        if (&DAT_3b9aca00 <= puVar9) {
          bVar10 = 0xfffffffe < uVar8;
          uVar8 = uVar8 + 1;
          uVar6 = uVar4 + bVar10;
          if ((int)((uVar4 ^ uVar6) & ~uVar4) < 0) goto LAB_014250e4;
          puVar9 = puVar9 + -1000000000;
          uVar4 = uVar6;
        }
        if (uVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb100(&DAT_00477c39,0x31,&DAT_01cf476c,uVar4);
        }
        (**(code **)(uVar5 + 0x18))
                  (uVar2 + (*(int *)(uVar5 + 8) - 1U & 0xfffffff8) + 8,param_1 + 0xc,uVar8,uVar4,
                   puVar9);
      }
    }
  }
  return;
}

