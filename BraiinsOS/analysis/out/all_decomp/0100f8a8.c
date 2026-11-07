// FUN_0100f8a8 @ 0100f8a8 size=344 calls_out=5 calls_in=0
// strings: getrandom: this target is not supported

void FUN_0100f8a8(uint *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined4 ***pppuVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 ***pppuVar7;
  undefined4 ***local_ac;
  undefined4 ***local_a8 [33];
  undefined4 ***local_24;
  code *local_20;
  undefined4 local_1c;
  
  pppuVar7 = (undefined4 ***)*param_1;
  if ((int)pppuVar7 < 0) {
    if ((((uint)pppuVar7 & 0x7fffffff) < 0xf) && ((0x79ffU >> ((uint)pppuVar7 & 0xff) & 1) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x0100f960. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_2[1] + 0xc))
                (*param_2,(&PTR_s_getrandom__this_target_is_not_su_018b1280)[(int)pppuVar7],
                 *(undefined4 *)(&DAT_0041f398 + (int)pppuVar7 * 4));
      return;
    }
    pppuVar3 = local_a8;
    uVar4 = *param_2;
    uVar6 = param_2[1];
    local_a8[1] = (undefined4 ***)&LAB_00fac484;
    local_a8[0] = &local_24;
    puVar2 = &DAT_0057eb05;
    local_24 = pppuVar7;
  }
  else {
    iVar5 = 0;
    local_ac = pppuVar7;
    FUN_016dd606(local_a8,0,0x80);
    iVar1 = FUN_016dd866(pppuVar7,local_a8,0x80);
    if (iVar1 == 0) {
      do {
        if (*(char *)((int)local_a8 + iVar5) == '\0') goto LAB_0100f994;
        iVar5 = iVar5 + 1;
      } while (iVar5 != 0x80);
      iVar5 = 0x80;
LAB_0100f994:
      FUN_00fab1e0(&local_24,local_a8,iVar5);
      if (local_24 == (undefined4 ***)0x0) {
        FUN_00faace8(param_2,local_20,local_1c);
        return;
      }
    }
    pppuVar3 = &local_24;
    uVar4 = *param_2;
    uVar6 = param_2[1];
    puVar2 = &DAT_0057ffd2;
    local_20 = FUN_00fac2b8;
    local_24 = &local_ac;
  }
  FUN_00fa948c(uVar4,uVar6,puVar2,pppuVar3);
  return;
}

