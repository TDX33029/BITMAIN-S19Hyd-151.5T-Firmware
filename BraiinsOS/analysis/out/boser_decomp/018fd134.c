// FUN_018fd134 @ 018fd134 size=356 calls_out=7 calls_in=0
// strings: 

undefined8 FUN_018fd134(undefined4 *param_1,int param_2,int *param_3,int param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined1 auStack_450 [528];
  int *local_240 [135];
  
  uVar5 = *(uint *)(param_2 + 0x20);
  if (0x20 < uVar5) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(0,uVar5,0x20,&DAT_01d2575c);
  }
  param_1 = (undefined4 *)*param_1;
  DataMemoryBarrier(0xb);
  if (DAT_01d51afc != '\x02') {
    FUN_0188ff90();
  }
  (*(code *)*param_1)(local_240,param_2,uVar5);
  piVar1 = local_240[0];
  if (local_240[0] == (int *)0x2) {
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,local_240,&DAT_01d24b88,&DAT_01d24ad0);
  }
  FUN_01bed4e2(auStack_450,(uint)local_240 | 4,0x20c);
  if (param_4 != 4) {
                    /* WARNING: Subroutine does not return */
    FUN_013070f0(4,param_4,&DAT_01d24ae0);
  }
  local_240[0] = (int *)0x0;
  iVar4 = *param_3;
  iVar3 = FUN_01be5878(local_240,0x10,0x230);
  piVar2 = local_240[0];
  if ((iVar3 != 0) || (local_240[0] == (int *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(0x10,0x230);
  }
  *local_240[0] = (int)piVar1;
  FUN_01bed4e2(local_240[0] + 1,auStack_450,0x20c);
  iVar3 = 0;
  piVar2[0x88] = iVar4;
  piVar2[0x84] = (int)param_1;
  do {
    *(undefined1 *)(param_2 + iVar3) = 0;
    iVar3 = iVar3 + 1;
  } while (iVar3 != 0x20);
  return CONCAT44(&UNK_01d24af0,piVar2);
}

