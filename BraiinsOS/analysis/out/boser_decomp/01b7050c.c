// FUN_01b7050c @ 01b7050c size=344 calls_out=4 calls_in=0
// strings: 

undefined4 FUN_01b7050c(int param_1,undefined4 param_2)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 *puVar4;
  undefined4 local_3c [4];
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int local_1c;
  
  local_1c = DAT_01d53560;
  if ((param_1 == 0) || (iVar2 = FUN_01bef02c(&DAT_01d5336c,param_2,&PTR_01d3b2b0,0), iVar2 != 0)) {
    if (local_1c == DAT_01d53560) {
      return 0;
    }
  }
  else {
    if ((local_3c < &DAT_01d5334c && (int *)((int)&DAT_01d5334c + 1U) <= &local_1c) ||
       (local_3c <= (undefined4 *)((int)&DAT_01d53368 + 3) &&
        (undefined4 *)((int)&DAT_01d5334c + 1) <= local_3c)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0,0x1b705ac);
      (*pcVar1)();
    }
    local_3c[0] = DAT_01d5334c;
    local_3c[1] = DAT_01d53350;
    local_3c[2] = DAT_01d53354;
    local_3c[3] = DAT_01d53358;
    local_2c = DAT_01d5335c;
    uStack_28 = DAT_01d53360;
    uStack_24 = DAT_01d53364;
    uStack_20 = DAT_01d53368;
    FUN_01bef3fe(&DAT_01d5336c);
    iVar2 = 0;
    uVar3 = extraout_r1;
    puVar4 = local_3c;
    do {
      if ((code *)*puVar4 != (code *)0x0) {
        (*(code *)*puVar4)(*(undefined4 *)(param_1 + iVar2 * 4));
        uVar3 = extraout_r1_00;
      }
      iVar2 = iVar2 + 1;
      puVar4 = puVar4 + 1;
    } while (iVar2 != 8);
    if (local_1c == DAT_01d53560) {
      uVar3 = thunk_FUN_01be4678(param_1,uVar3,0,0);
      return uVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01be31f4();
}

