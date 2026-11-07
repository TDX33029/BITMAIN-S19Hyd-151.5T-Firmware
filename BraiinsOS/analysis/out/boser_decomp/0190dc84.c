// FUN_0190dc84 @ 0190dc84 size=272 calls_out=6 calls_in=0
// strings: 

undefined8 FUN_0190dc84(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  undefined4 *puVar5;
  undefined1 auStack_210 [248];
  int local_118;
  undefined1 auStack_114 [244];
  
  uVar3 = *(uint *)(param_2 + 0x20);
  if (0x20 < uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(0,uVar3,0x20,&DAT_01d2575c);
  }
  puVar5 = *(undefined4 **)(param_1 + 0x14);
  pcVar4 = (code *)*puVar5;
  DataMemoryBarrier(0xb);
  if (DAT_01d51afc != '\x02') {
    FUN_0188ff90();
  }
  (*pcVar4)(&local_118,param_2,uVar3);
  if (local_118 == 2) {
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,&local_118,&DAT_01d24ff8,&DAT_01d250b8);
  }
  FUN_01bed4e2(auStack_210,auStack_114,0xf4);
  iVar2 = 0;
  do {
    *(undefined1 *)(param_2 + iVar2) = 0;
    iVar2 = iVar2 + 1;
  } while (iVar2 != 0x20);
  piVar1 = (int *)thunk_FUN_01be5118(0xfc);
  if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0xfc);
  }
  *piVar1 = local_118;
  FUN_01bed4e2(piVar1 + 1,auStack_210,0xf4);
  piVar1[0x3e] = (int)puVar5;
  return CONCAT44(&UNK_01d250f8,piVar1);
}

