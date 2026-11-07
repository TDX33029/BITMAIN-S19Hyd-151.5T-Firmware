// FUN_015f1cbc @ 015f1cbc size=216 calls_out=7 calls_in=1
// strings: ePath':'/nix/store/bwyzirrjiiwj557lv96lc2q9ifgzvyvq-source';'submodules':false} | fatal runtime error: drop of the panic payload panicked; aborting 

undefined8 FUN_015f1cbc(undefined4 *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  int *piVar3;
  uint unaff_r8;
  int unaff_r10;
  undefined1 *puVar4;
  uint extraout_r12;
  undefined1 uVar5;
  undefined4 in_cr1;
  undefined4 in_cr15;
  undefined8 uVar6;
  undefined1 local_24 [4];
  undefined4 local_20;
  undefined1 uStack_19;
  undefined1 *local_18;
  undefined4 uStack_14;
  
  puVar4 = local_24 + 0x1c;
  uVar5 = (char *)*param_1 ==
          "ePath\":\"/nix/store/bwyzirrjiiwj557lv96lc2q9ifgzvyvq-source\",\"submodules\":false}" &&
          param_1[1] == 0x54535552;
  if ((char *)*param_1 ==
      "ePath\":\"/nix/store/bwyzirrjiiwj557lv96lc2q9ifgzvyvq-source\",\"submodules\":false}" &&
      param_1[1] == 0x54535552) {
    uVar5 = 0;
    if ((undefined1 *)param_1[0x18] == &DAT_0041121f) {
      uVar2 = *(undefined8 *)(param_1 + 0x19);
      thunk_FUN_016d3fb4();
      do {
        bVar1 = (bool)hasExclusiveAccess(0x18dd988);
      } while (!bVar1);
      DAT_018dd988 = DAT_018dd988 + -1;
      uVar6 = thunk_FUN_016de0ee(&DAT_018dd988,0x254);
      piVar3 = (int *)((int)uVar6 + (int)((ulonglong)uVar6 >> 0x20));
      *piVar3 = *piVar3 + -1;
      *(undefined1 *)(piVar3 + 1) = 0;
      return uVar2;
    }
  }
  else {
    FUN_01843c8c();
  }
  FUN_015eaa04();
  coprocessor_function2(5,0xe,1,in_cr15,in_cr1,in_cr15);
  if ((bool)uVar5 && unaff_r10 == (int)(local_24 + 0x14) >> 0x1e) {
    puVar4 = (undefined1 *)(unaff_r8 >> (extraout_r12 & 0xff) ^ 0x15f1d4c);
  }
  uStack_14 = 0x15f1d4c;
  local_18 = puVar4;
  FUN_015bee18(local_24,&uStack_19,
               "fatal runtime error: drop of the panic payload panicked, aborting\n",0x85);
  FUN_015ff474(local_24[0],local_20);
                    /* WARNING: Subroutine does not return */
  FUN_015bef44();
}

