// FUN_01625cd0 @ 01625cd0 size=328 calls_out=5 calls_in=3
// strings: 

void FUN_01625cd0(undefined4 *param_1)

{
  code *pcVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  undefined8 uVar9;
  undefined4 in_stack_00000000;
  undefined4 in_stack_00000004;
  undefined1 in_stack_00000008;
  
  uVar9 = thunk_FUN_016de0ee(param_1,0x220);
  puVar2 = (undefined4 *)((int)uVar9 + (int)((ulonglong)uVar9 >> 0x20));
  if ((*(char *)(puVar2 + 1) != '\x01') &&
     (puVar2 = (undefined4 *)FUN_0133d870(), puVar2 == (undefined4 *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_015f853c(&DAT_018ae900);
  }
  puVar8 = (uint *)*puVar2;
  uVar3 = *puVar8;
  *puVar8 = uVar3 + 1;
  if (0xfffffffe < uVar3) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x1625e14);
    (*pcVar1)();
  }
  puVar7 = puVar8 + 2;
  uVar3 = puVar8[0x42];
  do {
    if (uVar3 < 0x3f) {
      uVar4 = uVar3 + 2;
      puVar8[0x42] = uVar4;
      uVar6 = puVar7[uVar3];
      uVar5 = (puVar7 + uVar3)[1];
    }
    else if (uVar3 == 0x3f) {
      uVar6 = puVar8[0x41];
      FUN_01627dc0(puVar8 + 0x44,puVar7);
      uVar4 = 1;
      uVar5 = puVar8[2];
      puVar8[0x42] = 1;
    }
    else {
      FUN_01627dc0(puVar8 + 0x44,puVar7);
      uVar4 = 2;
      uVar6 = puVar8[2];
      uVar5 = puVar8[3];
      puVar8[0x42] = 2;
    }
    uVar3 = uVar4;
  } while (uVar6 == 0 && uVar5 == 0);
  uVar3 = *puVar8;
  *(undefined1 *)(param_1 + 6) = in_stack_00000008;
  *puVar8 = uVar3 - 1;
  param_1[2] = in_stack_00000000;
  *param_1 = extraout_r2;
  param_1[1] = extraout_r3;
  param_1[3] = in_stack_00000004;
  param_1[4] = uVar6;
  param_1[5] = uVar5;
  if (uVar3 - 1 == 0) {
    FUN_0133db64(puVar8);
    return;
  }
  return;
}

