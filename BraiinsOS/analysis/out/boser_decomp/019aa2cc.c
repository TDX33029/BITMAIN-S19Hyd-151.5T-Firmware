// FUN_019aa2cc @ 019aa2cc size=216 calls_out=7 calls_in=3
// strings: 9164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/tonic-0.13.1/src/service/router.rs | fatal runtime error: drop of the panic payload panicked; aborting 

undefined8 FUN_019aa2cc(undefined4 *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  int *piVar3;
  int unaff_r4;
  int unaff_r10;
  undefined1 uVar4;
  undefined4 in_cr7;
  undefined4 in_cr9;
  undefined8 uVar5;
  undefined1 auStack_2c [11];
  undefined1 uStack_21;
  int iStack_20;
  
  uVar4 = (char *)*param_1 ==
          "9164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/tonic-0.13.1/src/service/router.rs" &&
          param_1[1] == 0x54535552;
  if ((char *)*param_1 ==
      "9164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/tonic-0.13.1/src/service/router.rs" &&
      param_1[1] == 0x54535552) {
    uVar4 = 0;
    if ((undefined1 *)param_1[0x18] == &DAT_00523849) {
      uVar2 = *(undefined8 *)(param_1 + 0x19);
      thunk_FUN_01be4678();
      do {
        bVar1 = (bool)hasExclusiveAccess(0x1d51b08);
      } while (!bVar1);
      DAT_01d51b08 = DAT_01d51b08 + -1;
      uVar5 = thunk_FUN_01bee35a(&DAT_01d51b08,0x24c);
      piVar3 = (int *)((int)uVar5 + (int)((ulonglong)uVar5 >> 0x20));
      *piVar3 = *piVar3 + -1;
      *(undefined1 *)(piVar3 + 1) = 0;
      return uVar2;
    }
  }
  else {
    FUN_01be1238();
  }
  FUN_019a4504();
  if ((bool)uVar4) {
    unaff_r4 = unaff_r10 - ((int)(auStack_2c + 0x1c) >> 0x1e);
  }
  coprocessor_function2(5,0xb,2,in_cr9,in_cr7,in_cr9);
  iStack_20 = unaff_r4;
  FUN_0197a828(auStack_2c,&uStack_21,
               "fatal runtime error: drop of the panic payload panicked, aborting\n",0x85);
  FUN_019b6d48(auStack_2c);
                    /* WARNING: Subroutine does not return */
  FUN_0197a954();
}

