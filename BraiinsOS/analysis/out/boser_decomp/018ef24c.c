// FUN_018ef24c @ 018ef24c size=328 calls_out=6 calls_in=0
// strings: 

undefined8 FUN_018ef24c(undefined4 *param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined1 auStack_440 [528];
  int *local_230 [132];
  
  uVar4 = *(uint *)(param_2 + 0x20);
  if (0x20 < uVar4) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(0,uVar4,0x20,&DAT_01d2575c);
  }
  DataMemoryBarrier(0xb);
  if (DAT_01d51afc != '\x02') {
    FUN_0188ff90();
  }
  (*(code *)*param_1)(local_230,param_2,uVar4);
  piVar1 = local_230[0];
  if (local_230[0] == (int *)0x2) {
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,local_230,&DAT_01d23468,&DAT_01d23d14);
  }
  FUN_01bed4e2(auStack_440,(uint)local_230 | 4,0x20c);
  local_230[0] = (int *)0x0;
  iVar3 = FUN_01be5878(local_230,0x10,0x230);
  piVar2 = local_230[0];
  if ((iVar3 != 0) || (local_230[0] == (int *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(0x10,0x230);
  }
  *local_230[0] = (int)piVar1;
  FUN_01bed4e2(local_230[0] + 1,auStack_440,0x20c);
  piVar2[0x84] = (int)param_1;
  FUN_01bed4e2(piVar2 + 0x88,param_3,0xc);
  iVar3 = 0;
  do {
    *(undefined1 *)(param_2 + iVar3) = 0;
    iVar3 = iVar3 + 1;
  } while (iVar3 != 0x20);
  return CONCAT44(&UNK_01d23d24,piVar2);
}

