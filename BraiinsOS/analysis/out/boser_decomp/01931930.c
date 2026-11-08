// FUN_01931930 @ 01931930 size=244 calls_out=6 calls_in=0
// strings: 

undefined8 FUN_01931930(int param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  undefined1 uStack_21;
  
  uVar2 = *(uint *)(param_2 + 0x20);
  if (0x20 < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(0,uVar2,0x20,&DAT_01d2575c);
  }
  FUN_00704948(&local_34,*(undefined1 *)(param_1 + 0x10),1,param_2,uVar2);
  if (local_34 == 0xc) {
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,&uStack_21,&DAT_01d25810,&DAT_01d2587c);
  }
  piVar1 = (int *)thunk_FUN_01be5118(0x1c);
  if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x1c);
  }
  *piVar1 = local_34;
  piVar1[1] = local_30;
  piVar1[2] = local_2c;
  piVar1[3] = local_28;
  FUN_01bed4e2(piVar1 + 4,param_3,0xc);
  iVar3 = 0;
  do {
    *(undefined1 *)(param_2 + iVar3) = 0;
    iVar3 = iVar3 + 1;
  } while (iVar3 != 0x20);
  return CONCAT44(&UNK_01d2588c,piVar1);
}

